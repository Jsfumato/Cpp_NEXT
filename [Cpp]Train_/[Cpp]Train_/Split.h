//
//  Split.h
//  [Cpp]Train_
//
//  Created by Jsfumato on 2015. 10. 12..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef Split_h
#define Split_h

class Split
{
public:
    
    static void SplitByChar(char** result, const char* string, const char c)
    {
        int front = 0;
        int i=0;
        int j=0;
        
        while(true)
        {
            if((string[i]==c) || (string[i]=='\0'))
            {
                result[j] = new char[i-front+1];
                
                for(int k=0; k<(i-front); k++)
                {
                    result[j][k] = string[front+k];
                }
                result[j][i-front] = '\0';
                front = i+1;
                j++;

            }
            if(string[i]=='\0')
            {
                break;
            }
            i++;
        }
    };
    
    static void SplitByWchar(char** result, const wchar_t* string, const char c)
    {
        int front = 0;
        int i=0;
        int j=0;
        
        while(true)
        {
            if((string[i]==c) || (string[i]=='\0'))
            {
                result[j] = new char[i-front+1];
                
                for(int k=0; k<(i-front); k++)
                {
                    result[j][k] = string[front+k];
                }
                result[j][i-front] = '\0';
                front = i+1;
                j++;
                
            }
            if(string[i]=='\0')
            {
                break;
            }
            i++;
        }
    };
};
#endif /* Split_h */
