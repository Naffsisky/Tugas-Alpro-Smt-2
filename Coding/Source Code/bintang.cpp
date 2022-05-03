#include <iostream>
using namespace std;

int user, i, j;

int main(){
    cout<<"Masukkan bilangan : ";
    cin>>user;

    if(user){
        for(i = user; i >= 1; i--){
            cout<<"\n";
        for(j = 1; j <= i; j++){
            cout<<"*"<<" ";
            }
        }
    }
    else{
    cout<<"Bilangan tidak sesuai!";
    }
    return 0;
}
