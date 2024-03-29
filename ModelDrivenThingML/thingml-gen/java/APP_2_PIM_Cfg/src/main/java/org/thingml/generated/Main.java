/**
 * File generated by the ThingML IDE
 * /!\Do not edit this file/!\
 * In case of a bug in the generated code,
 * please submit an issue on our GitHub
 **/

package org.thingml.generated;

import org.thingml.java.*;
import org.thingml.java.ext.*;

import org.thingml.generated.api.*;
import org.thingml.generated.messages.*;

import java.util.*;
import org.thingml.generated.network.*;
public class Main {
//Things
public static APP_2_PIM APP_2_PIM_app_2_pim;
public static void main(String args[]) {
//Things
APP_2_PIM_app_2_pim = (APP_2_PIM) new APP_2_PIM("app_2_pim (APP_2_PIM)").buildBehavior(null, null);
//Connecting internal ports...
//Connectors
//Init instances (queues, etc)
APP_2_PIM_app_2_pim.init();
//Network components for external connectors
/*$NETWORK$*/
MQTTJava null_MQTT = (MQTTJava) new MQTTJava("tcp://192.168.2.112:1883", "JavaOutTopicThingML", "SensorOutTopicThingML").buildBehavior(null, null);

//External Connectors
/*$EXT CONNECTORS$*/
null_MQTT.getJavaApp_PORT_port().addListener(APP_2_PIM_app_2_pim.getJavaApp_PORT_port());
APP_2_PIM_app_2_pim.getJavaApp_PORT_port().addListener(null_MQTT.getJavaApp_PORT_port());

/*$START$*/
null_MQTT.init().start();

APP_2_PIM_app_2_pim.start();
//Hook to stop instances following client/server dependencies (clients firsts)
Runtime.getRuntime().addShutdownHook(new Thread() {
public void run() {
APP_2_PIM_app_2_pim.stop();
/*$STOP$*/
null_MQTT.stop();

}
});

}
}
