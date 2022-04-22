#include<iostream>
#include<string>

using namespace std;

int jamkerja;
double hasil;
string golongan, a, b, c;

int main(){
    cout << "Masukan jumlah jam kerja : ";
    cin >> jamkerja;

    cout << "---- Golongan ----\n";
    cout << "Golongan A = 4000 \n";
    cout << "Golongan B = 3500 \n";
    cout << "Golongan C = 3000 \n";
    cout << "Masukan golongan : ";
    cin >> golongan;


    if (jamkerja <= 40)
        if (golongan == a)
            hasil = jamkerja * 4000;
        else if (golongan == b)
            hasil = jamkerja * 3500;
        else if (golongan == c)
            hasil = jamkerja * 3000;
        else
            cout << "Pilihan tidak ada";

    else if (jamkerja > 40)
        if (golongan == a)
        {
            hasil = (1.75 * 4000)*jamkerja;
            cout << "Gaji anda adalah Rp. " << hasil;
        }
        else if (golongan == b)
        {
            hasil = (1.75 * 3500)*jamkerja; 
            cout << "Gaji anda adalah Rp. " << hasil;
        }
        else if (golongan == c)
        {
            hasil = (1.75 * 3000)*jamkerja;
            cout << "Gaji anda adalah Rp. " << hasil;
        }
        else
            cout << "Pilihan tidak ada!";
    else
        cout << "Pilihan tidak ada!!";
    return 0;
}