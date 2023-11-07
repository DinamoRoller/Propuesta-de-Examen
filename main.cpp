#include <iostream>

using namespace std;

int main() {
    int max_valor = 20; 

    for (int a = 1; a <= max_valor; a++) {
        for (int b = a; b <= max_valor; b++) {
            for (int c = b; c <= max_valor; c++) {
                if (a * a + b * b == c * c) {
                    cout << "Triple pitagórico encontrado: " << a << " - " << b << " - " << c << endl;
                }
            }
        }
    }

    return 0;
}
