#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    cin >> word;

    // Check if the entire word is uppercase
    bool allUpper = true;
    for (char c : word)
    {
        if (!isupper(c))
        {
            allUpper = false;
            break;
        }
    }

    // Check if all characters except the first one are uppercase
    bool firstLowerRestUpper = islower(word[0]);
    for (size_t i = 1; i < word.size(); ++i)
    {
        if (!isupper(word[i]))
        {
            firstLowerRestUpper = false;
            break;
        }
    }

    // If either condition is met, toggle the case of all letters
    if (allUpper || firstLowerRestUpper)
    {
        for (char &c : word)
        {
            if (isupper(c))
            {
                c = tolower(c);
            }
            else
            {
                c = toupper(c);
            }
        }
    }

    // Output the processed word
    cout << word << std::endl;

    return 0;
}
