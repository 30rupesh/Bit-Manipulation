#include<bits/stdc++.h>
using namespace std;

void PrintBinary(int num){
    for(int i=10 ; i >= 0 ; i--){
        cout << ((num >> i) & 1);
    }
    cout<<endl;
}

int main(){
    //right shift (divide by 2)
    int n=6;
    cout << (n>>1) << endl;

    //left shift (multiply by 2)
    int m = 8;
    cout << (m<<1) << endl; 

    return 0;
}