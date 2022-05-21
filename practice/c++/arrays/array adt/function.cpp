#include<iostream>
using namespace std;

struct array{
    int A[10];
    int size;
    int length;

};
void display(struct array ar){
    for(int i = 0; i < ar.length; i++){
        cout<<ar.A[i]<<endl;
    }
}
void append(struct array *ar,int element){
    ar->A[ar->length] = element;
    ar->length++;
    
}
void insert(struct array *ar,int index, int element){
    int i;
    if(index > 0 && index < ar->length){
        for(i = ar->length; i > index; i-- ){
            ar->A[i] = ar->A[i - 1];
        }
        ar->A[index] = element;
        ar->length++;
    }
}
int Delete(struct array *ar, int index){
    int x = 0;
    if(index >= 0 && index < ar->length){
        x = ar->A[index];
        for(int i = index; i < ar->length-1; i++)
            ar->A[i] = ar->A[i + 1];
        
        ar->length--;
    }
    return x;  
}


int main(){
    struct array ar = {{1, 2, 4, 5}, 10, 4};
   // insert(&ar, 2, 10);
   // append(&ar,4);
    Delete(&ar, 2);
    display(ar);
    
}