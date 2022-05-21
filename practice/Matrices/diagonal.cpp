#include<bits/stdc++.h>
using namespace std;

class Diagonal{
    private: 
        int *A;
        int n;
    public:
        Diagonal(){
            n = 2;
            A = new int[n];
        }
        Diagonal(int n){
            this->n = n;
            A = new int[n];
        }
        void Set(int i, int j, int x);
        int Get(int i, int j);
        void Display();
        ~ Diagonal(){ delete[]A; }    
};

void Diagonal :: Set (int i, int j, int x){
    if (i == j){
        A[i - 1] = x;
    }
}
int Diagonal :: Get (int i, int j){
    if (i == j){
        return A[i - 1];
    }
    else 
        return 0;
}

void Diagonal :: Display(){
    int i,j;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            if (i == j){
                cout << A[i - 1] << " ";
            }
            else {
                cout << " 0 ";
            }    
        }
        cout << endl;
        cout << endl;
    }
}

int main()
{
    Diagonal d(4);
    d.Set(1, 1, 45);
    d.Set(2, 2, 54);
    d.Set(3, 3, 98);
    d.Set(4, 4, 90);

    d.Display();
}