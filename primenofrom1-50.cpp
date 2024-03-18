#include<iostream>
using namespace std;
int main(){

for(int i=2;i<=50;++i){
    int j=2;
    for(;j<i;j++){
        if(i%j==0)
            break;
    }
    if(i==j && i!=2){
        cout<<i<<endl;
    }
}

}