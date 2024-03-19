#include<iostream>
#include <cstring>

using namespace std;

class Student{
    int id;
    char name[20];
    double fee;

    public:
    Student(int,char[],double);
    void display();

};

Student::Student(int i,char ch[],double d){
    id=i;
    strcpy(name,ch);
    fee=d;
}

void Student::display(){
    cout<<"Student details : "<<id<<" "<<name<<" "<<fee<<endl;
}

int main(){
    Student d(1,"Rohit",5000);
    d.display();
    return 0;
}