#include<stdio.h>
int main(){

    char word[25];

    printf("Enter a message: ");
    
        scanf("%s", word);
        for(int i = 0; i<35; i++)
        {
            printf("%c", word[i]);
        }
            

}