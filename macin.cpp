// #include "A.h"
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    const int a = 10;
    A():a(20){};
    A(int x):a(x){};
private:
    
};

//你好
//强强强强

int main()
{
    // cout<<"hello world"<<endl;
    // A* a = A::getinstance();
    // A* b = A::getinstance();

    // cout<<a<<endl;
    // cout<<b<<endl;
    // a->print();
    // b->print();
    A a;
    cout<<a.a<<endl;
    A b(100);
    cout<<b.a<<endl;

    char ch[] = "abc";
    cout<<ch<<endl<<(void*)ch;
    char* p = ch;
    cout<<(void*)p<<endl<<*p;
    cout<<"ch:"<<sizeof(ch)<<endl;
    cout<<"p:"<<sizeof(p)<<endl;

    return 0;
}