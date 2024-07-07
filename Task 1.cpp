#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1, guess_number;
    
    while (std::cout << "Guess (1-100): ", std::cin >> guess_number) {
        if (guess_number == secret) {
            std::cout << "Number is Correct!\n";
            return 0;
        }
        std::cout << (guess_number < secret ? "Lower than correct " : "High than correct") << "\n";
    }
}
