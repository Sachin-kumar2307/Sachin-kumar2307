
/*1.insert element from frontant
//node implementation
#include <iostream>

using namespace std;
class Node
{
     public:
       int data;
       Node* next;
       //construter
       Node(int data)
       {
            this->data=data;
            this->next=next;
       }
       
};
//insert at node in linklist
void InsertAtHead(Node* &head,int d)//hear d is new data
{
     // &head->i can not want to make copy for changes so i want to change  original linklist
     //new node create
     Node* temp=new Node(d);
     temp->next=head;
     head=temp;
     
}
//print the linklist 
void print(Node* &head)
{
     Node* temp=head;
     while(temp!=NULL)
     { 
        cout<<temp->data<<endl;
        temp=temp->next;
     }
     cout<<endl;
}




int main()
{
     //create a new node
    Node* node1=new Node(10);// create  object Node then call constructor create new node
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    
     //head point to node1 
     Node* head=node1;
     print(head);
     InsertAtHead(head,12);
     print(head);
     InsertAtHead(head,15);
     print(head);
    return 0;
}  */

/*2.insert at end 
//node implementation
#include <iostream>

using namespace std;
class Node
{
     public:
       int data;
       Node* next;
       //construter
       Node(int data)
       {
            this->data=data;
            this->next=next;
       }
       
};
//insert at start/head at node in linklist
void InsertAtHead(Node* &head,int d)//hear d is new data
{
     // &head->i can not want to make copy for changes so i want to change  original linklist
     //new node create
     Node* temp=new Node(d);
     temp->next=head;
     head=temp;
     
}
//insert at end/tail node at end index 
void insertAtTail(Node* &tail,int d)
{
      Node* temp=new Node(d);
      tail->next=temp;
       //tail=tail->next;
     tail=temp;
     
}
//print the linklist 
void print(Node* &head)
{
     Node* temp=head;
     while(temp!=NULL)
     { 
        cout<<temp->data<<" ";
        temp=temp->next;
     }
     cout<<endl;
}




int main()
{
     //create a new node
    Node* node1=new Node(10);// create  object Node then call constructor create new node
//    cout<<node1->data<<endl;
//    cout<<node1->next<<endl;
    
     //head point to node1 
     Node* head=node1;
     Node*tail=node1;
     print(head);
     insertAtTail(tail,12);
     print(head);
     insertAtTail(tail,15);
     print(head);
     insertAtTail(tail,30);
     print(head);
    return 0;
} */

/* 3.insert at middle
//node implementation
#include <iostream>

using namespace std;
class Node
{
     public:
       int data;
       Node* next;
       //construter
       Node(int data)
       {
            this->data=data;
            this->next=next;
       }
       
};
//insert at start/head at node in linklist
void InsertAtHead(Node* &head,int d)//hear d is new data
{
     // &head->i can not want to make copy for changes so i want to change  original linklist
     //new node create
     Node* temp=new Node(d);
     temp->next=head;
     head=temp;
     
}

//insert at end/tail node at end index 
void insertAtTail(Node* &tail,int d)
{
      Node* temp=new Node(d);
      tail->next=temp;
       //tail=tail->next;
       tail=temp;
     
}

//insert node at middle 
void insertAtPosition(Node* &tail,Node* &head,int position,int d)
{
     //insert at start
     if(position ==1)//if insert at first position
     {
        InsertAtHead(head,d);
        return;
     }
     
     Node* temp=head;
     int count=1;
     while(count<position-1)
     {
          temp=temp->next;//node will be increase from head
          count++;
     }
     //insertion at last posion
     if(temp->next==NULL)
     {
          insertAtTail(tail,d);
          return ;
     }
     //create a node for d
     Node* nodeToinsert=new Node(d);
     nodeToinsert->next=temp->next;
     temp->next=nodeToinsert;
     
}
//print the linklist 
void print(Node* &head)
{
     Node* temp=head;
     while(temp!=NULL)
     { 
        cout<<temp->data<<" ";
        temp=temp->next;
     }
     cout<<endl;
}




int main()
{
     //create a new node
    Node* node1=new Node(10);// create  object Node then call constructor create new node
//    cout<<node1->data<<endl;
//    cout<<node1->next<<endl;
    
     //head point to node1 
     Node* head=node1;//starting me insert node
     Node*tail=node1;//end me insert node 
     print(head);
     insertAtTail(tail,12);
     print(head);
     insertAtTail(tail,15);
     print(head);
     insertAtTail(tail,30);
     print(head);
     insertAtPosition(tail,head,4,22);
     print(head);
     cout<<"head"<<head->data<<endl;
     cout<<"tail"<<tail->data<<endl;
     
    return 0;
}
*/

/*4. delete all position
//node implementation
#include <iostream>

using namespace std;
class Node
{
     public:
       int data;
       Node* next;
       //construter
       Node(int data)
       {
            this->data=data;
            this->next=next;
       }
       //destructor 
       ~Node()
       {
            int value=this->data;//current object ke 
            //memory free 
            if(this->next !=NULL)
            {
                 delete next;
                 this->next=NULL;
            }
            cout<<"memory is free for node with data"<<value<<endl;
       }
       
       
};
//insert at start/head at node in linklist
void InsertAtHead(Node* &head,int d)//hear d is new data
{
     // &head->i can not want to make copy for changes so i want to change  original linklist
     //new node create
     Node* temp=new Node(d);
     temp->next=head;
     head=temp;
     
}

//insert at end/tail node at end index 
void insertAtTail(Node* &tail,int d)
{
      Node* temp=new Node(d);
      tail->next=temp;
       //tail=tail->next;
       tail=temp;
     
}

//insert node at middle 
void insertAtPosition(Node* &tail,Node* &head,int position,int d)
{
     //insert at start
     if(position ==1)//if insert at first position
     {
        InsertAtHead(head,d);
        return;
     }
     
     Node* temp=head;
     int count=1;
     while(count<position-1)
     {
          temp=temp->next;//node will be increase from head
          count++;
     }
     //insertion at last posion
     if(temp->next==NULL)
     {
          insertAtTail(tail,d);
          return ;
     }
     //create a node for d
     Node* nodeToinsert=new Node(d);
     nodeToinsert->next=temp->next;
     temp->next=nodeToinsert;
     
}
//print the linklist 
void print(Node* &head)
{
     Node* temp=head;
     while(temp!=NULL)
     { 
        cout<<temp->data<<" ";
        temp=temp->next;
     }
     cout<<endl;
}
void deleteNode(int position, Node* &head)
{
     //deletting any middle node or last node
     if(position==1)
     { 
          Node* temp=head;
          head=head->next;
          //memory free start node
          temp->next=NULL;
          delete temp;
     }
     else 
     {
          //deleting any middle node or last node 
          Node* curr=head;
          Node* prev=NULL;
          int count=1;
          while(count<position)
          {
               prev=curr;
               curr=curr->next;
               count++;
               
          }
          prev->next=curr->next;
          curr->next=NULL;
          delete curr;
     }
     
     
     
     
}




int main()
{
     //create a new node
    Node* node1=new Node(10);// create  object Node then call constructor create new node
//    cout<<node1->data<<endl;
//    cout<<node1->next<<endl;
     
     //head point to node1 
     Node* head=node1;//starting me insert ke le
     Node*tail=node1;
     print(head);
     insertAtTail(tail,12);
     print(head);
     insertAtTail(tail,15);
     print(head);
     insertAtTail(tail,30);
     print(head);
     insertAtPosition(tail,head,4,22);
     print(head);
     cout<<"head"<<head->data<<endl;
     cout<<"tail"<<tail->data<<endl;
     deleteNode(4,head);
     print(head);
     
    return 0;
}
*/

/*2.double linklist
#include <iostream>

using namespace std;
class Node 
{
     public:
       int data;
       Node* prev;//node star type  ka  pointer banaliya  jiska name  prev
       Node* next;
       //constructor
       Node(int d)//i take value of integer type in constructor
       {
            this->data=d;
            this->prev=NULL;//staring me 
            this->next=NULL;
       }
       ~Node()
       {
            int val=this->data;
            if(next!=NULL)
            {
                 delete next;
                 next=NULL;
            }
            cout<<"memory free for node with data"<<val<<endl;
       }
};
//travesing a link list
void print(Node* head)//node star head pass kar diya
{
     Node* temp=head;//node star temp head ke equal hai
     while(temp!=NULL)
     {
          cout<<temp->data;//temp ke data print karate jao
          temp=temp->next;//temp ko age badhatejo
          
     }
     cout<<endl;
     
}
//givens length of link llist
int getLength(Node* head)//this function give length
{
     int length=0;
     Node* temp=head;//node star temp head ke equal hai
     while(temp!=NULL)
     {
         length++;
         temp=temp->next;//temp ko age badhatejo
          
     }
     return length;
     cout<<endl;
     
}
//insert at head 
// void insertAtHead(Node* &head,int d)
// {
//   Node* temp=new Node(d);
//   temp->next=head;
//   head->prev=temp;
//   head=temp;
// }
//insert at head 
void insertAtHead(Node* &head,int d)
{
     if(head==NULL)
     {
          Node* temp=new Node(d); 
          head=temp;
          
     }
     else
      
      {
       Node* temp=new Node(d);
       temp->next=head;
       head->prev=temp;
       head=temp;
      }
}


// //insert at tail 
// void insertAtTail(Node* &tail,int d)
// {
//      Node* temp=new  Node(d);
//      tail->next=temp;
//      temp->prev=tail;
//      tail=temp;
// }

//insert at tail 
void insertAtTail(Node* &tail,int d)
{
     if(tail==NULL)
     {
         Node* temp=new  Node(d);
         tail=temp;
     }
     else
     {
     Node* temp=new  Node(d);
     tail->next=temp;
     temp->prev=tail;
     tail=temp;
     }
}


//insert at any postion in double linklist 
void insertAtPosition(Node* &tail,Node* &head,int postion,int d)
{
   // insert at start
   if(postion==1)
   {
        insertAtHead(head,d);
        return;
   }
   Node* temp=head;
   int count=1;
   while(count<postion-1)
   {
        temp=temp->next;//temp ko aage badhate jao
        count++;
   }
   //insert at last postion
   if(temp->next==NULL)
   {
        insertAtTail(tail,d);
        return;
   }
   //create a node for d  
   Node* nodeToInsert=new Node(d);
   nodeToInsert->next=temp->next;
   temp->next->prev=nodeToInsert;
   temp->next=nodeToInsert;
   nodeToInsert->prev=temp;
   
   
}
void deleteNode(int position, Node* &head)
{
     //deletting any middle node or last node
     if(position==1)
     { 
          Node* temp=head;
          temp->next->prev=NULL;
          head=temp->next;
          temp->next=NULL;
          delete temp;
     }
     else 
     {
          //deleting any middle node or last node 
          Node* curr=head;
          Node* prev=NULL;
          int count=1;
          while(count<position)
          {
               prev=curr;
               curr=curr->next;
               count++;
               
          }
          curr->prev=NULL;
          prev->next=curr->next;
          curr->next=NULL;
          delete curr;
     }
     
     
     
     
}


int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;//tail stating me point kar raha hai node1 ko
//    Node* head=NULL;
//    Node*tail=NULL;
//    print(head);
    cout<<getLength(head)<<endl;
    insertAtHead(head,12);
    print(head);
    insertAtHead(head,13);
    print(head);
    insertAtTail(tail,15);
     print(head);
     insertAtPosition(tail,head,1,16);
     print(head);
      insertAtPosition(tail,head,2,16);
     print(head);
     insertAtHead(head,18);
     print(head);
     insertAtTail(tail,100);
     print(head);
     deleteNode(2,head);
     print(head);
} */

------------------------------------------------------------------------------interview  question-----------------------------
1.what is linklist?what is the purpuse of linklist:
->linklist is linear data structure.and it is collection of node.each node contain data and addresh of nextnode.
first node of linklist is head of linklist.and last node is null;
perpose: it is used to insert node and delete node and not effect of memory alllocation.node can be allocate and delocate dynamically.

2.linked list is mostly used when we want to manupulate the data stored in the list
=>link list is a dynamic datastructure.we can add or remove or change the data at run time.Arrays and Arraylist are good for storing and accessing data.
3.explain the types of linklist
i>.singly linklist 
->it is most comman type of link list.it is set of node and each node contain data and pointer of next node.and singly linklist traversel in only one direction.
ii>.doublelinklist:it is set of node and each node contain data,pointer of the previous node and pointerof the next node.and it is travels in both direction also we can say binary.
iii>circularlinklist->it is set of node and each node contain data and pointer of next node and last node is connect to head node.
4.what are the application of linklist?
->i>it is used to build other data structure such as stack and queue
ii>for navigation in an application.ex:photo gallry application,music alplication by doublelinklist(binary)
iii>file allocation operating system
5.what is advantage and disadvntage of link list
=>1.advantage:
   i>linklist is a dynamic data structure
   ii>insertion and delection in the linked list is easy to implement.
iii>memory is not weste.
iv>reverse traversal is  possible in the doubly link list.


disadvantage:
i>linklist list consumes more memory as compaire to arrays
ii>reverse traversal is not possible in the singly link list.

5.what is the diffrence between array and linklist
array:1>size is fixed 2>memory is allocated at compile time 3>array is use less memory compair to run time 4>array are stored contiguously in memoy
linklist->1>size is  notfixed 2>memory is allocated at run time 3>it is use more memory compair to run time 4>it are not stored contiguously in memoy.

6.why is Doubly linked list preferred to singly linked list
=> in the doubly linked list,we can travese in both direction
ex:forword and backward.
reversing a doubly linklist  is easier as compared to linklist

//cheak link list is palindrom or not
process:1.find middile of linklist
         2.reverse back half of list
         3.comprision of first half and back half list

