//
//  BoundCheck.h
//  Cpp_Practice2
//
//  Created by Jsfumato on 2015. 9. 25..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef BoundCheck_h
#define BoundCheck_h

template <class T>
class BoundCheckArray
{
private:
    T* arr;
    int arrlen;
    
public:
    BoundCheckArray(int len);
    T& operator[](int idx);
    T operator[](int idx) const;
    int GetArrayLen() const;
    ~BoundCheckArray();
};


#endif /* BoundCheck_h */
