#include<iostream>
#include<string>
using namespace std;

void fungsi()
{
    cout << "Code terexecute" << endl;
}

void fungsi2()
{
    cout << "Code Fungsi 2 terexecute" << endl;
}

void fungsi3()
{
    cout << "Code Fungsi 3 yang tidak akan terexecute"; // ngga ke execute soalnya gak di panggil di main(). jadinya useless.
}

void nama(string fname)
{
    cout << fname << " Cantik \n";
}
int main()
{
    fungsi();
    fungsi2();
    nama("Rena");
    nama("Rama");
    nama("Rosalinda"); // kalau gabisa pake " " ganti pake ' '

    return 0;
}

// void itu semacem classnya dari main, bisa buat banyak void nanti dipanggil lewat main()
// main itu program utamanya, bisa manggil salah satu void/semua
// harus void dulu baru main