#include <iostream>
using namespace std;

int i, data, jawaban[30];
float ratarata, jumlah;

int main() {   
    cout << "Masukan jumlah data : ";
    cin >> data;
    for (i = 0; i < data; i++) {
        cout << "Data ke-" << i + 1 << " : ";
        cin >> jawaban[i];
        jumlah += jawaban[i];
    }
        ratarata = jumlah / data;
        
        cout << "\nTotal angka = " << jumlah;
        cout << "\nRata-rata = " << ratarata;
}
