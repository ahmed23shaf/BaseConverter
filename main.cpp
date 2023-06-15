#include "conversion.h"
#define DEBUG

using std::cout;
using std::cin;

std::string getUserInput();

char getOperation();

int convertInput(std::string input);

void printResult(std::string result);

int main()
{
    #ifndef DEBUG
    std::string rawInput{getUserInput()};
    char operation{getOperation()};
    std::string finalResult; 

    switch (operation)
    {
        case '1': // Binary to Decimal
            finalResult = std::to_string(twosComplementToDecimal(rawInput));
            break;
        case '2':
            // Code for case '2'
            break;
        case '3':
            // Code for case '3'
            break;
        case '4':
            // Code for case '4'
            break;
        case '5':
            // Code for case '5'
            break;
        case '6':
            // Code for case '6'
            break;
        case '7':
            // Code for case '7'
            break;
        case '8':
            // Code for case '8'
            break;
        default:
            cout << "Invalid conversion..." << '\n';
            break;
    }

    printResult(finalResult);
    #endif

    while (true)
    {
        std::string rawInput{getUserInput()};

        cout << twosComplementToHex(rawInput);
        cout << '\n';
    }

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
    cin >> input;
    cout << '\n';

    return input;
}

char getOperation()
{
    char operation;

    cout << "Pick a conversion:" << '\n' << '\n';
    cout << "1. Binary to Decimal" << '\n'
         << "2. Decimal to Binary" << '\n'
         << "3. Binary to Hexadecimal" << '\n'
         << "4. Hexadecimal to Binary" << '\n'
         << "5. Hexadecimal to Decimal" << '\n'
         << "6. Decimal to Hexadecimal" << '\n'
         << "7. IEEE 754 to Decimal" << '\n'
         << "8. Decimal to IEEE 754" << '\n';
    cin >> operation;

    return operation;
}

int convertInput(std::string input)
{
    return std::stoi(input);
}
