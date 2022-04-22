#include <iostream> 
using namespace std;
struct siswa{
int npm, semester; 
string nama;
};
int main(){ 
    siswa aldi;
    aldi.npm = 2009876528; 
    aldi.nama = "Aldi"; aldi.semester = 3;
    cout << "NPM :" << aldi.npm << endl; cout << "Nama : " << aldi.nama << endl; cout << "Semester : " << aldi.semester;
    return 0; 
}
