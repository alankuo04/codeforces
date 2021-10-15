#include<iostream>

#define N 100010
using namespace std;

int main(){
    int n, maximum = -10000000, minimum = 10000000;
    cin>>n;
    long long count[N]={};
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        count[temp]++;
        maximum = max(maximum, temp);
        minimum = min(minimum, temp);
    }
    long long dp[N]={};
    dp[0] = 0;
    dp[1] = count[1];
    for(int i=2;i<=maximum;i++){
        dp[i] = max(dp[i-1], dp[i-2]+count[i]*i);
    }
    cout<<dp[maximum]<<endl;
}