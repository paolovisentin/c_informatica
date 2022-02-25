#include<stdio.h>
int main(){
    int i;
    char c;
    
    printf("Char: %lu byte - int: %lu byte", sizeof(char), sizeof(int));
    return 0;
}

#include<stdio.h>
int main(){
    int i;
    char c;
    
    printf("Puntatore a char: %lu byte - puntatore ad int: %lu byte", sizeof(char*), sizeof(int*));
    return 0;
}