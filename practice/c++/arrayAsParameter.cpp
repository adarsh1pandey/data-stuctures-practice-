//array is always passed by address 
//so , passsed by addresss changes the actual parameter 

#include<iostream>
using namespace std;

void fun(int A[],int n){ // we can use *A as A[]
    for(int i = 0;i < n; i++){
        cout<<A[i]<<endl;
    }
}

int main(){
    int A[] = {3,3,5565,6,6,},n;
     n = 5;
    fun(A,n);
    for(int x:A){
        cout<<x<<"  ";
        
    }
    return 0;
}