#include<iostream>
using namespace std;

int add(int a,int b){
     int c;
     c = a + b;
     return c;
}
int main(){
    int x = 10, y = 5, sum;

    sum = add(x,y);

    cout<<"the value of sum is "<<sum<<endl; 
}

