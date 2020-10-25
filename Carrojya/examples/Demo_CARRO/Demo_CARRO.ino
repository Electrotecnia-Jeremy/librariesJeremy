/*https://negociacionesjya.wixsite.com/ventasjyaminegocio
 * ELectrotécnia Jeremy-Ventas J&A
 * Hecho en Perú
 * DEMOSTRACIÓN DE LA LIBRERIA
 */

#include <Carrojya.h> //INCLUIMOS LA LIBRERIA CARRO JYA
CarroJeremy carro(4,5,6,7,13,12,3,2);//debes poner la clase CarroJeremy carro y declarar los pines Motor1A,Motor1B,Motor2A,Motor1B,ledrojo,ledazul,trig,echo.
void setup() {
 Serial.begin(9600);//Comunicación Serial 9600 bits por segundo
 carro.pines();//Declaramos los pines del carro y sus componentes
}

void loop() {
  carro.adelante();//El carro va hacia adelante
  delay(1000);//tiempo de 1Seg

  carro.atraz();//El carro va hacia atraz
  delay(1000);//tiempo de 1Seg

  carro.derecha();//El carro va hacia derecha
  delay(1000);//tiempo de 1Seg

  carro.izquierda();//El carro va hacia adelante
  delay(1000);//tiempo de 1Seg

  carro.zumo();//Modo zumo busca oponentes y choca con ellos.
  delay(5000);//tiempo de 5Seg

  carro.sensor();//EVITA LOS OBSTÁCULOS
  delay(5000);//tiempo de 5Seg

  carro.detener();//El carro se detiene
  delay(1000);//tiempo de 1Seg
}
