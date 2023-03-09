#include <iostream>
using namespace std;

int main() {
    int v[101], n; // deklarálunk: egy 100 elemű vektort; hány eleme van; és egy oké változót
    
    cin >> n; // beolvassuk az n számot
    
    for(int i = 1; i <= n; i++) {
        cin >> v[i]; // beolvassuk a vektort
    }
    
    for(int i = 2; i <= n; i++) { // beszúrásos rendezés
        int j = i - 1;
        int key = v[i];
        while(j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
    
    for(int i = 1; i <= n; i++) {
        cout << v[i] << " "; // kiírjuk a vektort
    }

    return 0;
}
