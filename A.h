#pragma once//这是防止头文件被重复包含的宏定义
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    static A* getinstance()
    {
        if(m_instance == nullptr)
        {
            m_instance = new A();
            //只在第一次调用时创建,后面都返回同一个实例
            //因为m_instance 不等于 nullptr
            //不加(),会调用默认构造函数
            
        }
        return m_instance;
    }
    
    void print()
    {
        cout<<"hello world"<<endl;
    }

private:
    A(){}
    ~A(){}
    A(const A &) = delete;//禁止拷贝构造函数
    A& operator= (const A &) = delete;//禁止拷贝赋值运算符

private:
    static A* m_instance;
    //声明一个静态变量，用于保存类的唯一例实

};

A* A::m_instance = nullptr; 
//定义静态变量，初始化为nullptr