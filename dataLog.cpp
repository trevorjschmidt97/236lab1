//
//  dataLog.cpp
//  lexicalAnalysis
//
//  Created by Trevor Schmidt on 9/27/19.
//  Copyright © 2019 Trevor Schmidt. All rights reserved.
//

#include "dataLog.h"

/*SCHEMES COLON scheme schemeList
FACTS COLON factList
RULES COLON ruleList
QUERIES COLON query queryList*/
void dataLog::datalogProgram()
{
    
}

/*scheme schemeList | lambda*/
void dataLog::schemeList()
{
    
}

/*fact factList | lambda*/
void dataLog::factList()
{
    
}

/*rule ruleList | lambda*/
void dataLog::ruleList()
{
    
}

/*query queryList | lambda*/
void dataLog::queryList()
{
    
}

/*ID LEFT_PAREN ID idList RIGHT_PAREN*/
void dataLog::scheme()
{
    
}

/*ID LEFT_PAREN STRING stringList RIGHT_PAREN PERIOD*/
void dataLog::fact()
{
    
}

/*headPredicate COLON_DASH predicate predicateList PERIOD*/
void dataLog::rule()
{
    
}

/*predicate Q_MARK*/
void dataLog::query()
{
    
}

/*ID LEFT_PAREN ID idList RIGHT_PAREN*/
void dataLog::headPredicate()
{
    
}

/*ID LEFT_PAREN parameter parameterList RIGHT_PAREN*/
void dataLog::predicate()
{
    
}

/*COMMA predicate predicateList | lambda*/
void dataLog::predicateList()
{
    
}

/*COMMA parameter parameterList | lambda*/
void dataLog::parameterList()
{
    
}

/*COMMA STRING stringList | lambda*/
void dataLog::stringList()
{
    
}

/*COMMA ID idList | lambda*/
void dataLog::idList()
{
    
}

/*STRING | ID | expression*/
void dataLog::parameter()
{
    
}

/*LEFT_PAREN parameter operator parameter RIGHT_PAREN*/
void dataLog::expression()
{
    
}

/*ADD | MULTIPLY*/
void dataLog::operat()
{
    
}


