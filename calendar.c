#include<stdio.h>
int main(){
    int days, start_day, n;

    printf("Enter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week: ");
    scanf("%d", &start_day);
     
     n=start_day-1;
     
     while(n > 0){
        printf("\t");
        n--;
          }
        
    for(int i=1; i<=days; i++){
         
         
        printf("%d\t", i);
        
        if((i+start_day-1) % 7 == 0){
            
            printf("\n");
            
        }
    }
}