/*
    Generic code to print the pattern according to the input:
    if i/p : 3
        o/p:  1
             121
            12321

    if i/p : 4
        o/p:   1
              121
             12321
            1234321
            
*/

#include<iostream>
using namespace std;

int main(){
    int n, row =1;
    cin >> n;

    while(row <= n){
        int col = 1;
        int spaces = n - row;
        while(spaces){
            cout<<" ";
            spaces--;
        }
        while(col <= row){
            cout<<col;
            col++;
        }
        // if(row != 1){
        //     int j = 1;
        //     while(j < row){
        //         cout<<(row - j);
        //         j++;
        //     }
        // }
        //----------OR--------------
        int start = row - 1;
        while(start){
            cout<<start;
            start--;
        }
        
        cout<<endl;
        row++;
    } 
}