#include <iostream>
#include "double_linked_list.h"

template<class Data>
class Queue{
    DLinkedList<Data> queue;
public:
    Queue() = default;
    bool empty() const;
    Data& front();
    Data& back();
    void push(Data data);
    void pop();
    int size() const;
};

template<class Data>
bool Queue<Data>::empty() const{
    return queue.getSize() == 0;
}

template<class Data>
Data& Queue<Data>::front(){
    return queue.GetHead()->data;
}

template<class Data>
Data& Queue<Data>::back(){
    return queue.GetTail()->data;
}

template<class Data>
void Queue<Data>::push(Data data){
    queue.insertLast(0,data);
}

template<class Data>
void Queue<Data>::pop(){
    queue.pop_front();
}

template<class Data>
int Queue<Data>::size() const{
    return queue.getSize();
}

