#include <iostream>
#include <cmath>
#include <fstream>

int main(){
    float g=9.8; float l=1;
    float theta_0=M_PI/10;
    float omega_0=0;
    float dt=0.001; float t_simulacao=10;
    float t=0; float omega=omega_0; float theta=theta_0;
    std::ofstream output_file;
    output_file.open("pendulo_nutella.dat");
    while (t<t_simulacao)
        {t+=dt;
        omega=omega - g/l*theta*dt;
        theta=theta + omega*dt;
        output_file << theta << " , " << t <<"\n";    
    }
    output_file.close();

    
}