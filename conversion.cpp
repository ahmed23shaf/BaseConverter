#include "conversion.h"

const std::map<std::string, char> binaryToHex{
    {"0000", '0'},
    {"0001", '1'},
    {"0010", '2'},
    {"0011", '3'},
    {"0100", '4'},
    {"0101", '5'},
    {"0110", '6'},
    {"0111", '7'},
    {"1000", '8'},
    {"1001", '9'},
    {"1010", 'A'},
    {"1011", 'B'},
    {"1100", 'C'},
    {"1101", 'D'},
    {"1110", 'E'},
    {"1111", 'F'}
};

const std::map<char, std::string> hexToBinary{
    {'0', "0000"},
    {'1', "0001"},
    {'2', "0010"},
    {'3', "0011"},
    {'4', "0100"},
    {'5', "0101"},
    {'6', "0110"},
    {'7', "0111"},
    {'8', "1000"},
    {'9', "1001"},
    {'A', "1010"},
    {'B', "1011"},
    {'C', "1100"},
    {'D', "1101"},
    {'E', "1110"},
    {'F', "1111"} 
};

void TwosComplementOperation(std::string& binaryInput)
{
    int i;

    // One's complement 
    for (i = 0; i < binaryInput.length(); i++)
    {
        binaryInput[i] = (binaryInput[i] == '0') ? '1' : '0';
    }

    // Add 1 to the one's complement
    bool carry = true;
    for (i = binaryInput.length() - 1; i >= 0; i--)
    {
        if (carry)
        {
            if (binaryInput[i] == '0')
            {
                binaryInput[i] = '1';
                carry = false;
            }
            else
                binaryInput[i] = '0';
        }
    }
}

int twosComplementToDecimal(std::string input)
{
    int endDecimal{};
    int sign = (input[0] == '1') ? -1:1;
    int i;

    // Check MSB
    if (sign < 0)
    {
        TwosComplementOperation(input);
    }

    // Traverse the bits (of the magnitude)
    int powerOf2;
    for (i = input.length()-1; i >= 0; i--)
    {
        powerOf2 = input.length() - 1 - i;
        endDecimal += (input[i] - 48) * (1 << powerOf2); // 48 is '0' in ASCII
    }

    return sign*endDecimal;
}

std::string decimalToTwosComplement(int input)
{
    std::string binaryString;
    int sign = (input >= 0) ? 1:-1;
    input = abs(input);

    while (input > 0)
    {
        // ODD
        if (input % 2 != 0)
        {
            binaryString.insert(binaryString.begin(), '1');
            input--;
        }
        // EVEN
        else
            binaryString.insert(binaryString.begin(), '0');

        input /= 2;
    }

    // Additional 0 to ensure magnitude is positive
    binaryString.insert(binaryString.begin(), '0');

    if (sign < 0)
        TwosComplementOperation(binaryString);

    return binaryString;
}

std::string twosComplementToHex(std::string input)
{
    std::string hexString;
    std::string binarySequence;
    int sign = (input[0] == '1') ? -1:1;

    // If need for sign extension
    while (input.length() % 4 != 0)
    {
        if (sign > 0)
            input.insert(input.begin(), '0');
        else
            input.insert(input.begin(), '1');
    }

    for (int i = input.length()-4; i >= 0; i -= 4)
    {
        binarySequence = input.substr(i, 4);
        binarySequence = binaryToHex.at(binarySequence);
        hexString.insert(0, binarySequence);
    }

    hexString.insert(0, "0x");
    return hexString;
}

int hexToTwosComplement(std::string input)
{
    // Temporary return value
    return 0;
}

int hexToDecimal(std::string input)
{
    // Temporary return value
    return 0;
}

std::string decimalToHex(int input)
{
    // Temporary return value
    return "";
}

int floatingToDecimal(int input)
{
    // Temporary return value
    return 0;
}

int decimalToFloating(int input)
{
    // Temporary return value
    return 0;
}
