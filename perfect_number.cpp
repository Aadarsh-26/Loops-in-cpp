#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cin>>num;
    for(int i=num/2;i>=1;i--){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num){

        cout<<"The number is a perfect number "<<sum;
    }
    else{
        cout<<"The number is not a perfect number"<<sum;
    }
}