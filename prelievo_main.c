//main.c
//by Paolo Visentin
//Data:17/11/2021

#include<stdio.h> 
int main ()
{
 int contocorrente=2000, prelievo;
 printf("ATM abilitato\n");
while (1!=0) {
    
printf("-----------\n");
printf("Il saldo disponibile attuale è: %d € \n", contocorrente);
printf("-----------\n");
printf("Quanto si desidera prelevare? ");
scanf("%d",&prelievo);
if (prelievo<=contocorrente && contocorrente>=0 && prelievo%5==0) {

  int a,b,c,d,e,f,g;
 

a =  prelievo/ 500;
b = (prelievo-(a*500)) / 200;
c = (prelievo-(a*500)-(b*200)) / 100;
d = (prelievo-(a*500)-(b*200)-(c*100)) / 50;
e = (prelievo-(a*500)-(b*200)-(c*100)-(d*50)) / 20;
f = (prelievo-(a*500)-(b*200)-(c*100)-(d*50)-(e*20)) / 10;
g = (prelievo-(a*500)-(b*200)-(c*100)-(d*50)-(e*20)-(f*10)) / 5;

printf("Banconote erogate:");

  printf("500€: %d\n",a);
  printf("200€: %d\n",b);
  printf("100€: %d\n",c);
  printf("50€: %d\n",d);
  printf("20€: %d\n",e);
  printf("10€: %d\n",f);
  printf("5€: %d\n",g);  
  contocorrente = contocorrente - prelievo;
  
  
}
else {
      printf("ERRATO RIPROVA \n");
    }

}
return 0;
}