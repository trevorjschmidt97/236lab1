//
//  main.cpp
//  lexicalAnalysis
//
//  Created by Trevor Schmidt on 9/18/19.
//  Copyright © 2019 Trevor Schmidt. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include "scanner.h"
#include "token.h"
#include "dataLog.h"

using namespace std;

int main(int argc, const char * argv[]) {
    string input;
    ifstream fin;
    
    fin.open(argv[1]);
    
    //Reads in entire file to string
    while (getline(fin, input, '\0')) {}
    
    //Passes the entire file to the scanner
    scanner lexer(input);
    dataLog parser;
    
    lexer.executeLexer();
    
    parser.setVect(lexer.getVect());
    
    lexer.toString();
        
    lexer.deleteVector();

    return 0;
}
