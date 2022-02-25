#include<stdio.h>
int main(){
    int cmd;
    float balance = 0.0f, credit, debit;

    printf("*** ACME checkbook-balancing program ***\n");
    puts("");
    printf("Comands: 0=clear, 1=credit, 2=debit, ");
    printf("3=balance, 4=exit\n\n");
    for(;;){
        printf("Enter command: ");
        scanf("%d", &cmd);
        switch(cmd){
            
            case 1:
            printf("Enter amount of credit: ");
            scanf("%f", &credit);
            balance=balance+credit;

            case 2:
            printf("Enter amount of debit: ");
            scanf("%f", &debit);
            balance=balance-debit;

            case 3:
            printf("Current balance is: %.2f", balance);

            case 4:
            return 0;

            default:
            printf("Comands: 0=clear, 1=credit, 2=debit, ");
            printf("3=balance, 4=exit\n\n");
            break;

           
        }
    }
}