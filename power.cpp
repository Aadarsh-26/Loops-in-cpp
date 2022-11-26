#include<iostream>
using namespace std;
int main(){
    int num,pow,exp=1;
    cin>>num;
    cin>>pow;
    for(int i=1;i<=pow;i++){
    exp=exp*num;
    }
    cout<<exp;
}