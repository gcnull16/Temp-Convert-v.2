#include <stdio.h>
#include <stdlib.h>
#include "Temp Convert.h"

int main()
{
 printf("enter temperature in Celsius: ");

    float tempC;

    scanf("%f", &tempC);

    float tempF;
    tempF = convertTemperature(tempC);

    printf("Temperature in Fahrenheit: %f", tempF);

    return 0;
}
