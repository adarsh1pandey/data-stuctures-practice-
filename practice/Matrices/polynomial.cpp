#include <iostream>
using namespace std;

class term
{
    public:
    int coeff;
    int exp;

};
class Poly
{
    private:
        int n;
        term *t;
        
    public:
        Poly(int n);
        ~ Poly(){ delete []t;}
        
        
        void create();
        int add(Poly x, Poly y);
};

Poly::Poly(int n)
{
    this->n = n;
    t = new term[n];
}

void Poly :: create()
{
     
    for ( int i = 0; i < n; i++)
    {
        cout << "Enter the coef and exponent " << endl;
        cin >> t[i].coeff >> t[i].exp;
    }

}
int Poly :: add(Poly x, Poly y)
{
    int i = 0, j = 0, k = 0;
    while(i < x.n && j < y.n)
    {
        if (x.t[i].exp > y.t[j].exp)
        {
           

        }
    }

}


int main()
{
    
    Poly p1(3);
    p1.create();
    Poly p2(3);
    p2.create();
    Poly p3(6);


}