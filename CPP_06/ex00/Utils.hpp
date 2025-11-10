#ifndef UTLIS_HPP
#define UTLIS_HPP
#include <iostream>
#include <limits>
#include <cmath>

int         isNumric(std::string str);
double      afterPoint(std::string input);

bool        isChar( std::string str);
bool        isInt(std::string input);
bool        isFloat( std::string input);
bool        isDouble( std::string input);

bool        checkIsInt(std::string input);
bool        checkIsDouble(std::string input);
bool        checkIsFloat(std::string input);
bool        checkPointExist(double  number);
bool        isPseudoLiteral(std::string input);

void        convertFromNumber(std::string str);
void        convertFromPseudoLiteral(std::string str);


double      convertToNumber(std::string input);
void        convertFromChar(std::string str);
#endif