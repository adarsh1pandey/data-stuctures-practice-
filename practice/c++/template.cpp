#include<iostream>
using namespace std;

class Arithmatic{
    private:
    int a;
    int b;
    public:
   
    Arithmatic(int a, int b);
    int add();
    int sub();

};

Arithmatic :: Arithmatic(int a, int b){
    this->a = a;
    this->b = b;
}
int Arithmatic :: add(){
    return a + b;
}
int Arithmatic :: sub(){
    return a - b;
}

int main(){
    Arithmatic ar = {10 , 4};
    cout<<ar.add();
    cout<<endl<<ar.sub();
    
}