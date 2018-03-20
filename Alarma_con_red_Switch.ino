 // Declaramos puertos de entrada y salida asi como las variables
int led = 13; // Pin asignado al LED
int reedswitch = 5; // Pin asignado al Reed Switch
int buzzer =8; // Pin asignado al zumbador
int val = 0; // Pin asignado para la el valor del reed switch

void setup(){ // se ejecuta cada vez que el Arduino se inicia
  pinMode(led,OUTPUT); // El leed se declara como salida
  pinMode(reedswitch,INPUT); // el Reed Switch se declara como salida
  pinMode(buzzer,OUTPUT); // El zumbador se declara como salida
  Serial.begin(9600);
}

void loop(){ // Funcion ciclica
  val = digitalRead(reedswitch); // lee valor en reedswitch
  // cuando este energizado el Arduino ,
  // si el iman se acerca a (puerta esta abierta)
  // reed switch
  if(val == HIGH){ // si el valor del reed switch esta en 1 
    //ES DECIR ESTA ENCENDIDO
    // se repite el ciclo  
    digitalWrite(led,HIGH); // Se apaga el LED
    digitalWrite(buzzer,HIGH); // Tambien se apaga el Zumbador
    delay(200);// Tiempo
    digitalWrite(led,LOW);//SE APAGA EL LED
    Serial.println("Se Ha Activado la alarma");//mensaje de la activacion de la alarma
    digitalWrite(buzzer,LOW);//se apaga el Zumbador
    delay(200);
    
  }
  // si el iman esta lejos el reed switch La puerta esta cerrada)
  else{
    digitalWrite(led,LOW); // Mantiene enciende el LED
    Serial.println("La Alarma Esta Desactivada");//Mensaje de la alarma desactivada
    digitalWrite(buzzer,LOW); // Mantiene enciende el zumbador
   
    
  } // Fin del if
} // Fin del programa

