#include "class.h"

//TODO
Thermometer:: Thermometer(){}
Thermometer:: Thermometer(double temp){
    tempCelsius=temp;
}
Thermometer:: ~Thermometer(){}

// set temperature
void Thermometer:: SetTempCelsius(double Celsius){
    tempCelsius= Celsius;
}
void Thermometer::SetTempFahrenheit(double Fahrenheit){
    tempFahrenheit= Fahrenheit;
}

// display temperature
double Thermometer::GetTempCelsius(){
    if(tempFahrenheit) return (tempFahrenheit-32)/1.8;
    return tempCelsius;
    
}
double Thermometer:: GetTempFahrenheit(){
    return tempCelsius*1.8+32;
}