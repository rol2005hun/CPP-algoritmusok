#include <iostream>
using namespace std;

int main() {
    int v[101], n, x, ok; // deklarálunk: egy 100 elemű vektort; hány eleme van; melyik számot keressük; és egy oké változót
    
    cin >> n >> x; // beolvassuk az n számot
    
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
    
    int t = 0; // deklaráljuk a t = talált változót először false-ra
    for(int i = 1; i <= n; i++) { // lineáris keresés
        if(x > v[i]) break;
        if(x == v[i]) {
            t = 1;
            break;
        }
    }
    
    if(t == 1) cout << "Megtaláltam a vektorban a(z) " << x << "-s számot.";
    if(t == 0) cout << "Nem találtam meg a vektorban a(z) " << x << "-s számot.";

    return 0;
}
