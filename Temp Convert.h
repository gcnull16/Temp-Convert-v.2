#ifndef TEMP_CONVERT_H_INCLUDED
#define TEMP_CONVERT_H_INCLUDED

///Convert temperature from Celsius to Fahrenheit.

float convertTemperature(float);

float convertTemperature(float temp)
{
    float returnValue;

    returnValue = ((temp * 9) / 5) + 32;

    return returnValue;
}




#endif // TEMP_CONVERT_H_INCLUDED
