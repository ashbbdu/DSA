#include <iostream>
using namespace std;

int main () {
    vector <vector <int>> arr;
    
    // New we have to create vector int which we will push into arr

    vector <int> a {1,2,3,1, 1,3};
    vector <int> b {4,1};
    vector <int> c {7,8,9,1};
    // vector <int> d {7,8,9,1};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    // arr.push_back(d);
    

    for(int i = 0 ; i < arr.size() ; i++) {
        for(int j = 0 ; j < arr[i].size() ; j++) {
            cout << arr[i][j] << " ";
        }   
        cout << endl;
    }

    cout << arr.size() << " size" << endl;



    // way 2

    vector <vector <int>> brr (5 , vector <int> (5 , -8));

     brr[1][2] = 20;
    cout << brr[1][2] << " value" << endl;
      for(int i = 0 ; i < brr.size() ; i++) {
        for(int j = 0 ; j < brr[i].size() ; j++) {
            cout << brr[i][j] << " ";
        }   
        cout << endl;
    }


}