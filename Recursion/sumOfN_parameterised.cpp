#include<bits/stdc++.h>
using namespace std;
void printer(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    printer(i-1,sum+i);
}
int main(){
    int i=5;
    printer(5,0);
}