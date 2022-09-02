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
    int n, row=1,stars;
    cin >> n;

    while(row<=n){
        stars = n - row + 1;

        while(stars){
            cout<<"*";
            stars--;
        }
        
        row++;
        cout<<endl;
    }
}