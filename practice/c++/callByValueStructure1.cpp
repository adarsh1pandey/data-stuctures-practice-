#include<iostream>
using namespace std;
 
struct Rectangle{
    int length;
    int breadth;
};

void add(struct Rectangle r1){
    r1.length = 45678;
    cout<<"sum ="<<r1.breadth + r1.length<<endl;
    cout<<r1.length<<" "<<r1.breadth<<endl;
}
int main(){
    Rectangle r = {19, 4};
    add(r);
    cout<<r.length<<"  " <<r.breadth<<endl;
}