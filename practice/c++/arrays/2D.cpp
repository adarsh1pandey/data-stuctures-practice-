#include<iostream>
using namespace std;


int main(){
    int A[2][3] = { {1, 2, 3}, {2, 4, 6}};


    int *B[3];
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];

    int **C;
    C = new int *[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];

    for(int i = 0; i < 2; i++){
        for(int j = 0;j < 3; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    
}