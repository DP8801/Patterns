/*
    Generic code to print the pattern according to the input:
    if i/p : 3
        o/p:1 2 3
            4 5 6
            7 8 9

    if i/p : 4
        o/p:1 2 3 4
            5 6 7 8
            9 10 11 12
            13 14 15 16
*/

#include<iostream>
using namespace std;

int main(){

    int i = 1, count = 1;
    int n;
    
    cin >> n;

    while (i<=n) {
        int j = 1;
        while (j<=n){
            cout << count<<" ";
            count++;
            j++;
        }
        cout << endl; 
        i++;
    }

}