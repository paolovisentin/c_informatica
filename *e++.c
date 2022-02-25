#include<stdio.h>

int mystrcpy (char *dst, const char *src){
    char *dstp = dst;
    while ((*dstp++ = *src++) != '\0')

    return (int) (dstp - dst - 1);
    
}

int main(void){
    char source[] = "Ground control to Major Tom, take your protein pills and put your helmet on";
    char dest[100];
    int len = mystrcpy(dest, source);
    printf("%s\n", dest);
    return 0;
                    
}