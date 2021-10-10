#include<iostream>
using namespace std;

int main(){
    int n, k, temp, count=0;
    cin>>n>>k;
    int list[n];
    for(int i=0;i<n;i++){
        cin>>list[i];
        if(i+1==k)
            temp = list[i];
    }
    for(int i=0;i<n;i++){
        if(list[i]>=temp && list[i]>0)
            count++;
    }
    cout<<count;
}