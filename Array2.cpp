// taking input of user and print array


#include<iostream>
using namespace std;

int main(){
   int size=5;
   int marks[size];
   // take input
   int i;
   for(i=0;i<size;i++){
    cin>>marks[i];

   }
   //print output
    for(i=0;i<size;i++){
        cout<<marks[i]<<endl;
    }
   return 0;
}