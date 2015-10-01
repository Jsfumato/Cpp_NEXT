//
//  Queue.h
//  [Cpp]Week3
//
//  Created by Jsfumato on 2015. 10. 1..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

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
            list[i] = NULL;
        }
    };
    Queue()
    {
        delete[] list;
    };
    
    void Enqueue(const T &item);
    T Dequeue();
    bool IsFull();
    bool IsEmpty();
    
private:

    
};

#endif /* Queue_h */
