/* numero di nepero */

#include <stdio.h>

int main ()
{
    int fattoriale = 1, i;    
    double nepero = 1., nepero2, variazione;
    
    for(i = 1; i < 10; i++)
    {
        fattoriale *= i;
        nepero += 1. / (double)fattoriale;
    }

    printf("l'approsimazione di nepero e' %f\n", nepero);
    
    i = 1;
    nepero = 1.;
    fattoriale = 1;
    nepero2 = 1.;

    do 
    {
        fattoriale *= i;
        i++;
        nepero2 += 1. / (double)fattoriale;
        variazione = nepero2 - nepero;
        nepero = nepero2;

    }while (variazione > 0.001);

    printf("la nuova approsimazione e' %f", nepero);
    
    return 0;

}
     