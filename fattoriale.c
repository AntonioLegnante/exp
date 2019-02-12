/* fattoriale */

#include <stdio.h>

int main ()
{
    int numero, fattoriale = 1, prodotti = 1;
    
    printf("inserisci un numero che sia positivo");
    do 
    {
        scanf("%d", &numero);
    }while(numero < 0);
    
    fattoriale = numero;
    while (prodotti != numero)
    {
        fattoriale *= prodotti;
        prodotti++;
    }
   
    printf("%d", fattoriale);
  
    return 0;

}