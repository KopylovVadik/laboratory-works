/*
Kopylov Vadim,student group 16ИС1бп
*/

#include <stdio.h>
#include <math.h>


int main()
{
    double G,F,Y,x,a;

    scanf("%d", &x); //
    scanf("%d", &a);

    G=3*(3*pow(a,2)-13*a*x+4*pow(x,2))/54*pow(a,2)+87*a*x+35*pow(x,2);

    F=-tanh*(63*pow(a,2)-5*a*x-2*pow(x,2));

    Y=-arcsin*(8*pow(a,2)-15*a*x-27*pow(x,2));


    printf("%d.3\n",G);
    printf("%d.3\n",Y);
    printf("%d.3\n",X);

}
