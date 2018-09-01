#include <string>

using namespace std;

bool isMultipleOf(int multiple, int number) {
    return number % multiple == 0;
}

string FizzBuzz(int number) {
    if (isMultipleOf(15, number)) {
        return "FizzBuzz";
    }

    if (isMultipleOf(3, number)) {
        return "Fizz";
    }

    if (isMultipleOf(5, number)) {
        return "Buzz";
    }

    return to_string(number);
}

