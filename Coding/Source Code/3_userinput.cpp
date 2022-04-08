#include <iostream>
using namespace std;
int main() 
{
string userinput;
int x, y, z;
int sum;
cout << "Silahkan masukkan nomor npm anda : " << endl;
cin >> userinput;
cout << "Nomor anda adalah : " << userinput << endl; 

cout << "Pilih : ";

cout << "Masukkan angka pertama : ";
cin >> x;

cout << "Masukkan angka kedua : ";
cin >> y;

sum = x+y;
cout << "Hasil dari " << x << "tambah" << y << "adalah : " << sum;
return 0;
}