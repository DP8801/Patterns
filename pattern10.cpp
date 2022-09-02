/*
    Generic code to print the pattern according to the input:
    if i/p : 3
        o/p:A B C
            A B c
            A B C

    if i/p : 4
        o/p:A B C D
            A B C D
            A B C D
            A B C D
            
*/
#include<iostream>
using namespace std;

int main(){
    int n, row = 1;
    cin >> n;

    while(row <= n){
        int col = 1;
        while(col <= n){
            char ch = 'A' + col - 1;
            cout<<ch;
            col++;
        }
        row++;
        cout<<endl;
    }
}