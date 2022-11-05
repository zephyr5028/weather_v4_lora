//===========================================
// Target build defines
//===========================================
//#define heltec


//===========================================
// Pin Defines
//===========================================
#define WIND_SPD_PIN 14  //reed switch based anemometer count
#define RAIN_PIN     25  //reed switch based tick counter on tip bucket
#define WIND_DIR_PIN 35  //variable voltage divider output based on varying R network with reed switches
#define PR_PIN       15  //photoresistor pin 
#define VBAT_PIN     39  //voltage divider for battery monitor
#define VSOLAR_PIN   36  //voltage divider for solar voltage monitor
#define TEMP_PIN      4  // DS18B20 hooked up to GPIO pin 4
#define LED_BUILTIN   2  //Diagnostics using built-in LED, may be set to 12 for newer boards that do not use devkit sockets
#define LORA_PWR     16
#define SENSOR_PWR   26


#define SEC 1E6          //Multiplier for uS based math
#define WDT_TIMEOUT 30   //watchdog timer

#define BAND 915E6
//#define BAND 433E6

#define SerialMonitor

//===========================================
//Set how often to wake and read sensors
//===========================================
const int UpdateIntervalSeconds = 2.5 * 60;  //Sleep timer (150s) for my normal operation
//const int UpdateIntervalSeconds = 1 * 60; //Sleep timer (60s) testing

//===========================================
//BH1750 Enable
//===========================================
#define BH1750Enable

//===========================================
//Anemometer Calibration
//===========================================
//I see 2 switch pulls to GND per revolation. Not sure what others see
#define WIND_TICKS_PER_REVOLUTION 2

//===========================================
//Battery calibration
//===========================================
//batteryCalFactor = measured battery voltage/ADC reading
#define batteryCalFactor .00270
#define batteryLowVoltage 3.3
