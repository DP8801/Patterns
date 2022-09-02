/*
    Generic code to print the pattern according to the input:
    if i/p : 5
        o/p:1234554321
            1234**4321
            123****321
            12******21
            1********1

    if i/p : 4
        o/p:12344321
            123**321
            12****21
            1******1
            
*/
#include<iostream>
using namespace std;

int main(){
    int n, row = 1;
    cin >> n;

    while(row <= n){

        //left triangle
        int j = 1;
        while(j<=n-row+1){
            cout<<j;
            j++;
        }

        //middle triangle
        int start = row - 1;
        if(start){
            int stars = 2*(row-1);
            while(stars){
                cout<<"*";
                stars--;
            }
        }

        //right triangle
        int k = n - row + 1;
        while(k >= 1){
            cout<<k;
            k--;
        } 

        cout<<endl;
        row++;

    }

}