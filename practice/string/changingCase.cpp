#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     char A[] = "PANDEY";
//     int i;
//     for (i = 0; A[i] != '\0'; i++)
//     {
//         A[i] += 32;
//     }
//     cout << A << endl;
// }

// if ther is both capital and small letters and we have to change it to same either small or capital letter ..

int main()
{
    char A[] = "AdarsH";
    int i;
    for (i = 0; A[i] != '\0'; i++)
    {
        if (A[i] >= 65 && A[i] <= 90){
            A[i] += 32;
        }
    }
    cout << A << " ";
}