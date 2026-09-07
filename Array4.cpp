// find small and larg element in array with create a array class and some function

#include<iostream>
#include<climits>
using namespace std;

class Array{
   
    public:
      int num[7]={15,25,32,65,-85,4,5};
      int size=7;
       int smallest;
       int largest;

 void findSmallestAndLargest(){

      smallest =INT_MAX;
     largest =INT_MIN;

      int i;
     for(i=0;i<size;i++){
        if(num[i] < smallest){
            smallest =num[i];
        }
         
        if(num[i] > largest){
            largest = num[i];
        }

     }

 }

 void display(){
    cout<<"smallest="<<smallest<<endl;
    cout<<"largest="<<largest<<endl;
 }
  
};

int main(){
    Array obj;
    obj.findSmallestAndLargest();
    obj.display();
    return 0;
}