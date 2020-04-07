//
//  token.h
//  lexicalAnalysis
//
//  Created by Trevor Schmidt on 9/18/19.
//  Copyright © 2019 Trevor Schmidt. All rights reserved.
//

#ifndef token_h
#define token_h
#include <string>
#include <stdio.h>

using namespace std;

class token
{
public:
    token(string inName, string inValue, int inLine)
    {
        name = inName;
        value = inValue;
        line = inLine;
    }
    
    string getName()
    {
        return name;
    }
    
    string getValue()
    {
        return value;
    }
    int getLine()
    {
        return line;
    }
    
private:
    string name;
    string value;
    int line;
};

#endif /* token_h */
