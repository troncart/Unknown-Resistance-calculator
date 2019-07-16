/*********TACHLOG powered********
*********www.troncart.com*******
**electronics components online**
***********Voltage divider**************
***********16-07-2019**************
*/

int value = 0;
int Vin= 5; //The input voltage is 5 Volt
float Vout= 0;
float R1= 1000;
float R2= 0;
float buffer= 0;

void setup()
{
Serial.begin(9600);
}

void loop()
{
value = analogRead(A0); //reading the analog pin
if(value) 
{
buffer= value * Vin;
Vout= (buffer)/1024.0;
buffer= (Vin/Vout) -1;
R2= R1 * buffer;
Serial.print("Vout: ");
Serial.println(Vout); //output voltage across R2
Serial.print("R2: ");
Serial.println(R2); //Unknown resistor value
delay(1000);
}
}
