#include<bits/stdc++.h>
using namespace std;

void PrintBinary(int num){
    for(int i=10 ; i >= 0 ; i--){
        cout << ((num >> i) & 1);
    }
    cout<<endl;
}

int main(){
    for (char c = 'A' ; c <= 'E' ; c++){
        cout<< c <<endl;
        PrintBinary(int(c));
    }
    for (char c = 'a' ; c <= 'e' ; c++){
        cout<< c <<endl;
        PrintBinary(int(c));
    }

    char A = 'A';
    char a = A | (1<<5);
    cout << a <<endl;
    cout << char(a & (~(1<<5))) <<endl;

    //printing space
    cout << char(1<<5) <<endl;
    //Printing Capital to Small
    cout<< char('F' | ' ') <<endl;
    //Printing Small to Capital
    cout<< char('m' & '_') <<endl;
    

    //Unset to Set till given point without using loop
    PrintBinary(59);
    int num = 59;
    int i =4;
    int b = (num & (~((1<<(i+1)) - 1))); 
    PrintBinary(b);

    return 0;
}