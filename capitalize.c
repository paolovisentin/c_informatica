#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define DIM 10

void printtoupper(char arr[]);

int main(){
    char arr[DIM];

    printf("Inserisci parola: ");
    scanf("%s", arr);

    printtoupper(arr);

    return 0;
}

void printtoupper(char arr[]){
    int len = strlen(arr);
for(int i=0; i<len; i++){
     printf("%c", toupper(arr[i]));
}
     return 0;
}
