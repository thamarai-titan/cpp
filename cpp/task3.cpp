#include <iostream>

using namespace std;

int main() {

    cout << "Enter the Temprature in fahrenheit : " << endl;

    int temprature;

    cin >> temprature;
    
    int celsius = (temprature - 32) / 1.8 ;

    cout << "Temprature in celsius " << celsius;


}