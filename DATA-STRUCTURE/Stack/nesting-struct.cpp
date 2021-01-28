#include<iostream>
#include<conio.h>
#include<cstdlib>

using namespace std;

struct Student
{
    int name;
    int age;
};
Student S1,S2,S3;
struct College
{
    int gpa;
    int year;
    Student Add;
};
College C1,C2,C3;
int main()
{

    cin>>S1.name>>S2.name>>S3.name;
    cin>>S1.age>>S2.age>>S3.age;
    cout<<S1.name<<S2.name<<S3.name;
    cout<<S1.age<<S2.age<<S3.age;
    cin>>C1.gpa>>C2.gpa>>C3.gpa;
    cin>>C1.year>>C2.year>>C3.year;

    cout<<C1.gpa<<C2.gpa<<C3.gpa;
    cout<<C1.year<<C2.year<<C3.year;

    cin>>C1.Add.name>>C2.Add.name>>C3.Add.name;
    cin>>C1.Add.age>>C2.Add.age>>C3.Add.age;
    cout<<C1.Add.name<<C2.Add.name<<C3.Add.name;
    cout<<C1.Add.age<<C2.Add.age<<C3.Add.age;
    return 0;
}
