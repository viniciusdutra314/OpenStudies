#include <stdio.h>

class Vector {
private:
    float x;
    float y;
    float z;

public:
    Vector(float a, float b, float c) {
        x = a; y = b; z = c;
    }

    void Show() {
        printf("%f, %f, %f\n", x, y, z);
    }

    Vector operator+(Vector const& other) {
        Vector sum=Vector(x+other.x,
        y+other.y,z+other.z);
        return sum;
    }
};

int main() {
    Vector v = Vector(3.1, 0.5, 13);
    v.Show();
    printf("vamos ver o dobro \n");
    (v+v).Show();
    return 0;
}
