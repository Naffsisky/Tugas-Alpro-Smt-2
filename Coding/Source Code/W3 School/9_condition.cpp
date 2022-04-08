#include<iostream>
using namespace std;
int main ()
{

int x = 123456;
int y;
int z = 0710;
int time;
cout << "Masukkan password : ";
cin >> y;
cout << "Sekarang jam berapa? : ";
cin >> time;

    if (x==y)
    {
        cout << "Password Benar" << endl;
    }
    else if (0710)
    {
        cout << "Password Recovery Benar" << endl;
    }
    else
    {
        cout << "Password Salah" << endl;
    }
    {
        string result = (time < 12) ? "Good day." : "Good evening.";
        cout << result;
    }
}

/*
Less than: a < b
Less than or equal to: a <= b
Greater than: a > b
Greater than or equal to: a >= b
Equal to a == b
Not Equal to: a != b
*/