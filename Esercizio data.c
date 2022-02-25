#include <stdio.h>
int main(void)
{
    int giorno, mese, anno;

    puts("Inserisci data (dd/mm/yyyy):");
    scanf("%d/%d/%d", &giorno, &mese, &anno);

    printf("Date this %d", giorno);
    if(giorno<31 && giorno>=1){

        switch(giorno){
        case 1: 
        case 21:
        case 31:
        printf("st");
        break;
        case 2:
        case 22:
        printf("nd");
        break;
        case 3:
        case 23:
        printf("rd");
        break;
        default:
        printf("th");
        break;
    }}

    else{
    printf("\nERRORE: Giorno non valido\n");
}
    puts(" day of ");

    switch(mese){
        case 1: printf("January");
        case 2: printf("February");
        case 3: printf("March");
        case 4: printf("April");
        case 5: printf("May");
        case 6: printf("June");
        case 7: printf("July");
        case 8: printf("August");
        case 9: printf("September");
        case 10: printf("October");
        case 11: printf("November");
        case 12: printf("December");
    }
    printf(", %d\n", anno);
    return 0;
}