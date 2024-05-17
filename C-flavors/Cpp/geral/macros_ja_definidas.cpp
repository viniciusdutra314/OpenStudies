#include <iostream>
int main(){
    #define PRINT(x) std::cout << x << std::endl;
    PRINT(__DATE__);
    PRINT(__TIME__);
    PRINT(__FILE__);
    PRINT(__LINE__);
}
