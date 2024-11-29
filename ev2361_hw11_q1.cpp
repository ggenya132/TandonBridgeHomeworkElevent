#include <iostream>
using namespace std;
const char ASTERIK = '*';
const char DASH = '-';

void printTriangle(int n) {
    if (n == 1) {
        for (int i = 0; i < n; i++) {
            cout << ASTERIK;
        }
        cout << endl;

    } else {
        printTriangle(n - 1);
        for (int i = 0; i < n; i++) {
            cout << ASTERIK;
        }
        cout << endl;
    }
}
void printOppositeTriangles(int n) {
    if (n == 1) {
        for (int i = 0; i < n; i++) {
            cout << ASTERIK;
        }
        cout << endl;
        for (int i = 0; i < n; i++) {
            cout << ASTERIK;
        }
        cout << endl;
    } else {
        for (int i = 0; i < n; i++) {
            cout << ASTERIK;
        }
        cout << endl;
        printOppositeTriangles(n - 1);
        for (int i = 0; i < n; i++) {
            cout << ASTERIK;
        }
        cout << endl;
    }
}
void printRuler(int n) {
    if (n == 1) {
        cout << DASH << endl;
        return;
    }
    printRuler(n - 1);
    for (int i = 0; i < n; i++) {
        cout << DASH;
    }
    cout << endl;
    printRuler(n - 1);
}
int main() {
    printTriangle(4);
    cout << endl;
    printOppositeTriangles(4);
    cout << endl;
    printRuler(4);
    return 1;
}