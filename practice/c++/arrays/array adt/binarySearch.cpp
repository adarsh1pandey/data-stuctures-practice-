#include<iostream>
using namespace std;

struct array{
    int A[10];
    int length;
    int size;
};

int binarySearch(struct array ar,int key){
    int l, mid, h;
    l = 0;
    h = ar.length - 1;
    while(l <= h){
        mid = (l+h)/2;
        if (ar.A[mid] == key){
            return mid;
        }
        else if (ar.A[mid] > key){
            h = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return 0;
}
int RBinarySearch(int A[],int l,int h, int key){
    
    int mid;
    
    if(l <= h){
        mid = (l + h)/ 2;
        if (A[mid] == key){
            return mid;
        }
        else if (key < A[mid]){
            return RBinarySearch(A, l, mid -1, key);
        }
        else 
            return RBinarySearch(A, mid + 1, h, key);
    }
    return - 1;
}
int main(){
    struct array ar = {{1, 2, 3, 4, 5, 6}, 6, 10};
   // cout<<binarySearch(ar, 5);
   cout<<RBinarySearch(ar.A, 0, ar.length - 1, 15)<<endl;
}