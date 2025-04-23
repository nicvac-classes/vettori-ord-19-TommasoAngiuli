#include <iostream>
using namespace std;
int main() {
    int n, i, t, iY, j, s;
    bool uguale, scambio;

    do {
        cout << "inserisci la dimensione del vettore" << endl;
        cin >> n;
    } while (n < 0);
    int x[n];

    i = 0;
    while (i <= n - 1) {
        cout << "inserisci il " << i + 1 << "° valore" << endl;
        cin >> x[i];
        i = i + 1;
    }
    i = 0;
    iY = 0;
    while (i <= n - 1) {
        uguale = false;
        j = i + 1;
        while (j <= n - 1) {
            if (x[i] == x[j]) {
                uguale = true;
            }
            j = j + 1;
        }
        if (uguale) {
        } else {
            iY = iY + 1;
        }
        i = i + 1;
    }
    int y[iY];

    i = 0;
    s = 0;
    while (i <= n - 1) {
        uguale = false;
        j = i + 1;
        while (j <= n - 1) {
            if (x[i] == x[j]) {
                uguale = true;
            }
            j = j + 1;
        }
        if (uguale) {
        } else {
            y[s] = x[i];
            s = s + 1;
        }
        i = i + 1;
    }
    i = 0;
    scambio = true;
    while (i <= iY - 1 && scambio) {
        scambio = false;
        j = 0;
        while (j <= iY - 2 - i) {
            if (y[j] > y[j + 1]) {
                t = y[j];
                y[j] = y[j + 1];
                y[j + 1] = t;
                scambio = true;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    while (i <= iY - 1) {
        cout << y[i] << endl;
        i = i + 1;
    }
}