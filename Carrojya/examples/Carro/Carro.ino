/*Creada por Jeremy Garcia
 * Ventas J&A-Electrotécnia Jeremy
 */
#include <Carrojya.h>//incluimos la libreria
CarroJeremy carro(4,5,6,7,13,12,3,2);//define pines Motor1A,Motor1B,Motor2A,Motor1B,ledrojo,ledazul,trig,echo. 
//Creada por Jeremy              // Incluye la libreria Servo
 char dato=0;//Almacena los datos de las variables y textos dirigidos desde el celular
 int LDR1, LDR2;//Fotoresistencias llamadas LDR

  void setup() {
    Serial.begin(9600);//Comunicación Serial
    carro.pines();//Declaramos los pines del carro y sus componentes
  }
  
  void loop() {    
    if(Serial.available()>0){        // lee el bluetooth y almacena en dato
    dato=Serial.read();//lee los textos de la variable dato por bluetooth
  }
  if(dato=='a'){carro.adelante();}//si enviamos texto "a" el carro va hacia adelante
  if(dato=='b'){carro.izquierda();}//si enviamos texto "b" el carro va hacia izquierda
  if(dato=='c'){carro.detener();}//si enviamos texto "c" el carro se detendra tambien como sus funciones
  if(dato=='d'){carro.derecha();}//si enviamos texto "d" el carro va hacia derecha
  if(dato=='e'){carro.sensor();}//si enviamos texto "e" el carro empezara a evitar obstáculos
  if(dato=='f'){seguidordeluz();}//si enviamos la letra "f" empezara a captar luz de cualquier medio
  if(dato=='g'){baile();}//da un mini baile para todos
  if(dato=='h'){carro.zumo();}//si detecta un enemigo ataca
  }

  void seguidordeluz(){//void de la función de luz
    LDR1=analogRead(A0); //definimos los pines de entrada
    LDR2=analogRead(A1); 
    
    if(LDR1>550){//hasta donde puede captar luz
    carro.izquierda();//gira izquierda si ve la luz
    }else{
     if(LDR2>550){
    carro.derecha();//gira derecha si ve la luz
    }else{carro.detener();}
    }
  }

 void baile(){//baile con estilo
  carro.adelante();//el carro va adelante
  delay(2000);
  carro.atraz();//el carro va atraz
  delay(2000);
  carro.izquierda();//el carro va izquierda
  delay(500);
  carro.derecha();//el carro va derecha
  delay(1000);
  carro.adelante();
  delay(1000);
  carro.atraz();
  delay(500);
  carro.izquierda();
  delay(300);
  carro.derecha();
  delay(300);
  carro.detener();
  delay(1000);// se detiene

  carro.derecha();
  delay(1000);
  carro.adelante();
  delay(1000);
  carro.atraz();
  delay(500);
  }
