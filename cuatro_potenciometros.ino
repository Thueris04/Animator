//sensores analogos
//recibo lo  q nevia el potenciometro
int sensorValue1;
int sensorValue2;
int sensorValue3;
int sensorValue4;
int sensorValue5;
int sensorValue6;
int sensorValue7;
int sensorValue8;
int sensorValue9;

int inputPin = A0;  
int inputPin2 = A1;
int inputPin3 = A2;  
int inputPin4 = A3;
int inputPin5 = A4;  
int inputPin6 = A5;
int inputPin7 = A6;  
int inputPin8 = A7;   
int inputPin9 = A8;     

void setup() 
{

  //se utiliza para poder ver los datos en el compu, y cuando quieramos enviar info a processing
  Serial.begin(9600);  
}

void loop() 
{
  //al dividirlo entre 4 me bota datos de 0-255 y no de 0-1023 ke es lo normal
  //guard en esta variable los datos que recibe del potenciometro
   sensorValue1 = map (analogRead(inputPin),0,1024,-200,70); //Brazo Delantero
   sensorValue2 = map (analogRead(inputPin2),0,1024,30,130); // Codo Delantero
   sensorValue3 = map (analogRead(inputPin3),0,1024,70,-200); // Brazo Trasero
   sensorValue4 = map (analogRead(inputPin4),0,1024,130,30); // Codo Trasero
   sensorValue5 = map (analogRead(inputPin5),0,1024,-180,30); // Pierna Delantera
   sensorValue6 = map (analogRead(inputPin6),0,1024,-200,-20); // Rodilla Derecha
   sensorValue7 = map (analogRead(inputPin7),0,1024,30,-180); // Pierna Trasera
   sensorValue8 = map (analogRead(inputPin8),0,1024,-200,-20); // Rodilla Trasera
   sensorValue9 = map (analogRead(inputPin9),0,1024,0,20); // Altura
  

  

  // enviar el dato a processing, como son datoa analogos se envia por serial.print

  
 Serial.print(sensorValue1);
 Serial.print('T');
 Serial.print(sensorValue2);
 Serial.print('T');
 Serial.print(sensorValue3);
 Serial.print('T');
 Serial.print(sensorValue4);
 Serial.print('T');
 Serial.print(sensorValue5);
 Serial.print('T');
 Serial.print(sensorValue6);
 Serial.print('T');
 Serial.print(sensorValue7);
 Serial.print('T');
 Serial.print(sensorValue8);
 Serial.print('T');
 Serial.print(sensorValue9);
 
 Serial.println();
  delay(100);




  //cada 100 me envia el dato  
   
}
