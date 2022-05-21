#include<iostream>
using namespace std;
struct array{
    int A[10];
    int lenght;
    int size;
};
void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int linearSearch(struct array *ar, int element){
    for(int i = 0; i < ar->lenght; i++){
        if (ar->A[i] == element){
            swap(&ar->A[i],&ar->A[i - 1]);
            cout<<"found at "<<i<<endl;
        }
    }
    return -1;
}
void Display(struct array ar){
    for(int i = 0; i < ar.lenght; i++){
        cout<<ar.A[i]<<endl;
    }
}
int main(){
    struct array ar = {{1,2,3,4,5,6,7,8,9},9,10};
    linearSearch(&ar,8);
    Display(ar);
}