#include<iostream>
using namespace std;
void linearSearch(int A[], int number){
    for(int i = 0; i < 5; i++){
         if(A[i] == number)
        {
            cout<<i<<endl;
        }
       
    }
        cout<<"not found"<<endl;
}
int main(){
    int A[5] = { 10, 5, 4, 8, 4};
    linearSearch(A, 5);
}