//linear queue
#include<iostream>
using namespace std;

class queue{
     int arr[5];
     int rear;
     int front;

     public:

     queue(){
          front=0;
          rear=0;

     }

     void insert(int ele){
        if (is_full()){
            cout<<"queue is full"<<endl;

        }
        else{
            arr[rear]=ele;
            rear++;
        }



     }
     int is_full(){
         if(rear==5){
            return 1;
         }
         else{
            return 0;
         }
     }
     void dele(){
        if(is_empty()){
            cout<<"queue is empty"<<endl;

        }
        else{
              front++;
        }
     }
     int is_empty(){
        if(rear==front){
            return 1;
        }
        else{
            return 0;
        }
     }
       void display(){
        if(is_empty()){
            cout<<"queue is empty"<<endl;
        }
        else{
               int i;
               for(i=front;i<rear;i++){
                cout<<arr[i]<<endl;
               }


        }
       }


};
int main(){
    queue obj;
    obj.insert(10);
    obj.insert(20);
    obj.insert(30);
    obj.insert(40);
    obj.insert(50);
    obj.dele();
    obj.display();

}
