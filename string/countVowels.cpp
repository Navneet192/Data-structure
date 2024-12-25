#include <iostream>
using namespace std;
int main()
{
    cout << "Enter The String : ";
    string s;
    cin >> s;
    int vowels = 0, consonents = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            vowels++;
        }
        else
        {
            consonents++;
        }
    }
    cout << "vowels = " << vowels << " , " << "consonants = " << consonents << endl;
}