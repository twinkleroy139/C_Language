#include <iostream>
using namespace std;

//  Function Overloading
/*
class Twinkle
{
public:
    void fun()
    {
        cout << "I am a function no argument" << endl;
    }
    void fun(int x)
    {
        cout << "I am a function with int x argument "<<endl;
    }
    void fun(double x)
    {
        cout << "I am function with double argument" << endl;
    }
};

int main()
{
    Twinkle ghost;
    ghost.fun();
    ghost.fun(4);
    ghost.fun(4.3);
    cout<<endl<<endl; // Using the version with int argument
}
*/

//  Operator Overloading
/*
class Twinkle
{
private:
    int real, fake;

public:
    Twinkle(int r=0, int f=0)
    {
        real = r;
        fake = f;
    }
    Twinkle operator+(Twinkle const &obj)
    {
        Twinkle res;
        res.fake = fake + obj.fake;
        res.real = real + obj.real;
        return res;
    }
    void display()
    {
        cout << real << " + i" << fake << endl;
    }
};

int main()
{
    Twinkle t1(12, 7), t2(6, 7);
    Twinkle t3 = t1 + t2;
    t1.display();
    t2.display();
    t3.display();
}
*/




class base
{
    public:
    virtual void white()
    {
        cout<<"this is the base class White function"<<endl;
    }
    void display()
    {
        cout<<"This is the base class display function"<<endl;
    }
};
class derived:public base
{
    public:
    void white()
    {
        cout<<"this is the derived class White function"<<endl;
    }
    void display()
    {
        cout<<"This is the derived class display function"<<endl;
    }
};

int main()
{
    base *baseptr;
    derived d;
    baseptr = &d;
    baseptr ->white();
    baseptr ->display();
}