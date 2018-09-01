#include <string>

using namespace std;

string FizzBuzz(int number) {
    if (number % 3 == 0) {
        return "Fizz";
    }

    if (number % 5 == 0) {
        return "Buzz";
    }

    return to_string(number);
}

