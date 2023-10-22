// Vector is a array which is dynamic 
// Vector is a dynamic array
// vector <int> arr{10,20,30};
// it will double itself if it is full


#include <iostream>
using namespace std;

int findUnique (vector <int> arr) {
    int ans = 0;
    for(int i = 0; i < arr.size() ; i = i+1){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main () {
    // vector <int> arr{1,2,3};

    // // arr.push_back(1);
    // for(int i = 0 ; i < arr.size() ; i = i +1){
    //     cout << arr[i] << endl;
    // }


    // int n;
    // cout << "Enter the size of array" <<  endl;
    // cin >> n;

    // vector <int> arr(n);
    // cout << "Enter elements of the array <<" << endl;

    // for(int i = 0; i < arr.size() ; i++) {
    //     cin >> arr[i];
    // }

    //  for(int i = 0; i < arr.size() ; i++) {
    //   cout <<  arr[i] << " ";
    // }

    // int getUnique = findUnique(arr);
    // cout << "The unique element is " << getUnique << endl; 


    // union of two arrays

    // vector <int> a{1,2,4};
    // vector <int> b{5,6};
    // vector <int> c;

    // for(int i = 0 ; i < a.size() ; i++){
    //     c.push_back(a[i]);
    // }

    //   for(int i = 0 ; i < a.size() ; i++){
    //     c.push_back(b[i]);
    // }

    //  for(int i = 0 ; i < c.size() ; i++){
    //    cout << c[i] << " ";
    // }



    // Interserction of  two arrays

    // vector <int> arr{1,2,3,4,5,6};
    // vector <int> brr{4,5,6};

    // vector <int> crr ;

    // for(int i = 0 ; i < arr.size() ; i= i+1) {
    //     for(int j = 0 ; i < brr.size() ; j= j+1) {
    //        if(arr[i] == brr[j]) {
    //         // cout << arr[i] << " ";
    //         crr.push_back(arr[i]);
    //        } 
    //     }
    // }


    //  for(int j = 0 ; j < crr.size() ; j= j+1) {
         
    //         cout << crr[j] << " ";
    //  }

        int a[] = {1,2,3};
    int sizea = 3;
    int b[] = {4,5};
    int sizeb = 2;
    vector <int> c;
    for(int i = 0 ; i < sizea ; i++){
        c.push_back(a[i]);
    }
      for(int i = 0 ; i < sizeb ; i++){
        c.push_back(b[i]);
    }
      for(int i = 0 ; i < c.size() ; i++){
       cout << c[i] << " ";
    }
}