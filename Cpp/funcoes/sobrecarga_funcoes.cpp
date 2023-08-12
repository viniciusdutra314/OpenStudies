#include <iostream>

float soma(float x, float y) {
    return x + y;
}

void soma(char x, char y) {
    std::cout << "Isso é uma string, rapaz!" << std::endl;
}

int main() {
    float result1 = soma(-3.0f, 5.0f);
    soma('e', 'a');

    std::cout << "Float result: " << result1 << std::endl;
    return 0;
}
