#include <iostream>
using namespace std;

int main() {
    int v[101], n, x, ok; // deklarálunk: egy 100 elemű vektort; hány eleme van; melyik számot keressük; és egy oké változót
    
    cin >> n >> x; // beolvassuk: az n számot; és hogy melyik számot keressük
    
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
    
    int left, right, mid, t; // deklaráljuk a bináris kereséshez szükséges left mid és right változókat; t = talált változó
    left = 1, right = n;
    
    while(left <= right) { // bináris keresés
        mid = left + (right - left) / 2;
        if(v[mid] == x) {
            t = 1;
            break;
        }
        if(v[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    if(t == 1) cout << "Megtaláltam a vektorban a(z) " << x << "-s számot.";
    if(t == 0) cout << "Nem találtam meg a vektorban a(z) " << x << "-s számot.";

    return 0;
}
