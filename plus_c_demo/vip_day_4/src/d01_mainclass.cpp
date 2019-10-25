
#include <iostream>
#include <string.h>
using namespace std;//使用命名空间 std标准的命名空间
class A{
public:
    A(int a){
        m_a = a;
        cout << "构造函数 "<< m_a <<endl;

    }
    ~A(){
        cout << "析构函数"<<endl;
    }
    int getMA(){
        return m_a;
    }
private:
    int m_a;
};
/**
 * 构造函数的初始化列表
 * 语法：ClassName():成员变量m1（xxx）,成员变量m2(xxx)……
 * 为了在B类中组合了一个A类对象（A类有参数的构造函数）
 */
class B{
public:
/*    B():m_a(2){//构造函数的初始化列表
//        m_a = A(2);//
    }
    B(int b,A a):m_b(12),m_a(2){//构造函数的初始话列表
        m_b = b;
        m_a = a;
    }*/
    B():m_a2(3),m_a1(2),m_a(1),m_b(10){
//        B():m_a2(3),m_a1(m_a2),m_a(1),m_b(10){// 此种写法，m_a1是不会有值的，拿m_a2去初始化m_a1时，实则m_a2还没有被初始化

    }
    void print(){
        cout << m_a.getMA() <<" "<<m_b<<endl;
    }

private://初始化列表里面初始化的顺序是按照成员变量声明的顺序，不是初始化列表的顺序（言外之意就是初始化列表中参数的顺序与参数初始化的顺序没有关系）
    int m_b;//在初始化列表里面，m_a(1),m_b(2) 那么这个是谁先初始化
    A m_a;
    A m_a1;
    A m_a2;
};
/**
 * 我要初始化B的b1的时候，必须先初始化B类的成员变量A类型的m_a
 * 默认构造函数
 * 1、默认的无参构造函数，当我们的类没有定义构造函数时，C++编译器默认会提供一个无参构造函数，函数体是空实现（此处与Java一样）
 * 2、当我们自己写了构造函数之后，系统不会给我们提供默认的无参构造函数了
 * 3、默认拷贝构造函数，
 * 4、只要你写了构造函数，C++编译器就不会在提供默认的
 * @return
 */
int main(){
//TODO 多个对象构造和析构
    /* cout <<"多个对象构造和析构"<<endl;
     int b(12);//基础类型都可以这么给赋值 也是一种初始化的方式
     float f(3.14);
     bool bb(true);
     float f1 = 1.2;

     cout << "b: "<<b <<" f: "<<f<<" bb:" <<bb<<" f1: "<<f1<<endl;
     //Java 自动装箱 自动拆箱 与上述的代码类似
 //    B b1;//当A类没有默认的构造函数时(或者B类构造中没有初始化m_a时)，此处会报错，因为必须先初始化B类的成员变量A类型的m_a
     B b1(4,A(45));
     b1.print();*/
    //初始化列表顺序研究
    B b2;
    return 0;

}