#include<stdio.h>
#define MAX_LEN 100
char *strcat(char *s1, const char *s2)
{
    char *p = s1;

    while (*p != '\0')
        p++;
    while(*s2 != '\0'){
        *p = *s2;
        p++;
        s2++;
    }
    *p = '\0';
    return s1;
}

int main(){
    char s1[MAX_LEN + 1];
    char s2[MAX_LEN + 1];

    printf("Inserisci stringa: ");
    gets(s1);

    printf("%s", strcat(s1, s2));
}