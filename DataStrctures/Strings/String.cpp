#include <iostream>
#include <string.h>
using namespace std;

int getLength (char fullName[]) {
    int length = 0;
    int i = 0;
    while (fullName[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}   

void reverseString (char ash[100]) {
    int i = 0;
    int j = strlen(ash) -1;
    // while(i <= j) {
    //     swap(ash[i] , ash[j]);
    //     i++;
    //     j--;
    // }

// using for loop
    for(int i = 0 ; i <= j ; i++) {
        swap(ash[i] , ash[j]);
        j--;
    }


    // int n = getLength(ash);
    // cout << n << endl;
    cout << ash << endl;
}

void replaceString (char sentence[100]) {
    int n = strlen(sentence);
    for(int i =0 ; i< n ; i++) {
        if(sentence[i] == ' '){
            sentence[i] = '@';
        }
    }
    cout << sentence << endl;
}

int main () {
    // char name[5];
    // cout << "Enter your name !" << endl;
    // cin >> name;  // not taking full name

    // cout << "Your name is " << name << endl;
    // // ash[0] = 'a',
    // // ash[1] = 'b';

    // // cout <<ash[0] << " " << ash[1] << endl;

    // for(int i =0 ; i < 10 ;i++) {
    //     cout << "Index " << i << " value " << name[i] << " "  << endl;
    // }


    char fullName[100];
    cout << "Enter your full name ! " << endl;
    // cin >> fullName;
    // getline(cin , fullName);
    cin.getline(fullName , 100);
    cout << fullName << endl;


    // length of string
    
    cout  <<  "Length of Full Name is : " << getLength(fullName) << endl;
    cout << "Length (via stl) of Full Name is : " << strlen(fullName) << endl;

    char ash[100];
    cout << "Enter a string to reverse " << endl;
    cin >> ash;
    reverseString(ash);

    char sentence[100];
    // cout << "Write your sentence !" << endl;
    cin.getline(sentence , 100);
    // replaceString(sentence);
    cout << sentence << " sentence";   // working fine on replit
}