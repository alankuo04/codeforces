#include<iostream>
using namespace std;

int main(){
    int num;
    string str;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>str;    
        if(str.length()>10)
            cout<<str.at(0)<<str.length()-2<<str.at(str.length()-1)<<endl;
        else
            cout<<str<<endl;
    }
}