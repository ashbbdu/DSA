    #include <iostream>
    #include <vector>
    using namespace std;

    int main()
    {
        // Intersection means common elements from two elements

        // vector <int> arr1{1, 2, 3, 4, 5, 6};
        // vector <int> arr2{1, 4, 5 ,6};
        // TC 2
        vector <int> arr1 {1,2,3,3,4,6,8};
        vector <int> arr2 {3,3,4,10};
        vector <int> finalArr;
        for (int i = 0; i < arr1.size(); i++)
        {
            for (int j = 0; j < arr2.size(); j++)
            {
                if (arr1[i] == arr2[j])
                {
                    // arr1[i] = -1;
                    // finalArr.push_back(arr2[j]);

                    // or
                    arr2[j] = -1;
                    finalArr.push_back(arr1[i]);
                }
            }
        }

        // Printing final array
        for (int i = 0; i < finalArr.size(); i++)
        {
            cout << finalArr[i] << " ";
        }


    }