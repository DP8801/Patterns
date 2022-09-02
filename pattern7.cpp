/*
    Generic code to print the pattern according to the input:
    if i/p : 3
        o/p:1
            2 3
            3 4 5

    if i/p : 4
        o/p:1
            2 3
            3 4 5
            4 5 6 7
            
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    int row=1;
    cin>>n;

    // while(row<=n){
    //     int col = 1, count = row;
    //     while(col <= row){
    //         cout<<count;
    //         count++;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    // or


    while(row<=n){
        int col = 1;
        while(col <= row){
            cout<<row + col -1;
            col++;
        }
        cout<<endl;
        row++;
    }
}