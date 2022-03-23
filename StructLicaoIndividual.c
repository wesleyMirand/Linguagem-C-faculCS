#include <stdio.h>

int main(void) {
 
 struct horarioacorda
 {
     int horas;
     int minutos;
     int segundos;
     
 };
 
 struct horarioacorda agora;
 
 agora.horas=07;
 agora.minutos=02;
 agora.segundos=30;

 printf ("%i:%i:%i", agora.horas, agora.minutos, agora.segundos);
 
 
 
 system("pause");
 return 0;
}
