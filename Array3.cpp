//find smallest and largest element of an array

#include<iostream>
#include<climits>
using namespace std;


int main(){
    int size=7;
      int nums[size];//={15,20,1,63,87,54,-45};
    

        cout<<size<<endl;
       for(int i=0;i<size;i++){
        cin>>nums[i];

       }


      int smallest = INT_MAX;

      for(int i=0; i < size; i++){
        if(nums[i] < smallest){
           smallest = nums[i];
        }
      }
      cout<<"smallest="<<smallest<<endl;

      return 0;

}