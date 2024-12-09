#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cout << "Podaj liczbe elementow wektora: ";
    cin >> n;

    vector<int> wektor(n);

    cout << "Podaj " << n << " elementow wektora:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> wektor[i];
    }

    int max_wartosc = wektor[0]; 
    int indeks_max = 0;        

    for (int i = 1; i < n; i++) { 
        if (wektor[i] > max_wartosc) {
            max_wartosc = wektor[i];
            indeks_max = i;
        }
    }

    cout << "Maksymalna wartosc elementu wektora: " << max_wartosc << endl;

    cout << "Indeks elementu maksymalnego: " << indeks_max << endl;

    return 0;
}
