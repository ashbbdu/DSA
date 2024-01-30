#include <iostream>

using namespace std;


void printRowSum (int arr[][3] , int row, int col) {
    
    for (int i = 0; i < row; i++)

    {
        int sum = 0;
        // cout << sum << " initial value of sum";
        for (int j = 0; j < col; j++)
        {
          sum = sum + arr[i][j];
        }
        cout << sum << " ";
    }
}

void printColSum (int arr[][3] , int row , int col) {
        for (int i = 0; i < row; i++)

    {
        int sum = 0;
        // cout << sum << " initial value of sum";
        for (int j = 0; j < col; j++)
        {
          sum = sum + arr[j][i];
        }
        cout << sum << " " ;
    }    
}

int main()
{
    // 2D array

    int arr[3][3];
    int brr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << brr[i][j] << " " ;
        }
        cout << endl;
    }

    // Taking input

    //     for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> arr[i][j];
    //     }

    // }
    // cout << endl;
    // cout << "Printing the array" << endl;
    //  cout << endl;

    //    for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << " " ;
    //     }
    //     cout << endl;
    // }


// In the above code we have printed the array row wise

// Printing array column wise
cout << "Printing array column wise" << endl;
     cout << endl;

       for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << brr[j][i] << " " ;
        }
        cout << endl;
    }

    int row = 3;
    int col =3;

    printRowSum(brr , row , col);
    cout << endl;
    cout << "Printing colum wise sum" << endl;
    printColSum(brr , row , col);


}