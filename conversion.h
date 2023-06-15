#ifndef CONVERSION_H
#define CONVERSION_H

#include <string>
#include <map>
#include <iostream>

extern const std::map<std::string, char> binaryToHex;
extern const std::map<char, std::string> hexLookUp;

// INPUT: Reference to a binary string
// OUTPUT: None
void TwosComplementOperation(std::string& binaryInput);

// INPUT:  A binary number assumed to be in Two's Complement  
// OUTPUT: The converted number into decimal 
int twosComplementToDecimal(std::string input);

// INPUT: Decimal number (base 10)
// OUTPUT: The number in binary (Two's Complement Representation)
std::string decimalToTwosComplement(int input);

// INPUT: A binary number in Two's Complement (as a std::string)
// OUTPUT: A hexadecimal output (also as std::string)
std::string twosComplementToHex(std::string input);

int hexToTwosComplement(std::string input);

int hexToDecimal(std::string input);

std::string decimalToHex(int input);

int floatingToDecimal(int input);

int decimalToFloating(int input);

#endif
