#ifndef POLINOM_H
#define POLINOM_H

#include "number.h"
#include <iostream>

using namespace std;

class polinom
{
    number a,b,c;
public:
    polinom(number,number,number);
    int roots(number*);
    number value(number);
    QString text();
};

#endif // POLINOM_H