#include <iostream>
using namespace std;

bool checkPaindrome(char str[100])
{
    int n = strlen(str);
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

int main()
{
    char str[100];
    cin >> str;
    bool check = checkPaindrome(str);
    if(check) {
        cout << str << " is a palindrom";
    } else {
        cout << str << " is not a palindrom";
    }
}