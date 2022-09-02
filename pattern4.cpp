/*
    Generic code to print the pattern according to the input:
    if i/p : 3
        o/p:*
            * *
            * * *

    if i/p : 4
        o/p:*
            * *
            * * *
            * * * *
            
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    int i = 1;

    cin >> n;

    while(i<=n){
        int j = 1;
        while(j<=i){
            cout << "* ";
            j++;
        }
        i++;
        cout<<endl;
    }
}