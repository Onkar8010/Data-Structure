#include<iostream>
using namespace std;

class stack{
      int arr[5];
      int top;

 public :
     
 stack(){
     top=0;
 }


  void push( int ele)
   { 
    if(is_full())
    {
        cout<<"stack is full"<<endl;

    }
    else
    {
      arr[top]=ele;
      top++;

    }

   }

  int is_full()
   {
     if(top==5)
     {
         return 1;
     }
     else
     {
        return 0;
     }
   }

   void pop()
   {
    if(is_empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        top--;
    }

   }

   is_empty()
   {
    if(top==0)
    {
       return 1;
    }
     else
     {
        return 0;
     }

   }


   int pk(){
        if(is_empty())
        {
             cout<<"stack is empty"<<endl;
             return -123;
        }

        else
        {
            return arr[top-1];
        }
     }
    

    void display()
    {
        

        if (is_empty())
        {
             cout<<"stack is empty";

        }
        else
        {
            int i;
            for(i=top-1;i>=0;i--)
            {
               cout<<arr[i]<<endl;
            }
        }
    }
    


};
int main(){
  stack obj;
   
  obj.push(10);
  obj.push(20);
  obj.push(30);
  obj.push(40);
  //obj.pop();
 int i= obj.pk();
 cout<<i<<endl;
 
  obj.display();
  

 
  
}