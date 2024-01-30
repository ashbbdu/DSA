#include <iostream>
#include <vector>
using namespace std;

int main()
// Union means concatination
{
    vector<int> arr1 {1, 2, 3};
    vector<int> arr2 {4, 5, 6};
    vector<int> finalArr;

    for (int i = 0; i < arr1.size(); i++)
    {
        finalArr.push_back(arr1[i]);
    }
    for (int j = 0; j < arr2.size(); j++)
    {
        finalArr.push_back(arr2[j]);
    }

    // Printing the final array after union
       for (int i = 0; i < finalArr.size(); i++)
    {
       cout <<  finalArr[i] << " ";
    }
}