/*
Kopylov Vadim,student group 16ИС1бп
 */
#include <stdio.h>
#include <math.h>

int main ()

{
    float x,a,g;

    scanf("%f",&a); scanf("%f",&x);
    g= sin(a * x) * cos(a - x);
    printf("g= %f\n",g);

    return 0;
}