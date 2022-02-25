#include <stdio.h>
#define MAX_LETTER_WORD 10
int main(){

    char str[][MAX_LETTER_WORD] =    {"hola", 
                                      "como", 
                                      "estas"};

    printf("%s ", *str);            //hola
    printf("%s ", *(str + 1));      //como
    printf("%s\n", *(str + 2));     //estas
    
    printf("%s ", &str[0][0]);      //hola
    printf("%s ", &str[1][0]);      //como
    printf("%s", &str[2][0]);       //estas
    

return 0;

}


#include <stdio.h>
#define MAX_LETTER_WORD 10
#define MAX_WORD 5

int main(){

    char str[MAX_WORD][MAX_LETTER_WORD];

    for(int i = 0; i < MAX_WORD; i++){

        printf("Inserisci parola %d:\n", i + 1); 
        scanf("%s", *(str + i));
    }
    
     printf("\n");
     
     for(int i = 0; i < MAX_WORD; i++){
        
        printf("Parola %d: %s\n", i + 1, *(str + i)); 
        
    }
    
    printf("%s\n", str[0]); //stampa parola 1
    printf("%s", str[1]);  //stampa parola 2
    

return 0;

}



#include <stdio.h>
#include <string.h>
#define MAX_LETTER_WORD 10
#define MAX_WORD 5

int ordina_parole(char str[MAX_WORD][MAX_LETTER_WORD]);
void print_ordine(char str[MAX_WORD][MAX_LETTER_WORD]);

int main(){

    char str[MAX_WORD][MAX_LETTER_WORD];
    int n;

    for(int i = 0; i < MAX_WORD; i++){

        printf("Inserisci parola %d:\n", i + 1); 
        scanf("%s", *(str + i));
    }
    
    
    ordina_parole(str);

    print_ordine(str);
    
return 0;

}

int ordina_parole(char str[MAX_WORD][MAX_LETTER_WORD]){

    int n = MAX_WORD;
    char temp[MAX_LETTER_WORD];


    while(n > 1){                               
	for(int j=0;j<n-1;j++)                //bubble sort           |2|5|1|4|
	  if(strcmp(str[j],str[j+1])>0)
	  { 
        strcpy(temp,str[j]);
	    strcpy(str[j],str[j+1]);
	    strcpy(str[j+1],temp);
	  }
      n--;
    }
	  printf("\n");

      return n;
	  
	
}

void print_ordine(char str[MAX_WORD][MAX_LETTER_WORD]){

    for(int i = 0; i < MAX_WORD; i++){
	       printf("%s\n", str[i]);
	  }
	  
    printf("\nSmallest word is: %s\n", str[0]);
    printf("Largest word is: %s", str[MAX_WORD-1]);
}