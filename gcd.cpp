#include<iostream>
using namespace std;
 int main()
 {
     int num1,num2,max;
     cin>>num1>>num2;
     for(int i=num1;i>=1;i--){
         if(num1%i==0 && num2%i==0){
               max=i;
               break;
         }
     }
     cout<<"Therefore GCD of two numbers is : "<<max;
 }