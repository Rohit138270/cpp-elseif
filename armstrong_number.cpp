#include<iostream>
using namespace std;

int main(){
    int no,rem,temp,sum=0;

    cout<<"Enter the number : "<<endl;
    cin>>no;

    temp = no;
    while(no>0){
        rem = no%10;
        sum = sum +(rem*rem*rem);
        no = no/10;
    }
    if(temp==sum){
        cout<<"Number is Armstrong"<<endl;
    }
    else{
        cout<<"Not Armstrong";
    }

}