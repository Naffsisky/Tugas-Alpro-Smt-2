#include <iostream>
using namespace std;

int kelipatan, mulai, user, i;

int main() {
	cout << "Masukan angka mulai : ";
	cin >> mulai;
    cout << "Masukan maksimal angka : ";
    cin >> user;
    cout << "Masukan angka kelipatan : ";
    cin >> kelipatan;
        for (i = mulai; i <= user; i = i + kelipatan) {
        cout << i << "\n";
        }
  return 0;
}
