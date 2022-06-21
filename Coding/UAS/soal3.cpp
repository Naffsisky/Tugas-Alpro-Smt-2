#include <iostream>
using namespace std;

int tugas, uts, uas;
float htugas, huts, huas, hasil;

int main(){
    cout << "Perhitungan bobot nilai\n";
    cout << "Masukan nilai Tugas : ";
    cin >> tugas;
    if (tugas <= 100){
        cout << "Masukan nilai UTS : ";
        cin >> uts;
        if (uts <= 100){
            cout << "Masukan nilai UAS : ";
            cin >> uas;
            if (uas <= 100){
                htugas = tugas * 20/100;
                huts = uts * 30/100;
                huas = uas * 50/100;
                hasil = htugas + huts + huas;
                cout << "Hasil kumulatif dari tugas + uts + uas adalah : " << hasil;
                if (hasil > 80){
                    cout << "\nAnda mendapatkan grade A";
                }
                else if (hasil > 70 && hasil <= 79){
                    cout << "\nAnda mendapatkan grade B";
                }
                else if (hasil > 60 && hasil <= 69){
                    cout << "\nAnda mendapatkan grade C";
                }
                else if (hasil > 50 && hasil <= 59){
                    cout << "\nAnda mendapatkan grade D";
                }
                else{
                    cout << "\nAnda mendapatkan grade E";
                }
            }
            else{
                cout << "Nilai max 100!";
            }
        }
        else{
            cout << "Nilai max 100!";
        }
    }
    else {
        cout << "Nilai max 100!";
    }
    return 0;
}