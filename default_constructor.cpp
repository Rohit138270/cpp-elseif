#include<iostream>

using namespace std;

class Student{
    int rno;
    char name[20];
    double fee;

    public:
    Student();
    void display();

};

Student::Student(){
    cout<<"Enter Roll No : "<<endl;
    cin>>rno;
    cout<<"Enter Name : "<<endl;
    cin>>name;
    cout<<"Enter fee : "<<endl;
    cin>>fee;
}

void Student::display(){
    cout<<"Student details..."<<endl;
    cout<<rno<<" "<<name<<" "<<fee<<endl;
}

int main(){
    Student s;
    s.display();
}