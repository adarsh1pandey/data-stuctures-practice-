#include<iostream>
using namespace std;
struct Rectangle {
    int length;
    int breadth;
};

struct Rectangle * put(){  //here we take return type structure
    struct Rectangle *p;  //initialize the pointer 
    p = new Rectangle;      // allocating space 
    p->breadth = 123456;
    p->length = 45678;
    return p;        
}
int main(){
    struct Rectangle *ptr = put();        //here intialising to function put 
    cout<<ptr->length<<"length        "<<ptr->breadth<<"breadth"      <<endl;
    return 0;

}