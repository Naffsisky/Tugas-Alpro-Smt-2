#include <iostream>
using namespace std;

float user;

int main(){
    cout << "Masukkan IPK : ";
    cin >> user;

    if (user >= 3.5)
        cout << "Selamat Anda Lulus";
    else
        cout << "Maaf Anda Tidak Lulus";
}