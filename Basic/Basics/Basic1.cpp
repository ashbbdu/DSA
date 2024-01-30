
#include <iostream>

using namespace std;


void ashish (int arr[5]) {
    arr[0] = 5;
    arr[1] = 10;
    cout << "Inside Function" << endl;
    for(int i = 0 ; i < 5 ; i++) {
        cout << arr[i] << " " ;
    }
}

int main()
{
    int a = 23;
    cout << a << endl;

    // fload and double
    float x = 5.6;
    float y = 5;

    cout << x << " " << y << endl;

    // string and getline

    // string z;
    // cin >> z;
    // cout << z;

    // getline ash;

    // string str;
    // getline(cin , str);
    // cout <<  str;

    // cout << endl ;
    // string st = "ashish";
    // char ch = 'g';
    // cout << ch  << " " << st;

    // switch statements

    // int day;
    // cin >> day;

    // switch (day)
    // {
    // case 1:
    //     cout << "Monday";
    //     break;
    // case 2:
    //     cout << "Tuesday";
    //      break;
    // case 3:
    //     cout << "Wednesday";
    //      break;
    // case 4:
    //     cout << "Thursday";
    //      break;
    // case 5:
    //     cout << "Friday";
    //      break;
    // case 6:
    //     cout << "Saturday";
    //      break;
    // case 7:
    //     cout << "Sunday";
    //      break;

    //  default:
    //     cout << "Invalid Day";

    // } 

    // int arr[5];

    //  for(int i =0 ;  i< 5 ; i++) {
    //     cin >> arr[i] ;
    // }

    // cout << "Printing Arr" << endl;

    // arr[3] = arr[3] + 10;
    // for(int i =0 ;  i< 5 ; i++) {
    //     cout << arr[i] << " " ;
    // }

    // Strings

    // string ash = "ashish";
    // ash[ash.length() - 1] = 'z';
    // cout << ash << endl;


    // array

    int arr[8] = {1,2,3,4,5};
    cout << arr << endl;  // base address
    cout << &arr << endl; // base address
    
    cout << arr[0] << endl;

    cout << sizeof(arr) << endl;  //total number of bytes taken
    for(int i = 0; i< 8; i++) {
        cout << arr[i] << " ";
    }


    cout << endl ;

    char ch[4] = {'a' , 'b' , 'c' ,'d'};
     for(int i = 0; i< 4; i++) {
        cout << ch[i] << " ";
    }

//     int ash[10];
//     cout << "Enter the values" << endl ;

//     for (int i =0; i < 10; i++) {
//         cin >> ash[i];
//     }

// cout <<  "Printing alll the values of arrray";
//     for(int i = 0; i< 10; i++) {
//         cout << ash[i] * 2 << " ";
//     }


cout << "1 wala question" << endl;
    int ab[5] = {1,2,3,4,5};

    //  memset(ab, 1, sizeof(ab));   //not working 


    //   for(int i = 0; i< 10; i++) {
    //    ab[i] = 1;
    // }

     for(int i = 0; i< 5; i++) {
        cout << ab[i]  << " ";
    }


    //

    int ashi[5] = {1,2,3,4,5};

    ashish(ashi);

    cout << "Outside Function after function call" << endl;
    for(int i = 0 ; i < 5 ; i++) {
        cout << ashi[i] << " " ;
    }

    

}