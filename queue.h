#pragma once
#include<iostream>

template<typename T>
class queue 
{
public:
    queue();
    void push(T data);
    int GetSize();
    void pop();
    void show();

private:
    class Node {
    public:
        T data;
        Node *pnext;
        Node(T data = T(), Node *pnext = nullptr);
    };

    Node *head;
    int Size;
};
