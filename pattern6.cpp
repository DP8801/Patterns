/*
    Generic code to print the pattern according to the input:
    if i/p : 3
        o/p:1
            2 3
            4 5 6

    if i/p : 4
        o/p:1
            2 3 
            4 5 6
            7 8 9 10
            
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    int row = 1;
    int count = 1;
    cin >> n;

    while(row<=n){
        int col = 1;
        while(col<=row){
            cout << count << " ";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
}