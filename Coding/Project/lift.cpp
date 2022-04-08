#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
    int lift;
    int lantai1 = 1, lantai2 = 2, lantai3 = 3, lantai4 = 4, lantai5 = 5; 
    cout << "Masukkan Lantai : " ;
    cin >> lift;

    if (lift == 1)
    {
        cout << "Going to 1 ." << endl;
        sleep(1);
        cout << "Going to 1 .." << endl;
        sleep(1);
        cout << "Going to 1 ..." << endl;
        sleep(1);
        cout << "Anda sudah dilantai 1!";
    }
    else if (lift == 2)
    {
        cout << "Going to 2 ." << endl;
        sleep(1);
        cout << "Going to 2 .." << endl;
        sleep(1);
        cout << "Going to 2 ..." << endl;
        sleep(1);
        cout << "Anda sudah dilantai 2!";
    }
    else if (lift == 3)
    {
        cout << "Going to 3 ." << endl;
        sleep(1);
        cout << "Going to 3 .." << endl;
        sleep(1);
        cout << "Going to 3 ..." << endl;
        sleep(1);
        cout << "Anda sudah dilantai 3!";
    }
    else if (lift == 4)
    {
        cout << "Going to 4 ." << endl;
        sleep(1);
        cout << "Going to 4 .." << endl;
        sleep(1);
        cout << "Going to 4 ..." << endl;
        sleep(1);
        cout << "Anda sudah dilantai 4!";
    }
    else if (lift == 5)
    {
        cout << "Going to 5 ." << endl;
        sleep(0.5);
        cout << "Going to 5 .." << endl;
        sleep(0.5);
        cout << "Going to 5 ..." << endl;
        sleep(0.5);
        cout << "Anda sudah dilantai 5!";
    }
    else
    {
       cout << "Pilihan tidak ada! \n";
       main();
    }
    return 0;
}