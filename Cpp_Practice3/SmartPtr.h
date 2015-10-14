//
//  SmartPtr.h
//  Cpp_Practice3
//
//  Created by Jsfumato on 2015. 10. 8..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef SmartPtr_h
#define SmartPtr_h

class SmartPtr
{
private:
    Point*  posPtr;
    int*    refCount;
    
public:
    SmartPtr() :posPtr(nullptr), refCount(0)
    { }
    
    SmartPtr(Point* ptr) :posPtr(ptr), refCount(new int())
    {
        (*refCount)++;
    }
    
    ~SmartPtr()
    {
        *refCount -= 1;
        if(*refCount == 0)
            delete posPtr;
    }
    
    SmartPtr& operator=(SmartPtr smPtr)
    {
        refCount = smPtr.refCount;
        cout << "asdf "<< *refCount << "=" << *(smPtr.refCount) << endl;
        posPtr = smPtr.posPtr;
        return *this;
    }
    
    void release()
    {
        (*refCount)--;
    }
    
    int ShowRefCount() const
    {
        return *refCount;
    }
    
    Point* operator->()
    {
        return posPtr;
    }
    
    Point& operator*()
    {
        return *posPtr;
    }
};

#endif /* SmartPtr_h */
