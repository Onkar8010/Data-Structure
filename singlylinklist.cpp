#include<iostream>
using namespace std;

class node{
    int data;
    node* next;

 public:

 void set_data(int d){
    data=d;
 }
 void set_next(node * x){
    next=x;
 }
  int  get_data(){
        return data;
    }

    node* get_next(){
        return next;

    }
};
class linklist{
    node* head;

    public:

    linklist()
    {
        head=NULL;
    }
 
    // 1)  insert node at start
    void insert_at_start(int a)
    {
        node* ptr = new node;
        ptr-> set_data(a);
        ptr-> set_next(head);
          head = ptr;

          cout<<"node is inserted  at start"<<endl;
    }

    // 2)  function of insert at end
   void insert_at_end(int a)
   {
        node* ptr= new node;
        ptr-> set_data(a);
        ptr-> set_next(NULL);

        if(head==NULL){
            head=ptr;
        }
        else{

            node* temp;
            temp=head;

            while(temp->get_next()!=NULL){
                temp=temp->get_next();
              
            }
           
            temp->set_next(ptr);
        }
   }
  // delete at start

  void delete_at_start(){
    if(head==NULL){
        cout<<"node not present"<<endl;
    }
    else{
        node* temp = head->get_next();
        delete(head);
        head=temp;
    }
  }

  void delete_at_end(){
    if(head==NULL){
        cout<<"no node present"<<endl;
    }
    else{
        node* temp=head;
        node* previous;
         
    }
  }

void display(){
    if(head== NULL)
    {
        cout<<"no node display"<<endl;
    }
    else{
        node* temp = head;
         while(temp !=NULL){
           cout<<temp->get_data()<<endl;
            temp = temp->get_next();
        }
    }
}

};
int main(){
    linklist obj;

    obj.insert_at_start(10);
    obj.insert_at_end(20);
    obj.insert_at_end(30);
    obj.insert_at_start(85);
    obj.insert_at_end(90);
    obj.delete_at_start();
    obj.display();
}