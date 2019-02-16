/* exp */

#include <stdio.h>
#include <math.h>

int main ()
{
    int x, fattoriale = 1, i; 
    double e = 1., e2;
 


    printf("inserisci x");
    scanf("%d", &x);

        e2 = exp(x);

    for(i = 1; i <= 10; i++)
    {
        fattoriale *= i;
        e += x / (double)fattoriale;
        x = pow(x, i + 1);
    }


 
    printf("l'approsimazione numero 1 e' %f mentre la seconda e' %f", e, e2);

    return 0;

}  
    