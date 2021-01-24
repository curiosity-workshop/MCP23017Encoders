/* 
 *  MCP23017Encoders Example
 *  
 */


#include <Wire.h>
//#include <Adafruit_MCP23017.h>   //the MCO23017Encoders library includes this but it must be installed (adafruit MCP23017 library)
#include <MCP23017Encoders.h>

MCP23017Encoders myMCP23017Encoders(3);         // Parameter is arduino interrupt pin that the MCP23017 is connected to

//////////////////////////////////////////////
void setup()
{

  Serial.begin(115200); 
  myMCP23017Encoders.begin();
  
  myMCP23017Encoders.setAccel(0, 100);

}

//////////////////////////////////////////////
void loop()
{

  delay(1000);

  for (int i = 0; i < 8; i++)
  {
    Serial.print(myMCP23017Encoders.read(i)); Serial.print(" "); 
  }
  Serial.println();


}
