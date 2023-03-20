#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x, e;
    float q, w, a;
    cout << "Enter the number(x): ";
    cin >> x;
    e = x % 10;
    a = floor(x / 10);
    w = (int(a) % 10);
    q = floor(a / 10);
    cout << "Output numbers: " << (q) << (" ") << (w) << (" ") << (e) << endl;
    return 0;
}