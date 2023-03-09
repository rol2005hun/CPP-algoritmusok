#include <iostream>
using namespace std;

int main() {
    int v[101], n, ok; // deklarálunk egy 100 elemű vektort, hány eleme van, és egy oké változót
    
    cin >> n; // beolvassuk az n számot
    
    for(int i = 1; i <= n; i++) {
        cin >> v[i]; // beolvassuk a vektort
    }
    
    do {
        ok = 1;
        for(int i = 1; i < n; i++) {
            if(v[i] > v[i + 1]) {
                swap(v[i], v[i + 1]); // buborék módszer
                ok = 0;
            }
        }
    } while(!ok);
    
    for(int i = 1; i <= n; i++) {
        cout << v[i] << " "; // kiírjuk a vektort
    }

    return 0;
}
