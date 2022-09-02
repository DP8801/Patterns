/*
    Generic code to print the pattern according to the input:
    if i/p : 3
        o/p:1
            2 1
            3 2 1

    if i/p : 4
        o/p:1
            2 1
            3 2 1
            4 3 2 1
            
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    int row = 1;
    cin >> n;

    while(row <= n){
        int col = 1;
        while(col <= row){
            cout << row - col + 1;
            col++; 
        }
        cout<<endl;
        row++;
    }
}