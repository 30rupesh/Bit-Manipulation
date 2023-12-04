#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10 , b = 56;

    // x^x = 0
    // x^0 = x
    
    a = a ^ b;

    b = b ^ a;        //b = b ^ (a ^ b) == b ^ a ^ b == a ^ b ^ c == c ^ a ^ b (Associative Property)

    a = a ^ b;

    return 0;
}