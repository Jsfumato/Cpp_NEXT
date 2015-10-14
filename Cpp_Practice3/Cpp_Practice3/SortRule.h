//
//  SortRule.h
//  Cpp_Practice3
//
//  Created by Jsfumato on 2015. 10. 8..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef SortRule_h
#define SortRule_h

class SortRule
{
private:
    
public:
    virtual bool operator()(int num1, int num2) = 0;
    
};

class AscendingSort : public SortRule
{
public:
    bool operator()(int num1, int num2)
    {return (num1 > num2) ? true: false;}
    
};

class DescendingSort : public SortRule
{
public:
    bool operator()(int num1, int num2)
    {return (num2 > num1) ? true: false;}
    
};


#endif /* SortRule_h */
