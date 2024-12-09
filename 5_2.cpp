#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Podaj rozmiar tablicy:";
    cin >> n;

    vector<int> tablica(n);

    cout << "Podaj elementy tablicy:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> tablica[i];
    }

    cout << "Tablica wejściowa:" << endl;
    for (int i = 0; i < n / 2; i++) {
        cout << tablica[i] << " " << tablica[n / 2 + i] << endl;
    }

    for (int i = 0; i < n / 2; i++) {
        swap(tablica[i], tablica[n / 2 + i]);
    }

    cout << "Tablica wyjściowa:" << endl;
    for (int i = 0; i < n / 2; i++) {
        cout << tablica[i] << " " << tablica[n / 2 + i] << endl;
    }

    return 0;
}