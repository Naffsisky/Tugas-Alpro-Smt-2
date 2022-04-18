#include<iostream>

using namespace std;

string nama, jurusan;
long int npm;

int main(){
	
	cout<<"Masukkan nama : ";
	getline(cin, nama);
	
	cout<<"Masukkan npm : ";
	cin>>npm;

	cin.ignore();

	cout<<"Masukkan jurusan : ";
	getline(cin, jurusan);
	

	cout << "------------------------------------" << endl;
	cout << "Nama : "<<nama<<endl;
	cout << "NPM : "<<npm<<endl;
	cout << "Jurusan : "<<jurusan<<endl;
	cout << "------------------------------------";
	
}
