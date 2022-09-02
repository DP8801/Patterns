/*
    Generic code to print the pattern according to the input:
    if i/p : 3
        o/p:A
            B C
            C D E

    if i/p : 4
        o/p:A
            B C
            C D E
            D E F G
            
*/
#include<iostream>
using namespace std;

int main(){
    int n, row = 1;
    cin >> n;

    while(row <= n){
        int col = 1;
        while(col <= row){
            char ch = 'A' + row + col - 2;  
            cout << ch;
            col ++;
        }
        cout<<endl;
        row++;
    }
}