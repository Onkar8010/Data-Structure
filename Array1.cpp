#include<iostream>
using namespace std;



int main() {
   int arr[5]={10,20,30,40,50};
   arr[0]=101;
   int size=5;
   // to print array element
  // cout<<arr[0]<<endl;
  // cout<<arr[1]<<endl;
  // cout<<arr[2]<<endl;
  // cout<<arr[3]<<endl;
  // cout<<arr[4]<<endl;

  // to calculate an array size

  // int sz = sizeof(arr);
 // cout<< sizeof(arr)/sizeof(int)<<endl;


 // print array element usinf for loop

    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
   return 0;
} 