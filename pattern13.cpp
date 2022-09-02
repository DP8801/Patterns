/*
    Generic code to print the pattern according to the input:
    if i/p : 3
        o/p:A 
            B B
            C C C

    if i/p : 4
        o/p:A
            B B
            C C C
            D D D D
            
*/
#include<iostream>
using namespace std;
 int main(){
    int n, row = 1;
    cin >> n;

    while (row <= n){
        int col = 1;
        while (col <= row){
            char ch = 'A' + row - 1;
            cout << ch;
            col++;
        }
        row++;
        cout<<endl;
    } 
 }