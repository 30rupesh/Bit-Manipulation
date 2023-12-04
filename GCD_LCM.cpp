#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
    //if(b == 0) return a;
    if(a%b == 0) return b;
    return gcd(b , a%b);
}

int main(){
    cout<< gcd(12,4) <<endl;
    cout<< gcd(13,6) <<endl;

    cout<< "LCM " << (12 * 5) / gcd(12,5) <<endl;

    cout<< __gcd(12,4) <<endl;
}