#include <iostream>
using namespace std;
int user, i, j, k;

int main(){
    cout << "Jumlah bintang : ";
    cin >> user;
    for (i = user; i >= 1; i--){
        for (j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}