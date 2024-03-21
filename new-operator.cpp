#include<iostream>
#include<string.h>


using namespace std;

class Student{
    int rno;
    char name[50];

    public:
    void display();
    Student(int,char *);

};

Student ::Student(int r,char* ch){
    rno=r;
    strcpy(name,ch);

}
void Student::display(){
    cout<<rno<<" "<<name<<endl;
}
int main(){
    Student* str = new Student(1,"Roy");
    str->display();

}