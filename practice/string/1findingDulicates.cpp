#include<bits/stdc++.h>
using namespace std;


int main()
{
    char A[] = "finding";
    int i, j;
    int count;
    for(i = 0; A[i] != '\0'; i++)
    {
        for(j = i + 1; A[j] != '\0'; j++)
        {
            count = 1;
            if (A[i] = A[j])
            {
                count++;
                A[j] = -1;
            }
        }
        if (count > 1){
            cout << A[i] << endl;
        }
    } 
}