#include "main.h"

const int MIN = 1;
const int MAX = 100;

int main(int argc, char* argv[]) {
    print(MIN, MAX);
    return 0;
}

void print(int min, int max) {
    for (auto i = min; i <= max; ++i) {
        cout << i << " ";
        if (i % 3 == 0) cout << "Fizz";
        if (i % 5 == 0) cout << "Buzz";
        
        cout << endl;
    }
}
