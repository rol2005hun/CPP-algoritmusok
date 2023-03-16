#include <iostream>
using namespace std;

int lnko(int a, int b) { // ez az euklédiszi algoritmus, amely a legnagyobb közös osztót keresi
    if(b == 0) {
        return a;
    } else {
        return lnko(b, a % b);
    }
}

int lkkt(int a, int b) { // ez egy algoritmus, amely kiszámítja az euklédiszi algoritmus segítségével a legkisebb közös többszöröst
    return (a * b) / lnko(a, b);
}

int main() {
    int a, b; // dekráljuk az a és b számokat
    cin >> a >> b; // beolvassuk az a és b számokat
    cout << lkkt(a, b) << endl; // itt fut le a legkisebb közös többszörös algoritmusa
    cout << lnko(a, b);
    
    return 0;
}
