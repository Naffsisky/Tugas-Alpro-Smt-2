#include <iostream>
using namespace std;

int user;

int main(){
	cout<<"Masukan bilangan : ";
	cin>>user;
	
	if (user % 2 == 0)
	{
		cout<<user<<" adalah bilangan genap \n";
	}
	else
	{
		cout<<user<<" adalah bilangan ganjil \n";
	}
	return 0;
}
