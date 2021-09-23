// Calcular o valor de S: 2/50 + 2²/48 + 2³/46 + ... + 2^25/2

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b=50,c;
    float s=0, temp;
    c = pow(2,25);

    for (a = 2 ; a <= c ; a = a * 2)
    {
        temp = a/b;
        b = b - 2;
        s = s + temp;

    }

    printf("O valor de S eh %.3f", s);
    return 0;
}
