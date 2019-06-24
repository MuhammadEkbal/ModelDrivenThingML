package org.thingml.generated.network;

import org.thingml.generated.messages.*;
import org.thingml.java.ext.Event;
import com.eclipsesource.json.JsonObject;
import com.eclipsesource.json.JsonValue;
import com.eclipsesource.json.Json;
public class MQTTBinaryProtocol implements StringJava {
private static final WeatherMessageType WEATHER = new WeatherMessageType();
public Event instantiate(String payload) {
try{
final JsonObject msg = Json.parse(payload).asObject();
final String msgName = msg.names().get(0);
if(msgName.equals(WEATHER.getName())){
return WEATHER.instantiate((String) msg.get(msgName).asObject().get("id").asString(), (int) msg.get(msgName).asObject().get("timestamp").asInt(), (int) msg.get(msgName).asObject().get("pm25").asInt(), (int) msg.get(msgName).asObject().get("pm10").asInt(), (int) msg.get(msgName).asObject().get("hum").asInt(), (int) msg.get(msgName).asObject().get("press").asInt(), (int) msg.get(msgName).asObject().get("temp").asInt());
}

}catch(Exception pe){
System.out.println("Cannot parse " + payload + " because of " + pe.getMessage());
}
return null;
}
public String format(Event e){
if (e.getType().equals(TEMPSTATE)) {
return format((TempStateMessageType.TempStateMessage)e)
;}
return null;
}
private static final TempStateMessageType TEMPSTATE = new TempStateMessageType();
/**Serializes a message into a JSON format*/
private String format(final TempStateMessageType.TempStateMessage _this) {
final JsonObject msg = new JsonObject();
final JsonObject params = new JsonObject();
params.add("thestate", _this.thestate);
msg.add("tempState",params);
return msg.toString();
}



}
