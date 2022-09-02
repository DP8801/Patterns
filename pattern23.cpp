/*
    Generic code to print the pattern according to the input:
    if i/p : 3
        o/p:  1
             23
            456

    if i/p : 4
        o/p:    1
               23
              456
            78910
            
*/

#include<iostream>
using namespace std;
 
int main(){
    int n, row = 1, count = 1;
    cin >> n;

    while(row <= n){
        int col = 1;
        int spaces = n - row;
        while(spaces){
            cout << " ";
            spaces--;
        }
        while(col <= row){
            cout<<count;
            col++;
            count++;
        }
        cout<<endl;
        row++;
    }
}

