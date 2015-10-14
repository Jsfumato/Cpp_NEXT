//
//  DataStorage.h
//  Cpp_Practice3
//
//  Created by Jsfumato on 2015. 10. 8..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef DataStorage_h
#define DataStorage_h

#include <iostream>

using namespace std;

class DataStorage
{
private:
    int* arr;
    int  idx;
    const int MAX_LEN;
    
public:
    DataStorage(int count) : idx(0), MAX_LEN(count)
    {
        arr = new int[count];
    }
    
    void AddElement(int num)
    {
        if(idx >= MAX_LEN)
        {
            cout << "ERROR" << endl;
            return;
        }
        arr[idx++] = num;
    }
    
    void SortElement(SortRule& rule)
    {
        for(int i=0; i<idx-1; i++){
            for(int j=0; j<idx-1-i; j++){
                if(rule(arr[j], arr[j+1])){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
    
    void ShowElement(){
        cout << "[ ";
        for(int i = 0; i<idx; i++)
        {
            cout << arr[i] <<" ";
        }
        cout << "]" << endl;
    }
    
};

#endif /* DataStorage_h */
