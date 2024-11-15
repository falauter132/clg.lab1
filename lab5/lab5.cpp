#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, y;
    cin >> x;
    cin >> y;

    double result = (x * y) + ((x + y ^ 2 + 3) / (x ^ 2 + 5));

    cout << result;
}

///////////////////////////////////////////////////////////////////////

int main()
{
    int a;
    cin >> a;

    double y = cos(a) + cos(2 * a) + cos(6 * a) + cos(7 * a);
    double z = (4 * cos(a / 2)) * cos(5 / 2 * a) * cos(4 * a);

    cout << y, "\n", z;
}