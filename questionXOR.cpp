/*
Given array a of n integers. All integers are present in even count 
except one. Find that one integer which has odd count in O(N) TC
and O(1) SC

N < 10^5
a[i] < 10^5

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int x;
    int ans = 0;
    for(int i=0 ; i<n ; i++){
        cin>>x;
        ans ^= x;
    }
    cout << ans <<endl;

    return 0;
}