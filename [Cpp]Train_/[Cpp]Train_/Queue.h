//
//  Queue.h
//  [Cpp]Train_
//
//  Created by Jsfumato on 2015. 10. 11..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include "Util.h"

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
    Queue(int num = 10):size(num),count(0),list(new T[num]),front(0),rear(0)
    {
        for(int i=0; i<size; i++)
        {
            list[i] = nullptr;
        }
    };
    
    ~Queue()
    {
        delete[] list;
    };
    
    T Get(int num);
    int GetCount();
    void Enqueue(const T &item);
    void Remove(int index);
    void Relocate();
    T Dequeue();
    bool IsFull();
    bool IsEmpty();
    void Clear();
};

template <class T>
T Queue<T>::Get(int num)
{
    return list[num];
}

template <class T>
int Queue<T>::GetCount()
{
    return count;
}

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
void Queue<T>::Relocate()
{
    if(IsEmpty())
    {
        cout<<"Queue is Empty"<<endl;
        return;
    }
    if(front==0)
    {
        return;
    }
    
    int start = 0;
    int newCount = 0;
    T* nList = new T[size];
    for(int i=0; i<size; i++)
    {
        nList[i] = nullptr;
    }
    for(int i = front; i<rear; i++)
    {
        i = i%size;
        nList[start++] = list[i];
        newCount += 1;
    }
    delete[] list;
    count = newCount;
    list = nList;
    front = 0;
    rear = front+count;
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

template <class T>
void Queue<T>::Clear()
{
    front = 0;
    rear = 0;
    count = 0;
    for(int i=0; i<size; i++)
    {
        list[i] = nullptr;
    }
}

#endif /* Queue_h */
