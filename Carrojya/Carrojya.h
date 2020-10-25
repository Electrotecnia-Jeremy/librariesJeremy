  #ifndef ARCHIVO_H
  #define ARCHIVO_H
  #include <Arduino.h>
  class CarroJeremy{
    private :  //Atributos
      byte Motor1A;
      byte Motor1B;
      byte Motor2A;
      byte Motor2B;
      byte Ledrojo;
      byte Ledazul;
      byte Trig;
      byte Echo;
    public :  //Metodos
      CarroJeremy(byte _Motor1A,byte _Motor1B,byte _Motor2A,byte _Motor2B,byte _Ledrojo,byte _Ledazul,byte _Trig,byte _Echo);
      void pines();
      void adelante();
      void atraz();
      void derecha();
      void izquierda();
      void detener();
      void sensor();
      void zumo();
    };
  #endif
    
