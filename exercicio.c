#include <stdio.h>

int main(void) {
 int x, y , z;
 printf("Digite um numero: ");
 fflush(stdin);
 scanf("%d",&x);
 printf("Digite um outro numero: ");
 fflush(stdin);
 scanf("%d",&y);
 printf("Digite um numero diferente: ");
 fflush(stdin);
 scanf("%d",&z);
 if (x > y > z) {
   printf("A ordem crescente dos numeros citados e:%d, %d, %d ", x , y ,z);
 }
 else if ( y > x > z){
   printf("A ordem crescente dos numeros citados e:%d, %d, %d ", y , x ,z);
 }
 else if ( z > y > x){
   printf("A ordem crescente dos numeros citados e:%d, %d, %d ", z , y ,x);
 }
 else if ( y > z > x){
   printf("A ordem crescente dos numeros citados e:%d, %d, %d ", y , z ,x);
 }
 else if ( z > x > y){
   printf("A ordem crescente dos numeros citados e:%d, %d, %d ", z , x ,y);
 }
 else if ( x > y > z){
   printf("A ordem crescente dos numeros citados e:%d, %d, %d ", x , y ,z);
 }
 else if ( x > z > y){
   printf("A ordem crescente dos numeros citados e:%d, %d, %d ", x , z ,y);
 }
  return 0;
}
