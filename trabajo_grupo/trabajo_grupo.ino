const int ledPIN = 8;
const int sensorherradura = 7;
int vector[50];
int i = 0;
int infrarojo = 0;
 
void setup() {
  //declarar variables y puerto serial
  Serial.begin(9600);    //iniciar puerto serie
  pinMode(ledPIN , OUTPUT);  //definir pin como salida
  pinMode(sensorherradura, INPUT);
}
 
void loop(){
 //llenar base de datos
  vector[i] = digitalRead(sensorherradura);
 //sensado
  infrarojo = digitalRead(sensorherradura);   // leer el sensor
  delay(1000); 
  
  // actuador


  //consola
  i++;
}
