#include<iostream>
using namespace std;
int main(){

int num,i,a,sum=0;

cin>>num;

for(i=0;i<5;i++){
    a=num%10;
    if(i==1 || i==4){
        sum=sum+a;
        }
    num/=10;

}
cout<<"sum :"<<sum;
return 0;
}
