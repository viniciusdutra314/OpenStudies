#include <iostream>
#include "constantes.h"

namespace consts_locais {
    const float PI{3.1415};
    const float GAMMA{0.577};
}

int main(){
    std::cout << consts_locais::PI << std::endl;
    using consts_locais::PI; // from constantes import PI
    std::cout << PI << std::endl;
    using namespace consts_locais; // from constantes import *
    std::cout << GAMMA << std::endl;
    // vamos agora usar constantes definidas em constantes.h
    std::cout << lab::atomic_mass_constant;
}