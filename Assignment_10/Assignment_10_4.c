#include <stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;
    dCelsius = (fTemp - 32) * 5 / 9;   // Formula: °C = (°F - 32) × 5/9
    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is %.2lf\n", dRet);

    return 0;
}