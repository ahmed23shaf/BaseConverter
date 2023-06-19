#ifndef CONVERSION_H
#define CONVERSION_H

#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
#include <iostream>

extern const std::unordered_map<std::string, char> binaryToHex;
extern const std::unordered_map<char, std::string> hexLookUp;

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

// INPUT: A hexadecimal number assumed to be in Two's Complement
// OUTPUT: Binary number as a string
std::string hexToTwosComplement(std::string input);

// INPUT: A hexadecimal in Two's Complement representation
// OUTPUT: A decimal equivalent
int hexToDecimal(std::string input);

// INPUT: A decimal number
// OUTPUT: In hexadecimal (Two's Complement representation)
std::string decimalToHex(int input);

// INPUT: A binary number in IEEE-754 representation
// OUTPUT: A decimal number
double floatingToDecimal(std::string input);

// INPUT: A decimal number (as a string)
// OUTPUT: IN IEEE-754 standard representation of the bits
int decimalToFloating(double input);

#endif
