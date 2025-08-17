#include <stdio.h>

double celciusToFahrenheit(double celcius);
double FahrenheitToCelcius(double Fahrenheit);
void printFahrenheit(double fahrenheit);
void printCelcius(double celcius);

int main() {
    double temp, result;
    char c_or_f;
    scanf("%lf %c", &temp, &c_or_f);
    
    if (c_or_f == 'c' || c_or_f == 'C'){
        result = celciusToFahrenheit(temp);
        printFahrenheit(result);
    }else{
        result = FahrenheitToCelcius(temp);
        printCelcius(result);
    }
    return 0;
}

double celciusToFahrenheit(double celcius){
    return 32 + celcius * (180.0/100.0);
}

double FahrenheitToCelcius(double fahrenheit){
    return (fahrenheit - 32) * (100.0/180.0);
}

void printFahrenheit(double fahrenheit) {
    printf("%.2lf f", fahrenheit);
}

void printCelcius(double celcius) {
    printf("%.2lf c", celcius);
}