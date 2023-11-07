#include <iostream>
#include <cmath>

using namespace std;

int main() {
    for (int a = 1; a <= 17; a++) {
        for (int b = a; b <= 17; b++) {
            int c = sqrt(a * a + b * b);

            if (a * a + b * b == c * c && c <= 17 && (a != 9 || b != 12 || c != 15)) {
                cout << a << " - " << b << " - " << c << endl;
            }
        }
    }

    return 0;
}
