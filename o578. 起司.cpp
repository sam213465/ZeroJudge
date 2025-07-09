#include <iostream>
using namespace std;

int main() {
    int L, W, H, K;
    cin >> L >> W >> H >> K;

    if (L % K != 0 || W % K != 0 || H % K != 0) {
        cout << 0 << endl;
    } else {
        int x = L / K;
        int y = W / K;
        int z = H / K;
        cout << x * y * z << endl;
    }

    return 0;
}

