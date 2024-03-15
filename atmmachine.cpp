#include<iostream>

using namespace std;

int main(){
    int choice;
    int bike=0,car=0,bus=0;
    cout<<"***CAR PARKING SYSTEM***"<<"\n";
while(true){
    cout<<"1. Add bike"<<endl;
    cout<<"2. Add car"<<endl;
    cout<<"3. Add bus"<<endl;
    cout<<"4. Show tatol"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;

    if(choice == 1){
        bike++;
        cout<<"Car added..."<<endl;
    }
    else if(choice == 2){
        car++;
        cout<<"Car added..."<<endl;
    }
    else if(choice == 3){
        bus++;
        cout<<"Car added..."<<endl;
    }
    else if(choice == 4){
        cout<<"Bike = "<<bike<<" Car = "<<car<<" bus = "<<bus<<endl;
    }
    else if(choice == 5){
        exit(0);
    }
    else{
        cout<<"Please enter correct choice..."<<endl;
    }
}
}