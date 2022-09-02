/*
    Generic code to print the pattern according to the input:
    if i/p : 3
        o/p:1
            2 2
            3 3 3

    if i/p : 4
        o/p:1
            2 2
            3 3 3
            4 4 4 4
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    int row = 1;
    cin >> n;

    while(row <= n){
        int column = 1;
        while(column <= row){
            cout << row << " "; 
            column++;
        }
        row++;
        cout<<endl;

    }
}