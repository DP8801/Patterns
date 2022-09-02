/*
    Generic code to print the pattern according to the input:
    if i/p : 3
        o/p:A B C
            D E F
            G H I

    if i/p : 4
        o/p:A B C D 
            E F G H 
            I J K L
*/

#include<iostream>
using namespace std;

int main(){

    int i = 1;
    int n;
    char ch = 'A';
    
    cin >> n;

    while (i<=n) {
        int j = 1;
        while (j<=n){
            cout << ch<<" ";
            ch++;
            j++;
        }
        cout << endl; 
        i++;
    }

}