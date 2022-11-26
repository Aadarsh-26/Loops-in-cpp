#include<iostream>
using namespace std;
int main(){
    int num,rev=0,p;
    cin>>num;
    while(num!=0){
       p=num%10;
       rev=rev*10+p;
       num=num/10;
    }
    cout<<rev;
}
