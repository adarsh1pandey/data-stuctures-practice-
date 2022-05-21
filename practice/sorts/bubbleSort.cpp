#include <iostream>
using namespace std;
void Swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void bubbleSort(int A[], int n)
{
    int flag;
    for (int i = 0; i < n - 1; i++)
    {
        flag = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(A[j], A[j + 1]);
                flag = 0;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
}
void insertionSort(int A[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int x = A[i];
        while(j > -1 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}
void selectionSort(int A[], int n)
{
    int i, j, k;
    for (i = 0; i < n-1; i++)
    {
        for (j = k = i; j < n ; j++)
        {
            if (A[j] < A[k])
            {
                k = j;
            }
        }
        swap(A[k], A[i]);
    }
}
int partition(int A[], int l, int h)
{
    int pivot = A[l];
    int i = l, j = h;

    do
    {
        do{i++;}
        while (A[i] <= pivot);
        do{ j++;}
        while (A[j] > pivot);
        if (i < j)
        {
            swap(A[i], A[j]);
        }
    } while (i < j);
    swap(A[j], A[l]);
    return j;
}
void QuickSort(int A[], int l, int h)
{
    int j;
    if (l < h)
    {
        j = partition(A, l, h);
        QuickSort(A, l, j);
        QuickSort(A, j+1, h);

    }
}
int main()
{
    int A[] = {7, 8, 19, 4, 10, 89, 1, 5, 3, 5, INT32_MAX};
    int n = sizeof(A)/sizeof(A[0]);
    QuickSort(A, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << "   ";
    }

}