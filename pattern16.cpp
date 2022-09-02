/*
    Generic code to print the pattern according to the input:
    if i/p : 3
        o/p:C
            B C
            A B C

    if i/p : 4
        o/p:D
            C D
            B C D
            A B C D
            
*/

#include<iostream>
using namespace std;

int main(){
    int n, row = 1;
    
    cin>>n;

    while(row<=n){
        char ch = 'A' + n - row;
        int col = 1;
        while(col <= row){
            ch = ch + (col - 1);
            cout << ch;
            col++;
        }
        row ++;
        cout << endl;
    } 
}