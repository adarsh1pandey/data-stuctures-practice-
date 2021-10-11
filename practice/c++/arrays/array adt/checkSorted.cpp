#include<iostream>
using namespace std;

struct array {
    int A[10];
    int length;
    int size;

};
int  isSorted(struct array ar){
    int i;
    for(i = 0; i < ar.length - 1; i++){
        if(ar.A[i ] > ar.A[i + 1]){
            return false;
        }
    }
    return true ;
    
}
void insertSorted(struct array *ar, int number){
    int i;
    if(ar->length == ar->size){
        cout<<"Not enough space";
    }
    i = ar->length - 1;
    while(ar->A[i] > number){
        ar->A[i + 1] = ar->A[i];
        i--;
    }
    ar->A[i + 1] = number;
}
void display(struct array ar ){
    int i;
    for ( i = 0; i < ar.length; i++){
        cout<<ar.A[i]<<"    ";
    }
}
void negativePositive(struct array *ar){
    int i, j;
    for(i = 0, j = ar->length - 1; j < i; i++, j-- ){
        if(ar->A[i] > 0 || ar->A[j] < 0 ){

        }
    }
}
int main(){
    struct array ar = {{2, 3, 4, 5, 6, 7, 8}, 7, 10};
    cout<<isSorted(ar)<<endl;
    insertSorted(&ar, 4);
    display(ar);
}