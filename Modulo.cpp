/* 
Given a Number N, Print its factorial.
Constraints
1 <= N <= 100 

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long fact = 1;
    for (int i=2 ; i<=n ; i++){
        fact = fact * i;
    }

    cout<<"Factorial: "<<fact;

    return 0;
}