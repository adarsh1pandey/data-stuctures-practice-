#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;

};
void print(struct Rectangle *r1){
        r1->length = 345678;
        cout<<r1->length<<" "<<r1->breadth<<endl;

}

int main(){
    Rectangle r = {56, 6};
    print(&r);

    cout<<r.length<<" "<<r.breadth<<endl;
}