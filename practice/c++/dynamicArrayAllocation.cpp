#include<iostream>
using namespace std;


int main(){
    int *ptr, size = 2;
    ptr = new int(size);
    for(int i = 0; i < size; i++){
        cin>>ptr[i];
    }
    for(int i = 0; i < size;i++ ){
       cout<< ptr[i]<<endl;
    }
}