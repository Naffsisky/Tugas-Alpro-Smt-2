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

        if (i == 1 && password != 123456){
            cout << "Mohon maaf password yang anda masukkan salah!" << endl;
            cout << j;
            cout << " kali lagi" << endl;
        }
        else if (i == 2 && password != 123456){
            cout << "Mohon maaf password yang anda masukkan salah!\n";
            cout << "Percobaan terakhir!\n";
            cout << j;
            cout << " kali lagi" << endl;
        }
        else if (i == 3 && password != 123456){
            cout << "Akun anda diblokir!\n";
            return 0;
        }
    }

    while (password != 123456);
        cout << "Password yang anda masukkan benar!";
    return 0;
}
