#include <Servo.h>
int valorX1 = 0; //lectura del eje x
int valorY1 = 0; //lectura del eje y
int valorX2 = 0; //lectura del eje x
int valorY2 = 0; //lectura del eje y
int valorX3 = 0; //lectura del eje x
int valorY3 = 0; //lectura del eje y

int pinJX1 = A0; //PIN ANALOGICO A0 DELEJE X
int pinJY1 = A1; //PIN ANALOGICO A1 DEL EJE Y
int pinJX2 = A2; //PIN ANALOGICO A2 DEL EJE X
int pinJY2 = A3; //PIN ANALOGICO A3 DEL EJE Y
int pinJX3 = A4; //PIN ANALOGICO A4 DEL EJE X
int pinJY3 = A5; //PIN ANALOGICO A5 DEL EJE Y

Servo Motor1; //DECLARAR SERVO 1
Servo Motor2; //DECLARAR SERVO 2
Servo Motor3; //DECLARAR SERVO 3
Servo Motor4; //DECLARAR SERVO 4
Servo Motor5; //DECLARAR SERVO 5
//Servo Motor6; //DECLARAR SERVO 6

int grados1 = 0; //GRADOS DEL SERVO 1
int grados2 = 0; //GRADOS DEL SERVO 2
int grados3 = 0; //GRADOS DEL SERVO 3
int grados4 = 0; //GRADOS DEL SERVO 4
int grados5 = 0; //GRADOS DEL SERVO 5
//int grados6 = 0; //GRADOS DEL SERVO 6



void setup() {
  Serial.begin(9600);//ACTIVA LA COMUNICACION CON LA PLACA BUILD&CODE UNO 
  Motor1.attach (6);//pin digital pwm 9 donde esta conectado el servo 1
  Motor1.write (0);
  Motor2.attach (9);// pin digital pwm 10 donde esta conectado el servo 2
  Motor1.write(0); 
  Motor3.attach (3);//pin digital pwm 5 donde esta conectado el servo 3
  Motor1.write(0);
  Motor4.attach (5);//pin digital pwm 3 donde esta conectado el servo 4
  Motor1.write(0);
  Motor5.attach (10);//pin digital pwm 11 donde esta conectado el servo 5

}
void loop() {

  valorX1 = analogRead(pinJX1); //lectura del puerto analog. A0 DEL EJE X1
  valorY1 = analogRead(pinJY1); //lectura del puerto analog. A1 DEL EJE Y1
  valorX2 = analogRead(pinJX2); //lectura del puerto analog.A2 DEL EJE X2
  valorY2 = analogRead(pinJY2); //lectura del puerto analog.A3 DEL EJE Y2
  valorX3 = analogRead(pinJX3); //lectura del puerto analog.A4 DEL EJE X2
  valorY3= analogRead(pinJY3); //lectura del puerto analog.A5 DEL EJE Y2

  grados1 = map(valorX1, 0, 1023, 0, 180);
  grados2 = map(valorY1, 0, 1023, 0, 180);
  grados3 = map(valorX2, 0, 1023, 0, 180);
  grados4 = map(valorY2, 0, 1023, 0, 180);
  grados5 = map(valorX3, 0, 1023, 0, 180);
  //grados6 = map(valorY3, 0, 1023, 0, 180);

  Motor1.write(grados1); // ENVIAR LOS GRADOS DEL SERVO 1
  Motor2.write(grados2); // ENVIAR LOS GRADOS DEL SERVO 2
  Motor3.write(grados3); // ENVIAR LOS GRADOS DEL SERVO 1
  Motor4.write(grados4); // ENVIAR LOS GRADOS DEL SERVO 2
  Motor5.write(grados5); // ENVIAR LOS GRADOS DEL SERVO 1
  //Motor6.write(grados6); // ENVIAR LOS GRADOS DEL SERVO 2

  //IMPRIMIMOS POR LA PANTALLA LAS VARIABLES CON LAS QUE TRABAJAMOS 
Serial.print(valorX1);//mostrar por pantalla los valores del eje x de 0 a 1023
Serial.print ("\t"); 
Serial.print(valorY1);//mostrar por pantalla los valores de eje y de 0 A 1023
Serial.print("\t");
Serial.print(valorX2);
Serial.print("\t");
Serial.print(valorY2);
Serial.print("\t");
Serial.print(valorX3);
Serial.print("\t");
Serial.print(valorY3);
Serial.print(grados1);//mostrar por pantalla los grados del eje x de 0 A 180
Serial.print("\t");
Serial.println(grados2);//mostar por pantalla los grados del eje y de 0 a 180
Serial.print("\t");
Serial.println(grados3);
Serial.print("\t");
Serial.println(grados4);
Serial.print("\t");
Serial.println(grados5);
//Serial.print("\t");
//Serial.println(grados6);

}