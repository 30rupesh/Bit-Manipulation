/* 
Given a Number N, Print its factorial.
Constraints
1 <= N <= 100 

Print answer modulo M
where M = 47

(A % M < 47)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long fact = 1;

    int M = 47;

    for (int i=2 ; i<=n ; i++){
        fact = (fact * i) % M;
    }

    cout<<"Factorial: "<<fact;

    return 0;
}