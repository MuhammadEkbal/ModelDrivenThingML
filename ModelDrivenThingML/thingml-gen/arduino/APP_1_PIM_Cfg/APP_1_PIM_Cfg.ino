/*****************************************************************************
 * Headers for type : MQTT_PIM
 *****************************************************************************/

// Definition of the instance struct:
struct MQTT_PIM_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_MQTT_PIM_PORT;
uint16_t id_MQTT_PSM_PORT;
// Variables for the current instance state
int MQTT_PIM_behavior_State;
// Variables for the properties of the instance
char * MQTT_PIM_ssid_var;
char * MQTT_PIM_password_var;
char * MQTT_PIM_mqtt_server_var;
int16_t MQTT_PIM_mqtt_port_var;
char * MQTT_PIM_mqtt_user_var;
char * MQTT_PIM_mqtt_password_var;
char * MQTT_PIM_mqtt_clientID_var;
char * MQTT_PIM_mqtt_topic_var;
uint8_t MQTT_PIM_mqtt_qos_var;
uint8_t MQTT_PIM_mqtt_retain_var;
char * MQTT_PIM_station_id_var;
char * MQTT_PIM_station_owner_var;
// CEP stream pointers

};
// Declaration of prototypes outgoing messages:
void MQTT_PIM_behavior_OnEntry(int state, struct MQTT_PIM_Instance *_instance);
void MQTT_PIM_handle_MQTT_PSM_PORT_JAVA_DECISION_psm(struct MQTT_PIM_Instance *_instance, int16_t thestate);
void MQTT_PIM_handle_MQTT_PIM_PORT_mqtt_setup_pim(struct MQTT_PIM_Instance *_instance);
void MQTT_PIM_handle_MQTT_PIM_PORT_mqtt_send_pim(struct MQTT_PIM_Instance *_instance, float latitude, float longitude, int16_t year, int16_t month, int16_t date, int16_t hour, int16_t minute, int16_t second, int16_t temperature, int16_t pressure, int16_t altitude, int16_t humidity, int16_t pm10, int16_t pm25);
// Declaration of callbacks for incoming messages:
void register_MQTT_PIM_send_MQTT_PIM_PORT_JAVA_DECISION_pim_listener(void (*_listener)(struct MQTT_PIM_Instance *, int16_t));
void register_external_MQTT_PIM_send_MQTT_PIM_PORT_JAVA_DECISION_pim_listener(void (*_listener)(struct MQTT_PIM_Instance *, int16_t));
void register_MQTT_PIM_send_MQTT_PSM_PORT_mqtt_setup_psm_listener(void (*_listener)(struct MQTT_PIM_Instance *, char *, char *, char *, char *, char *, int16_t, char *, char *, char *, char *, uint8_t, uint8_t));
void register_external_MQTT_PIM_send_MQTT_PSM_PORT_mqtt_setup_psm_listener(void (*_listener)(struct MQTT_PIM_Instance *, char *, char *, char *, char *, char *, int16_t, char *, char *, char *, char *, uint8_t, uint8_t));
void register_MQTT_PIM_send_MQTT_PSM_PORT_mqtt_send_psm_listener(void (*_listener)(struct MQTT_PIM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t));
void register_external_MQTT_PIM_send_MQTT_PSM_PORT_mqtt_send_psm_listener(void (*_listener)(struct MQTT_PIM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t));

// Definition of the states:
#define MQTT_PIM_BEHAVIOR_STATE 0
#define MQTT_PIM_BEHAVIOR_SETUP_STATE 1
#define MQTT_PIM_BEHAVIOR_PUB_SUB_STATE 2


/*****************************************************************************
 * Headers for type : LED_PSM
 *****************************************************************************/

// Definition of the instance struct:
struct LED_PSM_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_LED_PSM_PORT;
// Variables for the current instance state
int LED_PSM_behavior_State;
// Variables for the properties of the instance
uint8_t LED_PSM_PIN_var;
// CEP stream pointers

};
// Declaration of prototypes outgoing messages:
void LED_PSM_behavior_OnEntry(int state, struct LED_PSM_Instance *_instance);
void LED_PSM_handle_LED_PSM_PORT_turn_on_psm(struct LED_PSM_Instance *_instance, uint8_t value);
void LED_PSM_handle_LED_PSM_PORT_turn_off_psm(struct LED_PSM_Instance *_instance, uint8_t value);
void LED_PSM_handle_LED_PSM_PORT_setup_psm(struct LED_PSM_Instance *_instance, uint8_t pin);
// Declaration of callbacks for incoming messages:

// Definition of the states:
#define LED_PSM_BEHAVIOR_STATE 0
#define LED_PSM_BEHAVIOR_RUNNING_STATE 1


/*****************************************************************************
 * Headers for type : GPS_PSM
 *****************************************************************************/

// Definition of the instance struct:
struct GPS_PSM_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_GPS_PSM_PORT;
// Variables for the current instance state
int GPS_PSM_behavior_State;
// Variables for the properties of the instance
float GPS_PSM_behavior_Running_latitude_var;
float GPS_PSM_behavior_Running_longitude_var;
int16_t GPS_PSM_behavior_Running_year_var;
int16_t GPS_PSM_behavior_Running_month_var;
int16_t GPS_PSM_behavior_Running_date_var;
int16_t GPS_PSM_behavior_Running_hour_var;
int16_t GPS_PSM_behavior_Running_minute_var;
int16_t GPS_PSM_behavior_Running_second_var;
// CEP stream pointers

};
// Declaration of prototypes outgoing messages:
void GPS_PSM_behavior_OnEntry(int state, struct GPS_PSM_Instance *_instance);
void GPS_PSM_handle_GPS_PSM_PORT_gps_setup_psm(struct GPS_PSM_Instance *_instance);
void GPS_PSM_handle_GPS_PSM_PORT_gps_mesure_psm(struct GPS_PSM_Instance *_instance);
// Declaration of callbacks for incoming messages:
void register_GPS_PSM_send_GPS_PSM_PORT_gps_location_time_psm_listener(void (*_listener)(struct GPS_PSM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t));
void register_external_GPS_PSM_send_GPS_PSM_PORT_gps_location_time_psm_listener(void (*_listener)(struct GPS_PSM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t));

// Definition of the states:
#define GPS_PSM_BEHAVIOR_STATE 0
#define GPS_PSM_BEHAVIOR_RUNNING_STATE 1


/*****************************************************************************
 * Headers for type : SDS_PSM
 *****************************************************************************/


// BEGIN: Code from the c_header annotation SDS_PSM
#include <SdsDustSensor.h>
// END: Code from the c_header annotation SDS_PSM

// Definition of the instance struct:
struct SDS_PSM_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_SDS_PSM_PORT;
// Variables for the current instance state
int SDS_PSM_behavior_State;
// Variables for the properties of the instance
int16_t SDS_PSM_pm10_var;
int16_t SDS_PSM_pm25_var;
// CEP stream pointers

};
// Declaration of prototypes outgoing messages:
void SDS_PSM_behavior_OnEntry(int state, struct SDS_PSM_Instance *_instance);
void SDS_PSM_handle_SDS_PSM_PORT_sds_setup_psm(struct SDS_PSM_Instance *_instance);
void SDS_PSM_handle_SDS_PSM_PORT_sds_mesure_psm(struct SDS_PSM_Instance *_instance);
// Declaration of callbacks for incoming messages:
void register_SDS_PSM_send_SDS_PSM_PORT_sds_pm_psm_listener(void (*_listener)(struct SDS_PSM_Instance *, int16_t, int16_t));
void register_external_SDS_PSM_send_SDS_PSM_PORT_sds_pm_psm_listener(void (*_listener)(struct SDS_PSM_Instance *, int16_t, int16_t));

// Definition of the states:
#define SDS_PSM_BEHAVIOR_STATE 0
#define SDS_PSM_BEHAVIOR_RUNNING_STATE 1


/*****************************************************************************
 * Headers for type : APP_1_PIM
 *****************************************************************************/

// Definition of the instance struct:
struct APP_1_PIM_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_LED_PIM_PORT;
uint16_t id_GPS_PIM_PORT;
uint16_t id_SDS_PIM_PORT;
uint16_t id_BME280_PIM_PORT;
uint16_t id_MQTT_PIM_PORT;
// Variables for the current instance state
int APP_1_PIM_behavior_State;
// Variables for the properties of the instance
int16_t APP_1_PIM_pm10_var;
int16_t APP_1_PIM_pm25_var;
int16_t APP_1_PIM_temperature_var;
int16_t APP_1_PIM_pressure_var;
int16_t APP_1_PIM_altitude_var;
int16_t APP_1_PIM_humidity_var;
float APP_1_PIM_latitude_var;
float APP_1_PIM_longitude_var;
int16_t APP_1_PIM_year_var;
int16_t APP_1_PIM_month_var;
int16_t APP_1_PIM_date_var;
int16_t APP_1_PIM_hour_var;
int16_t APP_1_PIM_minute_var;
int16_t APP_1_PIM_second_var;
// CEP stream pointers

};
// Declaration of prototypes outgoing messages:
void APP_1_PIM_behavior_OnEntry(int state, struct APP_1_PIM_Instance *_instance);
void APP_1_PIM_handle_SDS_PIM_PORT_sds_pm_pim(struct APP_1_PIM_Instance *_instance, int16_t pm10, int16_t pm25);
void APP_1_PIM_handle_GPS_PIM_PORT_gps_location_time_pim(struct APP_1_PIM_Instance *_instance, float latitude, float longitude, int16_t year, int16_t month, int16_t date, int16_t hour, int16_t minute, int16_t second);
void APP_1_PIM_handle_MQTT_PIM_PORT_JAVA_DECISION_pim(struct APP_1_PIM_Instance *_instance, int16_t thestate);
void APP_1_PIM_handle_BME280_PIM_PORT_bme280_THP_pim(struct APP_1_PIM_Instance *_instance, int16_t temperature, int16_t pressure, int16_t altitude, int16_t humidity);
// Declaration of callbacks for incoming messages:
void register_APP_1_PIM_send_LED_PIM_PORT_setup_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *));
void register_external_APP_1_PIM_send_LED_PIM_PORT_setup_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *));
void register_APP_1_PIM_send_LED_PIM_PORT_turn_on_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *, uint8_t));
void register_external_APP_1_PIM_send_LED_PIM_PORT_turn_on_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *, uint8_t));
void register_APP_1_PIM_send_LED_PIM_PORT_turn_off_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *, uint8_t));
void register_external_APP_1_PIM_send_LED_PIM_PORT_turn_off_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *, uint8_t));
void register_APP_1_PIM_send_GPS_PIM_PORT_gps_setup_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *));
void register_external_APP_1_PIM_send_GPS_PIM_PORT_gps_setup_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *));
void register_APP_1_PIM_send_GPS_PIM_PORT_gps_mesure_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *));
void register_external_APP_1_PIM_send_GPS_PIM_PORT_gps_mesure_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *));
void register_APP_1_PIM_send_SDS_PIM_PORT_sds_setup_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *));
void register_external_APP_1_PIM_send_SDS_PIM_PORT_sds_setup_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *));
void register_APP_1_PIM_send_SDS_PIM_PORT_sds_mesure_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *));
void register_external_APP_1_PIM_send_SDS_PIM_PORT_sds_mesure_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *));
void register_APP_1_PIM_send_BME280_PIM_PORT_bme280_setup_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *));
void register_external_APP_1_PIM_send_BME280_PIM_PORT_bme280_setup_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *));
void register_APP_1_PIM_send_BME280_PIM_PORT_bme280_mesure_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *));
void register_external_APP_1_PIM_send_BME280_PIM_PORT_bme280_mesure_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *));
void register_APP_1_PIM_send_MQTT_PIM_PORT_mqtt_setup_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *));
void register_external_APP_1_PIM_send_MQTT_PIM_PORT_mqtt_setup_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *));
void register_APP_1_PIM_send_MQTT_PIM_PORT_mqtt_send_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t));
void register_external_APP_1_PIM_send_MQTT_PIM_PORT_mqtt_send_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t));

// Definition of the states:
#define APP_1_PIM_BEHAVIOR_STATE 0
#define APP_1_PIM_BEHAVIOR_STATION_SETUP_STATE 1
#define APP_1_PIM_BEHAVIOR_STATE_BME280_MEASURE_STATE 2
#define APP_1_PIM_BEHAVIOR_STATE_SDS_MEASURE_STATE 3
#define APP_1_PIM_BEHAVIOR_STATE_GPS_MEASURE_STATE 4
#define APP_1_PIM_BEHAVIOR_STATE_SEND_STATE 5


/*****************************************************************************
 * Headers for type : LED_PIM
 *****************************************************************************/

// Definition of the instance struct:
struct LED_PIM_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_LED_PSM_PORT;
uint16_t id_LED_PIM_PORT;
// Variables for the current instance state
int LED_PIM_behavior_State;
// Variables for the properties of the instance
uint8_t LED_PIM_PIN_var;
// CEP stream pointers

};
// Declaration of prototypes outgoing messages:
void LED_PIM_behavior_OnEntry(int state, struct LED_PIM_Instance *_instance);
void LED_PIM_handle_LED_PIM_PORT_turn_on_pim(struct LED_PIM_Instance *_instance, uint8_t value);
void LED_PIM_handle_LED_PIM_PORT_setup_pim(struct LED_PIM_Instance *_instance);
void LED_PIM_handle_LED_PIM_PORT_turn_off_pim(struct LED_PIM_Instance *_instance, uint8_t value);
// Declaration of callbacks for incoming messages:
void register_LED_PIM_send_LED_PSM_PORT_setup_psm_listener(void (*_listener)(struct LED_PIM_Instance *, uint8_t));
void register_external_LED_PIM_send_LED_PSM_PORT_setup_psm_listener(void (*_listener)(struct LED_PIM_Instance *, uint8_t));
void register_LED_PIM_send_LED_PSM_PORT_turn_on_psm_listener(void (*_listener)(struct LED_PIM_Instance *, uint8_t));
void register_external_LED_PIM_send_LED_PSM_PORT_turn_on_psm_listener(void (*_listener)(struct LED_PIM_Instance *, uint8_t));
void register_LED_PIM_send_LED_PSM_PORT_turn_off_psm_listener(void (*_listener)(struct LED_PIM_Instance *, uint8_t));
void register_external_LED_PIM_send_LED_PSM_PORT_turn_off_psm_listener(void (*_listener)(struct LED_PIM_Instance *, uint8_t));

// Definition of the states:
#define LED_PIM_BEHAVIOR_STATE 0
#define LED_PIM_BEHAVIOR_SETUP_STATE 1
#define LED_PIM_BEHAVIOR_OFF_STATE 2
#define LED_PIM_BEHAVIOR_ON_STATE 3


/*****************************************************************************
 * Headers for type : SDS_PIM
 *****************************************************************************/

// Definition of the instance struct:
struct SDS_PIM_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_SDS_PSM_PORT;
uint16_t id_SDS_PIM_PORT;
// Variables for the current instance state
int SDS_PIM_behavior_State;
// Variables for the properties of the instance
// CEP stream pointers

};
// Declaration of prototypes outgoing messages:
void SDS_PIM_behavior_OnEntry(int state, struct SDS_PIM_Instance *_instance);
void SDS_PIM_handle_SDS_PIM_PORT_sds_setup_pim(struct SDS_PIM_Instance *_instance);
void SDS_PIM_handle_SDS_PIM_PORT_sds_mesure_pim(struct SDS_PIM_Instance *_instance);
void SDS_PIM_handle_SDS_PSM_PORT_sds_pm_psm(struct SDS_PIM_Instance *_instance, int16_t pm10, int16_t pm25);
// Declaration of callbacks for incoming messages:
void register_SDS_PIM_send_SDS_PSM_PORT_sds_setup_psm_listener(void (*_listener)(struct SDS_PIM_Instance *));
void register_external_SDS_PIM_send_SDS_PSM_PORT_sds_setup_psm_listener(void (*_listener)(struct SDS_PIM_Instance *));
void register_SDS_PIM_send_SDS_PSM_PORT_sds_mesure_psm_listener(void (*_listener)(struct SDS_PIM_Instance *));
void register_external_SDS_PIM_send_SDS_PSM_PORT_sds_mesure_psm_listener(void (*_listener)(struct SDS_PIM_Instance *));
void register_SDS_PIM_send_SDS_PIM_PORT_sds_pm_pim_listener(void (*_listener)(struct SDS_PIM_Instance *, int16_t, int16_t));
void register_external_SDS_PIM_send_SDS_PIM_PORT_sds_pm_pim_listener(void (*_listener)(struct SDS_PIM_Instance *, int16_t, int16_t));

// Definition of the states:
#define SDS_PIM_BEHAVIOR_STATE 0
#define SDS_PIM_BEHAVIOR_SETUP_STATE 1
#define SDS_PIM_BEHAVIOR_MEASURE_STATE 2


/*****************************************************************************
 * Headers for type : GPS_PIM
 *****************************************************************************/

// Definition of the instance struct:
struct GPS_PIM_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_GPS_PSM_PORT;
uint16_t id_GPS_PIM_PORT;
// Variables for the current instance state
int GPS_PIM_behavior_State;
// Variables for the properties of the instance
// CEP stream pointers

};
// Declaration of prototypes outgoing messages:
void GPS_PIM_behavior_OnEntry(int state, struct GPS_PIM_Instance *_instance);
void GPS_PIM_handle_GPS_PIM_PORT_gps_setup_pim(struct GPS_PIM_Instance *_instance);
void GPS_PIM_handle_GPS_PIM_PORT_gps_mesure_pim(struct GPS_PIM_Instance *_instance);
void GPS_PIM_handle_GPS_PSM_PORT_gps_location_time_psm(struct GPS_PIM_Instance *_instance, float latitude, float longitude, int16_t year, int16_t month, int16_t date, int16_t hour, int16_t minute, int16_t second);
// Declaration of callbacks for incoming messages:
void register_GPS_PIM_send_GPS_PSM_PORT_gps_setup_psm_listener(void (*_listener)(struct GPS_PIM_Instance *));
void register_external_GPS_PIM_send_GPS_PSM_PORT_gps_setup_psm_listener(void (*_listener)(struct GPS_PIM_Instance *));
void register_GPS_PIM_send_GPS_PSM_PORT_gps_mesure_psm_listener(void (*_listener)(struct GPS_PIM_Instance *));
void register_external_GPS_PIM_send_GPS_PSM_PORT_gps_mesure_psm_listener(void (*_listener)(struct GPS_PIM_Instance *));
void register_GPS_PIM_send_GPS_PIM_PORT_gps_location_time_pim_listener(void (*_listener)(struct GPS_PIM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t));
void register_external_GPS_PIM_send_GPS_PIM_PORT_gps_location_time_pim_listener(void (*_listener)(struct GPS_PIM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t));

// Definition of the states:
#define GPS_PIM_BEHAVIOR_STATE 0
#define GPS_PIM_BEHAVIOR_SETUP_STATE 1
#define GPS_PIM_BEHAVIOR_MEASURE_STATE 2


// Definition of Enumeration  DigitalState
#define DIGITALSTATE_LOW 0
#define DIGITALSTATE_HIGH 1


/*****************************************************************************
 * Headers for type : MQTT_PSM
 *****************************************************************************/


// BEGIN: Code from the c_header annotation MQTT_PSM

#include <ESP8266WiFi.h>
#include <PubSubClient.h>
#include <time.h>
// END: Code from the c_header annotation MQTT_PSM

// Definition of the instance struct:
struct MQTT_PSM_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_MQTT_PSM_PORT;
// Variables for the current instance state
int MQTT_PSM_behavior_State;
// Variables for the properties of the instance
char * MQTT_PSM_station_id_var;
char * MQTT_PSM_station_owner_var;
char * MQTT_PSM_mqtt_topic_var;
uint8_t MQTT_PSM_mqtt_qos_var;
uint8_t MQTT_PSM_mqtt_retain_var;
int16_t MQTT_PSM_x_property_var;
// CEP stream pointers

};
// Declaration of prototypes outgoing messages:
void MQTT_PSM_behavior_OnEntry(int state, struct MQTT_PSM_Instance *_instance);
void MQTT_PSM_handle_MQTT_PSM_PORT_mqtt_send_psm(struct MQTT_PSM_Instance *_instance, float latitude, float longitude, int16_t year, int16_t month, int16_t date, int16_t hour, int16_t minute, int16_t second, int16_t temperature, int16_t pressure, int16_t altitude, int16_t humidity, int16_t pm10, int16_t pm25);
void MQTT_PSM_handle_MQTT_PSM_PORT_mqtt_setup_psm(struct MQTT_PSM_Instance *_instance, char * station_id, char * station_owner, char * ssid, char * password, char * mqtt_server, int16_t mqtt_port, char * mqtt_user, char * mqtt_password, char * mqtt_clientID, char * mqtt_topic, uint8_t mqtt_qos, uint8_t mqtt_retain);
// Declaration of callbacks for incoming messages:
void register_MQTT_PSM_send_MQTT_PSM_PORT_JAVA_DECISION_psm_listener(void (*_listener)(struct MQTT_PSM_Instance *, int16_t));
void register_external_MQTT_PSM_send_MQTT_PSM_PORT_JAVA_DECISION_psm_listener(void (*_listener)(struct MQTT_PSM_Instance *, int16_t));

// Definition of the states:
#define MQTT_PSM_BEHAVIOR_STATE 0
#define MQTT_PSM_BEHAVIOR_RUNNING_STATE 1


/*****************************************************************************
 * Headers for type : BME280_PSM
 *****************************************************************************/


// BEGIN: Code from the c_header annotation BME280_PSM

#include <Wire.h>
#include <SPI.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>
// END: Code from the c_header annotation BME280_PSM

// Definition of the instance struct:
struct BME280_PSM_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_BME280_PSM_PORT;
// Variables for the current instance state
int BME280_PSM_behavior_State;
// Variables for the properties of the instance
int16_t BME280_PSM_behavior_Running_temperature_var;
int16_t BME280_PSM_behavior_Running_pressure_var;
int16_t BME280_PSM_behavior_Running_altitude_var;
int16_t BME280_PSM_behavior_Running_humidity_var;
// CEP stream pointers

};
// Declaration of prototypes outgoing messages:
void BME280_PSM_behavior_OnEntry(int state, struct BME280_PSM_Instance *_instance);
void BME280_PSM_handle_BME280_PSM_PORT_bme280_mesure_psm(struct BME280_PSM_Instance *_instance);
void BME280_PSM_handle_BME280_PSM_PORT_bme280_setup_psm(struct BME280_PSM_Instance *_instance);
// Declaration of callbacks for incoming messages:
void register_BME280_PSM_send_BME280_PSM_PORT_bme280_THP_psm_listener(void (*_listener)(struct BME280_PSM_Instance *, int16_t, int16_t, int16_t, int16_t));
void register_external_BME280_PSM_send_BME280_PSM_PORT_bme280_THP_psm_listener(void (*_listener)(struct BME280_PSM_Instance *, int16_t, int16_t, int16_t, int16_t));

// Definition of the states:
#define BME280_PSM_BEHAVIOR_STATE 0
#define BME280_PSM_BEHAVIOR_RUNNING_STATE 1


/*****************************************************************************
 * Headers for type : BME280_PIM
 *****************************************************************************/

// Definition of the instance struct:
struct BME280_PIM_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_BME280_PSM_PORT;
uint16_t id_BME280_PIM_PORT;
// Variables for the current instance state
int BME280_PIM_behavior_State;
// Variables for the properties of the instance
int16_t BME280_PIM_temperature_var;
int16_t BME280_PIM_pressure_var;
int16_t BME280_PIM_altitude_var;
int16_t BME280_PIM_humidity_var;
// CEP stream pointers

};
// Declaration of prototypes outgoing messages:
void BME280_PIM_behavior_OnEntry(int state, struct BME280_PIM_Instance *_instance);
void BME280_PIM_handle_BME280_PIM_PORT_bme280_mesure_pim(struct BME280_PIM_Instance *_instance);
void BME280_PIM_handle_BME280_PIM_PORT_bme280_setup_pim(struct BME280_PIM_Instance *_instance);
void BME280_PIM_handle_BME280_PSM_PORT_bme280_THP_psm(struct BME280_PIM_Instance *_instance, int16_t temperature, int16_t pressure, int16_t altitude, int16_t humidity);
// Declaration of callbacks for incoming messages:
void register_BME280_PIM_send_BME280_PSM_PORT_bme280_setup_psm_listener(void (*_listener)(struct BME280_PIM_Instance *));
void register_external_BME280_PIM_send_BME280_PSM_PORT_bme280_setup_psm_listener(void (*_listener)(struct BME280_PIM_Instance *));
void register_BME280_PIM_send_BME280_PSM_PORT_bme280_mesure_psm_listener(void (*_listener)(struct BME280_PIM_Instance *));
void register_external_BME280_PIM_send_BME280_PSM_PORT_bme280_mesure_psm_listener(void (*_listener)(struct BME280_PIM_Instance *));
void register_BME280_PIM_send_BME280_PIM_PORT_bme280_THP_pim_listener(void (*_listener)(struct BME280_PIM_Instance *, int16_t, int16_t, int16_t, int16_t));
void register_external_BME280_PIM_send_BME280_PIM_PORT_bme280_THP_pim_listener(void (*_listener)(struct BME280_PIM_Instance *, int16_t, int16_t, int16_t, int16_t));

// Definition of the states:
#define BME280_PIM_BEHAVIOR_STATE 0
#define BME280_PIM_BEHAVIOR_SETUP_STATE 1
#define BME280_PIM_BEHAVIOR_MEASURE_STATE 2


/* Adds and instance to the runtime and returns its id */
uint16_t add_instance(void * instance_struct);
/* Returns the instance with id */
void * instance_by_id(uint16_t id);

/* Returns the number of byte currently in the fifo */
int fifo_byte_length();
/* Returns the number of bytes currently available in the fifo */
int fifo_byte_available();
/* Returns true if the fifo is empty */
int fifo_empty();
/* Return true if the fifo is full */
int fifo_full();
/* Enqueue 1 byte in the fifo if there is space
   returns 1 for sucess and 0 if the fifo was full */
int fifo_enqueue(byte b);
/* Enqueue 1 byte in the fifo without checking for available space
   The caller should have checked that there is enough space */
int _fifo_enqueue(byte b);
/* Dequeue 1 byte in the fifo.
   The caller should check that the fifo is not empty */
byte fifo_dequeue();
/*****************************************************************************
 * Implementation for type : GPS_PSM
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void GPS_PSM_behavior_OnExit(int state, struct GPS_PSM_Instance *_instance);
//Prototypes: Message Sending
void GPS_PSM_send_GPS_PSM_PORT_gps_location_time_psm(struct GPS_PSM_Instance *_instance, float latitude, float longitude, int16_t year, int16_t month, int16_t date, int16_t hour, int16_t minute, int16_t second);
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void GPS_PSM_behavior_OnEntry(int state, struct GPS_PSM_Instance *_instance) {
switch(state) {
case GPS_PSM_BEHAVIOR_STATE:{
_instance->GPS_PSM_behavior_State = GPS_PSM_BEHAVIOR_RUNNING_STATE;
GPS_PSM_behavior_OnEntry(_instance->GPS_PSM_behavior_State, _instance);
break;
}
case GPS_PSM_BEHAVIOR_RUNNING_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void GPS_PSM_behavior_OnExit(int state, struct GPS_PSM_Instance *_instance) {
switch(state) {
case GPS_PSM_BEHAVIOR_STATE:{
GPS_PSM_behavior_OnExit(_instance->GPS_PSM_behavior_State, _instance);
break;}
case GPS_PSM_BEHAVIOR_RUNNING_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void GPS_PSM_handle_GPS_PSM_PORT_gps_setup_psm(struct GPS_PSM_Instance *_instance) {
if(!(_instance->active)) return;
//Region behavior
uint8_t GPS_PSM_behavior_State_event_consumed = 0;
if (_instance->GPS_PSM_behavior_State == GPS_PSM_BEHAVIOR_RUNNING_STATE) {
if (GPS_PSM_behavior_State_event_consumed == 0 && 1) {
Serial.print(("GPS 2 -"));
GPS_PSM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}
void GPS_PSM_handle_GPS_PSM_PORT_gps_mesure_psm(struct GPS_PSM_Instance *_instance) {
if(!(_instance->active)) return;
//Region behavior
uint8_t GPS_PSM_behavior_State_event_consumed = 0;
if (_instance->GPS_PSM_behavior_State == GPS_PSM_BEHAVIOR_RUNNING_STATE) {
if (GPS_PSM_behavior_State_event_consumed == 0 && 1) {
Serial.print(("GPS 5 -"));
GPS_PSM_send_GPS_PSM_PORT_gps_location_time_psm(_instance, _instance->GPS_PSM_behavior_Running_latitude_var, _instance->GPS_PSM_behavior_Running_longitude_var, _instance->GPS_PSM_behavior_Running_year_var, _instance->GPS_PSM_behavior_Running_month_var, _instance->GPS_PSM_behavior_Running_date_var, _instance->GPS_PSM_behavior_Running_hour_var, _instance->GPS_PSM_behavior_Running_minute_var, _instance->GPS_PSM_behavior_Running_second_var);
GPS_PSM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}

// Observers for outgoing messages:
void (*external_GPS_PSM_send_GPS_PSM_PORT_gps_location_time_psm_listener)(struct GPS_PSM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t)= 0x0;
void (*GPS_PSM_send_GPS_PSM_PORT_gps_location_time_psm_listener)(struct GPS_PSM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t)= 0x0;
void register_external_GPS_PSM_send_GPS_PSM_PORT_gps_location_time_psm_listener(void (*_listener)(struct GPS_PSM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t)){
external_GPS_PSM_send_GPS_PSM_PORT_gps_location_time_psm_listener = _listener;
}
void register_GPS_PSM_send_GPS_PSM_PORT_gps_location_time_psm_listener(void (*_listener)(struct GPS_PSM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t)){
GPS_PSM_send_GPS_PSM_PORT_gps_location_time_psm_listener = _listener;
}
void GPS_PSM_send_GPS_PSM_PORT_gps_location_time_psm(struct GPS_PSM_Instance *_instance, float latitude, float longitude, int16_t year, int16_t month, int16_t date, int16_t hour, int16_t minute, int16_t second){
if (GPS_PSM_send_GPS_PSM_PORT_gps_location_time_psm_listener != 0x0) GPS_PSM_send_GPS_PSM_PORT_gps_location_time_psm_listener(_instance, latitude, longitude, year, month, date, hour, minute, second);
if (external_GPS_PSM_send_GPS_PSM_PORT_gps_location_time_psm_listener != 0x0) external_GPS_PSM_send_GPS_PSM_PORT_gps_location_time_psm_listener(_instance, latitude, longitude, year, month, date, hour, minute, second);
;
}



/*****************************************************************************
 * Implementation for type : SDS_PIM
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void SDS_PIM_behavior_OnExit(int state, struct SDS_PIM_Instance *_instance);
//Prototypes: Message Sending
void SDS_PIM_send_SDS_PSM_PORT_sds_setup_psm(struct SDS_PIM_Instance *_instance);
void SDS_PIM_send_SDS_PSM_PORT_sds_mesure_psm(struct SDS_PIM_Instance *_instance);
void SDS_PIM_send_SDS_PIM_PORT_sds_pm_pim(struct SDS_PIM_Instance *_instance, int16_t pm10, int16_t pm25);
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void SDS_PIM_behavior_OnEntry(int state, struct SDS_PIM_Instance *_instance) {
switch(state) {
case SDS_PIM_BEHAVIOR_STATE:{
_instance->SDS_PIM_behavior_State = SDS_PIM_BEHAVIOR_SETUP_STATE;
SDS_PIM_behavior_OnEntry(_instance->SDS_PIM_behavior_State, _instance);
break;
}
case SDS_PIM_BEHAVIOR_SETUP_STATE:{
break;
}
case SDS_PIM_BEHAVIOR_MEASURE_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void SDS_PIM_behavior_OnExit(int state, struct SDS_PIM_Instance *_instance) {
switch(state) {
case SDS_PIM_BEHAVIOR_STATE:{
SDS_PIM_behavior_OnExit(_instance->SDS_PIM_behavior_State, _instance);
break;}
case SDS_PIM_BEHAVIOR_SETUP_STATE:{
break;}
case SDS_PIM_BEHAVIOR_MEASURE_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void SDS_PIM_handle_SDS_PIM_PORT_sds_setup_pim(struct SDS_PIM_Instance *_instance) {
if(!(_instance->active)) return;
//Region behavior
uint8_t SDS_PIM_behavior_State_event_consumed = 0;
if (_instance->SDS_PIM_behavior_State == SDS_PIM_BEHAVIOR_SETUP_STATE) {
if (SDS_PIM_behavior_State_event_consumed == 0 && 1) {
SDS_PIM_behavior_OnExit(SDS_PIM_BEHAVIOR_SETUP_STATE, _instance);
_instance->SDS_PIM_behavior_State = SDS_PIM_BEHAVIOR_MEASURE_STATE;
Serial.print(("SDS 1 -"));
SDS_PIM_send_SDS_PSM_PORT_sds_setup_psm(_instance);
SDS_PIM_behavior_OnEntry(SDS_PIM_BEHAVIOR_MEASURE_STATE, _instance);
SDS_PIM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}
void SDS_PIM_handle_SDS_PIM_PORT_sds_mesure_pim(struct SDS_PIM_Instance *_instance) {
if(!(_instance->active)) return;
//Region behavior
uint8_t SDS_PIM_behavior_State_event_consumed = 0;
if (_instance->SDS_PIM_behavior_State == SDS_PIM_BEHAVIOR_MEASURE_STATE) {
if (SDS_PIM_behavior_State_event_consumed == 0 && 1) {
Serial.print(("SDS 4 -"));
SDS_PIM_send_SDS_PSM_PORT_sds_mesure_psm(_instance);
SDS_PIM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}
void SDS_PIM_handle_SDS_PSM_PORT_sds_pm_psm(struct SDS_PIM_Instance *_instance, int16_t pm10, int16_t pm25) {
if(!(_instance->active)) return;
//Region behavior
uint8_t SDS_PIM_behavior_State_event_consumed = 0;
if (_instance->SDS_PIM_behavior_State == SDS_PIM_BEHAVIOR_MEASURE_STATE) {
if (SDS_PIM_behavior_State_event_consumed == 0 && 1) {
SDS_PIM_send_SDS_PIM_PORT_sds_pm_pim(_instance, pm10, pm25);
SDS_PIM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}

// Observers for outgoing messages:
void (*external_SDS_PIM_send_SDS_PSM_PORT_sds_setup_psm_listener)(struct SDS_PIM_Instance *)= 0x0;
void (*SDS_PIM_send_SDS_PSM_PORT_sds_setup_psm_listener)(struct SDS_PIM_Instance *)= 0x0;
void register_external_SDS_PIM_send_SDS_PSM_PORT_sds_setup_psm_listener(void (*_listener)(struct SDS_PIM_Instance *)){
external_SDS_PIM_send_SDS_PSM_PORT_sds_setup_psm_listener = _listener;
}
void register_SDS_PIM_send_SDS_PSM_PORT_sds_setup_psm_listener(void (*_listener)(struct SDS_PIM_Instance *)){
SDS_PIM_send_SDS_PSM_PORT_sds_setup_psm_listener = _listener;
}
void SDS_PIM_send_SDS_PSM_PORT_sds_setup_psm(struct SDS_PIM_Instance *_instance){
if (SDS_PIM_send_SDS_PSM_PORT_sds_setup_psm_listener != 0x0) SDS_PIM_send_SDS_PSM_PORT_sds_setup_psm_listener(_instance);
if (external_SDS_PIM_send_SDS_PSM_PORT_sds_setup_psm_listener != 0x0) external_SDS_PIM_send_SDS_PSM_PORT_sds_setup_psm_listener(_instance);
;
}
void (*external_SDS_PIM_send_SDS_PSM_PORT_sds_mesure_psm_listener)(struct SDS_PIM_Instance *)= 0x0;
void (*SDS_PIM_send_SDS_PSM_PORT_sds_mesure_psm_listener)(struct SDS_PIM_Instance *)= 0x0;
void register_external_SDS_PIM_send_SDS_PSM_PORT_sds_mesure_psm_listener(void (*_listener)(struct SDS_PIM_Instance *)){
external_SDS_PIM_send_SDS_PSM_PORT_sds_mesure_psm_listener = _listener;
}
void register_SDS_PIM_send_SDS_PSM_PORT_sds_mesure_psm_listener(void (*_listener)(struct SDS_PIM_Instance *)){
SDS_PIM_send_SDS_PSM_PORT_sds_mesure_psm_listener = _listener;
}
void SDS_PIM_send_SDS_PSM_PORT_sds_mesure_psm(struct SDS_PIM_Instance *_instance){
if (SDS_PIM_send_SDS_PSM_PORT_sds_mesure_psm_listener != 0x0) SDS_PIM_send_SDS_PSM_PORT_sds_mesure_psm_listener(_instance);
if (external_SDS_PIM_send_SDS_PSM_PORT_sds_mesure_psm_listener != 0x0) external_SDS_PIM_send_SDS_PSM_PORT_sds_mesure_psm_listener(_instance);
;
}
void (*external_SDS_PIM_send_SDS_PIM_PORT_sds_pm_pim_listener)(struct SDS_PIM_Instance *, int16_t, int16_t)= 0x0;
void (*SDS_PIM_send_SDS_PIM_PORT_sds_pm_pim_listener)(struct SDS_PIM_Instance *, int16_t, int16_t)= 0x0;
void register_external_SDS_PIM_send_SDS_PIM_PORT_sds_pm_pim_listener(void (*_listener)(struct SDS_PIM_Instance *, int16_t, int16_t)){
external_SDS_PIM_send_SDS_PIM_PORT_sds_pm_pim_listener = _listener;
}
void register_SDS_PIM_send_SDS_PIM_PORT_sds_pm_pim_listener(void (*_listener)(struct SDS_PIM_Instance *, int16_t, int16_t)){
SDS_PIM_send_SDS_PIM_PORT_sds_pm_pim_listener = _listener;
}
void SDS_PIM_send_SDS_PIM_PORT_sds_pm_pim(struct SDS_PIM_Instance *_instance, int16_t pm10, int16_t pm25){
if (SDS_PIM_send_SDS_PIM_PORT_sds_pm_pim_listener != 0x0) SDS_PIM_send_SDS_PIM_PORT_sds_pm_pim_listener(_instance, pm10, pm25);
if (external_SDS_PIM_send_SDS_PIM_PORT_sds_pm_pim_listener != 0x0) external_SDS_PIM_send_SDS_PIM_PORT_sds_pm_pim_listener(_instance, pm10, pm25);
;
}



/*****************************************************************************
 * Implementation for type : SDS_PSM
 *****************************************************************************/


// BEGIN: Code from the c_global annotation SDS_PSM
int rxPin = D7;
			int txPin = D8;
			SdsDustSensor sds(rxPin, txPin);
// END: Code from the c_global annotation SDS_PSM

// Declaration of prototypes:
//Prototypes: State Machine
void SDS_PSM_behavior_OnExit(int state, struct SDS_PSM_Instance *_instance);
//Prototypes: Message Sending
void SDS_PSM_send_SDS_PSM_PORT_sds_pm_psm(struct SDS_PSM_Instance *_instance, int16_t pm10, int16_t pm25);
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void SDS_PSM_behavior_OnEntry(int state, struct SDS_PSM_Instance *_instance) {
switch(state) {
case SDS_PSM_BEHAVIOR_STATE:{
_instance->SDS_PSM_behavior_State = SDS_PSM_BEHAVIOR_RUNNING_STATE;
SDS_PSM_behavior_OnEntry(_instance->SDS_PSM_behavior_State, _instance);
break;
}
case SDS_PSM_BEHAVIOR_RUNNING_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void SDS_PSM_behavior_OnExit(int state, struct SDS_PSM_Instance *_instance) {
switch(state) {
case SDS_PSM_BEHAVIOR_STATE:{
SDS_PSM_behavior_OnExit(_instance->SDS_PSM_behavior_State, _instance);
break;}
case SDS_PSM_BEHAVIOR_RUNNING_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void SDS_PSM_handle_SDS_PSM_PORT_sds_setup_psm(struct SDS_PSM_Instance *_instance) {
if(!(_instance->active)) return;
//Region behavior
uint8_t SDS_PSM_behavior_State_event_consumed = 0;
if (_instance->SDS_PSM_behavior_State == SDS_PSM_BEHAVIOR_RUNNING_STATE) {
if (SDS_PSM_behavior_State_event_consumed == 0 && 1) {
Serial.print(("SDS 2 -"));
sds.begin();
SDS_PSM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}
void SDS_PSM_handle_SDS_PSM_PORT_sds_mesure_psm(struct SDS_PSM_Instance *_instance) {
if(!(_instance->active)) return;
//Region behavior
uint8_t SDS_PSM_behavior_State_event_consumed = 0;
if (_instance->SDS_PSM_behavior_State == SDS_PSM_BEHAVIOR_RUNNING_STATE) {
if (SDS_PSM_behavior_State_event_consumed == 0 && 1) {
Serial.print(("SDS 5 -"));
 PmResult pm = sds.readPm();
				  if (pm.isOk()) {
_instance->SDS_PSM_pm10_var = pm.pm10;;
_instance->SDS_PSM_pm25_var = pm.pm25;;
}
SDS_PSM_send_SDS_PSM_PORT_sds_pm_psm(_instance, _instance->SDS_PSM_pm10_var, _instance->SDS_PSM_pm25_var);
SDS_PSM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}

// Observers for outgoing messages:
void (*external_SDS_PSM_send_SDS_PSM_PORT_sds_pm_psm_listener)(struct SDS_PSM_Instance *, int16_t, int16_t)= 0x0;
void (*SDS_PSM_send_SDS_PSM_PORT_sds_pm_psm_listener)(struct SDS_PSM_Instance *, int16_t, int16_t)= 0x0;
void register_external_SDS_PSM_send_SDS_PSM_PORT_sds_pm_psm_listener(void (*_listener)(struct SDS_PSM_Instance *, int16_t, int16_t)){
external_SDS_PSM_send_SDS_PSM_PORT_sds_pm_psm_listener = _listener;
}
void register_SDS_PSM_send_SDS_PSM_PORT_sds_pm_psm_listener(void (*_listener)(struct SDS_PSM_Instance *, int16_t, int16_t)){
SDS_PSM_send_SDS_PSM_PORT_sds_pm_psm_listener = _listener;
}
void SDS_PSM_send_SDS_PSM_PORT_sds_pm_psm(struct SDS_PSM_Instance *_instance, int16_t pm10, int16_t pm25){
if (SDS_PSM_send_SDS_PSM_PORT_sds_pm_psm_listener != 0x0) SDS_PSM_send_SDS_PSM_PORT_sds_pm_psm_listener(_instance, pm10, pm25);
if (external_SDS_PSM_send_SDS_PSM_PORT_sds_pm_psm_listener != 0x0) external_SDS_PSM_send_SDS_PSM_PORT_sds_pm_psm_listener(_instance, pm10, pm25);
;
}



/*****************************************************************************
 * Implementation for type : GPS_PIM
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void GPS_PIM_behavior_OnExit(int state, struct GPS_PIM_Instance *_instance);
//Prototypes: Message Sending
void GPS_PIM_send_GPS_PSM_PORT_gps_setup_psm(struct GPS_PIM_Instance *_instance);
void GPS_PIM_send_GPS_PSM_PORT_gps_mesure_psm(struct GPS_PIM_Instance *_instance);
void GPS_PIM_send_GPS_PIM_PORT_gps_location_time_pim(struct GPS_PIM_Instance *_instance, float latitude, float longitude, int16_t year, int16_t month, int16_t date, int16_t hour, int16_t minute, int16_t second);
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void GPS_PIM_behavior_OnEntry(int state, struct GPS_PIM_Instance *_instance) {
switch(state) {
case GPS_PIM_BEHAVIOR_STATE:{
_instance->GPS_PIM_behavior_State = GPS_PIM_BEHAVIOR_SETUP_STATE;
GPS_PIM_behavior_OnEntry(_instance->GPS_PIM_behavior_State, _instance);
break;
}
case GPS_PIM_BEHAVIOR_SETUP_STATE:{
break;
}
case GPS_PIM_BEHAVIOR_MEASURE_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void GPS_PIM_behavior_OnExit(int state, struct GPS_PIM_Instance *_instance) {
switch(state) {
case GPS_PIM_BEHAVIOR_STATE:{
GPS_PIM_behavior_OnExit(_instance->GPS_PIM_behavior_State, _instance);
break;}
case GPS_PIM_BEHAVIOR_SETUP_STATE:{
break;}
case GPS_PIM_BEHAVIOR_MEASURE_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void GPS_PIM_handle_GPS_PIM_PORT_gps_setup_pim(struct GPS_PIM_Instance *_instance) {
if(!(_instance->active)) return;
//Region behavior
uint8_t GPS_PIM_behavior_State_event_consumed = 0;
if (_instance->GPS_PIM_behavior_State == GPS_PIM_BEHAVIOR_SETUP_STATE) {
if (GPS_PIM_behavior_State_event_consumed == 0 && 1) {
GPS_PIM_behavior_OnExit(GPS_PIM_BEHAVIOR_SETUP_STATE, _instance);
_instance->GPS_PIM_behavior_State = GPS_PIM_BEHAVIOR_MEASURE_STATE;
Serial.print(("GPS 1 -"));
GPS_PIM_send_GPS_PSM_PORT_gps_setup_psm(_instance);
GPS_PIM_behavior_OnEntry(GPS_PIM_BEHAVIOR_MEASURE_STATE, _instance);
GPS_PIM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}
void GPS_PIM_handle_GPS_PIM_PORT_gps_mesure_pim(struct GPS_PIM_Instance *_instance) {
if(!(_instance->active)) return;
//Region behavior
uint8_t GPS_PIM_behavior_State_event_consumed = 0;
if (_instance->GPS_PIM_behavior_State == GPS_PIM_BEHAVIOR_MEASURE_STATE) {
if (GPS_PIM_behavior_State_event_consumed == 0 && 1) {
Serial.print(("GPS 4 -"));
GPS_PIM_send_GPS_PSM_PORT_gps_mesure_psm(_instance);
GPS_PIM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}
void GPS_PIM_handle_GPS_PSM_PORT_gps_location_time_psm(struct GPS_PIM_Instance *_instance, float latitude, float longitude, int16_t year, int16_t month, int16_t date, int16_t hour, int16_t minute, int16_t second) {
if(!(_instance->active)) return;
//Region behavior
uint8_t GPS_PIM_behavior_State_event_consumed = 0;
if (_instance->GPS_PIM_behavior_State == GPS_PIM_BEHAVIOR_MEASURE_STATE) {
if (GPS_PIM_behavior_State_event_consumed == 0 && 1) {
GPS_PIM_send_GPS_PIM_PORT_gps_location_time_pim(_instance, latitude, longitude, year, month, date, hour, minute, second);
GPS_PIM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}

// Observers for outgoing messages:
void (*external_GPS_PIM_send_GPS_PSM_PORT_gps_setup_psm_listener)(struct GPS_PIM_Instance *)= 0x0;
void (*GPS_PIM_send_GPS_PSM_PORT_gps_setup_psm_listener)(struct GPS_PIM_Instance *)= 0x0;
void register_external_GPS_PIM_send_GPS_PSM_PORT_gps_setup_psm_listener(void (*_listener)(struct GPS_PIM_Instance *)){
external_GPS_PIM_send_GPS_PSM_PORT_gps_setup_psm_listener = _listener;
}
void register_GPS_PIM_send_GPS_PSM_PORT_gps_setup_psm_listener(void (*_listener)(struct GPS_PIM_Instance *)){
GPS_PIM_send_GPS_PSM_PORT_gps_setup_psm_listener = _listener;
}
void GPS_PIM_send_GPS_PSM_PORT_gps_setup_psm(struct GPS_PIM_Instance *_instance){
if (GPS_PIM_send_GPS_PSM_PORT_gps_setup_psm_listener != 0x0) GPS_PIM_send_GPS_PSM_PORT_gps_setup_psm_listener(_instance);
if (external_GPS_PIM_send_GPS_PSM_PORT_gps_setup_psm_listener != 0x0) external_GPS_PIM_send_GPS_PSM_PORT_gps_setup_psm_listener(_instance);
;
}
void (*external_GPS_PIM_send_GPS_PSM_PORT_gps_mesure_psm_listener)(struct GPS_PIM_Instance *)= 0x0;
void (*GPS_PIM_send_GPS_PSM_PORT_gps_mesure_psm_listener)(struct GPS_PIM_Instance *)= 0x0;
void register_external_GPS_PIM_send_GPS_PSM_PORT_gps_mesure_psm_listener(void (*_listener)(struct GPS_PIM_Instance *)){
external_GPS_PIM_send_GPS_PSM_PORT_gps_mesure_psm_listener = _listener;
}
void register_GPS_PIM_send_GPS_PSM_PORT_gps_mesure_psm_listener(void (*_listener)(struct GPS_PIM_Instance *)){
GPS_PIM_send_GPS_PSM_PORT_gps_mesure_psm_listener = _listener;
}
void GPS_PIM_send_GPS_PSM_PORT_gps_mesure_psm(struct GPS_PIM_Instance *_instance){
if (GPS_PIM_send_GPS_PSM_PORT_gps_mesure_psm_listener != 0x0) GPS_PIM_send_GPS_PSM_PORT_gps_mesure_psm_listener(_instance);
if (external_GPS_PIM_send_GPS_PSM_PORT_gps_mesure_psm_listener != 0x0) external_GPS_PIM_send_GPS_PSM_PORT_gps_mesure_psm_listener(_instance);
;
}
void (*external_GPS_PIM_send_GPS_PIM_PORT_gps_location_time_pim_listener)(struct GPS_PIM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t)= 0x0;
void (*GPS_PIM_send_GPS_PIM_PORT_gps_location_time_pim_listener)(struct GPS_PIM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t)= 0x0;
void register_external_GPS_PIM_send_GPS_PIM_PORT_gps_location_time_pim_listener(void (*_listener)(struct GPS_PIM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t)){
external_GPS_PIM_send_GPS_PIM_PORT_gps_location_time_pim_listener = _listener;
}
void register_GPS_PIM_send_GPS_PIM_PORT_gps_location_time_pim_listener(void (*_listener)(struct GPS_PIM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t)){
GPS_PIM_send_GPS_PIM_PORT_gps_location_time_pim_listener = _listener;
}
void GPS_PIM_send_GPS_PIM_PORT_gps_location_time_pim(struct GPS_PIM_Instance *_instance, float latitude, float longitude, int16_t year, int16_t month, int16_t date, int16_t hour, int16_t minute, int16_t second){
if (GPS_PIM_send_GPS_PIM_PORT_gps_location_time_pim_listener != 0x0) GPS_PIM_send_GPS_PIM_PORT_gps_location_time_pim_listener(_instance, latitude, longitude, year, month, date, hour, minute, second);
if (external_GPS_PIM_send_GPS_PIM_PORT_gps_location_time_pim_listener != 0x0) external_GPS_PIM_send_GPS_PIM_PORT_gps_location_time_pim_listener(_instance, latitude, longitude, year, month, date, hour, minute, second);
;
}



/*****************************************************************************
 * Implementation for type : MQTT_PSM
 *****************************************************************************/


// BEGIN: Code from the c_global annotation MQTT_PSM

WiFiClient espClient;
PubSubClient client(espClient);
int timezone = 2 * 3600;
int dst = 0;

long lastMsg = 0;
char msg[50];
int value = 0;

int x =0;
void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  String Str4 = "";
  String choice = "{\"tempState\":{\"thestate\":\"High Temperature\"}}";    
  
  
  for (int i = 0; i < length; i++) {
    Serial.print((char)payload[i]);
    Str4 = Str4 + (char)payload[i];
  }
    Serial.println();
    Serial.println();
    Serial.println(Str4);
    Serial.println();
    Serial.println();
    Serial.println(choice);
    
pinMode(14, OUTPUT);
  
  Serial.println();
  // Switch on the LED if an 1 was received as first character
  if (Str4.equals(choice)) {
  Serial.println("equals");
  digitalWrite(14, HIGH);
  x=1;
    // but actually the LED is on; this is because
    // it is active low on the ESP-01)
  } else {
    Serial.println("not equals");
    digitalWrite(14, LOW);
    x=0; 
  }

}

// END: Code from the c_global annotation MQTT_PSM

// Declaration of prototypes:
//Prototypes: State Machine
void MQTT_PSM_behavior_OnExit(int state, struct MQTT_PSM_Instance *_instance);
//Prototypes: Message Sending
void MQTT_PSM_send_MQTT_PSM_PORT_JAVA_DECISION_psm(struct MQTT_PSM_Instance *_instance, int16_t thestate);
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void MQTT_PSM_behavior_OnEntry(int state, struct MQTT_PSM_Instance *_instance) {
switch(state) {
case MQTT_PSM_BEHAVIOR_STATE:{
_instance->MQTT_PSM_behavior_State = MQTT_PSM_BEHAVIOR_RUNNING_STATE;
MQTT_PSM_behavior_OnEntry(_instance->MQTT_PSM_behavior_State, _instance);
break;
}
case MQTT_PSM_BEHAVIOR_RUNNING_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void MQTT_PSM_behavior_OnExit(int state, struct MQTT_PSM_Instance *_instance) {
switch(state) {
case MQTT_PSM_BEHAVIOR_STATE:{
MQTT_PSM_behavior_OnExit(_instance->MQTT_PSM_behavior_State, _instance);
break;}
case MQTT_PSM_BEHAVIOR_RUNNING_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void MQTT_PSM_handle_MQTT_PSM_PORT_mqtt_send_psm(struct MQTT_PSM_Instance *_instance, float latitude, float longitude, int16_t year, int16_t month, int16_t date, int16_t hour, int16_t minute, int16_t second, int16_t temperature, int16_t pressure, int16_t altitude, int16_t humidity, int16_t pm10, int16_t pm25) {
if(!(_instance->active)) return;
//Region behavior
uint8_t MQTT_PSM_behavior_State_event_consumed = 0;
if (_instance->MQTT_PSM_behavior_State == MQTT_PSM_BEHAVIOR_RUNNING_STATE) {
if (MQTT_PSM_behavior_State_event_consumed == 0 && 1) {
_instance->MQTT_PSM_x_property_var = x;;
if(_instance->MQTT_PSM_x_property_var == 1) {
MQTT_PSM_send_MQTT_PSM_PORT_JAVA_DECISION_psm(_instance, 1);
  Serial.println("klaaaapt");

} else {
MQTT_PSM_send_MQTT_PSM_PORT_JAVA_DECISION_psm(_instance, 0);

}

			client.setCallback(callback);	 
						 
			  if (!client.connected()) {
			    // Loop until we are reconnected
			    while (!client.connected()) {
			      Serial.print("Attempting MQTT connection...");
			      // Create a random client ID
			      String clientId = "ESP8266Client-";
			      clientId += String(random(0xffff), HEX);
			      // Attempt to connect
			      if (client.connect(clientId.c_str())) {
			        Serial.println("connected");
			        // ... and resubscribe
			        client.setCallback(callback);	 
			        
			        client.subscribe("JavaOutTopicThingML");
			      } else {
			        // Wait 5 seconds before retrying
			        delay(5000);
			      }
			    }
			  }
			  client.loop();
			
			//get the time and date from NTP server
			  time_t now = time(nullptr);
			  struct tm* p_tm = localtime(&now);
			  Serial.print(p_tm->tm_mday);
			  Serial.print("/");
			  Serial.print(p_tm->tm_mon + 1);
			  Serial.print("/");
			  Serial.print(p_tm->tm_year + 1900);
			  
			  Serial.print(" ");
			  
			  Serial.print(p_tm->tm_hour);
			  Serial.print(":");
			  Serial.print(p_tm->tm_min);
			  Serial.print(":");
			  Serial.println(p_tm->tm_sec);
			  Serial.print(now);

  // Prepare a JSON payload string
  /*String payload = "{";
      payload += "\"id\":"; payload += _instance->MQTT_PSM_station_id_var; payload += ",";
      payload += "\"timestamp\":"; payload += now; payload += ",";
      payload += "\"pm25\":"; payload += pm25; payload += ",";
      payload += "\"pm10\":"; payload += pm10; payload += ",";
      payload += "\"hum\":"; payload += humidity; payload += ",";
      payload += "\"press\":"; payload += pressure; payload += ",";
      payload += "\"temp\":"; payload += temperature; payload += ",";
      payload += "\"version\":"; payload += 1;
  payload += "}";
  */

  // Prepare a JSON payload string
  String payloadWeather = "{";
      payloadWeather += "\"weather\":";
      payloadWeather += "{";
      payloadWeather += "\"id\":\""; payloadWeather += _instance->MQTT_PSM_station_id_var; payloadWeather += "\",";
      payloadWeather += "\"timestamp\":"; payloadWeather += now; payloadWeather += ",";
      payloadWeather += "\"pm25\":"; payloadWeather += pm25; payloadWeather += ",";
      payloadWeather += "\"pm10\":"; payloadWeather += pm10; payloadWeather += ",";
      payloadWeather += "\"hum\":"; payloadWeather += humidity; payloadWeather += ",";
      payloadWeather += "\"press\":"; payloadWeather += pressure; payloadWeather += ",";
      payloadWeather += "\"temp\":"; payloadWeather += temperature;
  	  payloadWeather += "}";
  	  payloadWeather += "}";
  	  
  // Send payload
  /*
  char attributes[600];
  payload.toCharArray( attributes, 600 );
  client.publish(_instance->MQTT_PSM_mqtt_topic_var, attributes,_instance->MQTT_PSM_mqtt_retain_var);
  Serial.println( attributes );
  */

  // Send payloadWeather
  char attributesWeather[600];
  payloadWeather.toCharArray( attributesWeather, 600 );
  client.publish(_instance->MQTT_PSM_mqtt_topic_var, attributesWeather,_instance->MQTT_PSM_mqtt_retain_var);
  Serial.println( attributesWeather );
  delay(500);
  
MQTT_PSM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}
void MQTT_PSM_handle_MQTT_PSM_PORT_mqtt_setup_psm(struct MQTT_PSM_Instance *_instance, char * station_id, char * station_owner, char * ssid, char * password, char * mqtt_server, int16_t mqtt_port, char * mqtt_user, char * mqtt_password, char * mqtt_clientID, char * mqtt_topic, uint8_t mqtt_qos, uint8_t mqtt_retain) {
if(!(_instance->active)) return;
//Region behavior
uint8_t MQTT_PSM_behavior_State_event_consumed = 0;
if (_instance->MQTT_PSM_behavior_State == MQTT_PSM_BEHAVIOR_RUNNING_STATE) {
if (MQTT_PSM_behavior_State_event_consumed == 0 && 1) {
 	  
				 Serial.begin(9600);
				
				  delay(10);
				  // We start by connecting to a WiFi network
				  Serial.println();
				  Serial.print("Connecting to ");
				  Serial.println(ssid);
				
				  WiFi.begin(ssid, password);
				
				  while (WiFi.status() != WL_CONNECTED) {
				    delay(500);
				    Serial.print(".");
				  }
				
				  randomSeed(micros());
				
				  Serial.println("");
				  Serial.println("WiFi connected");
				  Serial.println("IP address: ");
				  Serial.println(WiFi.localIP());

				  client.setServer(mqtt_server, mqtt_port);
				  //configure the NTP server 
				  configTime(timezone, dst, "pool.ntp.org","time.nist.gov");
  				  Serial.println("\nWaiting for Internet time");

  				  while(!time(nullptr)){
     			  Serial.print("*");
     			  delay(1000);
  				 }
  				Serial.println("\nTime response....OK");
				  
				  
_instance->MQTT_PSM_mqtt_topic_var = mqtt_topic;
_instance->MQTT_PSM_mqtt_qos_var = mqtt_qos;
_instance->MQTT_PSM_mqtt_retain_var = mqtt_retain;
_instance->MQTT_PSM_station_id_var = station_id;
_instance->MQTT_PSM_station_owner_var = station_owner;
MQTT_PSM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}

// Observers for outgoing messages:
void (*external_MQTT_PSM_send_MQTT_PSM_PORT_JAVA_DECISION_psm_listener)(struct MQTT_PSM_Instance *, int16_t)= 0x0;
void (*MQTT_PSM_send_MQTT_PSM_PORT_JAVA_DECISION_psm_listener)(struct MQTT_PSM_Instance *, int16_t)= 0x0;
void register_external_MQTT_PSM_send_MQTT_PSM_PORT_JAVA_DECISION_psm_listener(void (*_listener)(struct MQTT_PSM_Instance *, int16_t)){
external_MQTT_PSM_send_MQTT_PSM_PORT_JAVA_DECISION_psm_listener = _listener;
}
void register_MQTT_PSM_send_MQTT_PSM_PORT_JAVA_DECISION_psm_listener(void (*_listener)(struct MQTT_PSM_Instance *, int16_t)){
MQTT_PSM_send_MQTT_PSM_PORT_JAVA_DECISION_psm_listener = _listener;
}
void MQTT_PSM_send_MQTT_PSM_PORT_JAVA_DECISION_psm(struct MQTT_PSM_Instance *_instance, int16_t thestate){
if (MQTT_PSM_send_MQTT_PSM_PORT_JAVA_DECISION_psm_listener != 0x0) MQTT_PSM_send_MQTT_PSM_PORT_JAVA_DECISION_psm_listener(_instance, thestate);
if (external_MQTT_PSM_send_MQTT_PSM_PORT_JAVA_DECISION_psm_listener != 0x0) external_MQTT_PSM_send_MQTT_PSM_PORT_JAVA_DECISION_psm_listener(_instance, thestate);
;
}



/*****************************************************************************
 * Implementation for type : LED_PIM
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void LED_PIM_behavior_OnExit(int state, struct LED_PIM_Instance *_instance);
//Prototypes: Message Sending
void LED_PIM_send_LED_PSM_PORT_setup_psm(struct LED_PIM_Instance *_instance, uint8_t pin);
void LED_PIM_send_LED_PSM_PORT_turn_on_psm(struct LED_PIM_Instance *_instance, uint8_t value);
void LED_PIM_send_LED_PSM_PORT_turn_off_psm(struct LED_PIM_Instance *_instance, uint8_t value);
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void LED_PIM_behavior_OnEntry(int state, struct LED_PIM_Instance *_instance) {
switch(state) {
case LED_PIM_BEHAVIOR_STATE:{
_instance->LED_PIM_behavior_State = LED_PIM_BEHAVIOR_SETUP_STATE;
LED_PIM_behavior_OnEntry(_instance->LED_PIM_behavior_State, _instance);
break;
}
case LED_PIM_BEHAVIOR_SETUP_STATE:{
break;
}
case LED_PIM_BEHAVIOR_OFF_STATE:{
break;
}
case LED_PIM_BEHAVIOR_ON_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void LED_PIM_behavior_OnExit(int state, struct LED_PIM_Instance *_instance) {
switch(state) {
case LED_PIM_BEHAVIOR_STATE:{
LED_PIM_behavior_OnExit(_instance->LED_PIM_behavior_State, _instance);
break;}
case LED_PIM_BEHAVIOR_SETUP_STATE:{
break;}
case LED_PIM_BEHAVIOR_OFF_STATE:{
break;}
case LED_PIM_BEHAVIOR_ON_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void LED_PIM_handle_LED_PIM_PORT_turn_on_pim(struct LED_PIM_Instance *_instance, uint8_t value) {
if(!(_instance->active)) return;
//Region behavior
uint8_t LED_PIM_behavior_State_event_consumed = 0;
if (_instance->LED_PIM_behavior_State == LED_PIM_BEHAVIOR_OFF_STATE) {
if (LED_PIM_behavior_State_event_consumed == 0 && 1) {
LED_PIM_behavior_OnExit(LED_PIM_BEHAVIOR_OFF_STATE, _instance);
_instance->LED_PIM_behavior_State = LED_PIM_BEHAVIOR_ON_STATE;
LED_PIM_send_LED_PSM_PORT_turn_on_psm(_instance, value);
LED_PIM_behavior_OnEntry(LED_PIM_BEHAVIOR_ON_STATE, _instance);
LED_PIM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}
void LED_PIM_handle_LED_PIM_PORT_setup_pim(struct LED_PIM_Instance *_instance) {
if(!(_instance->active)) return;
//Region behavior
uint8_t LED_PIM_behavior_State_event_consumed = 0;
if (_instance->LED_PIM_behavior_State == LED_PIM_BEHAVIOR_SETUP_STATE) {
if (LED_PIM_behavior_State_event_consumed == 0 && 1) {
Serial.print(("LED 1 -"));
LED_PIM_send_LED_PSM_PORT_setup_psm(_instance, _instance->LED_PIM_PIN_var);
LED_PIM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}
void LED_PIM_handle_LED_PIM_PORT_turn_off_pim(struct LED_PIM_Instance *_instance, uint8_t value) {
if(!(_instance->active)) return;
//Region behavior
uint8_t LED_PIM_behavior_State_event_consumed = 0;
if (_instance->LED_PIM_behavior_State == LED_PIM_BEHAVIOR_ON_STATE) {
if (LED_PIM_behavior_State_event_consumed == 0 && 1) {
LED_PIM_behavior_OnExit(LED_PIM_BEHAVIOR_ON_STATE, _instance);
_instance->LED_PIM_behavior_State = LED_PIM_BEHAVIOR_OFF_STATE;
LED_PIM_send_LED_PSM_PORT_turn_off_psm(_instance, value);
LED_PIM_behavior_OnEntry(LED_PIM_BEHAVIOR_OFF_STATE, _instance);
LED_PIM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}
int LED_PIM_handle_empty_event(struct LED_PIM_Instance *_instance) {
 uint8_t empty_event_consumed = 0;
if(!(_instance->active)) return 0;
//Region behavior
if (_instance->LED_PIM_behavior_State == LED_PIM_BEHAVIOR_SETUP_STATE) {
if (1) {
LED_PIM_behavior_OnExit(LED_PIM_BEHAVIOR_SETUP_STATE, _instance);
_instance->LED_PIM_behavior_State = LED_PIM_BEHAVIOR_OFF_STATE;
LED_PIM_behavior_OnEntry(LED_PIM_BEHAVIOR_OFF_STATE, _instance);
return 1;
}
}
//begin dispatchEmptyToSession
//end dispatchEmptyToSession
return empty_event_consumed;
}

// Observers for outgoing messages:
void (*external_LED_PIM_send_LED_PSM_PORT_setup_psm_listener)(struct LED_PIM_Instance *, uint8_t)= 0x0;
void (*LED_PIM_send_LED_PSM_PORT_setup_psm_listener)(struct LED_PIM_Instance *, uint8_t)= 0x0;
void register_external_LED_PIM_send_LED_PSM_PORT_setup_psm_listener(void (*_listener)(struct LED_PIM_Instance *, uint8_t)){
external_LED_PIM_send_LED_PSM_PORT_setup_psm_listener = _listener;
}
void register_LED_PIM_send_LED_PSM_PORT_setup_psm_listener(void (*_listener)(struct LED_PIM_Instance *, uint8_t)){
LED_PIM_send_LED_PSM_PORT_setup_psm_listener = _listener;
}
void LED_PIM_send_LED_PSM_PORT_setup_psm(struct LED_PIM_Instance *_instance, uint8_t pin){
if (LED_PIM_send_LED_PSM_PORT_setup_psm_listener != 0x0) LED_PIM_send_LED_PSM_PORT_setup_psm_listener(_instance, pin);
if (external_LED_PIM_send_LED_PSM_PORT_setup_psm_listener != 0x0) external_LED_PIM_send_LED_PSM_PORT_setup_psm_listener(_instance, pin);
;
}
void (*external_LED_PIM_send_LED_PSM_PORT_turn_on_psm_listener)(struct LED_PIM_Instance *, uint8_t)= 0x0;
void (*LED_PIM_send_LED_PSM_PORT_turn_on_psm_listener)(struct LED_PIM_Instance *, uint8_t)= 0x0;
void register_external_LED_PIM_send_LED_PSM_PORT_turn_on_psm_listener(void (*_listener)(struct LED_PIM_Instance *, uint8_t)){
external_LED_PIM_send_LED_PSM_PORT_turn_on_psm_listener = _listener;
}
void register_LED_PIM_send_LED_PSM_PORT_turn_on_psm_listener(void (*_listener)(struct LED_PIM_Instance *, uint8_t)){
LED_PIM_send_LED_PSM_PORT_turn_on_psm_listener = _listener;
}
void LED_PIM_send_LED_PSM_PORT_turn_on_psm(struct LED_PIM_Instance *_instance, uint8_t value){
if (LED_PIM_send_LED_PSM_PORT_turn_on_psm_listener != 0x0) LED_PIM_send_LED_PSM_PORT_turn_on_psm_listener(_instance, value);
if (external_LED_PIM_send_LED_PSM_PORT_turn_on_psm_listener != 0x0) external_LED_PIM_send_LED_PSM_PORT_turn_on_psm_listener(_instance, value);
;
}
void (*external_LED_PIM_send_LED_PSM_PORT_turn_off_psm_listener)(struct LED_PIM_Instance *, uint8_t)= 0x0;
void (*LED_PIM_send_LED_PSM_PORT_turn_off_psm_listener)(struct LED_PIM_Instance *, uint8_t)= 0x0;
void register_external_LED_PIM_send_LED_PSM_PORT_turn_off_psm_listener(void (*_listener)(struct LED_PIM_Instance *, uint8_t)){
external_LED_PIM_send_LED_PSM_PORT_turn_off_psm_listener = _listener;
}
void register_LED_PIM_send_LED_PSM_PORT_turn_off_psm_listener(void (*_listener)(struct LED_PIM_Instance *, uint8_t)){
LED_PIM_send_LED_PSM_PORT_turn_off_psm_listener = _listener;
}
void LED_PIM_send_LED_PSM_PORT_turn_off_psm(struct LED_PIM_Instance *_instance, uint8_t value){
if (LED_PIM_send_LED_PSM_PORT_turn_off_psm_listener != 0x0) LED_PIM_send_LED_PSM_PORT_turn_off_psm_listener(_instance, value);
if (external_LED_PIM_send_LED_PSM_PORT_turn_off_psm_listener != 0x0) external_LED_PIM_send_LED_PSM_PORT_turn_off_psm_listener(_instance, value);
;
}



/*****************************************************************************
 * Implementation for type : MQTT_PIM
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void MQTT_PIM_behavior_OnExit(int state, struct MQTT_PIM_Instance *_instance);
//Prototypes: Message Sending
void MQTT_PIM_send_MQTT_PIM_PORT_JAVA_DECISION_pim(struct MQTT_PIM_Instance *_instance, int16_t thestate);
void MQTT_PIM_send_MQTT_PSM_PORT_mqtt_setup_psm(struct MQTT_PIM_Instance *_instance, char * station_id, char * station_owner, char * ssid, char * password, char * mqtt_server, int16_t mqtt_port, char * mqtt_user, char * mqtt_password, char * mqtt_clientID, char * mqtt_topic, uint8_t mqtt_qos, uint8_t mqtt_retain);
void MQTT_PIM_send_MQTT_PSM_PORT_mqtt_send_psm(struct MQTT_PIM_Instance *_instance, float latitude, float longitude, int16_t year, int16_t month, int16_t date, int16_t hour, int16_t minute, int16_t second, int16_t temperature, int16_t pressure, int16_t altitude, int16_t humidity, int16_t pm10, int16_t pm25);
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void MQTT_PIM_behavior_OnEntry(int state, struct MQTT_PIM_Instance *_instance) {
switch(state) {
case MQTT_PIM_BEHAVIOR_STATE:{
_instance->MQTT_PIM_behavior_State = MQTT_PIM_BEHAVIOR_SETUP_STATE;
MQTT_PIM_behavior_OnEntry(_instance->MQTT_PIM_behavior_State, _instance);
break;
}
case MQTT_PIM_BEHAVIOR_SETUP_STATE:{
break;
}
case MQTT_PIM_BEHAVIOR_PUB_SUB_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void MQTT_PIM_behavior_OnExit(int state, struct MQTT_PIM_Instance *_instance) {
switch(state) {
case MQTT_PIM_BEHAVIOR_STATE:{
MQTT_PIM_behavior_OnExit(_instance->MQTT_PIM_behavior_State, _instance);
break;}
case MQTT_PIM_BEHAVIOR_SETUP_STATE:{
break;}
case MQTT_PIM_BEHAVIOR_PUB_SUB_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void MQTT_PIM_handle_MQTT_PSM_PORT_JAVA_DECISION_psm(struct MQTT_PIM_Instance *_instance, int16_t thestate) {
if(!(_instance->active)) return;
//Region behavior
uint8_t MQTT_PIM_behavior_State_event_consumed = 0;
if (_instance->MQTT_PIM_behavior_State == MQTT_PIM_BEHAVIOR_PUB_SUB_STATE) {
if (MQTT_PIM_behavior_State_event_consumed == 0 && 1) {
Serial.print(("MQTT 7 -"));
MQTT_PIM_send_MQTT_PIM_PORT_JAVA_DECISION_pim(_instance, thestate);
MQTT_PIM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}
void MQTT_PIM_handle_MQTT_PIM_PORT_mqtt_setup_pim(struct MQTT_PIM_Instance *_instance) {
if(!(_instance->active)) return;
//Region behavior
uint8_t MQTT_PIM_behavior_State_event_consumed = 0;
if (_instance->MQTT_PIM_behavior_State == MQTT_PIM_BEHAVIOR_SETUP_STATE) {
if (MQTT_PIM_behavior_State_event_consumed == 0 && 1) {
MQTT_PIM_behavior_OnExit(MQTT_PIM_BEHAVIOR_SETUP_STATE, _instance);
_instance->MQTT_PIM_behavior_State = MQTT_PIM_BEHAVIOR_PUB_SUB_STATE;
Serial.print(("MQTT 1 -"));
MQTT_PIM_send_MQTT_PSM_PORT_mqtt_setup_psm(_instance, _instance->MQTT_PIM_station_id_var, _instance->MQTT_PIM_station_owner_var, _instance->MQTT_PIM_ssid_var, _instance->MQTT_PIM_password_var, _instance->MQTT_PIM_mqtt_server_var, _instance->MQTT_PIM_mqtt_port_var, _instance->MQTT_PIM_mqtt_user_var, _instance->MQTT_PIM_mqtt_password_var, _instance->MQTT_PIM_mqtt_clientID_var, _instance->MQTT_PIM_mqtt_topic_var, _instance->MQTT_PIM_mqtt_qos_var, _instance->MQTT_PIM_mqtt_retain_var);
MQTT_PIM_behavior_OnEntry(MQTT_PIM_BEHAVIOR_PUB_SUB_STATE, _instance);
MQTT_PIM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}
void MQTT_PIM_handle_MQTT_PIM_PORT_mqtt_send_pim(struct MQTT_PIM_Instance *_instance, float latitude, float longitude, int16_t year, int16_t month, int16_t date, int16_t hour, int16_t minute, int16_t second, int16_t temperature, int16_t pressure, int16_t altitude, int16_t humidity, int16_t pm10, int16_t pm25) {
if(!(_instance->active)) return;
//Region behavior
uint8_t MQTT_PIM_behavior_State_event_consumed = 0;
if (_instance->MQTT_PIM_behavior_State == MQTT_PIM_BEHAVIOR_PUB_SUB_STATE) {
if (MQTT_PIM_behavior_State_event_consumed == 0 && 1) {
Serial.print(("MQTT 4 -"));
MQTT_PIM_send_MQTT_PSM_PORT_mqtt_send_psm(_instance, latitude, longitude, year, month, date, hour, minute, second, temperature, pressure, altitude, humidity, pm10, pm25);
MQTT_PIM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}

// Observers for outgoing messages:
void (*external_MQTT_PIM_send_MQTT_PIM_PORT_JAVA_DECISION_pim_listener)(struct MQTT_PIM_Instance *, int16_t)= 0x0;
void (*MQTT_PIM_send_MQTT_PIM_PORT_JAVA_DECISION_pim_listener)(struct MQTT_PIM_Instance *, int16_t)= 0x0;
void register_external_MQTT_PIM_send_MQTT_PIM_PORT_JAVA_DECISION_pim_listener(void (*_listener)(struct MQTT_PIM_Instance *, int16_t)){
external_MQTT_PIM_send_MQTT_PIM_PORT_JAVA_DECISION_pim_listener = _listener;
}
void register_MQTT_PIM_send_MQTT_PIM_PORT_JAVA_DECISION_pim_listener(void (*_listener)(struct MQTT_PIM_Instance *, int16_t)){
MQTT_PIM_send_MQTT_PIM_PORT_JAVA_DECISION_pim_listener = _listener;
}
void MQTT_PIM_send_MQTT_PIM_PORT_JAVA_DECISION_pim(struct MQTT_PIM_Instance *_instance, int16_t thestate){
if (MQTT_PIM_send_MQTT_PIM_PORT_JAVA_DECISION_pim_listener != 0x0) MQTT_PIM_send_MQTT_PIM_PORT_JAVA_DECISION_pim_listener(_instance, thestate);
if (external_MQTT_PIM_send_MQTT_PIM_PORT_JAVA_DECISION_pim_listener != 0x0) external_MQTT_PIM_send_MQTT_PIM_PORT_JAVA_DECISION_pim_listener(_instance, thestate);
;
}
void (*external_MQTT_PIM_send_MQTT_PSM_PORT_mqtt_setup_psm_listener)(struct MQTT_PIM_Instance *, char *, char *, char *, char *, char *, int16_t, char *, char *, char *, char *, uint8_t, uint8_t)= 0x0;
void (*MQTT_PIM_send_MQTT_PSM_PORT_mqtt_setup_psm_listener)(struct MQTT_PIM_Instance *, char *, char *, char *, char *, char *, int16_t, char *, char *, char *, char *, uint8_t, uint8_t)= 0x0;
void register_external_MQTT_PIM_send_MQTT_PSM_PORT_mqtt_setup_psm_listener(void (*_listener)(struct MQTT_PIM_Instance *, char *, char *, char *, char *, char *, int16_t, char *, char *, char *, char *, uint8_t, uint8_t)){
external_MQTT_PIM_send_MQTT_PSM_PORT_mqtt_setup_psm_listener = _listener;
}
void register_MQTT_PIM_send_MQTT_PSM_PORT_mqtt_setup_psm_listener(void (*_listener)(struct MQTT_PIM_Instance *, char *, char *, char *, char *, char *, int16_t, char *, char *, char *, char *, uint8_t, uint8_t)){
MQTT_PIM_send_MQTT_PSM_PORT_mqtt_setup_psm_listener = _listener;
}
void MQTT_PIM_send_MQTT_PSM_PORT_mqtt_setup_psm(struct MQTT_PIM_Instance *_instance, char * station_id, char * station_owner, char * ssid, char * password, char * mqtt_server, int16_t mqtt_port, char * mqtt_user, char * mqtt_password, char * mqtt_clientID, char * mqtt_topic, uint8_t mqtt_qos, uint8_t mqtt_retain){
if (MQTT_PIM_send_MQTT_PSM_PORT_mqtt_setup_psm_listener != 0x0) MQTT_PIM_send_MQTT_PSM_PORT_mqtt_setup_psm_listener(_instance, station_id, station_owner, ssid, password, mqtt_server, mqtt_port, mqtt_user, mqtt_password, mqtt_clientID, mqtt_topic, mqtt_qos, mqtt_retain);
if (external_MQTT_PIM_send_MQTT_PSM_PORT_mqtt_setup_psm_listener != 0x0) external_MQTT_PIM_send_MQTT_PSM_PORT_mqtt_setup_psm_listener(_instance, station_id, station_owner, ssid, password, mqtt_server, mqtt_port, mqtt_user, mqtt_password, mqtt_clientID, mqtt_topic, mqtt_qos, mqtt_retain);
;
}
void (*external_MQTT_PIM_send_MQTT_PSM_PORT_mqtt_send_psm_listener)(struct MQTT_PIM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t)= 0x0;
void (*MQTT_PIM_send_MQTT_PSM_PORT_mqtt_send_psm_listener)(struct MQTT_PIM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t)= 0x0;
void register_external_MQTT_PIM_send_MQTT_PSM_PORT_mqtt_send_psm_listener(void (*_listener)(struct MQTT_PIM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t)){
external_MQTT_PIM_send_MQTT_PSM_PORT_mqtt_send_psm_listener = _listener;
}
void register_MQTT_PIM_send_MQTT_PSM_PORT_mqtt_send_psm_listener(void (*_listener)(struct MQTT_PIM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t)){
MQTT_PIM_send_MQTT_PSM_PORT_mqtt_send_psm_listener = _listener;
}
void MQTT_PIM_send_MQTT_PSM_PORT_mqtt_send_psm(struct MQTT_PIM_Instance *_instance, float latitude, float longitude, int16_t year, int16_t month, int16_t date, int16_t hour, int16_t minute, int16_t second, int16_t temperature, int16_t pressure, int16_t altitude, int16_t humidity, int16_t pm10, int16_t pm25){
if (MQTT_PIM_send_MQTT_PSM_PORT_mqtt_send_psm_listener != 0x0) MQTT_PIM_send_MQTT_PSM_PORT_mqtt_send_psm_listener(_instance, latitude, longitude, year, month, date, hour, minute, second, temperature, pressure, altitude, humidity, pm10, pm25);
if (external_MQTT_PIM_send_MQTT_PSM_PORT_mqtt_send_psm_listener != 0x0) external_MQTT_PIM_send_MQTT_PSM_PORT_mqtt_send_psm_listener(_instance, latitude, longitude, year, month, date, hour, minute, second, temperature, pressure, altitude, humidity, pm10, pm25);
;
}



/*****************************************************************************
 * Implementation for type : LED_PSM
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void LED_PSM_behavior_OnExit(int state, struct LED_PSM_Instance *_instance);
//Prototypes: Message Sending
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void LED_PSM_behavior_OnEntry(int state, struct LED_PSM_Instance *_instance) {
switch(state) {
case LED_PSM_BEHAVIOR_STATE:{
_instance->LED_PSM_behavior_State = LED_PSM_BEHAVIOR_RUNNING_STATE;
LED_PSM_behavior_OnEntry(_instance->LED_PSM_behavior_State, _instance);
break;
}
case LED_PSM_BEHAVIOR_RUNNING_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void LED_PSM_behavior_OnExit(int state, struct LED_PSM_Instance *_instance) {
switch(state) {
case LED_PSM_BEHAVIOR_STATE:{
LED_PSM_behavior_OnExit(_instance->LED_PSM_behavior_State, _instance);
break;}
case LED_PSM_BEHAVIOR_RUNNING_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void LED_PSM_handle_LED_PSM_PORT_turn_on_psm(struct LED_PSM_Instance *_instance, uint8_t value) {
if(!(_instance->active)) return;
//Region behavior
uint8_t LED_PSM_behavior_State_event_consumed = 0;
if (_instance->LED_PSM_behavior_State == LED_PSM_BEHAVIOR_RUNNING_STATE) {
if (LED_PSM_behavior_State_event_consumed == 0 && 1) {
digitalWrite(_instance->LED_PSM_PIN_var, value);
LED_PSM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}
void LED_PSM_handle_LED_PSM_PORT_turn_off_psm(struct LED_PSM_Instance *_instance, uint8_t value) {
if(!(_instance->active)) return;
//Region behavior
uint8_t LED_PSM_behavior_State_event_consumed = 0;
if (_instance->LED_PSM_behavior_State == LED_PSM_BEHAVIOR_RUNNING_STATE) {
if (LED_PSM_behavior_State_event_consumed == 0 && 1) {
digitalWrite(_instance->LED_PSM_PIN_var, value);
LED_PSM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}
void LED_PSM_handle_LED_PSM_PORT_setup_psm(struct LED_PSM_Instance *_instance, uint8_t pin) {
if(!(_instance->active)) return;
//Region behavior
uint8_t LED_PSM_behavior_State_event_consumed = 0;
if (_instance->LED_PSM_behavior_State == LED_PSM_BEHAVIOR_RUNNING_STATE) {
if (LED_PSM_behavior_State_event_consumed == 0 && 1) {
Serial.print(("LED 2 -"));
pinMode(_instance->LED_PSM_PIN_var, OUTPUT);
LED_PSM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}

// Observers for outgoing messages:



/*****************************************************************************
 * Implementation for type : BME280_PSM
 *****************************************************************************/


// BEGIN: Code from the c_global annotation BME280_PSM

// assign the ESP8266 pins to arduino pins
#define D1 5
#define D2 4
#define D4 2
#define D3 0

// assign the SPI bus to pins
#define BME_SCK D1
#define BME_MISO D4
#define BME_MOSI D2
#define BME_CS D3
Adafruit_BME280 bme(BME_CS, BME_MOSI, BME_MISO, BME_SCK); // software SPI
#define SEALEVELPRESSURE_HPA (1013.25)

// END: Code from the c_global annotation BME280_PSM

// Declaration of prototypes:
//Prototypes: State Machine
void BME280_PSM_behavior_OnExit(int state, struct BME280_PSM_Instance *_instance);
//Prototypes: Message Sending
void BME280_PSM_send_BME280_PSM_PORT_bme280_THP_psm(struct BME280_PSM_Instance *_instance, int16_t temperature, int16_t pressure, int16_t altitude, int16_t humidity);
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void BME280_PSM_behavior_OnEntry(int state, struct BME280_PSM_Instance *_instance) {
switch(state) {
case BME280_PSM_BEHAVIOR_STATE:{
_instance->BME280_PSM_behavior_State = BME280_PSM_BEHAVIOR_RUNNING_STATE;
BME280_PSM_behavior_OnEntry(_instance->BME280_PSM_behavior_State, _instance);
break;
}
case BME280_PSM_BEHAVIOR_RUNNING_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void BME280_PSM_behavior_OnExit(int state, struct BME280_PSM_Instance *_instance) {
switch(state) {
case BME280_PSM_BEHAVIOR_STATE:{
BME280_PSM_behavior_OnExit(_instance->BME280_PSM_behavior_State, _instance);
break;}
case BME280_PSM_BEHAVIOR_RUNNING_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void BME280_PSM_handle_BME280_PSM_PORT_bme280_mesure_psm(struct BME280_PSM_Instance *_instance) {
if(!(_instance->active)) return;
//Region behavior
uint8_t BME280_PSM_behavior_State_event_consumed = 0;
if (_instance->BME280_PSM_behavior_State == BME280_PSM_BEHAVIOR_RUNNING_STATE) {
if (BME280_PSM_behavior_State_event_consumed == 0 && 1) {
Serial.print(("BME 5 -"));
_instance->BME280_PSM_behavior_Running_temperature_var = bme.readTemperature();;
_instance->BME280_PSM_behavior_Running_pressure_var = (bme.readPressure() / 100.0F);;
_instance->BME280_PSM_behavior_Running_altitude_var = bme.readAltitude(SEALEVELPRESSURE_HPA);;
_instance->BME280_PSM_behavior_Running_humidity_var = bme.readHumidity();;
BME280_PSM_send_BME280_PSM_PORT_bme280_THP_psm(_instance, _instance->BME280_PSM_behavior_Running_temperature_var, _instance->BME280_PSM_behavior_Running_pressure_var, _instance->BME280_PSM_behavior_Running_altitude_var, _instance->BME280_PSM_behavior_Running_humidity_var);
BME280_PSM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}
void BME280_PSM_handle_BME280_PSM_PORT_bme280_setup_psm(struct BME280_PSM_Instance *_instance) {
if(!(_instance->active)) return;
//Region behavior
uint8_t BME280_PSM_behavior_State_event_consumed = 0;
if (_instance->BME280_PSM_behavior_State == BME280_PSM_BEHAVIOR_RUNNING_STATE) {
if (BME280_PSM_behavior_State_event_consumed == 0 && 1) {
Serial.print(("BME 2 -"));
bool status;
			    
			    // default settings
			    status = bme.begin();
			    if (!status) {
			        Serial.println("Could not find a valid BME280 sensor, check wiring!");
			        while (1);
			    }
BME280_PSM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}

// Observers for outgoing messages:
void (*external_BME280_PSM_send_BME280_PSM_PORT_bme280_THP_psm_listener)(struct BME280_PSM_Instance *, int16_t, int16_t, int16_t, int16_t)= 0x0;
void (*BME280_PSM_send_BME280_PSM_PORT_bme280_THP_psm_listener)(struct BME280_PSM_Instance *, int16_t, int16_t, int16_t, int16_t)= 0x0;
void register_external_BME280_PSM_send_BME280_PSM_PORT_bme280_THP_psm_listener(void (*_listener)(struct BME280_PSM_Instance *, int16_t, int16_t, int16_t, int16_t)){
external_BME280_PSM_send_BME280_PSM_PORT_bme280_THP_psm_listener = _listener;
}
void register_BME280_PSM_send_BME280_PSM_PORT_bme280_THP_psm_listener(void (*_listener)(struct BME280_PSM_Instance *, int16_t, int16_t, int16_t, int16_t)){
BME280_PSM_send_BME280_PSM_PORT_bme280_THP_psm_listener = _listener;
}
void BME280_PSM_send_BME280_PSM_PORT_bme280_THP_psm(struct BME280_PSM_Instance *_instance, int16_t temperature, int16_t pressure, int16_t altitude, int16_t humidity){
if (BME280_PSM_send_BME280_PSM_PORT_bme280_THP_psm_listener != 0x0) BME280_PSM_send_BME280_PSM_PORT_bme280_THP_psm_listener(_instance, temperature, pressure, altitude, humidity);
if (external_BME280_PSM_send_BME280_PSM_PORT_bme280_THP_psm_listener != 0x0) external_BME280_PSM_send_BME280_PSM_PORT_bme280_THP_psm_listener(_instance, temperature, pressure, altitude, humidity);
;
}



/*****************************************************************************
 * Implementation for type : BME280_PIM
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void BME280_PIM_behavior_OnExit(int state, struct BME280_PIM_Instance *_instance);
//Prototypes: Message Sending
void BME280_PIM_send_BME280_PSM_PORT_bme280_setup_psm(struct BME280_PIM_Instance *_instance);
void BME280_PIM_send_BME280_PSM_PORT_bme280_mesure_psm(struct BME280_PIM_Instance *_instance);
void BME280_PIM_send_BME280_PIM_PORT_bme280_THP_pim(struct BME280_PIM_Instance *_instance, int16_t temperature, int16_t pressure, int16_t altitude, int16_t humidity);
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void BME280_PIM_behavior_OnEntry(int state, struct BME280_PIM_Instance *_instance) {
switch(state) {
case BME280_PIM_BEHAVIOR_STATE:{
_instance->BME280_PIM_behavior_State = BME280_PIM_BEHAVIOR_SETUP_STATE;
BME280_PIM_behavior_OnEntry(_instance->BME280_PIM_behavior_State, _instance);
break;
}
case BME280_PIM_BEHAVIOR_SETUP_STATE:{
break;
}
case BME280_PIM_BEHAVIOR_MEASURE_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void BME280_PIM_behavior_OnExit(int state, struct BME280_PIM_Instance *_instance) {
switch(state) {
case BME280_PIM_BEHAVIOR_STATE:{
BME280_PIM_behavior_OnExit(_instance->BME280_PIM_behavior_State, _instance);
break;}
case BME280_PIM_BEHAVIOR_SETUP_STATE:{
break;}
case BME280_PIM_BEHAVIOR_MEASURE_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void BME280_PIM_handle_BME280_PIM_PORT_bme280_mesure_pim(struct BME280_PIM_Instance *_instance) {
if(!(_instance->active)) return;
//Region behavior
uint8_t BME280_PIM_behavior_State_event_consumed = 0;
if (_instance->BME280_PIM_behavior_State == BME280_PIM_BEHAVIOR_MEASURE_STATE) {
if (BME280_PIM_behavior_State_event_consumed == 0 && 1) {
Serial.print(("BME 4 -"));
BME280_PIM_send_BME280_PSM_PORT_bme280_mesure_psm(_instance);
BME280_PIM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}
void BME280_PIM_handle_BME280_PIM_PORT_bme280_setup_pim(struct BME280_PIM_Instance *_instance) {
if(!(_instance->active)) return;
//Region behavior
uint8_t BME280_PIM_behavior_State_event_consumed = 0;
if (_instance->BME280_PIM_behavior_State == BME280_PIM_BEHAVIOR_SETUP_STATE) {
if (BME280_PIM_behavior_State_event_consumed == 0 && 1) {
BME280_PIM_behavior_OnExit(BME280_PIM_BEHAVIOR_SETUP_STATE, _instance);
_instance->BME280_PIM_behavior_State = BME280_PIM_BEHAVIOR_MEASURE_STATE;
Serial.print(("BME 1 -"));
BME280_PIM_send_BME280_PSM_PORT_bme280_setup_psm(_instance);
BME280_PIM_behavior_OnEntry(BME280_PIM_BEHAVIOR_MEASURE_STATE, _instance);
BME280_PIM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}
void BME280_PIM_handle_BME280_PSM_PORT_bme280_THP_psm(struct BME280_PIM_Instance *_instance, int16_t temperature, int16_t pressure, int16_t altitude, int16_t humidity) {
if(!(_instance->active)) return;
//Region behavior
uint8_t BME280_PIM_behavior_State_event_consumed = 0;
if (_instance->BME280_PIM_behavior_State == BME280_PIM_BEHAVIOR_MEASURE_STATE) {
if (BME280_PIM_behavior_State_event_consumed == 0 && 1) {
BME280_PIM_send_BME280_PIM_PORT_bme280_THP_pim(_instance, temperature, pressure, altitude, humidity);
BME280_PIM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}

// Observers for outgoing messages:
void (*external_BME280_PIM_send_BME280_PSM_PORT_bme280_setup_psm_listener)(struct BME280_PIM_Instance *)= 0x0;
void (*BME280_PIM_send_BME280_PSM_PORT_bme280_setup_psm_listener)(struct BME280_PIM_Instance *)= 0x0;
void register_external_BME280_PIM_send_BME280_PSM_PORT_bme280_setup_psm_listener(void (*_listener)(struct BME280_PIM_Instance *)){
external_BME280_PIM_send_BME280_PSM_PORT_bme280_setup_psm_listener = _listener;
}
void register_BME280_PIM_send_BME280_PSM_PORT_bme280_setup_psm_listener(void (*_listener)(struct BME280_PIM_Instance *)){
BME280_PIM_send_BME280_PSM_PORT_bme280_setup_psm_listener = _listener;
}
void BME280_PIM_send_BME280_PSM_PORT_bme280_setup_psm(struct BME280_PIM_Instance *_instance){
if (BME280_PIM_send_BME280_PSM_PORT_bme280_setup_psm_listener != 0x0) BME280_PIM_send_BME280_PSM_PORT_bme280_setup_psm_listener(_instance);
if (external_BME280_PIM_send_BME280_PSM_PORT_bme280_setup_psm_listener != 0x0) external_BME280_PIM_send_BME280_PSM_PORT_bme280_setup_psm_listener(_instance);
;
}
void (*external_BME280_PIM_send_BME280_PSM_PORT_bme280_mesure_psm_listener)(struct BME280_PIM_Instance *)= 0x0;
void (*BME280_PIM_send_BME280_PSM_PORT_bme280_mesure_psm_listener)(struct BME280_PIM_Instance *)= 0x0;
void register_external_BME280_PIM_send_BME280_PSM_PORT_bme280_mesure_psm_listener(void (*_listener)(struct BME280_PIM_Instance *)){
external_BME280_PIM_send_BME280_PSM_PORT_bme280_mesure_psm_listener = _listener;
}
void register_BME280_PIM_send_BME280_PSM_PORT_bme280_mesure_psm_listener(void (*_listener)(struct BME280_PIM_Instance *)){
BME280_PIM_send_BME280_PSM_PORT_bme280_mesure_psm_listener = _listener;
}
void BME280_PIM_send_BME280_PSM_PORT_bme280_mesure_psm(struct BME280_PIM_Instance *_instance){
if (BME280_PIM_send_BME280_PSM_PORT_bme280_mesure_psm_listener != 0x0) BME280_PIM_send_BME280_PSM_PORT_bme280_mesure_psm_listener(_instance);
if (external_BME280_PIM_send_BME280_PSM_PORT_bme280_mesure_psm_listener != 0x0) external_BME280_PIM_send_BME280_PSM_PORT_bme280_mesure_psm_listener(_instance);
;
}
void (*external_BME280_PIM_send_BME280_PIM_PORT_bme280_THP_pim_listener)(struct BME280_PIM_Instance *, int16_t, int16_t, int16_t, int16_t)= 0x0;
void (*BME280_PIM_send_BME280_PIM_PORT_bme280_THP_pim_listener)(struct BME280_PIM_Instance *, int16_t, int16_t, int16_t, int16_t)= 0x0;
void register_external_BME280_PIM_send_BME280_PIM_PORT_bme280_THP_pim_listener(void (*_listener)(struct BME280_PIM_Instance *, int16_t, int16_t, int16_t, int16_t)){
external_BME280_PIM_send_BME280_PIM_PORT_bme280_THP_pim_listener = _listener;
}
void register_BME280_PIM_send_BME280_PIM_PORT_bme280_THP_pim_listener(void (*_listener)(struct BME280_PIM_Instance *, int16_t, int16_t, int16_t, int16_t)){
BME280_PIM_send_BME280_PIM_PORT_bme280_THP_pim_listener = _listener;
}
void BME280_PIM_send_BME280_PIM_PORT_bme280_THP_pim(struct BME280_PIM_Instance *_instance, int16_t temperature, int16_t pressure, int16_t altitude, int16_t humidity){
if (BME280_PIM_send_BME280_PIM_PORT_bme280_THP_pim_listener != 0x0) BME280_PIM_send_BME280_PIM_PORT_bme280_THP_pim_listener(_instance, temperature, pressure, altitude, humidity);
if (external_BME280_PIM_send_BME280_PIM_PORT_bme280_THP_pim_listener != 0x0) external_BME280_PIM_send_BME280_PIM_PORT_bme280_THP_pim_listener(_instance, temperature, pressure, altitude, humidity);
;
}




#define MAX_INSTANCES 20
#define FIFO_SIZE 256

/*********************************
 * Instance IDs and lookup
 *********************************/

void * instances[MAX_INSTANCES];
uint16_t instances_count = 0;

void * instance_by_id(uint16_t id) {
  return instances[id];
}

uint16_t add_instance(void * instance_struct) {
  instances[instances_count] = instance_struct;
  return instances_count++;
}

/******************************************
 * Simple byte FIFO implementation
 ******************************************/

byte fifo[FIFO_SIZE];
int fifo_head = 0;
int fifo_tail = 0;

// Returns the number of byte currently in the fifo
int fifo_byte_length() {
  if (fifo_tail >= fifo_head)
    return fifo_tail - fifo_head;
  return fifo_tail + FIFO_SIZE - fifo_head;
}

// Returns the number of bytes currently available in the fifo
int fifo_byte_available() {
  return FIFO_SIZE - 1 - fifo_byte_length();
}

// Returns true if the fifo is empty
int fifo_empty() {
  return fifo_head == fifo_tail;
}

// Return true if the fifo is full
int fifo_full() {
  return fifo_head == ((fifo_tail + 1) % FIFO_SIZE);
}

// Enqueue 1 byte in the fifo if there is space
// returns 1 for sucess and 0 if the fifo was full
int fifo_enqueue(byte b) {
  int new_tail = (fifo_tail + 1) % FIFO_SIZE;
  if (new_tail == fifo_head) return 0; // the fifo is full
  fifo[fifo_tail] = b;
  fifo_tail = new_tail;
  return 1;
}

// Enqueue 1 byte in the fifo without checking for available space
// The caller should have checked that there is enough space
int _fifo_enqueue(byte b) {
  fifo[fifo_tail] = b;
  fifo_tail = (fifo_tail + 1) % FIFO_SIZE;
  return 0; // Dummy added by steffend
}

// Dequeue 1 byte in the fifo.
// The caller should check that the fifo is not empty
byte fifo_dequeue() {
  if (!fifo_empty()) {
    byte result = fifo[fifo_head];
    fifo_head = (fifo_head + 1) % FIFO_SIZE;
    return result;
  }
  return 0;
}

/*****************************************************************************
 * Implementation for type : APP_1_PIM
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void APP_1_PIM_behavior_OnExit(int state, struct APP_1_PIM_Instance *_instance);
//Prototypes: Message Sending
void APP_1_PIM_send_LED_PIM_PORT_setup_pim(struct APP_1_PIM_Instance *_instance);
void APP_1_PIM_send_LED_PIM_PORT_turn_on_pim(struct APP_1_PIM_Instance *_instance, uint8_t value);
void APP_1_PIM_send_LED_PIM_PORT_turn_off_pim(struct APP_1_PIM_Instance *_instance, uint8_t value);
void APP_1_PIM_send_GPS_PIM_PORT_gps_setup_pim(struct APP_1_PIM_Instance *_instance);
void APP_1_PIM_send_GPS_PIM_PORT_gps_mesure_pim(struct APP_1_PIM_Instance *_instance);
void APP_1_PIM_send_SDS_PIM_PORT_sds_setup_pim(struct APP_1_PIM_Instance *_instance);
void APP_1_PIM_send_SDS_PIM_PORT_sds_mesure_pim(struct APP_1_PIM_Instance *_instance);
void APP_1_PIM_send_BME280_PIM_PORT_bme280_setup_pim(struct APP_1_PIM_Instance *_instance);
void APP_1_PIM_send_BME280_PIM_PORT_bme280_mesure_pim(struct APP_1_PIM_Instance *_instance);
void APP_1_PIM_send_MQTT_PIM_PORT_mqtt_setup_pim(struct APP_1_PIM_Instance *_instance);
void APP_1_PIM_send_MQTT_PIM_PORT_mqtt_send_pim(struct APP_1_PIM_Instance *_instance, float latitude, float longitude, int16_t year, int16_t month, int16_t date, int16_t hour, int16_t minute, int16_t second, int16_t temperature, int16_t pressure, int16_t altitude, int16_t humidity, int16_t pm10, int16_t pm25);
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void APP_1_PIM_behavior_OnEntry(int state, struct APP_1_PIM_Instance *_instance) {
switch(state) {
case APP_1_PIM_BEHAVIOR_STATE:{
_instance->APP_1_PIM_behavior_State = APP_1_PIM_BEHAVIOR_STATION_SETUP_STATE;
APP_1_PIM_behavior_OnEntry(_instance->APP_1_PIM_behavior_State, _instance);
break;
}
case APP_1_PIM_BEHAVIOR_STATION_SETUP_STATE:{
Serial.print(("*********************************************"));
Serial.print(("LED 0 -"));
APP_1_PIM_send_LED_PIM_PORT_setup_pim(_instance);
Serial.print(("BME 0 -"));
APP_1_PIM_send_BME280_PIM_PORT_bme280_setup_pim(_instance);
Serial.print(("SDS 0 -"));
APP_1_PIM_send_SDS_PIM_PORT_sds_setup_pim(_instance);
Serial.print(("GPS 0 -"));
APP_1_PIM_send_GPS_PIM_PORT_gps_setup_pim(_instance);
Serial.print(("MQTT 0 -"));
APP_1_PIM_send_MQTT_PIM_PORT_mqtt_setup_pim(_instance);
break;
}
case APP_1_PIM_BEHAVIOR_STATE_BME280_MEASURE_STATE:{
Serial.print(("BME 3 -"));
APP_1_PIM_send_BME280_PIM_PORT_bme280_mesure_pim(_instance);
break;
}
case APP_1_PIM_BEHAVIOR_STATE_SDS_MEASURE_STATE:{
Serial.print(("SDS 3 -"));
APP_1_PIM_send_SDS_PIM_PORT_sds_mesure_pim(_instance);
break;
}
case APP_1_PIM_BEHAVIOR_STATE_GPS_MEASURE_STATE:{
Serial.print(("GPS 3 -"));
APP_1_PIM_send_GPS_PIM_PORT_gps_mesure_pim(_instance);
break;
}
case APP_1_PIM_BEHAVIOR_STATE_SEND_STATE:{
Serial.print(("MQTT 3 -"));
APP_1_PIM_send_MQTT_PIM_PORT_mqtt_send_pim(_instance, _instance->APP_1_PIM_latitude_var, _instance->APP_1_PIM_longitude_var, _instance->APP_1_PIM_year_var, _instance->APP_1_PIM_month_var, _instance->APP_1_PIM_date_var, _instance->APP_1_PIM_hour_var, _instance->APP_1_PIM_minute_var, _instance->APP_1_PIM_second_var, _instance->APP_1_PIM_temperature_var, _instance->APP_1_PIM_pressure_var, _instance->APP_1_PIM_altitude_var, _instance->APP_1_PIM_humidity_var, _instance->APP_1_PIM_pm10_var, _instance->APP_1_PIM_pm25_var);
break;
}
default: break;
}
}

// On Exit Actions:
void APP_1_PIM_behavior_OnExit(int state, struct APP_1_PIM_Instance *_instance) {
switch(state) {
case APP_1_PIM_BEHAVIOR_STATE:{
APP_1_PIM_behavior_OnExit(_instance->APP_1_PIM_behavior_State, _instance);
break;}
case APP_1_PIM_BEHAVIOR_STATION_SETUP_STATE:{
break;}
case APP_1_PIM_BEHAVIOR_STATE_BME280_MEASURE_STATE:{
break;}
case APP_1_PIM_BEHAVIOR_STATE_SDS_MEASURE_STATE:{
break;}
case APP_1_PIM_BEHAVIOR_STATE_GPS_MEASURE_STATE:{
break;}
case APP_1_PIM_BEHAVIOR_STATE_SEND_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void APP_1_PIM_handle_SDS_PIM_PORT_sds_pm_pim(struct APP_1_PIM_Instance *_instance, int16_t pm10, int16_t pm25) {
if(!(_instance->active)) return;
//Region behavior
uint8_t APP_1_PIM_behavior_State_event_consumed = 0;
if (_instance->APP_1_PIM_behavior_State == APP_1_PIM_BEHAVIOR_STATE_SDS_MEASURE_STATE) {
if (APP_1_PIM_behavior_State_event_consumed == 0 && 1) {
Serial.print(("SDS 6 -"));
_instance->APP_1_PIM_pm10_var = pm10;
_instance->APP_1_PIM_pm25_var = pm25;
APP_1_PIM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}
void APP_1_PIM_handle_GPS_PIM_PORT_gps_location_time_pim(struct APP_1_PIM_Instance *_instance, float latitude, float longitude, int16_t year, int16_t month, int16_t date, int16_t hour, int16_t minute, int16_t second) {
if(!(_instance->active)) return;
//Region behavior
uint8_t APP_1_PIM_behavior_State_event_consumed = 0;
if (_instance->APP_1_PIM_behavior_State == APP_1_PIM_BEHAVIOR_STATE_GPS_MEASURE_STATE) {
if (APP_1_PIM_behavior_State_event_consumed == 0 && 1) {
APP_1_PIM_behavior_OnExit(APP_1_PIM_BEHAVIOR_STATE_GPS_MEASURE_STATE, _instance);
_instance->APP_1_PIM_behavior_State = APP_1_PIM_BEHAVIOR_STATE_SEND_STATE;
Serial.print(("GPS 6 -"));
_instance->APP_1_PIM_latitude_var = latitude;
_instance->APP_1_PIM_longitude_var = longitude;
_instance->APP_1_PIM_year_var = year;
_instance->APP_1_PIM_month_var = month;
_instance->APP_1_PIM_date_var = date;
_instance->APP_1_PIM_hour_var = hour;
_instance->APP_1_PIM_minute_var = minute;
_instance->APP_1_PIM_second_var = second;
APP_1_PIM_behavior_OnEntry(APP_1_PIM_BEHAVIOR_STATE_SEND_STATE, _instance);
APP_1_PIM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}
void APP_1_PIM_handle_MQTT_PIM_PORT_JAVA_DECISION_pim(struct APP_1_PIM_Instance *_instance, int16_t thestate) {
if(!(_instance->active)) return;
//Region behavior
uint8_t APP_1_PIM_behavior_State_event_consumed = 0;
if (_instance->APP_1_PIM_behavior_State == APP_1_PIM_BEHAVIOR_STATE_SEND_STATE) {
if (APP_1_PIM_behavior_State_event_consumed == 0 && 1) {
APP_1_PIM_behavior_OnExit(APP_1_PIM_BEHAVIOR_STATE_SEND_STATE, _instance);
_instance->APP_1_PIM_behavior_State = APP_1_PIM_BEHAVIOR_STATE_BME280_MEASURE_STATE;
Serial.print(("MQTT 10 -"));
if(thestate == 1) {
APP_1_PIM_send_LED_PIM_PORT_turn_on_pim(_instance, HIGH);

}
if(thestate == 0) {
APP_1_PIM_send_LED_PIM_PORT_turn_off_pim(_instance, LOW);

}
APP_1_PIM_behavior_OnEntry(APP_1_PIM_BEHAVIOR_STATE_BME280_MEASURE_STATE, _instance);
APP_1_PIM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}
void APP_1_PIM_handle_BME280_PIM_PORT_bme280_THP_pim(struct APP_1_PIM_Instance *_instance, int16_t temperature, int16_t pressure, int16_t altitude, int16_t humidity) {
if(!(_instance->active)) return;
//Region behavior
uint8_t APP_1_PIM_behavior_State_event_consumed = 0;
if (_instance->APP_1_PIM_behavior_State == APP_1_PIM_BEHAVIOR_STATE_BME280_MEASURE_STATE) {
if (APP_1_PIM_behavior_State_event_consumed == 0 && 1) {
APP_1_PIM_behavior_OnExit(APP_1_PIM_BEHAVIOR_STATE_BME280_MEASURE_STATE, _instance);
_instance->APP_1_PIM_behavior_State = APP_1_PIM_BEHAVIOR_STATE_SDS_MEASURE_STATE;
Serial.print(("BME 6 -"));
_instance->APP_1_PIM_temperature_var = temperature;
_instance->APP_1_PIM_pressure_var = pressure;
_instance->APP_1_PIM_altitude_var = altitude;
_instance->APP_1_PIM_humidity_var = humidity;
APP_1_PIM_behavior_OnEntry(APP_1_PIM_BEHAVIOR_STATE_SDS_MEASURE_STATE, _instance);
APP_1_PIM_behavior_State_event_consumed = 1;
}
}
//End Region behavior
//End dsregion behavior
//Session list: 
}
int APP_1_PIM_handle_empty_event(struct APP_1_PIM_Instance *_instance) {
 uint8_t empty_event_consumed = 0;
if(!(_instance->active)) return 0;
//Region behavior
if (_instance->APP_1_PIM_behavior_State == APP_1_PIM_BEHAVIOR_STATION_SETUP_STATE) {
if (1) {
APP_1_PIM_behavior_OnExit(APP_1_PIM_BEHAVIOR_STATION_SETUP_STATE, _instance);
_instance->APP_1_PIM_behavior_State = APP_1_PIM_BEHAVIOR_STATE_BME280_MEASURE_STATE;
APP_1_PIM_behavior_OnEntry(APP_1_PIM_BEHAVIOR_STATE_BME280_MEASURE_STATE, _instance);
return 1;
}
}
else if (_instance->APP_1_PIM_behavior_State == APP_1_PIM_BEHAVIOR_STATE_SDS_MEASURE_STATE) {
if (1) {
APP_1_PIM_behavior_OnExit(APP_1_PIM_BEHAVIOR_STATE_SDS_MEASURE_STATE, _instance);
_instance->APP_1_PIM_behavior_State = APP_1_PIM_BEHAVIOR_STATE_GPS_MEASURE_STATE;
APP_1_PIM_behavior_OnEntry(APP_1_PIM_BEHAVIOR_STATE_GPS_MEASURE_STATE, _instance);
return 1;
}
}
//begin dispatchEmptyToSession
//end dispatchEmptyToSession
return empty_event_consumed;
}

// Observers for outgoing messages:
void (*external_APP_1_PIM_send_LED_PIM_PORT_setup_pim_listener)(struct APP_1_PIM_Instance *)= 0x0;
void (*APP_1_PIM_send_LED_PIM_PORT_setup_pim_listener)(struct APP_1_PIM_Instance *)= 0x0;
void register_external_APP_1_PIM_send_LED_PIM_PORT_setup_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *)){
external_APP_1_PIM_send_LED_PIM_PORT_setup_pim_listener = _listener;
}
void register_APP_1_PIM_send_LED_PIM_PORT_setup_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *)){
APP_1_PIM_send_LED_PIM_PORT_setup_pim_listener = _listener;
}
void APP_1_PIM_send_LED_PIM_PORT_setup_pim(struct APP_1_PIM_Instance *_instance){
if (APP_1_PIM_send_LED_PIM_PORT_setup_pim_listener != 0x0) APP_1_PIM_send_LED_PIM_PORT_setup_pim_listener(_instance);
if (external_APP_1_PIM_send_LED_PIM_PORT_setup_pim_listener != 0x0) external_APP_1_PIM_send_LED_PIM_PORT_setup_pim_listener(_instance);
;
}
void (*external_APP_1_PIM_send_LED_PIM_PORT_turn_on_pim_listener)(struct APP_1_PIM_Instance *, uint8_t)= 0x0;
void (*APP_1_PIM_send_LED_PIM_PORT_turn_on_pim_listener)(struct APP_1_PIM_Instance *, uint8_t)= 0x0;
void register_external_APP_1_PIM_send_LED_PIM_PORT_turn_on_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *, uint8_t)){
external_APP_1_PIM_send_LED_PIM_PORT_turn_on_pim_listener = _listener;
}
void register_APP_1_PIM_send_LED_PIM_PORT_turn_on_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *, uint8_t)){
APP_1_PIM_send_LED_PIM_PORT_turn_on_pim_listener = _listener;
}
void APP_1_PIM_send_LED_PIM_PORT_turn_on_pim(struct APP_1_PIM_Instance *_instance, uint8_t value){
if (APP_1_PIM_send_LED_PIM_PORT_turn_on_pim_listener != 0x0) APP_1_PIM_send_LED_PIM_PORT_turn_on_pim_listener(_instance, value);
if (external_APP_1_PIM_send_LED_PIM_PORT_turn_on_pim_listener != 0x0) external_APP_1_PIM_send_LED_PIM_PORT_turn_on_pim_listener(_instance, value);
;
}
void (*external_APP_1_PIM_send_LED_PIM_PORT_turn_off_pim_listener)(struct APP_1_PIM_Instance *, uint8_t)= 0x0;
void (*APP_1_PIM_send_LED_PIM_PORT_turn_off_pim_listener)(struct APP_1_PIM_Instance *, uint8_t)= 0x0;
void register_external_APP_1_PIM_send_LED_PIM_PORT_turn_off_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *, uint8_t)){
external_APP_1_PIM_send_LED_PIM_PORT_turn_off_pim_listener = _listener;
}
void register_APP_1_PIM_send_LED_PIM_PORT_turn_off_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *, uint8_t)){
APP_1_PIM_send_LED_PIM_PORT_turn_off_pim_listener = _listener;
}
void APP_1_PIM_send_LED_PIM_PORT_turn_off_pim(struct APP_1_PIM_Instance *_instance, uint8_t value){
if (APP_1_PIM_send_LED_PIM_PORT_turn_off_pim_listener != 0x0) APP_1_PIM_send_LED_PIM_PORT_turn_off_pim_listener(_instance, value);
if (external_APP_1_PIM_send_LED_PIM_PORT_turn_off_pim_listener != 0x0) external_APP_1_PIM_send_LED_PIM_PORT_turn_off_pim_listener(_instance, value);
;
}
void (*external_APP_1_PIM_send_GPS_PIM_PORT_gps_setup_pim_listener)(struct APP_1_PIM_Instance *)= 0x0;
void (*APP_1_PIM_send_GPS_PIM_PORT_gps_setup_pim_listener)(struct APP_1_PIM_Instance *)= 0x0;
void register_external_APP_1_PIM_send_GPS_PIM_PORT_gps_setup_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *)){
external_APP_1_PIM_send_GPS_PIM_PORT_gps_setup_pim_listener = _listener;
}
void register_APP_1_PIM_send_GPS_PIM_PORT_gps_setup_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *)){
APP_1_PIM_send_GPS_PIM_PORT_gps_setup_pim_listener = _listener;
}
void APP_1_PIM_send_GPS_PIM_PORT_gps_setup_pim(struct APP_1_PIM_Instance *_instance){
if (APP_1_PIM_send_GPS_PIM_PORT_gps_setup_pim_listener != 0x0) APP_1_PIM_send_GPS_PIM_PORT_gps_setup_pim_listener(_instance);
if (external_APP_1_PIM_send_GPS_PIM_PORT_gps_setup_pim_listener != 0x0) external_APP_1_PIM_send_GPS_PIM_PORT_gps_setup_pim_listener(_instance);
;
}
void (*external_APP_1_PIM_send_GPS_PIM_PORT_gps_mesure_pim_listener)(struct APP_1_PIM_Instance *)= 0x0;
void (*APP_1_PIM_send_GPS_PIM_PORT_gps_mesure_pim_listener)(struct APP_1_PIM_Instance *)= 0x0;
void register_external_APP_1_PIM_send_GPS_PIM_PORT_gps_mesure_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *)){
external_APP_1_PIM_send_GPS_PIM_PORT_gps_mesure_pim_listener = _listener;
}
void register_APP_1_PIM_send_GPS_PIM_PORT_gps_mesure_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *)){
APP_1_PIM_send_GPS_PIM_PORT_gps_mesure_pim_listener = _listener;
}
void APP_1_PIM_send_GPS_PIM_PORT_gps_mesure_pim(struct APP_1_PIM_Instance *_instance){
if (APP_1_PIM_send_GPS_PIM_PORT_gps_mesure_pim_listener != 0x0) APP_1_PIM_send_GPS_PIM_PORT_gps_mesure_pim_listener(_instance);
if (external_APP_1_PIM_send_GPS_PIM_PORT_gps_mesure_pim_listener != 0x0) external_APP_1_PIM_send_GPS_PIM_PORT_gps_mesure_pim_listener(_instance);
;
}
void (*external_APP_1_PIM_send_SDS_PIM_PORT_sds_setup_pim_listener)(struct APP_1_PIM_Instance *)= 0x0;
void (*APP_1_PIM_send_SDS_PIM_PORT_sds_setup_pim_listener)(struct APP_1_PIM_Instance *)= 0x0;
void register_external_APP_1_PIM_send_SDS_PIM_PORT_sds_setup_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *)){
external_APP_1_PIM_send_SDS_PIM_PORT_sds_setup_pim_listener = _listener;
}
void register_APP_1_PIM_send_SDS_PIM_PORT_sds_setup_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *)){
APP_1_PIM_send_SDS_PIM_PORT_sds_setup_pim_listener = _listener;
}
void APP_1_PIM_send_SDS_PIM_PORT_sds_setup_pim(struct APP_1_PIM_Instance *_instance){
if (APP_1_PIM_send_SDS_PIM_PORT_sds_setup_pim_listener != 0x0) APP_1_PIM_send_SDS_PIM_PORT_sds_setup_pim_listener(_instance);
if (external_APP_1_PIM_send_SDS_PIM_PORT_sds_setup_pim_listener != 0x0) external_APP_1_PIM_send_SDS_PIM_PORT_sds_setup_pim_listener(_instance);
;
}
void (*external_APP_1_PIM_send_SDS_PIM_PORT_sds_mesure_pim_listener)(struct APP_1_PIM_Instance *)= 0x0;
void (*APP_1_PIM_send_SDS_PIM_PORT_sds_mesure_pim_listener)(struct APP_1_PIM_Instance *)= 0x0;
void register_external_APP_1_PIM_send_SDS_PIM_PORT_sds_mesure_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *)){
external_APP_1_PIM_send_SDS_PIM_PORT_sds_mesure_pim_listener = _listener;
}
void register_APP_1_PIM_send_SDS_PIM_PORT_sds_mesure_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *)){
APP_1_PIM_send_SDS_PIM_PORT_sds_mesure_pim_listener = _listener;
}
void APP_1_PIM_send_SDS_PIM_PORT_sds_mesure_pim(struct APP_1_PIM_Instance *_instance){
if (APP_1_PIM_send_SDS_PIM_PORT_sds_mesure_pim_listener != 0x0) APP_1_PIM_send_SDS_PIM_PORT_sds_mesure_pim_listener(_instance);
if (external_APP_1_PIM_send_SDS_PIM_PORT_sds_mesure_pim_listener != 0x0) external_APP_1_PIM_send_SDS_PIM_PORT_sds_mesure_pim_listener(_instance);
;
}
void (*external_APP_1_PIM_send_BME280_PIM_PORT_bme280_setup_pim_listener)(struct APP_1_PIM_Instance *)= 0x0;
void (*APP_1_PIM_send_BME280_PIM_PORT_bme280_setup_pim_listener)(struct APP_1_PIM_Instance *)= 0x0;
void register_external_APP_1_PIM_send_BME280_PIM_PORT_bme280_setup_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *)){
external_APP_1_PIM_send_BME280_PIM_PORT_bme280_setup_pim_listener = _listener;
}
void register_APP_1_PIM_send_BME280_PIM_PORT_bme280_setup_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *)){
APP_1_PIM_send_BME280_PIM_PORT_bme280_setup_pim_listener = _listener;
}
void APP_1_PIM_send_BME280_PIM_PORT_bme280_setup_pim(struct APP_1_PIM_Instance *_instance){
if (APP_1_PIM_send_BME280_PIM_PORT_bme280_setup_pim_listener != 0x0) APP_1_PIM_send_BME280_PIM_PORT_bme280_setup_pim_listener(_instance);
if (external_APP_1_PIM_send_BME280_PIM_PORT_bme280_setup_pim_listener != 0x0) external_APP_1_PIM_send_BME280_PIM_PORT_bme280_setup_pim_listener(_instance);
;
}
void (*external_APP_1_PIM_send_BME280_PIM_PORT_bme280_mesure_pim_listener)(struct APP_1_PIM_Instance *)= 0x0;
void (*APP_1_PIM_send_BME280_PIM_PORT_bme280_mesure_pim_listener)(struct APP_1_PIM_Instance *)= 0x0;
void register_external_APP_1_PIM_send_BME280_PIM_PORT_bme280_mesure_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *)){
external_APP_1_PIM_send_BME280_PIM_PORT_bme280_mesure_pim_listener = _listener;
}
void register_APP_1_PIM_send_BME280_PIM_PORT_bme280_mesure_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *)){
APP_1_PIM_send_BME280_PIM_PORT_bme280_mesure_pim_listener = _listener;
}
void APP_1_PIM_send_BME280_PIM_PORT_bme280_mesure_pim(struct APP_1_PIM_Instance *_instance){
if (APP_1_PIM_send_BME280_PIM_PORT_bme280_mesure_pim_listener != 0x0) APP_1_PIM_send_BME280_PIM_PORT_bme280_mesure_pim_listener(_instance);
if (external_APP_1_PIM_send_BME280_PIM_PORT_bme280_mesure_pim_listener != 0x0) external_APP_1_PIM_send_BME280_PIM_PORT_bme280_mesure_pim_listener(_instance);
;
}
void (*external_APP_1_PIM_send_MQTT_PIM_PORT_mqtt_setup_pim_listener)(struct APP_1_PIM_Instance *)= 0x0;
void (*APP_1_PIM_send_MQTT_PIM_PORT_mqtt_setup_pim_listener)(struct APP_1_PIM_Instance *)= 0x0;
void register_external_APP_1_PIM_send_MQTT_PIM_PORT_mqtt_setup_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *)){
external_APP_1_PIM_send_MQTT_PIM_PORT_mqtt_setup_pim_listener = _listener;
}
void register_APP_1_PIM_send_MQTT_PIM_PORT_mqtt_setup_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *)){
APP_1_PIM_send_MQTT_PIM_PORT_mqtt_setup_pim_listener = _listener;
}
void APP_1_PIM_send_MQTT_PIM_PORT_mqtt_setup_pim(struct APP_1_PIM_Instance *_instance){
if (APP_1_PIM_send_MQTT_PIM_PORT_mqtt_setup_pim_listener != 0x0) APP_1_PIM_send_MQTT_PIM_PORT_mqtt_setup_pim_listener(_instance);
if (external_APP_1_PIM_send_MQTT_PIM_PORT_mqtt_setup_pim_listener != 0x0) external_APP_1_PIM_send_MQTT_PIM_PORT_mqtt_setup_pim_listener(_instance);
;
}
void (*external_APP_1_PIM_send_MQTT_PIM_PORT_mqtt_send_pim_listener)(struct APP_1_PIM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t)= 0x0;
void (*APP_1_PIM_send_MQTT_PIM_PORT_mqtt_send_pim_listener)(struct APP_1_PIM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t)= 0x0;
void register_external_APP_1_PIM_send_MQTT_PIM_PORT_mqtt_send_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t)){
external_APP_1_PIM_send_MQTT_PIM_PORT_mqtt_send_pim_listener = _listener;
}
void register_APP_1_PIM_send_MQTT_PIM_PORT_mqtt_send_pim_listener(void (*_listener)(struct APP_1_PIM_Instance *, float, float, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t, int16_t)){
APP_1_PIM_send_MQTT_PIM_PORT_mqtt_send_pim_listener = _listener;
}
void APP_1_PIM_send_MQTT_PIM_PORT_mqtt_send_pim(struct APP_1_PIM_Instance *_instance, float latitude, float longitude, int16_t year, int16_t month, int16_t date, int16_t hour, int16_t minute, int16_t second, int16_t temperature, int16_t pressure, int16_t altitude, int16_t humidity, int16_t pm10, int16_t pm25){
if (APP_1_PIM_send_MQTT_PIM_PORT_mqtt_send_pim_listener != 0x0) APP_1_PIM_send_MQTT_PIM_PORT_mqtt_send_pim_listener(_instance, latitude, longitude, year, month, date, hour, minute, second, temperature, pressure, altitude, humidity, pm10, pm25);
if (external_APP_1_PIM_send_MQTT_PIM_PORT_mqtt_send_pim_listener != 0x0) external_APP_1_PIM_send_MQTT_PIM_PORT_mqtt_send_pim_listener(_instance, latitude, longitude, year, month, date, hour, minute, second, temperature, pressure, altitude, humidity, pm10, pm25);
;
}






/*****************************************************************************
 * Definitions for configuration : APP_1_PIM_Cfg
 *****************************************************************************/

//Declaration of instance variables
//Instance sds_psm
// Variables for the properties of the instance
struct SDS_PSM_Instance sds_psm_var;
// Variables for the sessions of the instance
//Instance led_pim
// Variables for the properties of the instance
struct LED_PIM_Instance led_pim_var;
// Variables for the sessions of the instance
//Instance app_1_pim
// Variables for the properties of the instance
struct APP_1_PIM_Instance app_1_pim_var;
// Variables for the sessions of the instance
//Instance gps_pim
// Variables for the properties of the instance
struct GPS_PIM_Instance gps_pim_var;
// Variables for the sessions of the instance
//Instance mqtt_pim
// Variables for the properties of the instance
struct MQTT_PIM_Instance mqtt_pim_var;
// Variables for the sessions of the instance
//Instance gps_psm
// Variables for the properties of the instance
struct GPS_PSM_Instance gps_psm_var;
// Variables for the sessions of the instance
//Instance mqtt_psm
// Variables for the properties of the instance
struct MQTT_PSM_Instance mqtt_psm_var;
// Variables for the sessions of the instance
//Instance sds_pim
// Variables for the properties of the instance
struct SDS_PIM_Instance sds_pim_var;
// Variables for the sessions of the instance
//Instance bme280_pim
// Variables for the properties of the instance
struct BME280_PIM_Instance bme280_pim_var;
// Variables for the sessions of the instance
//Instance bme280_psm
// Variables for the properties of the instance
struct BME280_PSM_Instance bme280_psm_var;
// Variables for the sessions of the instance
//Instance led_psm
// Variables for the properties of the instance
struct LED_PSM_Instance led_psm_var;
// Variables for the sessions of the instance




//New dispatcher for messages
void dispatch_gps_location_time_psm(uint16_t sender, float param_latitude, float param_longitude, int16_t param_year, int16_t param_month, int16_t param_date, int16_t param_hour, int16_t param_minute, int16_t param_second) {
if (sender == gps_psm_var.id_GPS_PSM_PORT) {
GPS_PIM_handle_GPS_PSM_PORT_gps_location_time_psm(&gps_pim_var, param_latitude, param_longitude, param_year, param_month, param_date, param_hour, param_minute, param_second);

}

}

void sync_dispatch_GPS_PSM_send_GPS_PSM_PORT_gps_location_time_psm(struct GPS_PSM_Instance *_instance, float latitude, float longitude, int16_t year, int16_t month, int16_t date, int16_t hour, int16_t minute, int16_t second){
dispatch_gps_location_time_psm(_instance->id_GPS_PSM_PORT, latitude, longitude, year, month, date, hour, minute, second);
}

//New dispatcher for messages
void dispatch_mqtt_setup_pim(uint16_t sender) {
if (sender == app_1_pim_var.id_MQTT_PIM_PORT) {
MQTT_PIM_handle_MQTT_PIM_PORT_mqtt_setup_pim(&mqtt_pim_var);

}

}

void sync_dispatch_APP_1_PIM_send_MQTT_PIM_PORT_mqtt_setup_pim(struct APP_1_PIM_Instance *_instance){
dispatch_mqtt_setup_pim(_instance->id_MQTT_PIM_PORT);
}

//New dispatcher for messages
void dispatch_bme280_mesure_psm(uint16_t sender) {
if (sender == bme280_pim_var.id_BME280_PSM_PORT) {
BME280_PSM_handle_BME280_PSM_PORT_bme280_mesure_psm(&bme280_psm_var);

}

}

void sync_dispatch_BME280_PIM_send_BME280_PSM_PORT_bme280_mesure_psm(struct BME280_PIM_Instance *_instance){
dispatch_bme280_mesure_psm(_instance->id_BME280_PSM_PORT);
}

//New dispatcher for messages
void dispatch_mqtt_setup_psm(uint16_t sender, char * param_station_id, char * param_station_owner, char * param_ssid, char * param_password, char * param_mqtt_server, int16_t param_mqtt_port, char * param_mqtt_user, char * param_mqtt_password, char * param_mqtt_clientID, char * param_mqtt_topic, uint8_t param_mqtt_qos, uint8_t param_mqtt_retain) {
if (sender == mqtt_pim_var.id_MQTT_PSM_PORT) {
MQTT_PSM_handle_MQTT_PSM_PORT_mqtt_setup_psm(&mqtt_psm_var, param_station_id, param_station_owner, param_ssid, param_password, param_mqtt_server, param_mqtt_port, param_mqtt_user, param_mqtt_password, param_mqtt_clientID, param_mqtt_topic, param_mqtt_qos, param_mqtt_retain);

}

}

void sync_dispatch_MQTT_PIM_send_MQTT_PSM_PORT_mqtt_setup_psm(struct MQTT_PIM_Instance *_instance, char * station_id, char * station_owner, char * ssid, char * password, char * mqtt_server, int16_t mqtt_port, char * mqtt_user, char * mqtt_password, char * mqtt_clientID, char * mqtt_topic, uint8_t mqtt_qos, uint8_t mqtt_retain){
dispatch_mqtt_setup_psm(_instance->id_MQTT_PSM_PORT, station_id, station_owner, ssid, password, mqtt_server, mqtt_port, mqtt_user, mqtt_password, mqtt_clientID, mqtt_topic, mqtt_qos, mqtt_retain);
}

//New dispatcher for messages
void dispatch_bme280_setup_pim(uint16_t sender) {
if (sender == app_1_pim_var.id_BME280_PIM_PORT) {
BME280_PIM_handle_BME280_PIM_PORT_bme280_setup_pim(&bme280_pim_var);

}

}

void sync_dispatch_APP_1_PIM_send_BME280_PIM_PORT_bme280_setup_pim(struct APP_1_PIM_Instance *_instance){
dispatch_bme280_setup_pim(_instance->id_BME280_PIM_PORT);
}

//New dispatcher for messages
void dispatch_turn_off_pim(uint16_t sender, uint8_t param_value) {
if (sender == app_1_pim_var.id_LED_PIM_PORT) {
LED_PIM_handle_LED_PIM_PORT_turn_off_pim(&led_pim_var, param_value);

}

}

void sync_dispatch_APP_1_PIM_send_LED_PIM_PORT_turn_off_pim(struct APP_1_PIM_Instance *_instance, uint8_t value){
dispatch_turn_off_pim(_instance->id_LED_PIM_PORT, value);
}

//New dispatcher for messages
void dispatch_gps_mesure_psm(uint16_t sender) {
if (sender == gps_pim_var.id_GPS_PSM_PORT) {
GPS_PSM_handle_GPS_PSM_PORT_gps_mesure_psm(&gps_psm_var);

}

}

void sync_dispatch_GPS_PIM_send_GPS_PSM_PORT_gps_mesure_psm(struct GPS_PIM_Instance *_instance){
dispatch_gps_mesure_psm(_instance->id_GPS_PSM_PORT);
}

//New dispatcher for messages
void dispatch_turn_on_pim(uint16_t sender, uint8_t param_value) {
if (sender == app_1_pim_var.id_LED_PIM_PORT) {
LED_PIM_handle_LED_PIM_PORT_turn_on_pim(&led_pim_var, param_value);

}

}

void sync_dispatch_APP_1_PIM_send_LED_PIM_PORT_turn_on_pim(struct APP_1_PIM_Instance *_instance, uint8_t value){
dispatch_turn_on_pim(_instance->id_LED_PIM_PORT, value);
}

//New dispatcher for messages
void dispatch_setup_pim(uint16_t sender) {
if (sender == app_1_pim_var.id_LED_PIM_PORT) {
LED_PIM_handle_LED_PIM_PORT_setup_pim(&led_pim_var);

}

}

void sync_dispatch_APP_1_PIM_send_LED_PIM_PORT_setup_pim(struct APP_1_PIM_Instance *_instance){
dispatch_setup_pim(_instance->id_LED_PIM_PORT);
}

//New dispatcher for messages
void dispatch_gps_location_time_pim(uint16_t sender, float param_latitude, float param_longitude, int16_t param_year, int16_t param_month, int16_t param_date, int16_t param_hour, int16_t param_minute, int16_t param_second) {
if (sender == gps_pim_var.id_GPS_PIM_PORT) {
APP_1_PIM_handle_GPS_PIM_PORT_gps_location_time_pim(&app_1_pim_var, param_latitude, param_longitude, param_year, param_month, param_date, param_hour, param_minute, param_second);

}

}

void sync_dispatch_GPS_PIM_send_GPS_PIM_PORT_gps_location_time_pim(struct GPS_PIM_Instance *_instance, float latitude, float longitude, int16_t year, int16_t month, int16_t date, int16_t hour, int16_t minute, int16_t second){
dispatch_gps_location_time_pim(_instance->id_GPS_PIM_PORT, latitude, longitude, year, month, date, hour, minute, second);
}

//New dispatcher for messages
void dispatch_bme280_mesure_pim(uint16_t sender) {
if (sender == app_1_pim_var.id_BME280_PIM_PORT) {
BME280_PIM_handle_BME280_PIM_PORT_bme280_mesure_pim(&bme280_pim_var);

}

}

void sync_dispatch_APP_1_PIM_send_BME280_PIM_PORT_bme280_mesure_pim(struct APP_1_PIM_Instance *_instance){
dispatch_bme280_mesure_pim(_instance->id_BME280_PIM_PORT);
}

//New dispatcher for messages
void dispatch_JAVA_DECISION_pim(uint16_t sender, int16_t param_thestate) {
if (sender == mqtt_pim_var.id_MQTT_PIM_PORT) {
APP_1_PIM_handle_MQTT_PIM_PORT_JAVA_DECISION_pim(&app_1_pim_var, param_thestate);

}

}

void sync_dispatch_MQTT_PIM_send_MQTT_PIM_PORT_JAVA_DECISION_pim(struct MQTT_PIM_Instance *_instance, int16_t thestate){
dispatch_JAVA_DECISION_pim(_instance->id_MQTT_PIM_PORT, thestate);
}

//New dispatcher for messages
void dispatch_setup_psm(uint16_t sender, uint8_t param_pin) {
if (sender == led_pim_var.id_LED_PSM_PORT) {
LED_PSM_handle_LED_PSM_PORT_setup_psm(&led_psm_var, param_pin);

}

}

void sync_dispatch_LED_PIM_send_LED_PSM_PORT_setup_psm(struct LED_PIM_Instance *_instance, uint8_t pin){
dispatch_setup_psm(_instance->id_LED_PSM_PORT, pin);
}

//New dispatcher for messages
void dispatch_sds_mesure_psm(uint16_t sender) {
if (sender == sds_pim_var.id_SDS_PSM_PORT) {
SDS_PSM_handle_SDS_PSM_PORT_sds_mesure_psm(&sds_psm_var);

}

}

void sync_dispatch_SDS_PIM_send_SDS_PSM_PORT_sds_mesure_psm(struct SDS_PIM_Instance *_instance){
dispatch_sds_mesure_psm(_instance->id_SDS_PSM_PORT);
}

//New dispatcher for messages
void dispatch_sds_mesure_pim(uint16_t sender) {
if (sender == app_1_pim_var.id_SDS_PIM_PORT) {
SDS_PIM_handle_SDS_PIM_PORT_sds_mesure_pim(&sds_pim_var);

}

}

void sync_dispatch_APP_1_PIM_send_SDS_PIM_PORT_sds_mesure_pim(struct APP_1_PIM_Instance *_instance){
dispatch_sds_mesure_pim(_instance->id_SDS_PIM_PORT);
}

//New dispatcher for messages
void dispatch_sds_pm_psm(uint16_t sender, int16_t param_pm10, int16_t param_pm25) {
if (sender == sds_psm_var.id_SDS_PSM_PORT) {
SDS_PIM_handle_SDS_PSM_PORT_sds_pm_psm(&sds_pim_var, param_pm10, param_pm25);

}

}

void sync_dispatch_SDS_PSM_send_SDS_PSM_PORT_sds_pm_psm(struct SDS_PSM_Instance *_instance, int16_t pm10, int16_t pm25){
dispatch_sds_pm_psm(_instance->id_SDS_PSM_PORT, pm10, pm25);
}

//New dispatcher for messages
void dispatch_turn_on_psm(uint16_t sender, uint8_t param_value) {
if (sender == led_pim_var.id_LED_PSM_PORT) {
LED_PSM_handle_LED_PSM_PORT_turn_on_psm(&led_psm_var, param_value);

}

}

void sync_dispatch_LED_PIM_send_LED_PSM_PORT_turn_on_psm(struct LED_PIM_Instance *_instance, uint8_t value){
dispatch_turn_on_psm(_instance->id_LED_PSM_PORT, value);
}

//New dispatcher for messages
void dispatch_sds_setup_pim(uint16_t sender) {
if (sender == app_1_pim_var.id_SDS_PIM_PORT) {
SDS_PIM_handle_SDS_PIM_PORT_sds_setup_pim(&sds_pim_var);

}

}

void sync_dispatch_APP_1_PIM_send_SDS_PIM_PORT_sds_setup_pim(struct APP_1_PIM_Instance *_instance){
dispatch_sds_setup_pim(_instance->id_SDS_PIM_PORT);
}

//New dispatcher for messages
void dispatch_gps_setup_psm(uint16_t sender) {
if (sender == gps_pim_var.id_GPS_PSM_PORT) {
GPS_PSM_handle_GPS_PSM_PORT_gps_setup_psm(&gps_psm_var);

}

}

void sync_dispatch_GPS_PIM_send_GPS_PSM_PORT_gps_setup_psm(struct GPS_PIM_Instance *_instance){
dispatch_gps_setup_psm(_instance->id_GPS_PSM_PORT);
}

//New dispatcher for messages
void dispatch_JAVA_DECISION_psm(uint16_t sender, int16_t param_thestate) {
if (sender == mqtt_psm_var.id_MQTT_PSM_PORT) {
MQTT_PIM_handle_MQTT_PSM_PORT_JAVA_DECISION_psm(&mqtt_pim_var, param_thestate);

}

}

void sync_dispatch_MQTT_PSM_send_MQTT_PSM_PORT_JAVA_DECISION_psm(struct MQTT_PSM_Instance *_instance, int16_t thestate){
dispatch_JAVA_DECISION_psm(_instance->id_MQTT_PSM_PORT, thestate);
}

//New dispatcher for messages
void dispatch_gps_setup_pim(uint16_t sender) {
if (sender == app_1_pim_var.id_GPS_PIM_PORT) {
GPS_PIM_handle_GPS_PIM_PORT_gps_setup_pim(&gps_pim_var);

}

}

void sync_dispatch_APP_1_PIM_send_GPS_PIM_PORT_gps_setup_pim(struct APP_1_PIM_Instance *_instance){
dispatch_gps_setup_pim(_instance->id_GPS_PIM_PORT);
}

//New dispatcher for messages
void dispatch_mqtt_send_psm(uint16_t sender, float param_latitude, float param_longitude, int16_t param_year, int16_t param_month, int16_t param_date, int16_t param_hour, int16_t param_minute, int16_t param_second, int16_t param_temperature, int16_t param_pressure, int16_t param_altitude, int16_t param_humidity, int16_t param_pm10, int16_t param_pm25) {
if (sender == mqtt_pim_var.id_MQTT_PSM_PORT) {
MQTT_PSM_handle_MQTT_PSM_PORT_mqtt_send_psm(&mqtt_psm_var, param_latitude, param_longitude, param_year, param_month, param_date, param_hour, param_minute, param_second, param_temperature, param_pressure, param_altitude, param_humidity, param_pm10, param_pm25);

}

}

void sync_dispatch_MQTT_PIM_send_MQTT_PSM_PORT_mqtt_send_psm(struct MQTT_PIM_Instance *_instance, float latitude, float longitude, int16_t year, int16_t month, int16_t date, int16_t hour, int16_t minute, int16_t second, int16_t temperature, int16_t pressure, int16_t altitude, int16_t humidity, int16_t pm10, int16_t pm25){
dispatch_mqtt_send_psm(_instance->id_MQTT_PSM_PORT, latitude, longitude, year, month, date, hour, minute, second, temperature, pressure, altitude, humidity, pm10, pm25);
}

//New dispatcher for messages
void dispatch_bme280_THP_pim(uint16_t sender, int16_t param_temperature, int16_t param_pressure, int16_t param_altitude, int16_t param_humidity) {
if (sender == bme280_pim_var.id_BME280_PIM_PORT) {
APP_1_PIM_handle_BME280_PIM_PORT_bme280_THP_pim(&app_1_pim_var, param_temperature, param_pressure, param_altitude, param_humidity);

}

}

void sync_dispatch_BME280_PIM_send_BME280_PIM_PORT_bme280_THP_pim(struct BME280_PIM_Instance *_instance, int16_t temperature, int16_t pressure, int16_t altitude, int16_t humidity){
dispatch_bme280_THP_pim(_instance->id_BME280_PIM_PORT, temperature, pressure, altitude, humidity);
}

//New dispatcher for messages
void dispatch_sds_setup_psm(uint16_t sender) {
if (sender == sds_pim_var.id_SDS_PSM_PORT) {
SDS_PSM_handle_SDS_PSM_PORT_sds_setup_psm(&sds_psm_var);

}

}

void sync_dispatch_SDS_PIM_send_SDS_PSM_PORT_sds_setup_psm(struct SDS_PIM_Instance *_instance){
dispatch_sds_setup_psm(_instance->id_SDS_PSM_PORT);
}

//New dispatcher for messages
void dispatch_turn_off_psm(uint16_t sender, uint8_t param_value) {
if (sender == led_pim_var.id_LED_PSM_PORT) {
LED_PSM_handle_LED_PSM_PORT_turn_off_psm(&led_psm_var, param_value);

}

}

void sync_dispatch_LED_PIM_send_LED_PSM_PORT_turn_off_psm(struct LED_PIM_Instance *_instance, uint8_t value){
dispatch_turn_off_psm(_instance->id_LED_PSM_PORT, value);
}

//New dispatcher for messages
void dispatch_bme280_setup_psm(uint16_t sender) {
if (sender == bme280_pim_var.id_BME280_PSM_PORT) {
BME280_PSM_handle_BME280_PSM_PORT_bme280_setup_psm(&bme280_psm_var);

}

}

void sync_dispatch_BME280_PIM_send_BME280_PSM_PORT_bme280_setup_psm(struct BME280_PIM_Instance *_instance){
dispatch_bme280_setup_psm(_instance->id_BME280_PSM_PORT);
}

//New dispatcher for messages
void dispatch_bme280_THP_psm(uint16_t sender, int16_t param_temperature, int16_t param_pressure, int16_t param_altitude, int16_t param_humidity) {
if (sender == bme280_psm_var.id_BME280_PSM_PORT) {
BME280_PIM_handle_BME280_PSM_PORT_bme280_THP_psm(&bme280_pim_var, param_temperature, param_pressure, param_altitude, param_humidity);

}

}

void sync_dispatch_BME280_PSM_send_BME280_PSM_PORT_bme280_THP_psm(struct BME280_PSM_Instance *_instance, int16_t temperature, int16_t pressure, int16_t altitude, int16_t humidity){
dispatch_bme280_THP_psm(_instance->id_BME280_PSM_PORT, temperature, pressure, altitude, humidity);
}

//New dispatcher for messages
void dispatch_sds_pm_pim(uint16_t sender, int16_t param_pm10, int16_t param_pm25) {
if (sender == sds_pim_var.id_SDS_PIM_PORT) {
APP_1_PIM_handle_SDS_PIM_PORT_sds_pm_pim(&app_1_pim_var, param_pm10, param_pm25);

}

}

void sync_dispatch_SDS_PIM_send_SDS_PIM_PORT_sds_pm_pim(struct SDS_PIM_Instance *_instance, int16_t pm10, int16_t pm25){
dispatch_sds_pm_pim(_instance->id_SDS_PIM_PORT, pm10, pm25);
}

//New dispatcher for messages
void dispatch_mqtt_send_pim(uint16_t sender, float param_latitude, float param_longitude, int16_t param_year, int16_t param_month, int16_t param_date, int16_t param_hour, int16_t param_minute, int16_t param_second, int16_t param_temperature, int16_t param_pressure, int16_t param_altitude, int16_t param_humidity, int16_t param_pm10, int16_t param_pm25) {
if (sender == app_1_pim_var.id_MQTT_PIM_PORT) {
MQTT_PIM_handle_MQTT_PIM_PORT_mqtt_send_pim(&mqtt_pim_var, param_latitude, param_longitude, param_year, param_month, param_date, param_hour, param_minute, param_second, param_temperature, param_pressure, param_altitude, param_humidity, param_pm10, param_pm25);

}

}

void sync_dispatch_APP_1_PIM_send_MQTT_PIM_PORT_mqtt_send_pim(struct APP_1_PIM_Instance *_instance, float latitude, float longitude, int16_t year, int16_t month, int16_t date, int16_t hour, int16_t minute, int16_t second, int16_t temperature, int16_t pressure, int16_t altitude, int16_t humidity, int16_t pm10, int16_t pm25){
dispatch_mqtt_send_pim(_instance->id_MQTT_PIM_PORT, latitude, longitude, year, month, date, hour, minute, second, temperature, pressure, altitude, humidity, pm10, pm25);
}

//New dispatcher for messages
void dispatch_gps_mesure_pim(uint16_t sender) {
if (sender == app_1_pim_var.id_GPS_PIM_PORT) {
GPS_PIM_handle_GPS_PIM_PORT_gps_mesure_pim(&gps_pim_var);

}

}

void sync_dispatch_APP_1_PIM_send_GPS_PIM_PORT_gps_mesure_pim(struct APP_1_PIM_Instance *_instance){
dispatch_gps_mesure_pim(_instance->id_GPS_PIM_PORT);
}

int processMessageQueue() {
if (fifo_empty()) return 0; // return 0 if there is nothing to do

uint8_t mbufi = 0;

// Read the code of the next port/message in the queue
uint16_t code = fifo_dequeue() << 8;

code += fifo_dequeue();

// Switch to call the appropriate handler
switch(code) {
}
return 1;
}


//external Message enqueue

void initialize_configuration_APP_1_PIM_Cfg() {
// Initialize connectors
register_BME280_PSM_send_BME280_PSM_PORT_bme280_THP_psm_listener(&sync_dispatch_BME280_PSM_send_BME280_PSM_PORT_bme280_THP_psm);
register_SDS_PSM_send_SDS_PSM_PORT_sds_pm_psm_listener(&sync_dispatch_SDS_PSM_send_SDS_PSM_PORT_sds_pm_psm);
register_SDS_PIM_send_SDS_PSM_PORT_sds_setup_psm_listener(&sync_dispatch_SDS_PIM_send_SDS_PSM_PORT_sds_setup_psm);
register_SDS_PIM_send_SDS_PSM_PORT_sds_mesure_psm_listener(&sync_dispatch_SDS_PIM_send_SDS_PSM_PORT_sds_mesure_psm);
register_SDS_PIM_send_SDS_PIM_PORT_sds_pm_pim_listener(&sync_dispatch_SDS_PIM_send_SDS_PIM_PORT_sds_pm_pim);
register_MQTT_PIM_send_MQTT_PIM_PORT_JAVA_DECISION_pim_listener(&sync_dispatch_MQTT_PIM_send_MQTT_PIM_PORT_JAVA_DECISION_pim);
register_MQTT_PIM_send_MQTT_PSM_PORT_mqtt_setup_psm_listener(&sync_dispatch_MQTT_PIM_send_MQTT_PSM_PORT_mqtt_setup_psm);
register_MQTT_PIM_send_MQTT_PSM_PORT_mqtt_send_psm_listener(&sync_dispatch_MQTT_PIM_send_MQTT_PSM_PORT_mqtt_send_psm);
register_BME280_PIM_send_BME280_PSM_PORT_bme280_setup_psm_listener(&sync_dispatch_BME280_PIM_send_BME280_PSM_PORT_bme280_setup_psm);
register_BME280_PIM_send_BME280_PSM_PORT_bme280_mesure_psm_listener(&sync_dispatch_BME280_PIM_send_BME280_PSM_PORT_bme280_mesure_psm);
register_BME280_PIM_send_BME280_PIM_PORT_bme280_THP_pim_listener(&sync_dispatch_BME280_PIM_send_BME280_PIM_PORT_bme280_THP_pim);
register_GPS_PSM_send_GPS_PSM_PORT_gps_location_time_psm_listener(&sync_dispatch_GPS_PSM_send_GPS_PSM_PORT_gps_location_time_psm);
register_LED_PIM_send_LED_PSM_PORT_setup_psm_listener(&sync_dispatch_LED_PIM_send_LED_PSM_PORT_setup_psm);
register_LED_PIM_send_LED_PSM_PORT_turn_on_psm_listener(&sync_dispatch_LED_PIM_send_LED_PSM_PORT_turn_on_psm);
register_LED_PIM_send_LED_PSM_PORT_turn_off_psm_listener(&sync_dispatch_LED_PIM_send_LED_PSM_PORT_turn_off_psm);
register_GPS_PIM_send_GPS_PSM_PORT_gps_setup_psm_listener(&sync_dispatch_GPS_PIM_send_GPS_PSM_PORT_gps_setup_psm);
register_GPS_PIM_send_GPS_PSM_PORT_gps_mesure_psm_listener(&sync_dispatch_GPS_PIM_send_GPS_PSM_PORT_gps_mesure_psm);
register_GPS_PIM_send_GPS_PIM_PORT_gps_location_time_pim_listener(&sync_dispatch_GPS_PIM_send_GPS_PIM_PORT_gps_location_time_pim);
register_MQTT_PSM_send_MQTT_PSM_PORT_JAVA_DECISION_psm_listener(&sync_dispatch_MQTT_PSM_send_MQTT_PSM_PORT_JAVA_DECISION_psm);
register_APP_1_PIM_send_LED_PIM_PORT_setup_pim_listener(&sync_dispatch_APP_1_PIM_send_LED_PIM_PORT_setup_pim);
register_APP_1_PIM_send_LED_PIM_PORT_turn_on_pim_listener(&sync_dispatch_APP_1_PIM_send_LED_PIM_PORT_turn_on_pim);
register_APP_1_PIM_send_LED_PIM_PORT_turn_off_pim_listener(&sync_dispatch_APP_1_PIM_send_LED_PIM_PORT_turn_off_pim);
register_APP_1_PIM_send_GPS_PIM_PORT_gps_setup_pim_listener(&sync_dispatch_APP_1_PIM_send_GPS_PIM_PORT_gps_setup_pim);
register_APP_1_PIM_send_GPS_PIM_PORT_gps_mesure_pim_listener(&sync_dispatch_APP_1_PIM_send_GPS_PIM_PORT_gps_mesure_pim);
register_APP_1_PIM_send_SDS_PIM_PORT_sds_setup_pim_listener(&sync_dispatch_APP_1_PIM_send_SDS_PIM_PORT_sds_setup_pim);
register_APP_1_PIM_send_SDS_PIM_PORT_sds_mesure_pim_listener(&sync_dispatch_APP_1_PIM_send_SDS_PIM_PORT_sds_mesure_pim);
register_APP_1_PIM_send_BME280_PIM_PORT_bme280_setup_pim_listener(&sync_dispatch_APP_1_PIM_send_BME280_PIM_PORT_bme280_setup_pim);
register_APP_1_PIM_send_BME280_PIM_PORT_bme280_mesure_pim_listener(&sync_dispatch_APP_1_PIM_send_BME280_PIM_PORT_bme280_mesure_pim);
register_APP_1_PIM_send_MQTT_PIM_PORT_mqtt_setup_pim_listener(&sync_dispatch_APP_1_PIM_send_MQTT_PIM_PORT_mqtt_setup_pim);
register_APP_1_PIM_send_MQTT_PIM_PORT_mqtt_send_pim_listener(&sync_dispatch_APP_1_PIM_send_MQTT_PIM_PORT_mqtt_send_pim);


// Network Initialization
// End Network Initialization

// Init the ID, state variables and properties for instance mqtt_psm
mqtt_psm_var.active = true;
mqtt_psm_var.id_MQTT_PSM_PORT = add_instance( (void*) &mqtt_psm_var);
mqtt_psm_var.MQTT_PSM_behavior_State = MQTT_PSM_BEHAVIOR_RUNNING_STATE;
mqtt_psm_var.MQTT_PSM_station_id_var = "1234";
mqtt_psm_var.MQTT_PSM_station_owner_var = "jerry";
mqtt_psm_var.MQTT_PSM_mqtt_topic_var = "SensorOutTopicThingML";
mqtt_psm_var.MQTT_PSM_mqtt_qos_var = 2;
mqtt_psm_var.MQTT_PSM_mqtt_retain_var = 0;
mqtt_psm_var.MQTT_PSM_x_property_var = 0;

MQTT_PSM_behavior_OnEntry(MQTT_PSM_BEHAVIOR_STATE, &mqtt_psm_var);
// Init the ID, state variables and properties for instance mqtt_pim
mqtt_pim_var.active = true;
mqtt_pim_var.id_MQTT_PIM_PORT = add_instance( (void*) &mqtt_pim_var);
mqtt_pim_var.id_MQTT_PSM_PORT = add_instance( (void*) &mqtt_pim_var);
mqtt_pim_var.MQTT_PIM_behavior_State = MQTT_PIM_BEHAVIOR_SETUP_STATE;
mqtt_pim_var.MQTT_PIM_ssid_var = "EasyBox-903061";
mqtt_pim_var.MQTT_PIM_password_var = "gcpBEr6La68zvxCM";
mqtt_pim_var.MQTT_PIM_mqtt_server_var = "192.168.2.112";
mqtt_pim_var.MQTT_PIM_mqtt_port_var = 1883;
mqtt_pim_var.MQTT_PIM_mqtt_user_var = "steve";
mqtt_pim_var.MQTT_PIM_mqtt_password_var = "1234";
mqtt_pim_var.MQTT_PIM_mqtt_clientID_var = "ESP8266Client";
mqtt_pim_var.MQTT_PIM_mqtt_topic_var = "SensorOutTopicThingML";
mqtt_pim_var.MQTT_PIM_mqtt_qos_var = 2;
mqtt_pim_var.MQTT_PIM_mqtt_retain_var = 0;
mqtt_pim_var.MQTT_PIM_station_id_var = "1234";
mqtt_pim_var.MQTT_PIM_station_owner_var = "Jerry";

MQTT_PIM_behavior_OnEntry(MQTT_PIM_BEHAVIOR_STATE, &mqtt_pim_var);
// Init the ID, state variables and properties for instance bme280_psm
bme280_psm_var.active = true;
bme280_psm_var.id_BME280_PSM_PORT = add_instance( (void*) &bme280_psm_var);
bme280_psm_var.BME280_PSM_behavior_State = BME280_PSM_BEHAVIOR_RUNNING_STATE;

BME280_PSM_behavior_OnEntry(BME280_PSM_BEHAVIOR_STATE, &bme280_psm_var);
// Init the ID, state variables and properties for instance bme280_pim
bme280_pim_var.active = true;
bme280_pim_var.id_BME280_PSM_PORT = add_instance( (void*) &bme280_pim_var);
bme280_pim_var.id_BME280_PIM_PORT = add_instance( (void*) &bme280_pim_var);
bme280_pim_var.BME280_PIM_behavior_State = BME280_PIM_BEHAVIOR_SETUP_STATE;

BME280_PIM_behavior_OnEntry(BME280_PIM_BEHAVIOR_STATE, &bme280_pim_var);
// Init the ID, state variables and properties for instance gps_psm
gps_psm_var.active = true;
gps_psm_var.id_GPS_PSM_PORT = add_instance( (void*) &gps_psm_var);
gps_psm_var.GPS_PSM_behavior_State = GPS_PSM_BEHAVIOR_RUNNING_STATE;
gps_psm_var.GPS_PSM_behavior_Running_latitude_var = 53.1435;
gps_psm_var.GPS_PSM_behavior_Running_longitude_var = 8.2146;
gps_psm_var.GPS_PSM_behavior_Running_year_var = 2019;
gps_psm_var.GPS_PSM_behavior_Running_month_var = 10;
gps_psm_var.GPS_PSM_behavior_Running_date_var = 31;
gps_psm_var.GPS_PSM_behavior_Running_hour_var = 24;
gps_psm_var.GPS_PSM_behavior_Running_minute_var = 60;
gps_psm_var.GPS_PSM_behavior_Running_second_var = 60;

GPS_PSM_behavior_OnEntry(GPS_PSM_BEHAVIOR_STATE, &gps_psm_var);
// Init the ID, state variables and properties for instance gps_pim
gps_pim_var.active = true;
gps_pim_var.id_GPS_PSM_PORT = add_instance( (void*) &gps_pim_var);
gps_pim_var.id_GPS_PIM_PORT = add_instance( (void*) &gps_pim_var);
gps_pim_var.GPS_PIM_behavior_State = GPS_PIM_BEHAVIOR_SETUP_STATE;

GPS_PIM_behavior_OnEntry(GPS_PIM_BEHAVIOR_STATE, &gps_pim_var);
// Init the ID, state variables and properties for instance sds_psm
sds_psm_var.active = true;
sds_psm_var.id_SDS_PSM_PORT = add_instance( (void*) &sds_psm_var);
sds_psm_var.SDS_PSM_behavior_State = SDS_PSM_BEHAVIOR_RUNNING_STATE;

SDS_PSM_behavior_OnEntry(SDS_PSM_BEHAVIOR_STATE, &sds_psm_var);
// Init the ID, state variables and properties for instance sds_pim
sds_pim_var.active = true;
sds_pim_var.id_SDS_PSM_PORT = add_instance( (void*) &sds_pim_var);
sds_pim_var.id_SDS_PIM_PORT = add_instance( (void*) &sds_pim_var);
sds_pim_var.SDS_PIM_behavior_State = SDS_PIM_BEHAVIOR_SETUP_STATE;

SDS_PIM_behavior_OnEntry(SDS_PIM_BEHAVIOR_STATE, &sds_pim_var);
// Init the ID, state variables and properties for instance led_psm
led_psm_var.active = true;
led_psm_var.id_LED_PSM_PORT = add_instance( (void*) &led_psm_var);
led_psm_var.LED_PSM_behavior_State = LED_PSM_BEHAVIOR_RUNNING_STATE;
led_psm_var.LED_PSM_PIN_var = D0;

LED_PSM_behavior_OnEntry(LED_PSM_BEHAVIOR_STATE, &led_psm_var);
// Init the ID, state variables and properties for instance led_pim
led_pim_var.active = true;
led_pim_var.id_LED_PSM_PORT = add_instance( (void*) &led_pim_var);
led_pim_var.id_LED_PIM_PORT = add_instance( (void*) &led_pim_var);
led_pim_var.LED_PIM_behavior_State = LED_PIM_BEHAVIOR_SETUP_STATE;
led_pim_var.LED_PIM_PIN_var = D0;

LED_PIM_behavior_OnEntry(LED_PIM_BEHAVIOR_STATE, &led_pim_var);
// Init the ID, state variables and properties for instance app_1_pim
app_1_pim_var.active = true;
app_1_pim_var.id_LED_PIM_PORT = add_instance( (void*) &app_1_pim_var);
app_1_pim_var.id_GPS_PIM_PORT = add_instance( (void*) &app_1_pim_var);
app_1_pim_var.id_SDS_PIM_PORT = add_instance( (void*) &app_1_pim_var);
app_1_pim_var.id_BME280_PIM_PORT = add_instance( (void*) &app_1_pim_var);
app_1_pim_var.id_MQTT_PIM_PORT = add_instance( (void*) &app_1_pim_var);
app_1_pim_var.APP_1_PIM_behavior_State = APP_1_PIM_BEHAVIOR_STATION_SETUP_STATE;

APP_1_PIM_behavior_OnEntry(APP_1_PIM_BEHAVIOR_STATE, &app_1_pim_var);
}




void setup() {
Serial.begin(9600);
initialize_configuration_APP_1_PIM_Cfg();

}

void loop() {

// Network Listener// End Network Listener

LED_PIM_handle_empty_event(&led_pim_var);
APP_1_PIM_handle_empty_event(&app_1_pim_var);

    processMessageQueue();
}
