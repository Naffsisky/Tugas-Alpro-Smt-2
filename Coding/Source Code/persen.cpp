#include <iostream>
using namespace std;
int belanja, tanggal, diskon, total;
char member;
int main(){
    cout << "Masukan tanggal : ";
    cin >> tanggal;
    if (tanggal % 2 == 0){
        cout << "Masukan jumlah belanja : ";
        cin >> belanja;
        if (belanja > 500000){
            diskon = belanja * 10/100;
            cout << "Anda mendapatkan diskon potongan sebesar : " << diskon << endl;
            cout << "Total belanjaan anda adalah : " << belanja - diskon << endl;
            cout << "\nApakah anda anggota member ? (y/n) : ";
            cin >> member;
            if (member == 'Y' || member == 'y'){
                total = belanja - diskon;
                total = total - (total * 7/100);
                cout << "Anda mendapatkan diskon potongan sebesar : " << total * 7/100<< endl;
                cout << "Anda mendapatkan diskon potongan hari genap : 2000" << endl;
                cout << "Total belanjaan anda adalah : " << total-2000 << endl;
            }
            else if (member == 'N' || member == 'n'){
                total = belanja - diskon;
                cout << "Total belanjaan anda adalah : " << total << endl;
            }
        }
        else if (belanja > 100000){
            diskon = belanja * 5/100;
            cout << "Anda mendapatkan diskon potongan sebesar : " << diskon << endl;
            cout << "Total belanjaan anda adalah : " << belanja - diskon << endl;
            cout << "\nApakah anda anggota member ? (y/n) : ";
            cin >> member;
            if (member == 'Y' || member == 'y'){
                total = belanja - diskon;
                total = total - (total * 7/100);
                cout << "Anda mendapatkan diskon potongan sebesar : " << total * 7/100<< endl;
                cout << "Anda mendapatkan diskon potongan hari genap : 2000" << endl;
                cout << "Total belanjaan anda adalah : " << total-2000 << endl;
            }
            else if (member == 'N' || member == 'n'){
                total = belanja - diskon;
                cout << "Total belanjaan anda adalah : " << total << endl;
            }
        }
        else if (belanja < 100000){
            diskon = 2000;
            cout << "Anda mendapatkan diskon potongan sebesar : " << diskon << endl;
            cout << "Total belanjaan anda adalah : " << belanja - diskon << endl;
        }
        else{
            cout << "Harga tidak tersedia!";
        }
    }
    else if (tanggal % 2 != 0){
        cout << "Masukan jumlah belanja : ";
        cin >> belanja;
        if (belanja > 500000){
            diskon = belanja * 10/100;
            cout << "Anda mendapatkan diskon potongan sebesar : " << diskon << endl;
            cout << "Total belanjaan anda adalah : " << belanja - diskon << endl;
            cout << "\nApakah anda anggota member ? (y/n) : ";
            cin >> member;
            if (member == 'Y' || member == 'y'){
                total = belanja - diskon;
                total = total - (total * 7/100);
                cout << "Anda mendapatkan diskon potongan sebesar : " << total * 7/100<< endl;
            }
            else if (member == 'N' || member == 'n'){
                total = belanja - diskon;
                cout << "Total belanjaan anda adalah : " << total << endl;
            }
        }
        else if (belanja > 100000){
            diskon = belanja * 5/100;
            cout << "Anda mendapatkan diskon potongan sebesar : " << diskon << endl;
            cout << "Total belanjaan anda adalah : " << belanja - diskon << endl;
            cout << "\nApakah anda anggota member ? (y/n) : ";
            cin >> member;
            if (member == 'Y' || member == 'y'){
                total = belanja - diskon;
                total = total - (total * 7/100);
                cout << "Anda mendapatkan diskon potongan sebesar : " << total * 7/100<< endl;
            }
            else if (member == 'N' || member == 'n'){
                total = belanja - diskon;
                cout << "Total belanjaan anda adalah : " << total << endl;
            }
        }
        else if (belanja < 100000){
            cout << "Total belanjaan anda adalah : " << belanja << endl;
        }
        else{
            cout << "Harga tidak tersedia!";
        }
    }
}