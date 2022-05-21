#include <iostream>
using namespace std;
void Insert(int A[], int n)
{
    int i = n, temp;
    temp = A[i];
    while(i > 1 && temp > A[i/2])
    {
        A[i] = A[i/2];
        i = i/2;
    }
    A[i] = temp;
}
int Delete(int A[], int n)
{
    int i, j, x, temp, val;
    x = A[n];
    
    A[1] = A[n];
    val = A[n];
    i = 1; 
    j = i * 2;

    while(j < n - 1)
    {
        if (A[j + 1] > A[j])
        {
            j = j+1;

        }
        if (A[i] < A[j])
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            i = j;
            j = 2*j;
        }
        else{
            break;
        }
    }
    return val;
}
int main()
{
    int A[] = {0, 2, 5, 8, 9, 4, 10, 7};
    Insert(A, 2);
    Insert(A, 3);
    Insert(A, 4);
    Insert(A, 5);

    return 0;
}