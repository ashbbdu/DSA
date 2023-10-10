#include <iostream>

using namespace std ;

int main () {
    cout << "Inverted FullPyramid" << endl;
    int n;
    cout << "Enter a number !";
    cin >> n;
    for(int row = 0 ; row < n ; row = row +1 ){
        // gaps
        for(int col = 0 ; col < row ; col = col +1){
            cout << " ";
        } 
        for(int col = 0 ; col < n - row; col = col +1) {
            cout << "* ";
        }
        cout << endl;
    }
}