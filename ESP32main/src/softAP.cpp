#include <stdio.h>
#include "esp_wifi.h"
#include "soft.h"
#include <string.h>
#include <iostream>

wifi_init_config_t CONFIG = WIFI_INIT_CONFIG_DEFAULT();
wifi_mode_t AP = WIFI_MODE_AP;

void SoftAP::updateDataLocation(int* dp){
        
}

main(){

    //Initialize Wireless API
    switch(esp_wifi_init(&CONFIG)){
        case (ESP_ERR_NO_MEM):
            std::cerr << "Can't initialize wireless network. Out of memory." <<std::endl;
            break;
        case (ESP_OK):
            break;
        default:
            std::cerr << "Wireless network initialization failed." <<std::endl;
    }

    esp_wifi_get_mode(&AP);                      //Initialize SoftAP Mode
    esp_wifi_set_ps(WIFI_PS_MIN_MODEM);          //Sets Wi-fi power saving type to Min Modem

    

    
    //SoftAP Start
    switch(esp_wifi_start()){
        case (ESP_ERR_NO_MEM):
            std::cerr << "Can't initialize wireless network. Out of memory." <<std::endl;
            break;
        case (ESP_OK):
            break;
        default:
            std::cerr << "Wireless network failed to start." <<std::endl;
    }

    //Stop wireless
    esp_wifi_stop();



        

}