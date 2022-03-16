#include<bits/stdc++.h>
using namespace std;


int main(){
    char temp;
    temp = 'a';
    cout<< temp << endl; 

    char X[] = {'a', 'b', 'c', 'd', 'e'};
    cout << sizeof(X) << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << X[i] << "   ";
    }
    cout << endl;

    int arr[] = {1, 2, 3, 4};
    cout << sizeof(arr)/sizeof(arr[0]) << endl;

    char name;

    cin >> name;

    cout << name;
}



