/*approsimazione di exp*/

#include <stdio.h>
#include <math.h>

int main ()
{
    double x, e = 0., primo_termine = 1.;
    int fattoriale = 1, i; 

    printf("inserisci la variabile");
    scanf("%lf", &x);

    for (i = 1; i < 10; i++)
    {
        fattoriale *= i;
        e += primo_termine / (double)fattoriale;
        primo_termine *= x;
    }
    printf("%f\n", e);
    
    e = 0.;

    e = exp(x);

    printf("%f", e);

    return 0;

}