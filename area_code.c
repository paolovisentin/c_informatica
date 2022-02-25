#include<stdio.h>
int main(){
    int prefix;

    printf("Inserisci prefisso: ");
    scanf("%d", &prefix);

    switch (prefix)
    {
    case 229: printf("Albany");
        break;
    case 404: printf("Atlanta");
        break;
    case 470: printf("Atlanta");
        break;
    case 478: printf("Macon");
        break;
    case 678: printf("Atlanta");
        break;
    case 706: printf("Columbus");
        break;
    case 762: printf("Columbus");
        break;
    case 770: printf("Atlanta");
        break;
    case 912: printf("Savannah");
        break;
    default: printf("Area code not recognized.");
        break;
    }
    
return 0;

}