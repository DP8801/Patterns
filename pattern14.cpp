/*
    Generic code to print the pattern according to the input:
    if i/p : 3
        o/p:A
            B C
            D E F

    if i/p : 4
        o/p:A
            B C
            D E F
            G H I J
             
*/
#include<iostream>
using namespace std;

int main(){
    int n, row = 1,count = 0;
    cin >> n;

    while (row <= n){
        int col = 1;
        while (col <= row){
            char ch = 'A' + count;
            cout<<ch;
            count++;
            col++;
        }
        row++;
        cout<<endl;
    }
}
