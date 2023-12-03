/*

Set -> 1
Unset -> 0
LSB : 0th bit
MSB : nth bit

*/

#include<bits/stdc++.h>
using namespace std;

void PrintBinary(int num){
    for(int i=10 ; i >= 0 ; i--){
        cout << ((num >> i) & 1);
    }
    cout<<endl;
}
int main(){
    PrintBinary(9);
    int a = 9;
    int i = 2;

    if((a & (1<<i)) != 0){
        cout<<"Set Bit!"<<endl;
    }
    else{
        cout<<"Unset Bit!"<<endl;
    }

    //Unset to Set
    PrintBinary( a | (1<<2));
   
    //Set to Unset
    PrintBinary(a & (~(1<<2)));

    //toggle
    PrintBinary(a ^ (1<<2));
    PrintBinary(a ^ (1<<3));

    //Bit count (count set bit)
    int ct = 0;
    for(int i=31 ; i>=0 ; i--){
        if((a & (1<<i)) != 0){
            ct += 1;
        }
    }
    cout<<ct<<endl;
    
    //Count SetBit like this
    int count = 0;
    for(int i=31 ; i >= 0 ; i--){
        if((a >> i) & 1 == 1){
            count +=1;
        }
    }
    cout<<count<<endl;

    //Count SetBit using predefine function

    cout << __builtin_popcount(a) <<endl;
    //this function is only for integers
    
    //cout << __builtin_popcount(1LL<<35) <<endl;
    //for counting in Long long 
    cout << __builtin_popcountll((1LL<<35)-1) <<endl;

    return 0;
}