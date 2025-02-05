/*
 * Automatically generated file. DO NOT EDIT.
 * Espressif IoT Development Framework (ESP-IDF) Configuration Header
 */
#pragma once
#define CONFIG_IDF_CMAKE 1
#define CONFIG_IDF_TARGET "esp32"
#define CONFIG_IDF_FIRMWARE_CHIP_ID 0x0000
#define CONFIG_TOOLPREFIX "xtensa-esp32-elf-"
#define CONFIG_MAKE_WARN_UNDEFINED_VARIABLES 1
#define CONFIG_LOG_BOOTLOADER_LEVEL_INFO 1
#define CONFIG_LOG_BOOTLOADER_LEVEL 3
#define CONFIG_BOOTLOADER_VDDSDIO_BOOST_1_9V 1
#define CONFIG_BOOTLOADER_WDT_ENABLE 1
#define CONFIG_BOOTLOADER_WDT_TIME_MS 9000
#define CONFIG_ESPTOOLPY_BAUD_OTHER_VAL 115200
#define CONFIG_FLASHMODE_DIO 1
#define CONFIG_ESPTOOLPY_FLASHMODE "dio"
#define CONFIG_ESPTOOLPY_FLASHFREQ_40M 1
#define CONFIG_ESPTOOLPY_FLASHFREQ "40m"
#define CONFIG_ESPTOOLPY_FLASHSIZE_2MB 1
#define CONFIG_ESPTOOLPY_FLASHSIZE "2MB"
#define CONFIG_ESPTOOLPY_FLASHSIZE_DETECT 1
#define CONFIG_ESPTOOLPY_BEFORE_RESET 1
#define CONFIG_ESPTOOLPY_BEFORE "default_reset"
#define CONFIG_ESPTOOLPY_AFTER_RESET 1
#define CONFIG_ESPTOOLPY_AFTER "hard_reset"
#define CONFIG_MONITOR_BAUD_921600B 1
#define CONFIG_MONITOR_BAUD_OTHER_VAL 115200
#define CONFIG_MONITOR_BAUD 921600
#define CONFIG_PARTITION_TABLE_SINGLE_APP 1
#define CONFIG_PARTITION_TABLE_CUSTOM_FILENAME "partitions.csv"
#define CONFIG_PARTITION_TABLE_FILENAME "partitions_singleapp.csv"
#define CONFIG_PARTITION_TABLE_OFFSET 0x8000
#define CONFIG_PARTITION_TABLE_MD5 1
#define CONFIG_OPTIMIZATION_LEVEL_DEBUG 1
#define CONFIG_OPTIMIZATION_ASSERTIONS_ENABLED 1
#define CONFIG_STACK_CHECK_NONE 1
#define CONFIG_EFUSE_CODE_SCHEME_COMPAT_3_4 1
#define CONFIG_EFUSE_MAX_BLK_LEN 192
#define CONFIG_IDF_TARGET_ESP32 1
#define CONFIG_ESP32_REV_MIN_0 1
#define CONFIG_ESP32_REV_MIN 0
#define CONFIG_ESP32_DPORT_WORKAROUND 1
#define CONFIG_ESP32_DEFAULT_CPU_FREQ_160 1
#define CONFIG_ESP32_DEFAULT_CPU_FREQ_MHZ 160
#define CONFIG_TRACEMEM_RESERVE_DRAM 0x0
#define CONFIG_FOUR_UNIVERSAL_MAC_ADDRESS 1
#define CONFIG_NUMBER_OF_UNIVERSAL_MAC_ADDRESS 4
#define CONFIG_SYSTEM_EVENT_QUEUE_SIZE 32
#define CONFIG_SYSTEM_EVENT_TASK_STACK_SIZE 2304
#define CONFIG_MAIN_TASK_STACK_SIZE 3584
#define CONFIG_IPC_TASK_STACK_SIZE 1024
#define CONFIG_TIMER_TASK_STACK_SIZE 3584
#define CONFIG_NEWLIB_STDOUT_LINE_ENDING_CRLF 1
#define CONFIG_NEWLIB_STDIN_LINE_ENDING_CR 1
#define CONFIG_CONSOLE_UART_DEFAULT 1
#define CONFIG_CONSOLE_UART_NUM 0
#define CONFIG_CONSOLE_UART_BAUDRATE 921600
#define CONFIG_ULP_COPROC_RESERVE_MEM 0
#define CONFIG_ESP32_PANIC_PRINT_REBOOT 1
#define CONFIG_ESP32_DEBUG_OCDAWARE 1
#define CONFIG_ESP32_DEBUG_STUBS_ENABLE 1
#define CONFIG_INT_WDT 1
#define CONFIG_INT_WDT_TIMEOUT_MS 300
#define CONFIG_INT_WDT_CHECK_CPU1 1
#define CONFIG_TASK_WDT 1
#define CONFIG_TASK_WDT_TIMEOUT_S 5
#define CONFIG_TASK_WDT_CHECK_IDLE_TASK_CPU0 1
#define CONFIG_TASK_WDT_CHECK_IDLE_TASK_CPU1 1
#define CONFIG_BROWNOUT_DET 1
#define CONFIG_BROWNOUT_DET_LVL_SEL_0 1
#define CONFIG_BROWNOUT_DET_LVL 0
#define CONFIG_REDUCE_PHY_TX_POWER 1
#define CONFIG_ESP32_TIME_SYSCALL_USE_RTC_FRC1 1
#define CONFIG_ESP32_RTC_CLOCK_SOURCE_INTERNAL_RC 1
#define CONFIG_ESP32_RTC_CLK_CAL_CYCLES 1024
#define CONFIG_ESP32_DEEP_SLEEP_WAKEUP_DELAY 2000
#define CONFIG_ESP32_XTAL_FREQ_40 1
#define CONFIG_ESP32_XTAL_FREQ 40
#define CONFIG_ESP_ERR_TO_NAME_LOOKUP 1
#define CONFIG_ESP32_DPORT_DIS_INTERRUPT_LVL 5
#define CONFIG_ESP32_WIFI_STATIC_RX_BUFFER_NUM 10
#define CONFIG_ESP32_WIFI_DYNAMIC_RX_BUFFER_NUM 32
#define CONFIG_ESP32_WIFI_DYNAMIC_TX_BUFFER 1
#define CONFIG_ESP32_WIFI_TX_BUFFER_TYPE 1
#define CONFIG_ESP32_WIFI_DYNAMIC_TX_BUFFER_NUM 32
#define CONFIG_ESP32_WIFI_CSI_ENABLED 1
#define CONFIG_ESP32_WIFI_AMPDU_TX_ENABLED 1
#define CONFIG_ESP32_WIFI_TX_BA_WIN 6
#define CONFIG_ESP32_WIFI_AMPDU_RX_ENABLED 1
#define CONFIG_ESP32_WIFI_RX_BA_WIN 6
#define CONFIG_ESP32_WIFI_NVS_ENABLED 1
#define CONFIG_ESP32_WIFI_TASK_PINNED_TO_CORE_0 1
#define CONFIG_ESP32_WIFI_SOFTAP_BEACON_MAX_LEN 752
#define CONFIG_ESP32_WIFI_MGMT_SBUF_NUM 32
#define CONFIG_ESP32_WIFI_IRAM_OPT 1
#define CONFIG_ESP32_PHY_CALIBRATION_AND_DATA_STORAGE 1
#define CONFIG_ESP32_PHY_MAX_WIFI_TX_POWER 20
#define CONFIG_ESP32_PHY_MAX_TX_POWER 20
#define CONFIG_LOG_DEFAULT_LEVEL_INFO 1
#define CONFIG_LOG_DEFAULT_LEVEL 3
#define CONFIG_LOG_COLORS 1
#define CONFIG_SPI_FLASH_ROM_DRIVER_PATCH 1
#define CONFIG_SPI_FLASH_WRITING_DANGEROUS_REGIONS_ABORTS 1
#define CONFIG_SPI_FLASH_YIELD_DURING_ERASE 1
#define CONFIG_SPI_FLASH_ERASE_YIELD_DURATION_MS 20
#define CONFIG_SPI_FLASH_ERASE_YIELD_TICKS 1
