// lab AI part2
// oct 10, 2025
// luis ramirez

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#define code_version_A

double celsius_to_fahrenheit(double c)
{
    return c * 9.0 / 5.0 + 32.0;
}

int main(int argc, char **argv)
{
    std::cout.setf(std::ios::fixed);
    std::cout << std::setprecision(2);

    double c = 0.0;

    if (argc >= 2)
    {
        std::string arg = argv[1];
        if (arg == "-h" || arg == "--help")
        {
            std::cout << "Converts Celsius to Fahrenheit\n";
            std::cout << "Usage: " << argv[0] << " [celsius]\n";
            return 0;
        }

        std::istringstream ss(arg);
        if (!(ss >> c))
        {
            std::cerr << "Error: invalid number provided: '" << arg << "'\n";
            return 1;
        }
    }
    else
    {
        std::cout << "Enter temperature in Celsius: ";
        if (!(std::cin >> c))
        {
            std::cerr << "Error: invalid input\n";
            return 1;
        }
    }

    double f = celsius_to_fahrenheit(c);
    std::cout << c << " °C = " << f << " °F\n";
    return 0;
}

// 2: Review and understand

// 1. Does the AI code use C++ concepts you're unfamiliar with? Explain.
/* yes, it uses advanced concepts that I am unfamiliar with for example argc and argv in main which i don't know what it does and -h --help and other concepts i don't recognize */

// 2. Are there any issues or improvements you noticed? Explain.
/* yes, there are issues the code can be made more simple and concise by removing unnecessary checks and using a single function for conversion. And improvements i noticed is it can handle invalid inputs more better */
// 3. What test cases did you try, and why? Explain.
/* I tried test cases like 0°C which should convert to 32°F 100° which should convert to 212°F. These test cases cover freezing point and boiling point, ensuring the conversion formula works across a range of values. */

using namespace std;
#define code_version_B
int main1()
{
    float celsius;
    float fahrenheit;

    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (1.8 * celsius) + 32;

    cout << celsius << "°C is equivalent to " << fahrenheit << "°F" << endl;

    return 0;
}

#define code_version_C
int main2()
{
    float celsius;
    float fahrenheit;
    char choice = ' ';

    cout << "1. Convert Celsius to Fahrenheit\n";
    cout << "2. Convert Fahrenheit to Celsius\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;
    if (choice == '1')
    {
        cout << "Enter the temperature in Celsius: ";
        cin >> celsius;
        fahrenheit = (1.8 * celsius) + 32;
        cout << celsius << "°C is equivalent to " << fahrenheit << "°F" << endl;
    }
    else if (choice == '2')
    {
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        cout << fahrenheit << "°F is equivalent to " << celsius << "°C" << endl;
    }

    return 0;
}