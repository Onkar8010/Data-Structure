//find smallest and largest element of an array

#include<iostream>
#include<climits>
using namespace std;


int main(){
    int size=7;
      int nums[]={15,20,1,63,87,54,-45};
    


      int smallest = INT_MAX;
      int largest = INT_MIN;

      for(int i=0; i < size; i++){
        if(nums[i] < smallest){
           smallest = nums[i];
        }

        if(nums[i] > largest){
            largest=nums[i];
        }
          


      }
      cout<<"smallest="<<smallest<<endl;
       cout<<"largest="<<largest<<endl;

      return 0;

}