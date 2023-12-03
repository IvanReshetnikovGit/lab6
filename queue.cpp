#include "queue.h"

template<typename T>
queue<T>::Node::Node(T data, Node *pnext) : data(data), pnext(pnext) {}

template<typename T>
queue<T>::queue() : head(nullptr), Size(0) {}

template<typename T>
void queue<T>::push(T data) {
    if (head == nullptr) {
        head = new Node(data);
    } else {
        Node* current = this->head;
        while (current->pnext != nullptr) {
            current = current->pnext;
        }
        current->pnext = new Node(data);
    }
    Size++;
}

template<typename T>
int queue<T>::GetSize() {
    return Size;
}

template<typename T>
void queue<T>::pop() 
{
    if (head != nullptr) 
    {
        Node* current = this->head;
        head = current->pnext;
        delete current;
        Size--;
    }
}

template<typename T>
void queue<T>::show() 
{
    Node* current = this->head;
    while (current != nullptr) 
    {
        cout << current->data << "\t";
        current = current->pnext;
    }
    cout << endl;
}
