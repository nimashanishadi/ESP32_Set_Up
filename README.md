# ESP32_Set_Up
This repository is mainly designed to guide users through the step-by-step setup of the ESP32 and configuration of the ESP-IDF Toolkit for  Channel State Information (CSI) data collection. Channel State Information provides fine-grained metrics of the wireless communication channel, which can be used in applications such as localization, motion detection, and network diagnostics.

The ESP32 microcontroller is a very powerful board that has built-in wireless capabilities and is a very good platform to explore applications using CSI. This repository provides examples of how to configure an ESP32 device for capturing CSI data, its processing, and usage for different use cases.

# CSI data
Wi-Fi Channel State Information (CSI) provides the fine-grained information on the wireless communication channel by capturing signal properties such as amplitude and phase for each subcarrier in a Wi-Fi transmission. CSI reflects how signals propagate through the environment, accounting for phenomena like scattering, fading, and signal attenuation. 

This fine-grained information enables applications such as human activity recognition, indoor localization, gesture recognition, and network performance analysis. By studying CSI, one will be able to monitor changes in the environment, trace devices, and improve systems of wireless communication, thereby becoming an asset in research and practical applications.

# ESP32 microcontroller
ESP32 is a System-on-Chip (SoC) that combines Wi-Fi (2.4 GHz band) and Bluetooth 4.2 solutions on one chip, along with dual high-performance cores, an Ultra-Low-Power co-processor, and several peripherals. Powered by advanced 40 nm technology, ESP32 provides a robust, highly integrated platform to meet the growing demands for efficient power usage, compact design, security, high performance, and reliability.

Moreover, Espressif, the company behind ESP32, offers all sorts of hardware and software resources to help developers build new and innovative IoT applications. It provides a software development framework with tools to develop IoT solutions—equipped with Wi-Fi and Bluetooth, power management, and system optimization features—rapidly.

# Steps


1) Download and Install ESP: You can download the ESP zip file using this link (https://docs.espressif.com/projects/esp-idf/en/v3.3.1/get-started/windows-setup.html). After downloading that,
      - Open a MSYS2 MINGW32 terminal window
      - Create a directory named “esp” that is a default location to develop ESP32 applications. To do so, run the following shell command:
        ```
         mkdir -p ~/esp
        ```
      - By typing cd ~/esp you can then move to the newly created directory. If there are no error messages you are done with this step.
    

2) Install ESP-IDF v3.3.1: After installing ESP, you need to install ESP-IDF. For using this toolkit you need v3.3.1 of ESP-IDF. Documentation link :
(https://docs.espressif.com/projects/esp-idf/en/v3.3.1/get-started/index.html). 
      - To obtain a local copy: open terminal, navigate to the directory you want to put ESP-IDF, and clone the repository using git clone command will be             downloaded into ~/esp/esp-idf.
        ```
        cd ~/esp git clone -b v3.3.1 --recursive https://github.com/espressif/esp-idf.git ESP-IDF
        ```
      - Do not miss the --recursive option. If you have already cloned ESP-IDF without this option, run another command to get all the submodules:
          ```
          cd esp-idf
          git submodule update --init --recursive
          ```
      - Set up IDF_PATH variable on your PC: Setting may be done manually, each time the PC is restarted.
        Install python packages required by ESP-IDF which are located in the $IDF_PATH/requirements.txt file. You can install requirenments and  ESP-IDF using :  them by running below commands
           ```
            python -m pip install --user -r $IDF_PATH/requirements.txt
      
              MSYS ~/esp/esp_idf
              $ ./install.sh
            ```
      - Set up the environment variables and tools required by using: 
            ```
              source $IDF_PATH/export.sh
        ```

3) Download ESP32 CSI Toolkit: Now, we should download the toolkit from this link (https://stevenmhernandez.github.io/ESP32-CSI-Tool/). After downloading, run the below command. Then make sure to copy
         ```
          cd ~/esp
          cp -r $IDF_PATH/examples/ESP32-CSI-Tool-master/active_ap .
         ```
          Ensure your project has the following structure. If not, copy the _components folder from esp\esp-idf\examples\ESP32-CSI-Tool-master and paste it into the esp\active_ap directory.
          active_ap/
          ├── CMakeLists.txt            # Root CMakeLists.txt
          ├── main/
          │   ├── main.cc               # Main application source
          │   ├── CMakeLists.txt        # Main directory CMakeLists.txt
          ├── _components/
          │   ├── nvs_component/
          │   │   ├── nvs_component.h
          │   │   ├── nvs_component.c
          │   │   ├── CMakeLists.txt
          │   ├── sd_component/
   
          Replace the C:\esp\esp\msys32\home\User\esp\active_ap\CMakeLists.txt file with https://github.com/nimashanishadi/ESP32_Set_Up/blob/main/CMakeLists.txt
          Replace the  C:\esp\esp\msys32\home\ranis\esp\active_ap\main\main.cc file with https://github.com/nimashanishadi/ESP32_Set_Up/blob/main/main.cc


5) Connect ESP32 Device: Here, you will only have to connect the ESP32 device with your computer and do some configurations (https://docs.espressif.com/projects/esp-idf/en/v3.3.1/get-started/index.html#configure)    .For this, you want a micro USB to USB cable. In every laptop, each USB port has its name. You can find the name after connecting it to your laptop by opening the Device Manager on your Windows and here you        find   the name of your USB port that is connected to your device. In my case, it was COM3.
            - Then navigate to the active_ap and set the configurations as below
                  ```
                     cd ~/esp/active_ap
                     idf.py menuconfig
                  ```

7) Flash and Monitor: Finally, in the mingw32 command line, you only need to run the below commands in the active_ap project. After a few minutes you can see the access point is running but not receiving any data. because there is no device connected to it as a station. Now, if you didn't change the SSID and Password in the ESP32 configuration your access point name would be "myssid". You can find a network by this name on all of your devices (laptops, smartphones, etc). You only need to connect one of those devices to this network. The password of this network was set in step 4. By doing this, you can see the CSI data on your access point console. You will receive new data almost after each second.
            ```
              idf.py fullclean 
              idf.py -p COM3 flash 
              idf.py -p COM3 monitor
         ```
