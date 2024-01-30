#include <iostream>
using namespace std;

int main () {
    

    int num = 13789;


int count =0;
    while(num > 0) {
        int lastNum = num % 10;
        count = count+1;
        cout << lastNum << " " ;
        num = num/10;
        cout << endl;
    }   
    cout << count << " Count" ;

}