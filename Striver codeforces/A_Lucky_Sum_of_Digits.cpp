#include <iostream>
#include <string>

using namespace std;

string findMinLuckyNumber(int n)
{
    for (int count_7 = n / 7; count_7 >= 0; --count_7)
    {

        int remaining_sum = n - (count_7 * 7);

        if (remaining_sum % 4 == 0)
        {
            int count_4 = remaining_sum / 4;
            return string(count_4, '4') + string(count_7, '7');
        }
    }
    return "-1";
}

int main()
{
    int n;
    cin >> n;

    string result = findMinLuckyNumber(n);
    cout << result << endl;

    return 0;
}
