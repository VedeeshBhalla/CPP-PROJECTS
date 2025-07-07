#include<bits/stdc++.h>
using namespace std;

void convertTemperature(float value, char unit) {
    float celsius, fahrenheit, kelvin;

    switch(toupper(unit)) {
        case 'C':
            celsius = value;
            fahrenheit = (celsius * 9 / 5) + 32;
            kelvin = celsius + 273.15;
            break;
        case 'F':
            fahrenheit = value;
            celsius = (fahrenheit - 32) * 5 / 9;
            kelvin = celsius + 273.15;
            break;
        case 'K':
            kelvin = value;
            celsius = kelvin - 273.15;
            fahrenheit = (celsius * 9 / 5) + 32;
            break;
        default:
            cout << "Invalid unit! Use C, F, or K." <<endl;
            return;
    }

    cout << fixed << setprecision(2);  // show 2 decimal places
    cout << endl << "Converted Temperatures: " <<endl;
    cout << "Celsius: " << celsius << " °C" <<endl;
    cout << "Fahrenheit: " << fahrenheit << " °F" <<endl;
    cout << "Kelvin: " << kelvin << " K" <<endl;
}

int main() {
    float tempValue;
    char tempUnit;

    cout << "Enter temperature value: ";
    cin >> tempValue;
    cout << "Enter unit (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> tempUnit;

    convertTemperature(tempValue, tempUnit);

    return 0;
}