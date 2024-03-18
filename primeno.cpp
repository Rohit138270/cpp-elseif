#include<iostream>
using namespace std;

int main(){
    int num,i;
    cout<<"Enter number to check prime or not"<<endl;
    cin>>num;
    if(num<=1){
        return false;
    }

    for(i=2;i<num;i++){
        if(num%i==0)
            break;

    }
    if(i==num){
        cout<<"Prime";
    }
    else{
        cout<<"Not prime";
    }
}