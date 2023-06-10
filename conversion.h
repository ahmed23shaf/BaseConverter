#ifndef CONVERSION_H
#define CONVERSION_H

#include <map>
#include <string>

extern const std::map<char, std::string> hexLookUp;

int twosComplementToDecimal(int input);

int decimalToTwosComplement(int input);

std::string twosComplementToHex(int input);

int hexToTwosComplement(std::string input);

int hexToDecimal(std::string input);

std::string decimalToHex(int input);

int floatingToDecimal(int input);

int decimalToFloating(int input);

#endif