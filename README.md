# Propuesta-de-Examen
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int triples[][3] = {{3, 4, 5}, {6, 8, 10}, {5, 12, 13}, {8, 15, 17}};

    for (int i = 0; i < 4; i++) {
        int a = triples[i][0];
        int b = triples[i][1];
        int c = triples[i][2];

        if (a * a + b * b == c * c) {
            cout << "Triple pitagórico encontrado: " << a << " - " << b << " - " << c << endl;
        }
    }

    return 0;
}
