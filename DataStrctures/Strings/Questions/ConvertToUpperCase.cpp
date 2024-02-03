#include <iostream>
#include <string.h>
using namespace std;


void converToUpperCase (char str[100]) {
    int size = strlen(str);
    for(int i = 0 ; i < size ; i++) {
        // str[i] = str[i] - 32;
        if(str[i] >= 'a' && str[i] <= 'z') {
             str[i] = str[i] - 'a' + 'A';
        } else {
            str[i] = str[i];
        }
       
    }

    cout << str << " reversed string";
}

int main () {
    // char x = 97;
    // cout << x;
    char str[100];
    cout << "Enter a string !" << endl;
    cin >> str;
    // cin.getline(str , 100);
    // cout << strlen(str) << "length" << endl;
    converToUpperCase(str);
}