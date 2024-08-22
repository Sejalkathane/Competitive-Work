#include <iostream>
using namespace std;

int game23(int n, int m)
{

    if (n == m)
    {
        return 0;
    }

    if (m % n != 0)
    {
        return -1;
    }

    int quotient = m / n;
    int count = 0;

    while (quotient % 2 == 0)
    {
        quotient /= 2;
        count++;
    }

    while (quotient % 3 == 0)
    {
        quotient /= 3;
        count++;
    }

    if (quotient != 1)
    {
        return -1;
    }

    return count;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int result = game23(n, m);
    cout << result << endl;

    return 0;
}
