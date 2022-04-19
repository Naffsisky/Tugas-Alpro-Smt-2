#include <iostream>
using namespace std;

int usia, kerja, status, penghasilan, tanggungan, hasil;

int main(){
    cout << "Masukan usia : ";
    cin >> usia;
    cout << "Apakah anda sudah menikah? \n (1 = Ya, 2 = Tidak) \n";
    cout << "Masukan pilihan : ";
    cin >> status;
    if (status == 1){
        cout << "Berapa jumlah tanggungan anda : ";
        cin >> tanggungan;
    }
    else{
        tanggungan = 0;
    }
    cout << "\nApakah anda bekerja? \n (1 = Ya, 2 = Tidak) \n";
    cout << "Masukan pilihan : ";
    cin >> kerja;
    if (kerja == 1){
        cout << "Berapa penghasilan anda per bulan : ";
        cin >> penghasilan;
    }
    else{
        penghasilan = 0;
    }

    if (kerja == 2 && usia >= 17 && status == 2){
        hasil = 350000 * 3;
        cout << "\nAnda akan mendapat bantuan sebesar Rp. 350.000/bulan \n";
        cout << "Jumlah pertiga bulan adalah Rp. " << hasil;
    }
    else if (kerja == 1 && penghasilan <= 1500000 && tanggungan >= 3){
        hasil = 450000 * 3;
        cout << "\nAnda akan mendapat bantuan sebesar Rp. 450.000/bulan \n";
        cout << "Jumlah pertiga bulan adalah Rp. " << hasil;

    }
    else if (usia >= 60){ // Batasan usia lansia 60 tahun diatur dalam Undang-Undang Nomor 13 Tahun 1998 tentang. Kesejahteraan Lanjut Usia.
        hasil = 750000 * 3;
        cout << "\nAnda akan mendapat bantuan sebesar Rp. 750.000/bulan \n";
        cout << "Jumlah pertiga bulan adalah Rp. " << hasil;
    }
    else{
        cout << "\nAnda tidak dapat bantuan";
    }
    return 0;
}