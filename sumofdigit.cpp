#include<iostream>
using namespace std;

int main(){
    int no,temp,rem,sum=0;

    cout<<"Enter the number"<<endl;
    cin>>no;

    temp=no;
    while(no!=0){
        rem = no%10;
        sum = sum+rem;
        no = no/10;
    }
    cout<<"Sum is : "<<sum<<endl;
}