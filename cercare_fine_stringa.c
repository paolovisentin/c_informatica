#include<stdio.h>
#define MAX_LEN 10

size_t strlen(const char *s)
{
    size_t n;

    for(n = 0; *s != '\0'; s++)
        n++;
        return n;
}
int main(){
    char s[MAX_LEN];

    gets(s);
    printf("%ld", strlen(s));
}