int ledPIN = 8;
int sensorherradura = 7;
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
  infrarojo = digitalRead(sensorherradura);
  delay(1000); 
  
  // actuador
  if( infrarojo ==1){
    digitalWrite(ledPIN , HIGH);   // poner el Pin en HIGH
    Serial.println("LED PRENDIDO");
  }
   else{
     digitalWrite(ledPIN , LOW);
     Serial.println("LED APAGADO");
   }
  
  
  //consola

  i++;



  //interface
  Serial.print("El valor del sensor en el segundo es:");
  Serial.println(infrarojo);
  
  

}
