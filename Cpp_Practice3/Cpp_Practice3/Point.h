//
//  Point.h
//  Cpp_Practice3
//
//  Created by Jsfumato on 2015. 10. 2..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef Point_h
#define Point_h

#include <iostream>

using namespace std;

class Point
{
private:
    int xPos, yPos;
    
public:
    Point(int n1 = 0, int n2 = 0) :xPos(n1),yPos(n2){}
    void ShowData()
    {
        cout << "[" << xPos <<", "<<yPos <<"]" << endl;
    }
    
    ~Point()
    {
        cout << "파괴자!" << endl;
    }
    
    Point operator+(Point& p)
    {
        cout << "Point& operator+(Point& p) 호출" <<endl;
        Point pos(xPos + p.xPos,yPos + p.yPos);
        return pos;
    }
    
//  전위 연산자 오버로딩
    Point& operator++()
    {
        this->xPos += 1;
        this->yPos += 1;
        return *this;
    };
    
//  후위 연산자 오버로딩
    Point operator++(int)
    {
        Point p(xPos, yPos);
        this->xPos += 1;
        this->yPos += 1;
        return p;
    };
    
//  전위 연산자 오버로딩
    Point& operator--()
    {
        this->xPos -= 1;
        this->yPos -= 1;
        return *this;
    };
    
//  후위 연산자 오버로딩
    Point operator--(int)
    {
        Point p(xPos, yPos);
        this->xPos -= 1;
        this->yPos -= 1;
        return p;
    };
    
//    대입연산자는 밖에서 선언할 수 없다.
    Point& operator=(const Point& ref)
    {
        cout << "대입 연산자 호출" << endl;
        xPos = ref.xPos;
        yPos = ref.yPos;
        return *this;
    }
    
    
//  구 컴파일러의 경우 전위연산자 후위연산자 구별이 없으면 그냥 있는걸로 돌린다.
    
    friend Point operator+(Point& p1, Point& p2);
    friend ostream& operator<<(ostream& os, Point& ref);
    friend istream& operator>>(istream& is, Point& ref);
    
//  friend 키워드의 경우 함수에도 붙일 수 있다.
};

Point operator+(Point& p1, Point& p2)
{
    cout << "Point& operator+(Point& p1, Point& p2) 호출" << endl;
    Point pos(p1.xPos + p2.xPos, p1.yPos + p2.yPos);
    return pos;
}

ostream& operator<<(ostream& os, Point& ref)
{
    cout << "[" << ref.xPos <<", "<<ref.yPos <<"]" << endl;
    return os;
}

istream& operator>>(istream& is, Point& ref)
{
    cin >> ref.xPos >> ref.yPos;
    return is;
}

#endif /* Point_h */
