#include <iostream>
using namespace std;

int main() {
    int n, prim = 1;
    cin >> n; // beolvassuk az n számot
    
    if(n < 2) prim = 0;
    else {
        for(int i = 2; i * i <= n; i++) { // elmegy n gyökéig, és ellenőrzi hogy prím szám-e
            if(n % i == 0) {
                prim = 0;
                break;
            }
        }
    }
    
    if(prim) cout << "Prím szám.";
    if(!prim) cout << "Nem prím szám.";

    return 0;
}
