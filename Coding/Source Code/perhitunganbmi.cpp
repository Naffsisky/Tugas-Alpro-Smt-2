#include<iostream>
#include<math.h>
using namespace std;

float berat, tinggi, bmi;

int main(){
    cout << "Masukan berat badan : ";
    cin >> berat;
    cout << "Masukan tinggi badan : ";
    cin >> tinggi;
    
    tinggi = tinggi/100;
    bmi = berat/(pow(tinggi,2));

    if (bmi < 18.5){
        cout << "Underweight";
    } 
    else if (bmi >= 18.5 && bmi <= 24.9){
        cout << "Normal";
    } 
    else if (bmi >= 25 && bmi <= 29.9){
        cout << "Overweight";
    } 
    else if (bmi >= 30){
        cout << "Obesitas";
    }
    return 0;
}