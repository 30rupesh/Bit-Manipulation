#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  //no. of workers
    cin>>n;
    vector<int> masks(n,0);
    for(int i =0 ; i<n ;i++){
        int num_of_days;
        cin>>num_of_days; 
        int masks = 0;
        for(int j = 0 ; j<num_of_days ; j++){
            int days;
            cin>>days;
            masks = (masks | (1<<days));
        }
        masks[i] = masks;
    }

    for(int i=0 ; i<n ; i++){
        for(int j = i+1 ; j<n ; j++){
            int intersection = (masks[i] & masks[j]);
            int common_days = __builtin_popcount(intersection);
            cout<< i <<" "<<j<<" "<< common_days <<endl;
        }
    }

    return 0;
}


//https://codeforces.com/blog/entry/73558