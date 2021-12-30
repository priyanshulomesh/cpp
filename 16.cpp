#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template<class T>
class vectors
{
public:
    T *arr;
    int size;
    vectors(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vectors &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i] * v.arr[i];
        }
        return d;
    }
};


int main()
{
    vectors<float>v1(3);
    v1.arr[0] = 4.7;
    v1.arr[1] = 3.6;
    v1.arr[2] = 1.8;

    vectors <float>v2(3);
    v2.arr[0] = 1.9;
    v2.arr[1] = 0.9;
    v2.arr[2] = 1.7;

    float p = v1.dotProduct(v2);
    cout << p << endl;
    return 0;
}