#include <iostream>
using namespace std;
float phi;
int r, s, p, l, pilihan, jawaban;

int main() {
    cout << "\n1. Luas lingkaran \n2. Luas Bujur sangkar \n3. Luas Persegi panjang \n \nMasukkan pilihan : ";
    cin >> pilihan;
    switch (pilihan) {
        case 1:
        phi = 3.14;
        cout << "Masukkan r : ";
        cin >> r;
        jawaban = phi*r*r;
        cout << jawaban;
        break;
    case 2:
        cout << "Masukkan sisi : ";
        cin >> s;
        jawaban = s*s;
        cout << jawaban;
        break;
    case 3:
        cout << "Masukkan p : ";
        cin >> p;
        cout << "Masukkan l : ";
        cin >> l;
        jawaban = p * l ;
        cout << jawaban;
        break;

    default:
        cout << "\n Pilihan tidak tersedia";
    }


return 0;
}

