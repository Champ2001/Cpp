#include<bits/stdc++.h>
using namespace std;
int maxlen(int A[],int n){
    unordered_map<int,int> mpp;
    int sum=0;
    int maxi=0;
    for(int i =0;i<n;i++){
        sum +=A[i];
        if(sum == 0){
            maxi=i+1;
        }
        else{
            if(mpp.find(sum) != mpp.end()){
                maxi=max(maxi,i-mpp[sum]);
            }
            else{
                mpp[sum]=i;
            }
        }
    }
    return maxi;
}