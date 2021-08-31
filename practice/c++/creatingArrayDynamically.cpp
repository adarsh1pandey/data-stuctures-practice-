// this is a very different approach of creating an array using new

#include<iostream>
using namespace std;

int * fun(int size){
    int *p;
    p = new int[size];
    for(int i = 0; i < size; i++){
        p[i] = i + 1;

        
    }
    return p;
}

int main(){
    int *ptr, sze = 10;
    ptr = fun(sze);
    cout<<ptr<<endl;
    for(int i = 0; i < sze; i++){     // here we also have to hae a for loop bcZ 
        cout<<ptr[i]<<endl;
    }
}