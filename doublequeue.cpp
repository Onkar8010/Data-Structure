#include<iostream>
using namespace std;

class queue{

    int arr[5];
    int front;
    int rear;

   public:
   
   queue()
   {
    front =0;
    rear=0;
   }

   void insertbyrear(int ele)
   {
    if(is_full())
    {
        cout<<"queue is full"<<endl;
    }
    else
    {
        if(rear==5)
        {
            cout<<"cant insert value from rear"<<endl;
        }
        else
        {
            arr[rear]=ele;
            rear ++;
        }
    }
   }


    void insertbyfront(int ele)
    {
        if(is_full())
        {
            cout<<"queue is full"<<endl;

        }
        else
        {
            if(front==0)
            {
                cout<<"cant insert value from front"<<endl;
            }
            else
            {
                front--;
                arr[front]=ele;
            }
        }
    }

   int is_full()
    {
        if(front==0 && rear==5)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }

    void deletebyfront(){
        if(is_empty())
        {
            cout<<"queue is empty"<<endl;
        }
        else
        {
              if(front==5)
                {
                   cout<<"cant delete value from front"<<endl;
                }
             else
             {
                 front ++;

             }

        }
    }

    void deletebyrear()
    {
        if(is_empty())
        {
            cout<<" queue is empty"<<endl;
        }
        else{
            if(rear==0)
            {
                cout<<"cant delete by rear"<<endl;
            }
            else
            {
                rear--;
            }
        }
    }

   int is_empty()
    {
        if(front==rear)
        {
            return 1;
        }
          else
          {
              return 0;
          }
    }

    void display(){
        if(is_empty())
        {
            cout<<"queue is empty"<<endl;

        }
        else{
            int i;
            for(i=front;i<rear;i++)
            {
                  cout<<arr[i]<<endl;
            }
        }
    }

};

int main(){
    queue obj;

    obj.insertbyrear(10);
    obj.insertbyrear(20);
    obj.insertbyrear(30);
    obj.insertbyrear(40);
    obj.insertbyrear(50);
    //obj.insertbyrear(60);   // queue is full
    cout<<"************************"<<endl;
     // delete bby front
     obj.deletebyfront();
     obj.deletebyfront();
     cout<<"*******************************"<<endl;
     // insert by front
     obj.insertbyfront(20);
     obj.insertbyfront(10);
      cout<<"***************************"<<endl;  
        // delete rear
      obj.deletebyrear();
    obj.display();
    return 0;
}