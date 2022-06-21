#include <iostream>
using namespace std;

int pilihan, sisi, panjang, lebar, r;
float hasil, phi;

int main(){
    cout << "Menu\n";
    cout << "1. Persegi\n";
    cout << "2. Persegi panjang\n";
    cout << "3. Lingkaran\n";
    cout << "Masukan pilihan : ";
    cin >> pilihan;

    switch (pilihan){
        case 1:
            cout << "Masukan sisi : ";
            cin >> sisi;
            hasil = sisi * sisi;
            cout << "\nHasil perhitungan dari " << sisi << " adalah " << hasil;
        break;

        case 2:
            cout << "Masukan panjang : ";
            cin >> panjang;
            cout << "Masukan lebar : ";
            cin >> lebar;
            hasil = panjang * lebar;
            cout << "\nHasil perhitungan dari : \n";
            cout << "Panjang\t: " << panjang << endl;
            cout << "Lebar\t: " << lebar << endl;
            cout << "Hasil : " << hasil;
        break;

        case 3:
            cout << "Masukan radius : ";
            cin >> r;
            phi = 3.14;
            hasil = phi * r;
            cout << "Hasil dari perhitungan dengan radius " << r << " adalah " << hasil;
        break;

        default :
            cout << "Maaf pilihan yang anda masukan salah!";
    }
    return 0;
}