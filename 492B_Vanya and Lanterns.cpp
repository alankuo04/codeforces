#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;

int main(){
    int n,l;
    cin>>n>>l;
    vector<int> list;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        list.push_back(temp);
    }
    sort(list.begin(), list.end());
    int d = max(list[0], l-list[n-1])*2;
    for(int i=0;i<n-1;i++){
        d = max(d, (list[i+1]-list[i]));
    }    
    printf("%.10f", d/2.0);
}