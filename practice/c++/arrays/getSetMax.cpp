#include <iostream>
using namespace std;

struct array
{
    int A[10];
    int length;
    int size;
};
int get(struct array ar, int index)
{
    if (index >= 0 && index < ar.length)
    {
        return ar.A[index];
    }
    return 0;
}
void set(struct array *ar, int index, int number)
{
    if (index >= 0 && index < ar->length)
    {
        ar->A[index] = number;
    }
}
void max(struct array ar)
{
    int max = ar.A[0];
    for (int i = 0; i < ar.length; i++)
    {
        if (ar.A[i] > max)
        {
            max = ar.A[i];
        }
    }
    cout << max << endl;
}
void min(struct array ar)
{
    int min = ar.A[0];
    for (int i = 0; i < ar.length; i++)
    {
        if (ar.A[i] < min)
        {
            min = ar.A[i];
        }
    }
    cout << min << endl;
}

void sum(struct array ar)
{
    int sum = 0;
    for (int i = 0; i < ar.length; i++)
    {
        sum = sum + ar.A[i];
    }
    cout << sum << endl;
}

void avarage(struct array ar)
{
    int sum = 0;
    for (int i = 0; i < ar.length; i++)
    {
        sum = sum + ar.A[i];
    }
    cout << sum/2<< endl;
}
void reverse(struct array *ar){
    int *B;
    B = new int(ar->length);
    for(int i = ar->length - 1, j = 0; i >= 0; i--, j++){
        B[j] = ar->A[i];
    }
    for (int i = 0; i < ar->length; i++){
        ar->A[i] = B[i];
    }
}
void reverseonestep(struct array *ar){
   
    for(int i = 0, j = ar->length - 1; i < j; i++, j--){
        int temp = ar->A[i];
        ar->A[i] = ar->A[j];
        ar->A[j] = temp;
    }
}
void display(struct array ar){
    for(int i = 0; i < ar.length; i++){
        cout<<ar.A[i]<<"   ";
    }
}

int main(){
    struct array ar = {{10, 9, 21, 43, 65, 343, 84}, 7, 10};

    cout<< get(ar,2)<<endl;
    //set(&ar, 2, 5);
    //max(ar);
    //min(ar);
    //sum(ar);
    //avarage(ar);
    //display(ar);
    //reverse(&ar);
    //display(ar);
    reverseonestep(&ar); 
    display(ar);
}


    

