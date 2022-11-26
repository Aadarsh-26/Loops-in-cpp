#include<iostream>
using namespace std;
int main(){
    int num,sum=0,c;
    cin>>num;
    int temp=num;
while(num!=0){
 c=num%10;
 sum=sum+c*c*c;
 num=num/10;
}
if(sum==temp){
    cout<<"It is an armstrong number";
}

else{
    cout<<"It is not an armstrong number";
}

}