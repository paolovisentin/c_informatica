#include<stdio.h>
int main(){
    int numbers[] = { 42, -73, 131, 7600, 5, 899, 2837, -8, 183, 415 };

    int *ptr1;
    int *ptr2;

    ptr1 = &numbers[0];
    ptr2 = ptr1+3; //7600 &number[3]

    printf("*ptr1       :%d\n", *ptr1);
    printf("*ptr2       :%d\n\n", *ptr2);
    printf("ptr2 - ptr1 :%d\n\n", (int) (ptr2 - ptr1)); //AAA
    printf("number[0]   :%d\n", numbers[0]);
    printf("number[1]   :%d", numbers[1]);

    return 0;

}