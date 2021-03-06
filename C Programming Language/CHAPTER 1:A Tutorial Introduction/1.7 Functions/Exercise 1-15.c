#include <stdio.h>

float fahr_to_cel(float);

int main()
{
    float fahr, celsius;
    int lower,upper,step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("The program prints the table of temperatures in Fahrenheit and Celsius.\n");
    while(fahr <= upper)
    {
        celsius = (5.0/9.0)*(fahr-32.0);
        printf("%3.0f %6.1f\n",fahr,fahr_to_cel(fahr));
        fahr += step;
    }

    return 0;
}

float fahr_to_cel(float fahr)
{
    return (5.0/9.0)*(fahr-32.0);
}
