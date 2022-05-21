#include<iostream>
using namespace std;
struct array {
    int A[10];
    int length;
    int size;
};
void display(struct array ar){
    int i;
    for(i = 0; i < ar.length; i++){
        cout<<ar.A[i]<<" ";
    }
}
void reverseLeft(struct array *ar){
    int i;
    ar->A[0] = ar->A[ar->length -1];

    for(i = 0; i < ar->length; i++){
        ar->A[i] = ar->A[i + 1];
    }
}
int main(){
    struct array ar = {{9, 8, 7, 6, 5, 4, 3, 2, 1}, 9, 10};
    reverseLeft(&ar);
    display(ar);
}