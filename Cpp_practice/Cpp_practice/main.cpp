//
//  main.cpp
//  Cpp_practice
//
//  Created by Jsfumato on 2015. 9. 17..
//  Copyright (c) 2015년 Jsfumato. All rights reserved.
//

#include <iostream>

using namespace std;


class Test
{
private:
    int mvX;
    int mvY;
    
    static int s;
    char* name;
    
public:
//    Test()
//    {
//        mvX = 10;
//        mvY = 20;
//        위의 방법은 촌스러운 방법...
//    }
    
    Test(char* str):mvX(10),mvY(20)
    {
        int len = strlen(str) +1;
        name = new char[len];
        strcpy(name, str);
    };
    Test(char* str, int num):mvX(num),mvY(2*num)
    {
        int len = strlen(str) +1;
        name = new char[len];
        strcpy(name, str);
    };
//    이런 식으로 사용하는 것은 이니셜라이저라고 한다.
//    const에 대해서 차이가 있다.
//    멤버 변수가 const로 선언되어 있으면, 일반 생성자로는 초기화가 불가능하다.
    
//    그러나 이니셜라이저를 사용하면, const 멤버변수도 초기화 가능!
    
//    static 멤버변수의 경우 초기화는 클래스 밖에서 한다... 생성자로도, 선언과 동시에 초기화도 불가능하다.
    
//    static int s라는 변수가 있다면,
//    int Test::s = 10; (in cpp file)
    
    
    

    
    ~Test()
    {
        cout << "delete name" << endl;
        delete[] name;
    }
    
    
//    아래의 내용은 복사 생성자이다.
    
//    Test(const Test& t)
//    {
//        this->mvX = t.mvX;
//        this->mvY = t.mvY;
//        cout << "C.C. : " << this << endl;
//    }
    
//    이니셜라이저를 이용한 복사 생성자
//    대입연산자를 이용하면 자동으로 호출된다.
//    그러나 접두에 explicit을 붙이면, 대입연산자를 통해서는 안되고 복사생성자를 명시해야만 사용된다.
    
    Test(const Test& t) :mvX(t.mvX),mvY(t.mvY)
    {
        int len = strlen(t.name) +1;
        name = new char[len];
        strcpy(name, t.name);
        
        cout << "C.C. : " << this << endl;
    }
    
    

//    const라는 것은 멤버 변수를 변경시키지 않겠다는 뜻.
//    그러나 mutable 멤버변수는 const 내에서도 변경할 수 있다는 뜻. 그러나 권장하지는 않는다.
    
    int GetX() const
    {
        return mvX;
    }
    int GetY() const
    {
        return mvY;
    }
    void SetX(int num)
    {
        mvX = num;
    }
    void SetY(int num)
    {
        mvY = num;
    }
    static int GetS()
    {
        return s;
    }
    
    void ShowInfo()
    {
        cout << name << endl;
        cout << "x: " << mvX << endl;
        cout << "y: " << mvY << endl;
    }
};

int Test::s = 10;







class A
{
    
    
};










int main(int argc, const char * argv[]) {

    Test* t = new Test("이승기");
    Test* t2 = t;
//    cout << t->GetS() << endl;
//    cout << Test::GetS() << endl;

    Test *testList[3];
    testList[0] = new Test("이승기", 1);
    testList[1] = new Test("이승기", 2);
    testList[2] = new Test("이승기", 3);
    
    for(int i=0; i<sizeof(testList); i++)
    {
        delete testList[i];
    }
    
    t->ShowInfo();
    t2->ShowInfo();
    
    delete t;
    return 0;
}
