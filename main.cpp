#include "conversion.h"

using std::cout;
using std::cin;

std::string getUserInput();

char getOperation();

void pressEnterToContinue();

int main()
{
    bool loop = false;
    std::string rawInput = getUserInput();
    char operation = getOperation();
    std::string finalResult;

    switch (operation)
    {
        case '1': // Binary to Decimal
            finalResult = std::to_string(twosComplementToDecimal(rawInput));
            break;
        case '2': // Decimal to Binary
            finalResult = decimalToTwosComplement(std::stoi(rawInput));
            break;
        case '3': // Binary to Hexadecimal
            finalResult = twosComplementToHex(rawInput);
            break;
        case '4': // Hexadecimal to Binary
            finalResult = hexToTwosComplement(rawInput);
            break;
        case '5': // Hexadecimal to Decimal
            finalResult = std::to_string(hexToDecimal(rawInput));
            break;
        case '6': // Decimal to Hexadecimal
            finalResult = decimalToHex(std::stoi(rawInput));
            break;
        case '7': // IEEE 754 to Decimal
            finalResult = floatingToDecimal(rawInput);
            break;
        case '8': // Decimal to IEEE 754
            finalResult = decimalToFloating(std::stod(rawInput));
            break;
        default:
            cout << "Invalid conversion..." << '\n';
            break;
    }
    cout << "************************************" << '\n'
         << finalResult << '\n'
         << "************************************" << '\n';

    pressEnterToContinue();

    return 0;
}

std::string getUserInput()
{
    std::string input{};

    cout << "************************************" << '\n';
    cout << "          Number Converter          " << '\n';
    cout << "************************************" << '\n';
    cout << '\n';
    cout << "Welcome to the Number Converter!" << '\n';
    cout << "Please enter a number to be converted: ";
    std::getline(std::cin, input);
    cout << '\n';

    return input;
}

char getOperation()
{
    char operation;

    cout << "Pick a conversion:" << '\n';
    cout << "1. Binary to Decimal" << '\n'
         << "2. Decimal to Binary" << '\n'
         << "3. Binary to Hexadecimal" << '\n'
         << "4. Hexadecimal to Binary" << '\n'
         << "5. Hexadecimal to Decimal" << '\n'
         << "6. Decimal to Hexadecimal" << '\n'
         << "7. IEEE 754 to Decimal" << '\n'
         << "8. Decimal to IEEE 754" << '\n';
    cin >> operation;

    cout << '\n';

    return operation;
}

void pressEnterToContinue() 
{
    std::cout << "Press ENTER to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}
