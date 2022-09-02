/*
    Generic code to print the pattern according to the input:
    if i/p : 3
        o/p:A A A
            B B B
            C C C

    if i/p : 4
        o/p:A A A A
            B B B B
            C C C C
            D D D D 
            
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    int row = 1;
    cin >> n;
    char val = 'A';

    while(row <= n){
        int col = 1;
        while(col <= n){
            char ch = val+row-1;
            cout<<ch<<" ";
            col++;
        }
        row++;
        cout<<endl;

    }
}
