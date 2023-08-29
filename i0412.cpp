#include <iostream>
using namespace std;

int solve(int n, int m) { 
    int excessCash = m - n, count = 0;
    int a[6] = {100, 50, 20, 10, 5, 2};
    if (excessCash >= 200) return 0;
    if (excessCash >= a[0]) excessCash -= a[0], count++;
    for (int i = 0; i < 5; ++i)
    {
        if (excessCash < a[i] && excessCash >= a[i + 1])
        {
            excessCash -= a[i + 1]; count++; 
            if (count > 2) return 0;
        }
    }
    return count == 2;
}

int main() {
    int n, m;
    do
    {
        cin >> n >> m;
        if (n && m) solve(n, m) ? cout << "possible" << endl : cout << "impossible" << endl;
    }
    while (n && m);

    return 0;
}
