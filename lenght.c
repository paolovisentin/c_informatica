#include<stdio.h>
int main(){
    char ch;
    int leght=0;

    printf("Enter the message: ");
    ch = getchar();
    while(ch != '\n'){
        leght++;
        ch = getchar();

    }
    printf("Your message was %d characters long\n", leght);
    return 0;

}