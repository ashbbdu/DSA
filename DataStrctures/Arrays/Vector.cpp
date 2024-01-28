#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr{10, 20, 30};
    cout << arr.size() << " " << arr.capacity() ;

    cout << endl;
    vector <int> brr;
    cout << brr.size() << " " << brr.capacity() << " is Empty " << brr.empty() ; // compilter dependent stuff


    cout << endl;
    vector <int> crr (10);
     cout << crr.size() << " " << crr.capacity() << " is Empty " << crr.empty()  ;

    //    or
    // vector<int> brr(10, 1);
    // arr.push_back(40);
    // arr.push_back(50);
    // arr.pop_back();
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // cout << endl;

    // for (int i = 0; i < brr.size(); i++)
    // {
    //     cout << brr[i] << " ";
    // }

    return 0;
}