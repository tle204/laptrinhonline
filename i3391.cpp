#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int A, B;

    while (cin >> A >> B) {
        int max_card = max(A, B);
        cout << max_card << endl;
    }

    return 0;
}
