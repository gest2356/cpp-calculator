#include <iostream>

std::string display_welcome_message() {

    std::string welcome_message = (
        "Welcome to Calculator\n"
        "\n"
        "Choice one operation\n"
        "1. Add\n"
        "2. Subtract\n"
        "3. Exit\n"

    );
    return welcome_message;

}

int hendle_calculation(int user_input, float first_number, float second_number) {
    switch (user_input) {
        case 1:
            return first_number + second_number;
        case 2:
            return first_number - second_number;
        default: ;
    }
}

int main() {
    std::cout << display_welcome_message();

    int user_input = 0;
    std::cin >> user_input;

    float first_number = 0;
    std::cin >> first_number;
    float second_number = 0;
    std::cin >> second_number;

    float result = hendle_calculation(user_input, first_number, second_number);

    std::cout << result;

    return 0;
}