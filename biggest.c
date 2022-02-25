#include<stdio.h>
int main(void)
{
 int num, biggest=0;
 while(num > 0){
 printf("Inserisci numero: ");
 scanf("%d", &num);

 if (num>biggest)
    biggest=num;
 }
 printf("Maggiore: %d", biggest);

return 0;

}