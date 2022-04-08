#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i < 10; i++) {
    if (i == 4) {
      break; //break
    }
    cout << i << "\n";
  } 
    for (int i = 1; i < 10; i++) {
    if (i == 4) {
      continue; //continue
    }
    cout << i << "\n";
  }   
  return 0;
}


