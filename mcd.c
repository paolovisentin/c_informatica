#include<stdio.h>
int main(){
    int mcd, m, n;
    printf("Inserisci due numeri: ");
    scanf("%d %d", &m, &n);

    if(m > 0 && n > 0){
        while(m!=n){
            if(m>n)
            m=m-n;
            else
            n=n-m;
        }
        mcd = m;
    }
    else
        mcd= -1;

    printf("%d", mcd);

    return 0;
}
