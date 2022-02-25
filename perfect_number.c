#include<stdio.h>
int main(){
    int num, rem, sum = 0, i;
    printf("Enter a number:\n");
    scanf("%d", &num);
    for(i = 1; i < num; i++){
        rem = num % i;
        if(rem == 0){
            sum = rem + i;
        }
        }
        if(sum == rem){
            printf("Perfect number");
        }
        else
        printf("Not a perfect number");
        
    return 0;
    
}
