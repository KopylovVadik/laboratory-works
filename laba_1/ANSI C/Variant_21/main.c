/*
Kopylov Vadim,student group 16ИС1бп
*/

#include <stdio.h>
#include <math.h>


int main()
{
    double G;  /*тут объевляем переменные */
    double F;
    double Y;
    double x;
    double a;

    scanf("%lf", &x); /*вводим х*/
    scanf("%lf", &a); /*вводим а*/

    G = 3 * (3 * pow(a, 2) - 13 * a * x + 4 * pow(x, 2)) / 54 * pow(a, 2) + 87 * a * x + 35 * pow(x, 2); /* вычисляем G*/

    F = -tanh(63*pow(a,2)-5*a*x-2*pow(x,2)); /* вычисляем F*/

    Y = -asin(8*pow(a,2)-15*a*x-27*pow(x,2)); /* вычисляем Y*/


    printf("%f\n",G); /*выводим значения */
    printf("%f\n",F);
    printf("%f\n",Y);

    return 0;
}