#include <iostream>
using namespace std;

int main () {

    // explaination in copy
    
    vector <int> arr {1,1,0,1,0,1,0,1,0,0,1,0};
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;
    
    while(i != end) {
        if(arr[i] == 0) {
            swap(arr[i] , arr[start]);
            start++;
            i++;
        } else if (arr[i] == 1) {
            swap(arr[i] , arr[end]);
            end--;
        }

    }
       // Printing the final array after union
       for (int i = 0; i < arr.size(); i++)
    {
       cout <<  arr[i] << " ";
    }

}