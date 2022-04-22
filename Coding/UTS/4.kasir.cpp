#include <iostream>
using namespace std;

int pilihan, x, total, member, pembayaran;

int main() {
    x = 1200000;

    cout << "Apakah mempunyai member : \n";
    cout << "1. Ya \n";
    cout << "2. Tidak \n";
    cin >> member;

    cout << "Metode pembayaran : \n";
    cout << "1. Kredit \n";
    cout << "2. Debit \n";
    cout << "Pembayaran : ";
    cin >> pembayaran;

    if (member == 1 && pembayaran == 1) {

        total = x - 36000+25000;
        cout << "Total pembayaran : " << total;
    }
    else if (member == 1 && pembayaran == 2) {
        total = x - 36000+10000;
        cout << "Total pembayaran : " << total;
    }
    else if (member == 2 && pembayaran == 1) {
        total = x + 25000;
        cout << "Total pembayaran : " << total;
    }
    else if (member == 2 && pembayaran == 2) {
        total = x + 10000;
        cout << "Total pembayaran : " << total;
    }
    else {
        cout << "Pilihan tidak tersedia";
    }
    return 0;
}
