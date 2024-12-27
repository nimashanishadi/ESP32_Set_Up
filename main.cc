#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_event_legacy.h"
#include "esp_event_base.h"
#include "esp_spi_flash.h"
#include "freertos/event_groups.h"
#include "esp_wifi.h"
#include "esp_http_server.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include "esp_event_loop.h"

#include "lwip/err.h"
#include "lwip/sys.h"
#include "sdkconfig.h"

#include "../../_components/nvs_component.h"
#include "../../_components/sd_component.h"
#include "../../_components/csi_component.h"
#include "../../_components/time_component.h"
#include "../../_components/input_component.h"
#include "../../_components/sockets_component.h"

/*
 * The examples use WiFi configuration that you can set via 'idf.py menuconfig'.
 *
 * If you'd rather not, just change the below entries to strings with
 * the config you want - ie #define ESP_WIFI_SSID "mywifissid"
 */
#define ESP_WIFI_SSID       CONFIG_ESP_WIFI_SSID
#define ESP_WIFI_PASS       CONFIG_ESP_WIFI_PASSWORD
#define MAX_STA_CONN       16

#ifdef CONFIG_WIFI_CHANNEL
#define WIFI_CHANNEL CONFIG_WIFI_CHANNEL
#else
#define WIFI_CHANNEL 1
#endif

#ifdef CONFIG_SHOULD_COLLECT_CSI
#define SHOULD_COLLECT_CSI 1
#else
#define SHOULD_COLLECT_CSI 0
#endif

#ifdef CONFIG_SHOULD_COLLECT_ONLY_LLTF
#define SHOULD_COLLECT_ONLY_LLTF 1
#else
#define SHOULD_COLLECT_ONLY_LLTF 0
#endif

#ifdef CONFIG_SEND_CSI_TO_SERIAL
#define SEND_CSI_TO_SERIAL 1
#else
#define SEND_CSI_TO_SERIAL 0
#endif

#ifdef CONFIG_SEND_CSI_TO_SD
#define SEND_CSI_TO_SD 1
#else
#define SEND_CSI_TO_SD 0
#endif


// Serial baud rate configuration
#define CONFIG_ESPTOOLPY_MONITOR_BAUD 115200
#define CONFIG_ESP_CONSOLE_UART_BAUDRATE 115200


/* FreeRTOS event group to signal when we are connected*/
static EventGroupHandle_t s_wifi_event_group;

static const char *TAG = "Active CSI collection (AP)";

static esp_err_t event_handler(void *ctx, system_event_t *event) {
    switch (event->event_id) {
        case SYSTEM_EVENT_AP_START:
            ESP_LOGI(TAG, "SoftAP started");
            break;
        case SYSTEM_EVENT_AP_STACONNECTED:
            ESP_LOGI(TAG, "Station connected, AID=%d", event->event_info.sta_connected.aid);
            break;
        case SYSTEM_EVENT_AP_STADISCONNECTED:
            ESP_LOGI(TAG, "Station disconnected, AID=%d", event->event_info.sta_disconnected.aid);
            break;
        default:
            ESP_LOGI(TAG, "Event ID: %d", event->event_id);
            break;
    }
    return ESP_OK; // Return success for event handling
}

void softap_init() {
    s_wifi_event_group = xEventGroupCreate();

    tcpip_adapter_init();

    esp_event_loop_init(event_handler, NULL);

    wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();
    esp_wifi_init(&cfg);

    esp_wifi_set_mode(WIFI_MODE_AP);

    wifi_config_t wifi_config = {};
    strlcpy((char *)wifi_config.ap.ssid, ESP_WIFI_SSID, sizeof(wifi_config.ap.ssid));  
    wifi_config.ap.ssid_len = strlen(ESP_WIFI_SSID);
    strlcpy((char *)wifi_config.ap.password, ESP_WIFI_PASS, sizeof(wifi_config.ap.password));  
    wifi_config.ap.channel = WIFI_CHANNEL;  // Set to a different channel for testing
    wifi_config.ap.max_connection = MAX_STA_CONN;
    wifi_config.ap.authmode = WIFI_AUTH_WPA_WPA2_PSK;

    if (strlen(ESP_WIFI_PASS) == 0) {
        wifi_config.ap.authmode = WIFI_AUTH_OPEN;
    }

    esp_wifi_set_config(WIFI_IF_AP, &wifi_config);
    esp_wifi_start();

    ESP_LOGI(TAG, "SoftAP initialized. SSID:%s password:%s", ESP_WIFI_SSID, ESP_WIFI_PASS);

    // Check Wi-Fi status
    wifi_ap_record_t ap_info;
    esp_wifi_sta_get_ap_info(&ap_info);
    ESP_LOGI(TAG, "Wi-Fi AP Info: SSID: %s, Channel: %d", ap_info.ssid, ap_info.primary);
}


void config_print() {
    printf("\n\n\n\n\n\n\n\n");
    printf("-----------------------\n");
    printf("ESP32 CSI Tool Settings\n");
    printf("-----------------------\n");
    printf("PROJECT_NAME: %s\n", "ACTIVE_AP");
    printf("CONFIG_ESPTOOLPY_MONITOR_BAUD: %d\n", CONFIG_ESPTOOLPY_MONITOR_BAUD);
    printf("CONFIG_ESP_CONSOLE_UART_BAUDRATE: %d\n", CONFIG_ESP_CONSOLE_UART_BAUDRATE);
    printf("IDF_VER: %s\n", IDF_VER);
    printf("-----------------------\n");
    printf("WIFI_CHANNEL: %d\n", WIFI_CHANNEL);
    printf("ESP_WIFI_SSID: %s\n", ESP_WIFI_SSID);
    printf("ESP_WIFI_PASSWORD: %s\n", ESP_WIFI_PASS);
    printf("SHOULD_COLLECT_CSI: %d\n", SHOULD_COLLECT_CSI);
    printf("SHOULD_COLLECT_ONLY_LLTF: %d\n", SHOULD_COLLECT_ONLY_LLTF);
    printf("SEND_CSI_TO_SERIAL: %d\n", SEND_CSI_TO_SERIAL);
    printf("SEND_CSI_TO_SD: %d\n", SEND_CSI_TO_SD);
    printf("-----------------------\n");
    printf("\n\n\n\n\n\n\n\n");
}

extern "C" void app_main() {
    config_print();
    nvs_init();
    sd_init();
    softap_init();

#if !(SHOULD_COLLECT_CSI)
    printf("CSI will not be collected. Check `idf.py menuconfig  # > ESP32 CSI Tool Config` to enable CSI");
#endif

    csi_init((char *) "AP");
}
