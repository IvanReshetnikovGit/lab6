#include<iostream>
using namespace std;

template<typename T>
void template_inverse(T *massive,size_t size)
{
    for (size_t i = 0; i < size/2; i++)
    {
        swap(massive[i],massive[size-i-1]);
    }
}