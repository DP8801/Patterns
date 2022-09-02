/*
    Generic code to print the pattern according to the input:
    if i/p : 3
        o/p:***
             **
              *

    if i/p : 4
        o/p:****
             ***
              **
               *
            
*/

#include<iostream>
using namespace std;

int main(){

    int n, row=1;
    cin >> n;

    while(row<=n){
        int col = 1;
        int spaces = row -1;
        while(spaces){
            cout << " ";
            spaces--;
        }
        while(col <= n - row + 1){
            cout<<"*";
            col++;
        }
        row++;
        cout<<endl;
    }

}