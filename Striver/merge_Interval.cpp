#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>> &intervals){
    vector<vector<int>> mergedinterval;
    if(intervals.size()==0){
        return mergedinterval;
    }
    sort(intervals.begin(),intervals.end());
    vector<int> tempinterval=intervals[0];
    for(auto it:intervals){
        if(it[0]<=tempinterval[1]){
            max(it[1],tempinterval[1]);
        }
        else{
            mergedinterval.push_back(tempinterval);
            tempinterval=it;
        }
    }
    mergedinterval.push_back(tempinterval);
    return mergedinterval;
};