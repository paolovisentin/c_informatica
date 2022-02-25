//ES DAL LIBRO PAG. 127

#include<stdio.h>
int main()
{
    int num, max=0;

    printf("Inserisci numero (0 per terminare): ");
    scanf("%d", &num);

    while(num!=0){
        
        if(num>max)
        max=num;
        
        else
        max=num;
        
        scanf("%d", &num);
    }

    printf("Max is: %d", max);

}


#include<stdio.h>
int main(){

    int i, n;
    puts("Inserisci numero: ");
    scanf("%d", &n);
    puts(" ");

        for(i=2;i<=n;i++)
            if(i*i%2==0)
            printf("%d\n", i*i);
}


#include<stdio.h>
int main(){
    
    int n, m;

    puts("Inserisci numero di giorni nel mese:");
    scanf("%d", &n);
    
            for(int i=1; i<=n; i++){
                if(i==7 || i==14 || i==21 || i==28){
                    printf("%4d", i);
                    printf("\n");}
                else
                    printf("%4d", i);
                    
        }
    
}
