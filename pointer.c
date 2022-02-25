#include<stdio.h>
int main(){
    int j=63;
    int *p=NULL;
    p=&j;

    printf("The address of j is %x", &j);
    printf("\np contains adress %x", p);
    printf("\nThe value of j is %d\n", j);
    printf("p is pointing to the value %d\n", *p);
}

/*

Output:

The address of j is ff3652cc
p contains address ff3652cc
The value of j is 63
p is pointing to the value 63

*/

#include<stdio.h>
int main(){
    int x = 5;
    int y;
    int *p = NULL;
    p=&x;

    y=*p+2;   // y is assigned 7
    y+= *p;   // y is assigned 12
    *p=y;   // x is assigned 12
    (*p)++;   // x is incremented to 13
    printf("p is pointing to the value %d\n", *p);
}