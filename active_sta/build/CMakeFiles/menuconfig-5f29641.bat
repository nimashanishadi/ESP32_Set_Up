cd /D C:\esp\msys32\home\nimas\esp\active_sta\build || exit /b
C:\Users\nimas\AppData\Local\Programs\Python\Python38\python.exe C:/esp/msys32/home/nimas/esp/esp-idf/tools/kconfig_new/confgen.py --kconfig C:/esp/msys32/home/nimas/esp/esp-idf/Kconfig --config C:/esp/msys32/home/nimas/esp/active_sta/sdkconfig --env "COMPONENT_KCONFIGS= C:/esp/msys32/home/nimas/esp/esp-idf/components/app_trace/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/aws_iot/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/bt/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/driver/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/efuse/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/esp32/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/esp_adc_cal/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/esp_event/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/esp_http_client/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/esp_http_server/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/esp_https_ota/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/espcoredump/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/ethernet/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/fatfs/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/freemodbus/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/freertos/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/heap/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/libsodium/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/log/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/lwip/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/mbedtls/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/mdns/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/mqtt/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/nvs_flash/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/openssl/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/pthread/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/spi_flash/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/spiffs/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/tcpip_adapter/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/unity/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/vfs/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/wear_levelling/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/wifi_provisioning/Kconfig" --env "COMPONENT_KCONFIGS_PROJBUILD= C:/esp/msys32/home/nimas/esp/esp-idf/components/app_update/Kconfig.projbuild C:/esp/msys32/home/nimas/esp/esp-idf/components/bootloader/Kconfig.projbuild C:/esp/msys32/home/nimas/esp/esp-idf/components/esptool_py/Kconfig.projbuild C:/esp/msys32/home/nimas/esp/active_sta/main/Kconfig.projbuild C:/esp/msys32/home/nimas/esp/esp-idf/components/partition_table/Kconfig.projbuild" --env IDF_CMAKE=y --env IDF_TARGET=esp32 --output config C:/esp/msys32/home/nimas/esp/active_sta/sdkconfig || exit /b
C:\Users\nimas\.espressif\tools\cmake\3.13.4\bin\cmake.exe -E env "COMPONENT_KCONFIGS= C:/esp/msys32/home/nimas/esp/esp-idf/components/app_trace/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/aws_iot/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/bt/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/driver/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/efuse/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/esp32/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/esp_adc_cal/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/esp_event/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/esp_http_client/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/esp_http_server/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/esp_https_ota/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/espcoredump/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/ethernet/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/fatfs/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/freemodbus/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/freertos/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/heap/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/libsodium/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/log/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/lwip/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/mbedtls/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/mdns/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/mqtt/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/nvs_flash/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/openssl/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/pthread/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/spi_flash/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/spiffs/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/tcpip_adapter/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/unity/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/vfs/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/wear_levelling/Kconfig C:/esp/msys32/home/nimas/esp/esp-idf/components/wifi_provisioning/Kconfig" "COMPONENT_KCONFIGS_PROJBUILD= C:/esp/msys32/home/nimas/esp/esp-idf/components/app_update/Kconfig.projbuild C:/esp/msys32/home/nimas/esp/esp-idf/components/bootloader/Kconfig.projbuild C:/esp/msys32/home/nimas/esp/esp-idf/components/esptool_py/Kconfig.projbuild C:/esp/msys32/home/nimas/esp/active_sta/main/Kconfig.projbuild C:/esp/msys32/home/nimas/esp/esp-idf/components/partition_table/Kconfig.projbuild" IDF_CMAKE=y KCONFIG_CONFIG=C:/esp/msys32/home/nimas/esp/active_sta/sdkconfig IDF_TARGET=esp32 C:/esp/msys32/usr/bin/winpty.exe C:/Users/nimas/.espressif/tools/mconf/v4.6.0.0-idf-20190628/mconf-idf.exe C:/esp/msys32/home/nimas/esp/esp-idf/Kconfig || exit /b