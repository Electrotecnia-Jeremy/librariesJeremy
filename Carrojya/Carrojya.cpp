 #include "Carrojya.h"

  int duracion, distancia;  // para Calcular distacia
  
// DESSARROOLLO DE LOS METODOS DE LA CLASE PERSONA
  CarroJeremy::CarroJeremy(byte _Motor1A,byte _Motor1B,byte _Motor2A,byte _Motor2B,byte _Ledrojo,byte _Ledazul,byte _Trig,byte _Echo){
    Motor1A=_Motor1A;
    Motor1B=_Motor1B;
    Motor2A=_Motor2A;
    Motor2B=_Motor2B;
    Ledrojo=_Ledrojo;
    Ledazul=_Ledazul;
    Trig=_Trig;
    Echo=_Echo;
    }

  void CarroJeremy::adelante(){
    digitalWrite(Motor1A,LOW);
    digitalWrite(Motor1B,HIGH);
    digitalWrite(Motor2A,HIGH);
    digitalWrite(Motor2B,LOW);
    digitalWrite(Ledazul,HIGH);
    digitalWrite(Ledrojo,HIGH);
    }

   void CarroJeremy::pines(){
    pinMode(Motor1A,OUTPUT);
    pinMode(Motor1B,OUTPUT);
    pinMode(Motor2A,OUTPUT);
    pinMode(Motor2B,OUTPUT);
    pinMode(Ledazul,OUTPUT);
    pinMode(Ledrojo,OUTPUT);
    pinMode(Trig,OUTPUT);
    pinMode(Echo,INPUT);
    }
  void CarroJeremy::atraz(){
    digitalWrite(Motor1A,HIGH);
    digitalWrite(Motor1B,LOW);
    digitalWrite(Motor2A,LOW);
    digitalWrite(Motor2B,HIGH);
    digitalWrite(Ledazul,HIGH);
    digitalWrite(Ledrojo,HIGH);
    }
  void CarroJeremy::derecha(){
    digitalWrite(Motor1A,LOW);
    digitalWrite(Motor1B,HIGH);
    digitalWrite(Motor2A,LOW);
    digitalWrite(Motor2B,HIGH);
    digitalWrite(Ledazul,HIGH);
    digitalWrite(Ledrojo,LOW);
    }
  void CarroJeremy::izquierda(){
    digitalWrite(Motor1A,HIGH);
    digitalWrite(Motor1B,LOW);
    digitalWrite(Motor2A,HIGH);
    digitalWrite(Motor2B,LOW);
    digitalWrite(Ledazul,LOW);
    digitalWrite(Ledrojo,HIGH);
    }
  void CarroJeremy::detener(){
    digitalWrite(Motor1A,LOW);
    digitalWrite(Motor1B,LOW);
    digitalWrite(Motor2A,LOW);
    digitalWrite(Motor2B,LOW);
    digitalWrite(Ledazul,LOW);
    digitalWrite(Ledrojo,LOW);
    }
  void CarroJeremy::sensor(){
     digitalWrite(Trig, HIGH);   // genera el pulso de trigger por 10us
     delay(0.01);
     digitalWrite(Trig, LOW);
     
     duracion = pulseIn(Echo, HIGH);          // Lee el tiempo del Echo
     distancia = (duracion/2) / 29;            // calcula la distancia en centimetros
     delay(10); 
     
     if (distancia <= 15 && distancia >=2){    // si la distancia es menor de 15cm
        digitalWrite(Ledazul,HIGH);                // Enciende LED
        
        digitalWrite(Motor1A,LOW);
        digitalWrite(Motor1B,LOW);
        digitalWrite(Motor2A,LOW);
        digitalWrite(Motor2B,LOW);
        digitalWrite(Ledazul,LOW);
        digitalWrite(Ledrojo,LOW);
        delay(200);
        
        digitalWrite(Motor1A,HIGH);
        digitalWrite(Motor1B,LOW);
        digitalWrite(Motor2A,LOW);
        digitalWrite(Motor2B,HIGH);
        digitalWrite(Ledazul,HIGH);
        digitalWrite(Ledrojo,HIGH); 
        delay(500);           
        
        digitalWrite(Motor1A,HIGH);
        digitalWrite(Motor1B,LOW);
        digitalWrite(Motor2A,HIGH);
        digitalWrite(Motor2B,LOW);
        digitalWrite(Ledazul,LOW);
        digitalWrite(Ledrojo,HIGH);
        
        digitalWrite(Ledazul,LOW);
     }
     else{                             // Si no hay obstaculos se desplaza al frente  
         digitalWrite(Motor1A,LOW);
         digitalWrite(Motor1B,HIGH);
         digitalWrite(Motor2A,HIGH);
         digitalWrite(Motor2B,LOW);
         digitalWrite(Ledazul,HIGH);
         digitalWrite(Ledrojo,HIGH);
     }
    }

    void CarroJeremy::zumo(){
     digitalWrite(Trig, HIGH);   // genera el pulso de trigger por 10us
     delay(0.01);
     digitalWrite(Trig, LOW);
     
     duracion = pulseIn(Echo, HIGH);          // Lee el tiempo del Echo
     distancia = (duracion/2) / 29;            // calcula la distancia en centimetros
     delay(10); 
     
     if (distancia <= 15 && distancia >=2){    // si la distancia es menor de 15cm
        digitalWrite(Ledrojo,HIGH);                // Enciende LED
        
        digitalWrite(Motor1A,LOW);
        digitalWrite(Motor1B,LOW);
        digitalWrite(Motor2A,LOW);
        digitalWrite(Motor2B,LOW);
        digitalWrite(Ledazul,LOW);
        digitalWrite(Ledrojo,LOW);
        delay(200);
        
        digitalWrite(Motor1A,LOW);
        digitalWrite(Motor1B,HIGH);
        digitalWrite(Motor2A,HIGH);
        digitalWrite(Motor2B,LOW);
        digitalWrite(Ledazul,HIGH);
        digitalWrite(Ledrojo,HIGH);
        delay(5000);           
        
        digitalWrite(Motor1A,LOW);
        digitalWrite(Motor1B,LOW);
        digitalWrite(Motor2A,LOW);
        digitalWrite(Motor2B,LOW);
        digitalWrite(Ledazul,LOW);
        digitalWrite(Ledrojo,LOW);
        delay(200);
        
        digitalWrite(Ledrojo,LOW);
     }
     else{                             // Si no hay obstaculos se desplaza al frente  
         digitalWrite(Motor1A,HIGH);
         digitalWrite(Motor1B,LOW);
         digitalWrite(Motor2A,HIGH);
         digitalWrite(Motor2B,LOW);
         digitalWrite(Ledazul,LOW);
         digitalWrite(Ledrojo,HIGH);
         digitalWrite(Ledazul,HIGH);
     }
    }
