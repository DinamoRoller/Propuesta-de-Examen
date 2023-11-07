#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int max_valor = 20; 

    for (int a = 1; a <= max_valor; a++) {
        for (int b = a; b <= max_valor; b++) {
            double c = sqrt(a * a + b * b);

    
            if (c == static_cast<int>(c) && a + b > c) {
                cout << "Triple pitagorico: " << a << " - " << b << " - " << static_cast<int>(c) << endl;
            }
        }
    }

    return 0;
}
