//
//  ArrayController.cpp
//  ArrayProject
//
//  Created by Marlor, Brandon on 2/6/17.
//  Copyright © 2017 Marlor, Brandon. All rights reserved.
//

#include "ArrayHeader.h"
#include <iostream>

int foo [] = {16, 2, 77, 40, 120};
int n, result=0;

int main ()
{
    for ( n=0 ; n<5 ; ++n)
    {
        result += foo[n];
    }
    std::cout << result;
    return 0;

     bool arr [21] = {false};
}

