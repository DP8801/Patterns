/*
    Generic code to print the pattern according to the input:
    if i/p : 3
        o/p:1 2 3
            1 2 3
            1 2 3

    if i/p : 4
        o/p:1 2 3 4
            1 2 3 4 
            1 2 3 4
            1 2 3 4  
*/
#include<iostream>
using namespace std;

int main (){
    int n;
    cin>>n;

    int i = 1;

    while(i<=n){

        int j = 1;
        while(j<=n){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }

}

