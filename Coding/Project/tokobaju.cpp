#include <iostream>
using namespace std;

// NAMA : PRINAFSIKA
// NPM : 21081010278
// KELAS : C081

string kode, size, a, b, c, d, e, s, m;
int total, tambah, uang;
float jumlah;

void baju(){
    cout << "\n\nKode Brand\n";
    cout << "A. Local Brand\n";
    cout << "B. LV\n";
    cout << "C. Junior Wear\n";
    cout << "D. Wyne\n";
    cout << "E. Kicher\n";
    cout << "Masukan kode baju : ";
    cin >> kode;

    if (kode == "a"){
        cout << "**************************************\n";
        cout << "*            Local Brand             *\n";
        cout << "*      Size : S  = Rp. 100.000       *\n";
        cout << "*      Size : M  = Rp. 120.000       *\n";
        cout << "*      Any  :    = Rp. 150.000       *\n";
        cout << "**************************************\n";
        cout << "Masukan size : ";
        cin >> size;
        if (size == "s"){
            cout << "\nHarga baju = Rp. 100.000 \n";
            total = total + 100000;
            cout << "Total harga = Rp. " << total << "\n";
        }
        else if (size == "m"){
            cout << "\nHarga baju = Rp. 120.000 \n";
            total = total + 120000;
            cout << "Total harga = Rp. " << total << "\n";
        }
        else{
            cout << "\nHarga baju = Rp. 150.000 \n";
            total = total + 150000;
            cout << "Total harga = Rp. " << total << "\n";
        }
    }

    else if (kode == "b"){
        cout << "**************************************\n";
        cout << "*                 LV                 *\n";
        cout << "*      Size : S  = Rp. 150.000       *\n";
        cout << "*      Size : M  = Rp. 160.000       *\n";
        cout << "*      Any  :    = Rp. 170.000       *\n";
        cout << "**************************************\n";
        cout << "Masukan size : ";
        cin >> size;
        if (size == "s"){
            cout << "\nHarga baju = Rp. 150.000 \n";
            total = total + 150000;
            cout << "\nTotal harga = Rp. " << total << "\n";
        }
        else if (size == "m"){
            cout << "\nHarga baju = Rp. 160.000 \n";
            total = total + 160000;
            cout << "\nTotal harga = Rp. " << total << "\n";
        }
        else{
            cout << "\nHarga baju = Rp. 170.000 \n";
            total = total + 170000;
            cout << "Total harga = Rp. " << total << "\n";
        }
    }

    else if (kode == "c"){
        cout << "**************************************\n";
        cout << "*            Junior Wear             *\n";
        cout << "*      Size : S  = Rp. 200.000       *\n";
        cout << "*      Size : M  = Rp. 200.000       *\n";
        cout << "*      Any  :    = Rp. 200.000       *\n";
        cout << "**************************************\n";
        cout << "Masukan size : ";
        cin >> size;
        if (size == "s"){
            cout << "\nHarga baju = Rp. 200.000 \n";
            total = total + 200000;
            cout << "\nTotal harga = Rp. " << total << "\n";
        }
        else if (size == "m"){
            cout << "\nHarga baju = Rp. 200.000 \n";
            total = total + 200000;
            cout << "\nTotal harga = Rp. " << total << "\n";
        }
        else{
            cout << "\nHarga baju = Rp. 200.000 \n";
            total = total + 200000;
            cout << "\nTotal harga = Rp. " << total << "\n";
        }
    }

    else if (kode == "d"){
        cout << "**************************************\n";
        cout << "*              Wyne                  *\n";
        cout << "*      Size : S  = Rp. 300.000       *\n";
        cout << "*      Size : M  = Rp. 300.000       *\n";
        cout << "*      Any  :    = Rp. 350.000       *\n";
        cout << "**************************************\n";
        cout << "Masukan size : ";
        cin >> size;
        if (size == "s"){
            cout << "\nHarga baju = Rp. 300.000 \n";
            total = total + 300000;
            cout << "\nTotal harga = Rp. " << total << "\n";
        }
        else if (size == "m"){
            cout << "\nHarga baju = Rp. 300.000 \n";
            total = total + 300000;
            cout << "\nTotal harga = Rp. " << total << "\n";
        }
        else{
            cout << "\nHarga baju = Rp. 350.000 \n";
            total = total + 350000;
            cout << "\nTotal harga = Rp. " << total << "\n";
        }
    }

    else if (kode == "e"){
        cout << "**************************************\n";
        cout << "*              Kicher                *\n";
        cout << "*      Size : S  = Rp. 100.000       *\n";
        cout << "*      Size : M  = Rp. 120.000       *\n";
        cout << "*      Any  :    = Rp. 130.000       *\n";
        cout << "**************************************\n";
        cout << "Masukan size : ";
        cin >> size;
        if (size == "s"){
            cout << "\nHarga baju = Rp. 100.000 \n";
            total = total + 100000;
            cout << "\nTotal harga = Rp. " << total << "\n";
        }
        else if (size == "m"){
            cout << "\nHarga baju = Rp. 120.000 \n";
            total = total + 120000;
            cout << "\nTotal harga = Rp. " << total << "\n";
        }
        else{
            cout << "\nHarga baju = Rp. 130.000 \n";
            total = total + 130000;
            cout << "\nTotal harga = Rp. " << total << "\n";
        }
    }

    else{
        cout << "Kode tidak ada\n";
    }
}
// Tugas program hanya sampai sini, selanjutnya adalah sedikit variasi yang dibuat oleh saya.

void pembayaran(){
    cout << "Masukan jumlah uang : ";
    cin >> uang;
    jumlah = uang - total;
    if (uang < total){
        cout << "Uang anda kurang!\n\n";
        pembayaran();
    }
    else{
        cout << "Kembalian anda : Rp. " << jumlah << "\n";
    }

}
int main(){
    baju();
    cout << "\nApakah anda ingin menambah produk?";
    cout << "\n1. Ya\n2. Tidak\n";
    cout << "Masukan pilihan anda : ";
    cin >> tambah;
    if (tambah == 1){
        main();
    }
    else{
        cout << "\n\nTotal belanja anda sebesar = Rp. " << total << "\n";
        pembayaran();
        return 0;
    }
    cout << "\n***Terima kasih telah berbelanja di toko kami***";
    return 0;
}