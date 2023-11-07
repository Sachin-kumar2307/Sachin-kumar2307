*stack:stack is a datastructure.it is allow first in first out.
*use  implementation of stack->push(),pop(),isempty(),isfull(),top(),size()
*if top_index==-1,the we are either in underflow or no element are added yet.
array implementation of stack using time complexcity=>O(1)

1.array implementation of stack
//#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack 
{
     int capacity;//size
     int *arr;
     int top;
     public:


     Stack(int c)
     {
          this->capacity=c;
          arr=new int[c];
          this->top=-1;
     }
     //push value in the stack 
     void push(int data)
     {
          if(this->top==this->capacity-1)
          {
               cout<<"Overflow\n";//one data(element) will be insert
               return;
          }
          this->top++;
          this->arr[this->top]=data;
     }
     int pop()
     {
          if(this->top==-1)
          {
               cout<<"Underflow\n"
               return INT_MIN;
          }
          this->top--;//one data(element) will be deleted
     }
     int  gettop()
     {
          if(this->top==-1)
          {
               cout<<"Underflow\n";
               return INT_MIN;
          }
          return this->arr[this->top];
     }
     bool isEmpty()
     {
          return this->top==-1;
     }
     int size()
     {
          return this->top+1;
     }
     bool isFull()
     {
          return this->top==this->capacity-1;
     }
     
     
};

int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.gettop()<<"\n";
   st.push(4);
   st.push(5); 
   cout<<st.gettop()<<"\n";
   st.push(10);
   st.pop();
   st.pop();
   cout<<st.gettop()<<"\n";

    return 0;
}
2.linklist implementation of stack
#include<bits/stdc++.h>
using namespace std;
class Node 
{
     public:
     int data;
     Node* next;
     Node(int d)
     {
          this->data=d;
          this->next=NULL;
     }
};
class Stack 
{
     Node* head;
     int capacity;
     int currSize;
     public:
     Stack(int c)           //empty stack
     {
          this->capacity=c;
          this->currSize=0;
          head=NULL;
          
     }
     bool isempty()//cheack stack is empty
     {
          return this->head==NULL;
     }
     bool isFull()//cheack stack is empty
     {
          return this->currSize==this->capacity;
     }
     void push(int data)
     {
          if(this->currSize==this->capacity)
          {
               cout<<"Overflow\n";
               return;
          }
          Node* new_node=new Node(data);//make new node  then it is call constructue Node(d)
          new_node->next=head;
          head=new_node;
          currSize++;
     }
     int pop()
     {
          if(this->head==NULL)
          {
               cout<<"Underflow\n";
               return INT_MIN;
          }
          Node* new_head=this->head->next;
          this->head->next=NULL;
          Node* tobeRemoved=this->head;
          int result=tobeRemoved->data;
          delete  tobeRemoved;
          this->head=new_head;
          return result;
     }
     int gettop()
     {
           if(this->head==NULL)
          {
               cout<<"Underflow\n";
               return INT_MIN;
          }
          return this->head->data;
     }
     int size()
     {
          return this->currSize;
     }
};

int main()
{
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.top()<<"\n";
   st.push(4);
   st.push(5); 
   cout<<st.top()<<"\n";
   st.push(10);
   st.pop();
   st.pop();
   cout<<st.top()<<"\n";  
}
3.internal stack
// #include<iostream>
// #include<stack>//stack header file 
// using namespace std;
// int main()
// {
//      stack<int>st;//<> angular bracket
//      st.push(1);
//      st.push(2);
//      st.push(3);
//      cout<<st.top()<<"\n";
//      st.push(4);
//      st.push(5);
//      cout<<st.top()<<"\n";
//      st.pop();
//      st.pop();
//      cout<<st.top()<<"\n";
//      cout<<st.empty()<<"\n";//cheak it out stack is empty or not
// }

// 4.copy stack
// copy contents of one stack to another in same order 
#include<iostream>
#include<stack>
using namespace std;
stack<int>copyStack(stack<int>&input)
{
     stack<int>temp;
     while(!input.empty())
     {
          //do the process till time input stack does not become empty
          int curr=input.top();
          input.pop();
          temp.push(curr)
          
     }
      stack<int>result;
     while(!temp.empty())
     {
          int curr=temp.top();
          temp.pop();
          result.push(curr);

     }
     return result;
}
int main()
{
     stack<int>st;
     st.push(1);
     st.push(2);
     st.push(3);
     st.push(4);
     stak<int>res=copyStack(st);
     while(! res.empty())
     {
          int curr=res.top();
          res.pop();
          cout<<curr<<"\n";
     }
     return 0;
}

//1.copy contants of one stack to another in same
#include <iostream>
#include<stack>
using namespace std;
void function(stack<int>&st,stack<int>&res)
{
     if(st.empty())
     {
          return;
     }
     int curr=st.top();
     st.pop();
     function(st,res);
     res.push(curr);
     
}

int main()
{
   stack<int>st;
   st.push(1);
   st.push(2);
   st.push(3);
   st.push(4);
   st.pop();
   stack<int>res;
   function(st,res);// all element of  st stack stored in the res stack

   // result is print below 
   while(!res.empty())
   {
        int curr=res.top();
        res.pop();
        cout<<curr<<endl;
        
   }

    return 0;
}

//2.insert at bottom/any index(time complexcity and space complexcity=O(n)
#include <iostream>
#include<stack>
using namespace std;
void function(stack<int>&st,int x)// insert x bottom of stack
{
     if(st.empty())
     {
          st.push(x);
          return;
     }
     int curr=st.top();
     st.pop();
     function(st,x);
     st.push(curr);
}
int main()
{
     int x=100;
     stack<int>st;
     st.push(1);
     st.push(2);
     st.push(3);
     function(st,x);
     while(!st.empty())
     {
          int curr=st.top();
          st.pop();
          cout<<curr<<"\n";
     }
     return 0;
}
//3. insert at any index
#include <iostream>
#include<stack>
using namespace std;
void function(stack<int> &st,int x,int idx)
{
     stack<int>temp;
     int n=st.size();
     int count=0;
     while(count<n-idx)
     {
          count++;
          int curr=st.top();
          st.pop();
          temp.push(curr);
     }
     st.push(x);
     while(!temp.empty())
     {
          int curr=temp.top();
          temp.pop();
          st.push(curr);
     }
}
int main()
{
     //int x=100;
     stack<int>st;
     st.push(1);
     st.push(2);
     st.push(3);
    function(st,100,1);
     while(!st.empty())
     {
          int curr=st.top();
          st.pop();
          cout<<curr<<"\n";
     }
     return 0;
}


//4.delete  at element at bottom
#include <iostream>
#include<stack>
using namespace std;
void removeAtBottom(stack<int>&st)//iterative method
{
     stack<int>temp;
     int n=st.size();
     int count=0;
     while(st.size()!= 1)
     {
          
          int curr=st.top();
          st.pop();
          temp.push(curr);
     }
     st.pop();
     while(!temp.empty())
     {
          int curr=temp.top();
          temp.pop();
          st.push(curr);
     }
}
void function(stack<int> &st) //recursive method
{
     if(st.size()==1)
     {
          st.pop();
          return;
     }
     int curr=st.top();
     st.pop();
     function(st);
     st.push(curr);
}
int main()
{
     //int x=100;
     stack<int>st;
     st.push(1);
     st.push(2);
     st.push(3);
     st.push(4);
    // removeAtBottom(st);
     function(st);
     while(!st.empty())
     {
          int curr=st.top();
          st.pop();
          cout<<curr<<"\n";
     }
     return 0;
}

//4.reverse stack
#include <iostream>
#include<stack>
using namespace std;
void function(stack<int>&st,int x)// insert x bottom of stack
{
     if(st.empty())
     {
          st.push(x);
          return;
     }
     int curr=st.top();
     st.pop();
     function(st,x);
     st.push(curr);
}
void f(stack<int>&st)
{
     if(st.empty())
     {
          return;
     }
     int curr=st.top();
     st.pop();
     f(st);
     function(st,curr);
     
}

     
int main()
{
     //int x=100;
     stack<int>st;
     st.push(1);
     st.push(2);
     st.push(3);
     st.push(4);
    // removeAtBottom(st);
     f(st);
     while(!st.empty())
     {
          int curr=st.top();
          st.pop();
          cout<<curr<<"\n";
     }
     return 0;
}
//method second reverse stack
#include<iostream>
#include<stack>
using namespace std;
void reverse(stack<int>&st)
{
     stack<int>t1,t2;
     while(!st.empty())
     {
          int curr=st.top();
          st.pop();
          t1.push(curr);
     }
     while(!t1.empty())
     {
          int curr=t1.top();
          t1.pop();
          t2.push(curr);
     }
      while(!t2.empty())
     {
          int curr=t2.top();
          t2.pop();
          st.push(curr);
     }
}
int main()
{
     stack<int>st;
     st.push(10);
     st.push(20);
     st.push(30);
     st.push(40);
     reverse(st);
     while(!st.empty())
     {
          int curr=st.top();
          st.pop();
          cout<<curr<<" "<<endl;
          
     }
     
}


//5.parantesis is valid or not
#include <iostream>
#include<stack>
using namespace std;
bool isValid(string str)
{
     stack<char>st;
     for(int i=0;i<str.size();i++)
     {
          char ch=str[i];//current char
          if(ch=='(' or ch=='{' or ch=='[') //open bracket
          {
               st.push(ch);
          }
          else
          {
               //close bracket
               if(ch==')' and !st.empty() and st.top()=='(')
               {
                    st.pop();
               }
               else if(ch=='}' and !st.empty() and st.top()=='{')
               {
                    st.pop();
               }
               else  if(ch==']' and !st.empty() and st.top()=='[')
               {
                    st.pop();
               }
               else 
               {
                    return false;
               }
          }
     }
     return st.empty();
}

int main()
{
   string str="(())()";
   cout<<isValid(str)<<endl;
   

    return 0;
}

6.next greater elenment
#include <iostream>
#include<stack>
#include<vector>

using namespace std;

vector<int>nge(vector<int>&arr)
{
   int n=arr.size();
   vector<int>output(n,-1);
   stack<int>st;//index
   st.push(0);
   for(int i=1;i<n;i++)
   {
        while(!st.empty() and arr[i]>arr[st.top()])//gytene element nutralize hoge utene karege
        {
            output[st.top()]=arr[i];//answer aa gya hai
            st.pop();//thub hum pop kar sakte hai
        }
        st.push(i);
   }
   while(not st.empty())//while loop is not mandatory
   {
        output[st.top()]=-1;
        st.pop();
   }
   return output;
}
int main()
{
   int n;
   cin>>n;
   vector<int>v;
   while(n--)
   {
       int x;
       cin>>x;
       v.push_back(x);
   }
   vector<int>res=nge(v);
   for(int i=0;i<res.size();i++)
   {
        cout<<res[i]<<" ";
   }
   return 0;
    
    
}
//7.next smallest element
#include <iostream>
#include<stack>
#include<vector>

using namespace std;

vector<int>nge(vector<int>&arr)
{
   int n=arr.size();
   vector<int>output(n,-1);
   stack<int>st;//index
   st.push(0);
   for(int i=1;i<n;i++) 
   {
        while(!st.empty() and arr[i]<arr[st.top()])//gytene element nutralize hoge utene karege
        {
            output[st.top()]=arr[i];//answer aa gya hai
            st.pop();//thub hum pop kar sakte hai
        }
        st.push(i);
   }
   while(not st.empty())//while loop is not mandatory
   {
        output[st.top()]=-1;
        st.pop();
   }
   return output;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    while(n--)
    {
       int x;
       cin>>x;
       v.push_back(x);
    }
    vector<int>res=nge(v);
    for(int i=0;i<res.size();i++)
    {
         cout<<res[i]<<" ";
    }
    return 0;
    
    
}
//8.find out previous greatest element
1.check where is array 
2.i will do reverse of array 
3.we will find next greater element
4.we will reverse of next greatest element
ex:step1:4,6,3,,1,0,9,5,6,7
   step2:7,6,5,9,0,1,3,6,4
   step3:9,9,9,-1,1,3,6,-1,-1
   step4:-1,-1,6,3,1,-1,9,9,9
//9.find out previous smallest element
1.check where is array 
2.i will do reverse of array 
3.we will find next smallest element
4.we will reverse of  next smallest element


//10.envalute postfix expression(we will work left to right)
#include<iostream>
#include<math.h>
#include<stack>
using namespace std;
int calc(int v1,int v2,char op)
{
     if(op=='^')
     {
          return pow(v1,v2);
     }
     if(op=='*')
     {
          return  v1*v2;
     }
     if(op=='/')
     {
          return  v1/v2;
     }
     if(op=='+')
     {
          return  v1+v2;
     }
     
          return  v1-v2;
}
int evaluate(string &str)
{
     stack<int>st;
     for(int i=0;i<str.size();i++)
     {
          char ch=str[i];//current charactor
          if(isdigit(ch))//if incoming charactor digit hai
          {
               st.push(ch-'0');
          }
          else
          {
               int v1=st.top();
               st.pop();
               int v2=st.top();
               st.pop();
               st.push(calc(v1,v2,ch));//here ch is current operater
          }
     }
     return st.top();
     
}
int main()
{
     string str="231*+9-";
     cout<<evaluate(str);
}
//11.envalute prefix expression(we will work right to left (<-))
#include<iostream>
#include<math.h>
#include<stack>
using namespace std;
int calc(int v1,int v2,char op)
{
     if(op=='^')
     {
          return pow(v1,v2);
     }
     if(op=='*')
     {
          return  v1*v2;
     }
     if(op=='/')
     {
          return  v1/v2;
     }
     if(op=='+')
     {
          return  v1+v2;
     }
     
          return  v1-v2;
}
int evaluate(string &str)
{
     stack<int>st;
     for(int i=str.size()-1;i>=0;i--)
     {
          char ch=str[i];//current charactor
          if(isdigit(ch))//if incoming charactor digit hai
          {
               st.push(ch-'0');
          }
          else
          {
               int v1=st.top();
               st.pop();
               int v2=st.top();
               st.pop();
               st.push(calc(v1,v2,ch));//here ch is current operater
          }
     }
     return st.top();
     
}
int main()
{
     string str="-9+*132";
     cout<<evaluate(str);
}


//12.postfix and prefix both are inversily perposnal 

 // prefix expression is convert to postfix expression
//#include <iostream>
// #include<bits/stdc++.h>
// #include<stack>

// using namespace std;
// string eval(string &pre) //string return 
// {
//      stack<string>st;//string ka stack
//      reverse(pre.begin(), pre.end());
//      for(int i=0;i<pre.size();i++)
//      {
//           if(isdigit(pre[i]))//current character digit 
//           {
//                st.push(to_string(pre[i]-'0'));//then push(it is convert in  string)
               
//           }
//           else 
//           {




//                string v1=st.top();
//                st.pop();
//                string v2=st.top();
//                st.pop();
//                string newexp=v1+v2+pre[i];
//                st.push(newexp);
//           }
//      }
//      return st.top();
     
     
// }

// int main()
// {
//    string s="*+31-15";
//    cout<<eval(s);

//    return 0;
// }


//13.envalute infixfix expression(we will work left to right)
#include<iostream>
#include<math.h>
#include<stack>
using namespace std;
int calc(int v1,int v2,char op)
{
     if(op=='^')
     {
          return pow(v1,v2);
     }
     if(op=='*')
     {
          return  v1*v2;
     }
     if(op=='/')
     {
          return  v1/v2;
     }
     if(op=='+')
     {
          return  v1+v2;
     }
     
          return  v1-v2;
}
int precedance(char ch)
{
     if(ch=='^') return 3;
     else if(ch =='*' or ch=='/')return 2;
     else if(ch =='+' or ch=='-')return 1;
     else return -1;
}
int evaluate(string &str)
{
     stack<int>nums;
     stack<char>ops;
     for(int i=0;i<str.size();i++)
     {
          char ch=str[i];//current charactor
          if(isdigit(str[i]))//if incoming charactor digit hai
          {
               nums.push(str[i]-'0');
          }
          else if(str[i]=='(')
          {
               ops.push('(');
          }
          else if(str[i]==')')
          {
               while(!ops.empty() and ops.top()!='(')
               {
                    char op=ops.top();
                    ops.pop();
                    
          
                     int v2=nums.top();
                     nums.pop();
                     int v1=nums.top();
                     nums.pop();
                     nums.push(calc(v1,v2,op));//here ch is current operater
               }
               if(!ops.empty()) ops.pop();
               
          }
          else 
               {
                    while(! ops.empty() and precedance(ops.top())>=precedance(str[i]))
                    {
                       char op=ops.top();
                       ops.pop();
                    
          
                     int v2=nums.top();
                     nums.pop();
                     int v1=nums.top();
                     nums.pop();
                     nums.push(calc(v1,v2,op));//here 
                    }
                    ops.push(str[i]);
               }
        }
        while(!ops.empty())
        {
                     char op=ops.top();
                     ops.pop();
                    
          
                     int v2=nums.top();
                     nums.pop();
                     int v1=nums.top();
                     nums.pop();
                     nums.push(calc(v1,v2,op));//here 
          }
     
     
     return nums.top();
     
}
int main()
{
     string str="1+(2*(3-1))+2";
     cout<<evaluate(str);
}
output 7




























-













*/


