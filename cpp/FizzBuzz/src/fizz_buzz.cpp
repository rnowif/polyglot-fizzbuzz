#include <string>
#include <vector>

using namespace std;

vector<pair<int, string>> rules {
        {15, "FizzBuzz"},
        {3, "Fizz"},
        {5, "Buzz"}
};

bool isMultipleOf(int multiple, int number) {
    return number % multiple == 0;
}

string FizzBuzz(int number) {

    for (auto rule : rules) {
        if (isMultipleOf(rule.first, number)) {
            return rule.second;
        }
    }

    return to_string(number);
}

