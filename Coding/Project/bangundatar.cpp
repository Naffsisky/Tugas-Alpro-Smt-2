#include <iostream>
using namespace std;


void persegi(){ 
    int sisi, pilihan;

    cout << "1. Menghitung Luas Persegi\n";
    cout << "2. Menghitung Keliling Persegi\n";
    cout << "Masukan pilihan : ";
    cin >> pilihan;
    switch(pilihan){
        case 1:
            cout << "Masukan sisi : ";
            cin >> sisi;
            cout << "Luas Persegi adalah " << sisi*sisi << endl;
            break;
        case 2:
            cout << "Masukan sisi : ";
            cin >> sisi;
            cout << "Keliling Persegi adalah " << sisi*4 << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia\n";
    }
}

void persegi_panjang(){
    int panjang, lebar, pilihan;

    cout << "1. Menghitung Luas Persegi Panjang\n";
    cout << "2. Menghitung Keliling Persegi Panjang\n";
    cout << "Masukan pilihan : ";
    cin >> pilihan;
    switch(pilihan){
        case 1:
            cout << "Masukan panjang : ";
            cin >> panjang;
            cout << "Masukan lebar : ";
            cin >> lebar;
            cout << "Luas Persegi Panjang adalah " << panjang*lebar << endl;
            break;
        case 2:
            cout << "Masukan panjang : ";
            cin >> panjang;
            cout << "Masukan lebar : ";
            cin >> lebar;
            cout << "Keliling Persegi Panjang adalah " << 2*(panjang+lebar) << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia\n";
    }
}

void lingkaran(){
    int jari, pilihan;

    cout << "1. Menghitung Luas Lingkaran\n";
    cout << "2. Menghitung Keliling Lingkaran\n";
    cout << "Masukan pilihan : ";
    cin >> pilihan;
    switch(pilihan){
        case 1:
            cout << "Masukan jari-jari : ";
            cin >> jari;
            cout << "Luas Lingkaran adalah " << 3.14*jari*jari << endl;
            break;
        case 2:
            cout << "Masukan jari-jari : ";
            cin >> jari;
            cout << "Keliling Lingkaran adalah " << 2*3.14*jari << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia\n";
    }
}

void trapesium(){
    int a, b, tinggi, pilihan;

    cout << "1. Menghitung Luas Trapesium\n";
    cout << "2. Menghitung Keliling Trapesium\n";
    cout << "Masukan pilihan : ";
    cin >> pilihan;
    switch(pilihan){
        case 1:
            cout << "Masukan sisi a : ";
            cin >> a;
            cout << "Masukan sisi b : ";
            cin >> b;
            cout << "Masukan tinggi : ";
            cin >> tinggi;
            cout << "Luas Trapesium adalah " << (a+b)*tinggi/2 << endl;
            break;
        case 2:
            cout << "Masukan sisi a : ";
            cin >> a;
            cout << "Masukan sisi b : ";
            cin >> b;
            cout << "Keliling Trapesium adalah " << a+b+a+b << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia\n";
    }
}

void jajar_genjang(){
    int a, tinggi, pilihan;

    cout << "1. Menghitung Luas Jajar Genjang\n";
    cout << "2. Menghitung Keliling Jajar Genjang\n";
    cout << "Masukan pilihan : ";
    cin >> pilihan;
    switch(pilihan){
        case 1:
            cout << "Masukan sisi a : ";
            cin >> a;
            cout << "Masukan tinggi : ";
            cin >> tinggi;
            cout << "Luas Jajar Genjang adalah " << a*tinggi << endl;
            break;
        case 2:
            cout << "Masukan sisi a : ";
            cin >> a;
            cout << "Keliling Jajar Genjang adalah " << 2*a << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia\n";
    }  
}

void segitiga(){
    int a, tinggi, pilihan;

    cout << "1. Menghitung Luas Segitiga\n";
    cout << "2. Menghitung Keliling Segitiga\n";
    cout << "Masukan pilihan : ";
    cin >> pilihan;
    switch(pilihan){
        case 1:
            cout << "Masukan sisi a : ";
            cin >> a;
            cout << "Masukan tinggi : ";
            cin >> tinggi;
            cout << "Luas Segitiga adalah " << a*tinggi/2 << endl;
            break;
        case 2:
            cout << "Masukan sisi a : ";
            cin >> a;
            cout << "Keliling Segitiga adalah " << a+a+a << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia\n";
    }
}

void belah_ketupat(){
    int sisi, pilihan;

    cout << "1. Menghitung Luas Belah Ketupat\n";
    cout << "2. Menghitung Keliling Belah Ketupat\n";
    cout << "Masukan pilihan : ";
    cin >> pilihan;
    switch(pilihan){
        case 1:
            cout << "Masukan sisi : ";
            cin >> sisi;
            cout << "Luas Belah Ketupat adalah " << sisi*sisi << endl;
            break;
        case 2:
            cout << "Masukan sisi : ";
            cin >> sisi;
            cout << "Keliling Belah Ketupat adalah " << 4*sisi << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia\n";
    }
}

void layang_layang(){
    int sisi, pilihan;

    cout << "1. Menghitung Luas Layang-Layang\n";
    cout << "2. Menghitung Keliling Layang-Layang\n";
    cout << "Masukan pilihan : ";
    cin >> pilihan;
    switch(pilihan){
        case 1:
            cout << "Masukan sisi : ";
            cin >> sisi;
            cout << "Luas Layang-Layang adalah " << sisi*sisi << endl;
            break;
        case 2:
            cout << "Masukan sisi : ";
            cin >> sisi;
            cout << "Keliling Layang-Layang adalah " << 4*sisi << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia\n";
    }
}

int main(){
    int pilihan;

    cout << "\n\n***** MENU BANGUN DATAR *****\n\n";
    cout << "1. Persegi\n";
    cout << "2. Persegi Panjang\n";
    cout << "3. Lingkaran\n";
    cout << "4. Trapesium\n";
    cout << "5. Jajar Genjang\n";
    cout << "6. Segitiga\n";
    cout << "7. Belah Ketupat\n";
    cout << "8. Layang-layang\n";
    cout << "\nSilahkan pilih bangun datar yang ingin anda hitung : ";
    cin >> pilihan;

    switch(pilihan){
        case 1:
            persegi();
            break;
        case 2:
            persegi_panjang();
            break;
        case 3:
            lingkaran();
            break;
        case 4:
            trapesium();
            break;
        case 5:
            jajar_genjang();
            break;
        case 6:
            segitiga();
            break;
        case 7:
            belah_ketupat();
            break;
        case 8:
            layang_layang();
            break;
        default:
            cout << "Pilihan tidak tersedia\n";
    }
    
    return 0;
}

