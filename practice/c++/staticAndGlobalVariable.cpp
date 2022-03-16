#include<iostream>
using namespace std;
int x = 0;              // the value changes after one cal of the function 
int fun(int n){
     //   static int x = 0;
    if(n >0){
        x++;
       // return fun(n-1) + x;
    return fun(n -1) + x;
    }
    return 0;
}


int main(){
    int r;
    r = fun(5);
    cout<<r<<endl;


      r = fun(5);
    cout<<r<<endl;


      r = fun(5);
    cout<<r<<endl;
}