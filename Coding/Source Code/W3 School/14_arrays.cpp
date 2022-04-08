#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int pilihan;
    string mobil[6] = {"Volvo", "BMW", "Ford", "Mazda"}; // kenapa [6] soalnya jumlah semua mobil. di hitung dari 1 bukan 0
    mobil [4] = "Tesla"; //fungsi angka dalam kurung untuk menentukan letak dan dimulai dari angka 0
    mobil [5] = "Toyota";
    for(int i = 0; i < 5; i++)
    cout << mobil[i] << "\n";
    cout << "Pick mobil random, ketik 0-3 : ";
    cin >> pilihan;
    cout << mobil[pilihan];

    return 0;
}

// mulai array dari 0