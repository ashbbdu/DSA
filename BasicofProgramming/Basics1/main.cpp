#include <iostream>
using namespace std;
int main()
{
    // int arr[4] = {1, 2, 3, 4};
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // for (int row = 0; row < 4; row = row + 1)
    // {
    //     for (int col = 0; col < 5; col = col + 1)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // string ash = "Ashish";
    // cout <<ash << endl << '\n';
    // int a;
    // cout << "Enter a number ? " << endl;
    // cin >> a;
    // cout << "Value of a is : " <<  a << endl ;

    bool flag = true; // will give 1 for true and 0 for false
    cout << flag << endl;

    float f = 1.2;
    cout << f << endl;

    int a = 5;
    cout << sizeof(a) << endl;

    char ash = 98;
    cout << ash << endl;

    int age;
    cout << "Enter your age !" << endl;
    cin >> age;

    if (age >= 18)
    {
        cout << "Eligible to vote" << endl;
    }
    else
    {
        cout << "Not elible to vote" << endl;
    }

    cout << endl;

    // Hollow rectangle

    for (int row = 0; row < 3; row = row + 1)
    {
        if (row == 0 || row == 2)
        {
            for (int col = 0; col < 3; col = col + 1)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*";
            for (int i = 0; i < 3; i = i + 1)
            {
                cout << " ";
            }
            cout << "*";
        }
            cout << endl;
    }




    // Hollow triangle with dyanmic values
    int nR;
    int nC;
    cout << "Enter the number of rows !" << endl ;
    cout << "Enter the number of cols !" << endl ;
    cin >> nR;
    cin >> nC;

    for(int row = 0 ; row < nR ; row = row + 1){
        if(row == 0 || row == nR - 1){
            for(int col = 0 ; col < nC ; col = col + 1){
                cout << "*";
            }
        }
        else {
            cout << "*";
             for(int i = 0 ; i < nC -2 ; i = i + 1){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
        
    }
    // Test commit
}