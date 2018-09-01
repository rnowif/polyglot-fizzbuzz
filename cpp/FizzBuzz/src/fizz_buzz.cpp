#include <string>

using namespace std;

string FizzBuzz(int number) {
    if (number % 3 == 0) {
        return "Fizz";
    }

    return to_string(number);
}

