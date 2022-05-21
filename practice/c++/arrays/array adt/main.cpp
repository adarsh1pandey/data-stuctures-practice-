#include<iostream>
using namespace std;

struct array{
    int *A;
    int size;
    int length;
};
void Display(struct array ar){
    cout<<"the elements are"<<endl;
    for(int i = 0; i < ar.length; i ++){
        cout<<ar.A[i]<<endl;
    }
}
int main(){
    struct array ar;
    int n, i;
    cout<<"enter the size of array"<<endl;
    cin>>ar.size;
    ar.A = new int[ar.size];
    ar.length = 0;

    cout<<"enter the number of elements you want to enter "<<endl;
    cin>>n;
    cout<<"enter the number of elements "<<endl;

    for(i = 0; i < n; i++){
        cin>>ar.A[i];
    }
    ar.length = n;
    Display(ar);

}