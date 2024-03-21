//accept no of subjects and name from the user dynamically and accept marks for each subject and display average and name of the student

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    int no,ch;
    char name[50];

    cout<<"Enter your name : "<<endl;
    cin>>name;

    cout<<"Enter total characters"<<endl;
    cin>>ch;
    cout<<"Enter total subjects..."<<endl;
    cin>>no;
   

    int* marks = new int[no];
    char* subjects = new char[ch];

    for(int i=0;i<no;i++){
        cout<<"Enter subject name : "<<i+1<<endl;
        cin>>subjects;

        cout<<"Enter marks: "<<subjects<<endl;
        cin>>marks[i];

        
    }

    double avg;
    int total=0;

    for(int i=0;i<no;++i){
        total = total + marks[i];
    }

    avg = total/no;

    cout<<"Name of student is : "<<name<<endl;
    cout<<"Average is : "<<avg;

    delete[] marks;
    delete[] subjects;

}