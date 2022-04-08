#include<iostream>
using namespace std;
int main()
{
    bool thisistrue = true;
    bool thisisfalse = false;

    int x = 5;
    int y = 10;

    cout << (x<y) << " adalah True" << endl;
    cout << (x==y) << " ini False" << endl;
    cout << thisistrue << " Ini true" << endl; // akan muncul 1
    cout << thisisfalse << " Ini false"; // akan muncul 0

    return 0;
}

//Booleans or Bool cuman bisa ngeluarin true (1) sama false (0)