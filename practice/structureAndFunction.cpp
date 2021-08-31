#include<iostream>
#include<stdio.h>

using namespace std;

struct Rectangle{
    int length ;
    int breadth;

};
void initialise(struct Rectangle *r,int l,int b){
    r->length = l;
    r->breadth = b;
}
int area(struct Rectangle r){
    return r.length * r.breadth;
}
int perimeter(struct Rectangle r){
    return 2*(r.length + r.breadth);
}

int main(){
    struct Rectangle r = {0,0};
    int l, b;
    cout<<"enter the value of l and b"<<endl;
    cin>>l>>b;
    initialise(&r, l, b);
    int sum = area(r);
    int peri = perimeter(r);
    cout<<"area"<<": "<<sum<<"peri :"<<peri<<endl;
}