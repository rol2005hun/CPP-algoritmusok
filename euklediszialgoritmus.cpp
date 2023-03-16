#include <iostream>
using namespace std;

int lnko(int a, int b) { // ez az euklédiszi algoritmus, amely a legnagyobb közös osztót keresi
    if(b == 0) {
        return a;
    } else {
        return lnko(b, a % b);
    }
}

int main() {
    int a, b; // dekráljuk az a és b számokat
    cin >> a >> b; // beolvassuk az a és b számokat
    cout << lnko(a, b); // itt fut le az euklédiszi algoritmus
    
    return 0;
}