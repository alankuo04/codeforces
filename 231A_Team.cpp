#include<iostream>
using namespace std;

int main(){
    int num, a, b, c, count=0;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>a>>b>>c;
        if(a+b+c>1)
            count++;
    }
    cout<<count;
}