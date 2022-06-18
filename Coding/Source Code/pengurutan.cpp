#include <iostream>
using namespace std;

string kata;

int main(){
    cout << "Masukan kata : ";
    cin >> kata;
    for(int i = 0; i < kata.length(); i++){
        cout << kata[i] << endl;
    }
  return 0;
}
