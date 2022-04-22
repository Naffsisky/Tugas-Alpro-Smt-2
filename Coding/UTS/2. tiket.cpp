#include <iostream> 
using namespace std;
int pilihan; 
int main() {
    cout << "Program menentukan harga tiket\n";
    cout << "1. Mahasiswa angkatan 2021 dan Panitia\n";
    cout << "2. Mahasiswa angkatan 2021 dan bukan panitia\n"; 
    cout << "3. Mahasiswa angkatan 2022\n";
    cout << "Masukkan status anda : "; 
    cin >> pilihan;
    switch (pilihan) {
        case 1:
        cout << " Harga tiket anda adalah = Rp. 10.000\n"; break;
        case 2:
        cout << " Harga tiket anda adalah = Rp. 15.000\n"; break;
        case 3:
        cout << " Harga tiket anda adalah = Rp. 20.000\n"; break;
    }
    return 0; 
}
