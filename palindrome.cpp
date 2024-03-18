#include<iostream>
using namespace std;

int main(){
    int num,originalno,rem,reverseno=0;

    cout<<"Enter number to check palindrome or not : "<<endl;
    cin>>num;
    originalno=num;

    while(num!=0){
        rem = num % 10;
        reverseno = (reverseno * 10) + rem;
        num = num/10;
    }
    if(originalno==reverseno){
        cout<<"\tEnter number is palindrome..."<<endl;
    }
    else{
        cout<<"\tNumber is not a palindrome...";
    }
}