/*
    Generic code to print the pattern according to the input:
    if i/p : 3
        o/p:A B C
            B C D
            C D E

    if i/p : 4
        o/p:A B C D
            B C D E
            C D E F
            D E F G
            
*/
#include<iostream>
using namespace std;

int main(){
    int n; 
    int row = 1;
    cin >> n;

    while(row<=n){
        int col = 1;
        while(col<=n){
            char ch = 64 + row + col - 1;
            cout << ch<< " ";
            col++;
        }
        row++;
        cout<<endl;
    }
}