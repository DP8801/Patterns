/*
    Generic code to print the pattern according to the input:
    if i/p : 3
        o/p:3 2 1
            3 2 1
            3 2 1

    if i/p : 4
        o/p:4 3 2 1
            4 3 2 1
            4 3 2 1
            4 3 2 1
*/
#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  int i = 1;

  while (i <= n) {
    int j = 1;
    while (j <= n) {
      cout << n - j + 1;
      j++;
    }
    cout << endl;
    i++;
  }

  return 0;
}