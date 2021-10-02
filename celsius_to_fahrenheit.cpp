#include <iostream>
using namespace std;

int main(){
    float celsius;
    float fahrenheit;
    
    cout << "Celsius to Fahrenheit conversion." << endl;
    
    while (cin >> celsius){
        fahrenheit = 1.8 * celsius + 32;
        cout << "Fahrenheit = " << fahrenheit << endl;
    }
    
    return 0;
}