#ifndef CONVERSION_H
#define CONVERSION_H

#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
#include <iostream>

extern const std::unordered_map<std::string, char> binaryToHex;
extern const std::unordered_map<char, std::string> hexLookUp;

/**
 * Applies the Two's Complement operation to the given binary input.
 *
 * @param binaryInput The binary string to perform the operation on.
 */
void TwosComplementOperation(std::string& binaryInput);

/**
 * Converts a binary number in Two's Complement representation to decimal.
 *
 * @param input The binary number as a string.
 * @return The converted decimal number.
 */
int twosComplementToDecimal(std::string input);

/**
 * Converts a decimal number to binary in Two's Complement representation.
 *
 * @param input The decimal number to convert.
 * @return The binary number as a string.
 */
std::string decimalToTwosComplement(int input);

/**
 * Converts a binary number in Two's Complement representation to hexadecimal.
 *
 * @param input The binary number as a string.
 * @return The hexadecimal representation as a string.
 */
std::string twosComplementToHex(std::string input);

/**
 * Converts a hexadecimal number to binary in Two's Complement representation.
 *
 * @param input The hexadecimal number as a string.
 * @return The binary number as a string.
 */
std::string hexToTwosComplement(std::string input);

/**
 * Converts a hexadecimal number in Two's Complement representation to decimal.
 *
 * @param input The hexadecimal number as a string.
 * @return The converted decimal number.
 */
int hexToDecimal(std::string input);

/**
 * Converts a decimal number to hexadecimal in Two's Complement representation.
 *
 * @param input The decimal number to convert.
 * @return The hexadecimal representation as a string.
 */
std::string decimalToHex(int input);

/**
 * Converts a binary number in IEEE-754 representation to decimal.
 *
 * @param input The binary number as a string.
 * @return The converted decimal number.
 */
double floatingToDecimal(std::string input);

/**
 * Converts a decimal number to IEEE-754 binary representation.
 *
 * @param input The decimal number to convert.
 * @return The IEEE-754 binary representation as a string.
 */
std::string decimalToFloating(double input);

#endif
