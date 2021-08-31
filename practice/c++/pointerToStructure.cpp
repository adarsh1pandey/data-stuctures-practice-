#include<iostream>
using namespace std;

struct Student{
    long int rollNo;
    string name;
};
int main(){
    Student *p ;
    p = new Student;
    p->name = "Adarsh";
    p->rollNo  = 95692342199;

    cout<<p->name<<endl<<p->rollNo<<endl;
}