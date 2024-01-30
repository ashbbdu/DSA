#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Pair sum 2 , similarly of three pair sum
    vector<int> arr{10,20,30,40,50};

    for(int i =0 ; i < arr.size(); i++) {
        for(int j = i + 1 ; j < arr.size(); j++) {
            if(arr[i] + arr[j] == 70) {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }

}