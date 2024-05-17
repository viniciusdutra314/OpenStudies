#include <iostream>
namespace dutra {
        auto texto="Texto no namespace";
    } 
auto texto = "Texto fora do namespace";

int main(){
    std::cout << ::texto << std::endl;
    std::cout << dutra::texto << std::endl;
}
