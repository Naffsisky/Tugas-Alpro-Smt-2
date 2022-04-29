#include <iostream>
using namespace std;

int password, i, j;

int main(){
        i = 0;
        j = 3;
    do {
        i++;
        j--;

        cout << "Masukan password anda : ";
        cin >> password;
        cout << endl;

        if (i == 1 && password != 1234){
            cout << "Password anda salah, silahkan coba lagi" << endl;
            cout << j;
            cout << " kali lagi" << endl;
        }
        else if (i == 2 && password != 1234){
            cout << "Percobaan terakhir!\n";
            cout << j;
            cout << " kali lagi" << endl;
        }
        else if (i == 3 && password != 1234){
            cout << "Akun anda diblokir!\n";
            return 0;
        }
    }

    while (password != 1234);
        cout << "Login berhasil!";
    return 0;
}
