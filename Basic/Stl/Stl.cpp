#include <iostream>
#include <list>
using namespace std;

int main () {
    cout << "Hello" << endl;

//   Pair
    
   pair<int ,int> p = {1,3};
   cout << p.first << " First " << p.second << " Second"  << endl;
    
   pair <int, pair <int , int>> a = {1 , {1,3}};
   cout << a.first << endl << a.second.first << endl << a.second.second << endl;

// Vector


vector <int> arr (5 , 100);

cout << *arr.begin() << " begin" << endl;
cout << *arr.end() << " end" << endl;


    arr.push_back(5);

for(int i =0 ;  i < arr.size() ; i++) {
    cout << arr[i] << endl;
}


// List

list <int> li;
li.push_back(4);
li.push_front(1);



}