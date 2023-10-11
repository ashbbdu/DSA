#include <iostream>

using namespace std;

string printFullName(string f , string s){
    return f + " " + s ;
}

int addition(int a , int b) {
    return a + b;
}

int checkPrime (int n) {
    if(n % 1 == 0 && n % n == 0 ){
        return true;
    }
    else {
        return false;
    }
}

string reverse(string name , int size) {
    string rev = "";
    for(int i = 0 ; i < size ; i = i+1){
        rev = name[i] + rev;
    }
    return rev;
}

int calculateArea(double pi , int radius) {
    return pi * (radius * radius);
}

int main () {

// Area of a circle

   double pi = 2 * acos(0.0);
    int radius = 10;

    int area = calculateArea(pi , radius);



    string fname = "Ashish";
    string lname = "Srivastava";



    int a = 10;
    int b = 20;

    int total = addition(a , b);
    cout << total << endl;

    int n;
    cout << "Enter a number !" << endl;
    cin >> n;
    int num =  checkPrime(n);
    cout << num << " dfafPrime" << endl;

    if(num == 1) {
        cout << "Its a prime number" << endl;
    } 
    else {
        cout << "Its not a prime number" << endl;
    }
    

  string ans = printFullName(fname , lname);
  cout << ans << endl;

//   Reverse a string

string name ;
cout << "Enter a string" << endl;
cin >> name;
int size = name.size();
string reversedStr = reverse(name , size);
cout << reversedStr << endl;



}

