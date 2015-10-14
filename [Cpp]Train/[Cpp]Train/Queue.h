//
//  Queue.h
//  [Cpp]Train
//
//  Created by Jsfumato on 2015. 10. 7..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include "Util.h"

#ifndef Queue_h
#define Queue_h

using namespace std;

template<class T>
class Queue
{
private:
    T* list;
    int size;
    int count;
    int front;
    int rear;
    
public:
    Queue(int num = 10):size(num),count(0),front(0),rear(0)
    {

    };
    
//    Queue(int num = 10):size(num),count(0),list(new T[num]),front(0),rear(0)
//    {
//        //        for(int i=0; i<size; i++)
//        //        {
//        //            list[i] = nullptr;
//        //        }
//    };
    
    ~Queue()
    {
        delete[] list;
    };
    
    void Enqueue(const T &item);
    T Dequeue();
    bool IsFull();
    bool IsEmpty();
};


template <class T>
void Queue<T>::Enqueue(const T &item)
{
    if(IsFull())
    {
        cout<<"Queue is Full"<<endl;
        return;
    }
    list[rear++] = item;
    rear = rear%size;
    count++;
};

template <class T>
T Queue<T>::Dequeue()
{
    if(IsEmpty())
    {
        cout<<"Queue is Empty"<<endl;
        return NULL;
    }
    T item = list[front];
    list[front++] = NULL;
    front = front%size;
    count--;
    
    return item;
};

template <class T>
bool Queue<T>::IsFull()
{
    return (count == size)? true: false;
};

template <class T>
bool Queue<T>::IsEmpty()
{
    return (count == 0)? true: false;
};

#endif /* Queue_h */
