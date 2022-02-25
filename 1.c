#include<stdio.h>
void swap_int (int *a_p, int *b_p);

int main()
{

    int array[]={ 2, 5, 6, 9 };

    int *a_p;
    int *b_p;

    a_p = &array[3];
    b_p = &array[2];

    printf("*a_p: %d\n", *a_p);
    printf("*b_p: %d\n", *b_p);
    printf("Swapping...\n");

    swap_int(a_p, b_p);

    printf("*a_p: %d\n", *a_p);
    printf("*b_p: %d\n", *b_p);

    return 0;

}


void swap_int (int *a_p, int *b_p)
{
    int a_swap, b_swap;

    a_swap=*a_p;
    b_swap=*b_p;

    *a_p=b_swap;
    *b_p=a_swap;

}

