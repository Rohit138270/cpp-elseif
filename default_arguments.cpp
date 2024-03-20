#include<iostream>

using namespace std;
void add(int a=1,int b=2,int c=3){
    cout<<a+b+c<<endl;
}
int main(){
    add();
    add(10,20);
    add(10,20,30);
    add(10,0,30);

}