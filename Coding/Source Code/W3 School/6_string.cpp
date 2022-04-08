#include <iostream>
using namespace std;
int main()
{
    string nama; 
    string greeting = "Hallo! \n";
    string first_name = "Rena ";
    string middle_name = "Rama ";
    string last_name = "Rosalinda";
    string final = greeting + first_name + middle_name + last_name;

    string ghosting = "Rena adalah ";
    string ghosting1 = "Tukang GHOSTING";
    string vghosting = ghosting.append(ghosting1);

    string panjang = "heykamukenapasihsukangambekajaakukangentaukalaukamungambek";

    cout << "Masukin nama kamu : ";
    getline (cin, nama);
    system("clear");
    cout << "Nama kamu : " << nama << endl;

    cout << final << endl;
    cout << vghosting << endl;
    cout << panjang << "\n" << "Jumlah huruf dalam text : " << panjang.length() << endl; //pake length
    cout << ghosting[0]; //huruf pertama

    return 0;
}

// inget ya, liat variablenya 
// Ada beberapa macam variasi bentuk string