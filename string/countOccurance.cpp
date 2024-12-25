#include <iostream>
using namespace std;

int countOccurrences(const string &s, char ch)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ch)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    cout << "Enter The String: ";
    string s;
    cin >> s;
    cout << "Enter The Character: ";
    char ch;
    cin >> ch;

    int count = countOccurrences(s, ch);
    cout << "The character '" << ch << "' occurred " << count << " times" << endl;

    return 0;
}