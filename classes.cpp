#include<iostream>
#include<string>
using namespace std;

class Student{
    int id;
    string name;

    public:
    void setData(int,string);
    void display();
    void setId(int);
    string getName();
};

void Student::setData(int i,string ch){
    id=i;
    name=ch;
}
void Student::display(){
    cout<<"Student details : "<<id<<"\t"<<name<<endl;
}
void Student::setId(int i){
    id=i;
}
string Student::getName(){
    return name;
}

int main(){
    Student s;
    s.setData(1,"Rohit");
    s.display();
    s.setId(101);
    s.display();
    cout<<"Student name is : "<<s.getName();
}