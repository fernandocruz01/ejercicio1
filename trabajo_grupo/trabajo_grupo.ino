const int ledPIN = 8;
const int sensorherradura = 7;
int vector[50];
int i = 0;
 
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
  digitalWrite(ledPIN , HIGH);   // poner el Pin en HIGH
  delay(1000);                   // esperar un segundo
  digitalWrite(ledPIN , LOW);    // poner el Pin en LOW
  delay(1000);
  
  // actuador


  //consola
}
