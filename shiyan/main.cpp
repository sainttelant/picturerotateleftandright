#include <iostream>
using namespace std;
class A {
public:
    A(float a = 0, int b = 0) : m_a(a), m_b(b) {}
private:
    float m_a;
    int m_b;
};
int main_01() {
    //�� char* ת��Ϊ float*
    char str[] = "http://c.biancheng.net";
    float *p1 = reinterpret_cast<float*>(str);
    cout << *p1 << endl;
    //�� int ת��Ϊ int*
    //int *p = reinterpret_cast<int*>(100);

    float * p = (float*)malloc(sizeof(float));
    *p = 10;
    //�� A* ת��Ϊ int*
    p = reinterpret_cast<float*>(new A(25.5f, 96));

    cout << *p << endl;

    cout << "str:" << str << endl;
    system("pause");
    return 0;
}