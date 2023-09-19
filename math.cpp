/*1.add two number
#include <iostream>

using namespace std;

int main()
{
     int a,b,c;
     cin>>a>>b;
     c=a+b;
     cout<<c;
   
}
2.//cheak a number is odd or even
#include <iostream>

using namespace std;

int main()
{
     int n;
     cin>>n;
     if(n%2==0)
     {
          cout<<"this is even number"<<endl;
     }
     else 
     {
          cout<<"this is odd number"<<endl;
     }
   
}
3.//calulating the switch case 
#include <iostream>

using namespace std;

int main()
{
     char op;
     float num1,num2;
     cout<<"enter the operater"<<endl;
     cin>>op;
     cout<<"enter the two number"<<endl;
     cin>>num1>>num2;
     switch(op)
     {
          case '+':cout<<num1+num2;
                break;
          case '-':cout<<num1-num2;
                break;
          case '*':cout<<num1*num2;
                break;
          case '/':cout<<num1/num2;
                break;
          
          default:cout<<"wrong perater enter by you";
                break;

                
     }
   
}
4.//calculate sum of digit
#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int sum=0;
   while(n>0)
   {
        int lastdigit=n%10;
        sum=sum+lastdigit;
        n=n/10;
   }
   cout<<"sum of digit:"<<sum<<endl;
                
}

5.//print first natural number:
#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
        cout<<"print first natural number:"<<i<<endl;
   }
}

//6.cheack the number is perfect or not
//6=1+2+3 (here each  positive number is diviser )
//28=1+2+4+7+14
#include <iostream>

using namespace std;

int main()
{
   int n,i=1,sum=0;
   cout<<"enter the number:";
   cin>>n;
   
   while(i<n)
   {
       if(n%i==0)
       {
            sum=sum+i;
            
       }
       i++;
   }
   if(sum==n)
   {
        cout<<i<<"is perfect number";
   }
   else
   {
        cout<<i<<"is not  perfet number";
   }
   return 0;
                
}
7.//calculate area of circle
#include <iostream>

using namespace std;

int main()
{
   float a, r;
   cout<<"enter the radius"<<endl;
   cin>>r;
   a=3.14*r*r;
   cout<<"area of circle"<<a;
   
                
}

8.//calculate area of square
#include <iostream>

using namespace std;

int main()
{
   float a,s;
   cout<<"enter the side"<<endl;
   cin>>s;;
   a=s*s;
   cout<<"area of squre:"<<a;
   
                
}
//9.calculate area of rectangle
#include <iostream>

using namespace std;

int main()
{
   float a,l,b;
   cout<<"enter the length:"<<endl;
   cin>>l;
    cout<<"enter the breath:"<<endl;
   cin>>b;
   a=l*b;
   cout<<"area of rectangle:"<<a;
   
                
}
//10.calculate area of triangle
#include <iostream>

using namespace std;

int main()
{
   float a,l,h;
   cout<<"enter the length:"<<endl;
   cin>>l;
    cout<<"enter the heigth:"<<endl;
   cin>>h;
   a=0.5*l*h;
   cout<<"area of triangle:"<<a;
   
                
}
//11.cheak it out this is leap year or not
#include <iostream>

using namespace std;

int main()
{
   int year;
   cin>>year;
   if(year%4==0)
   {
        cout<<"this is leap year"<<endl;
   }
   else
   {
        cout<<"this is not leap year"<<endl;
   }
   
   
                
}
//12.swapping the two number
#include <iostream>

using namespace std;

int main()
{
    int a,b,temp;
    cout<<"enter the a value:"<<endl;
    cin>>a;
    cout<<"enter the b value:"<<endl;
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swaping:"<<endl;
    cout<<"the value of a:"<<a<<endl;
    cout<<"the value of b:"<<b<<endl;
    
}
-----------------------------------------------------------------------------

1. #include<iostream>
using namespace std;
int main()
{
    int a=10;
    int*p=&a;
    cout<<"the addresh of a:"<<&a<<endl;
    cout<<"the addresh of a:"<<p<<endl;
    cout<<"the value of  pointer p:"<<*p<<endl;
    return 0;
    

}




2.count the  number of digit 
#include<iostream>
using namespace std;
int count(int n)
{
     int count=0;
     while(n>0)
     {
          int lastdigit=n%10;
          count=count+1;
          n=n/10;
     }
     return count;
}
int main()
{
     int n;
     cin>>n;
     cout<<count(n);
}


// 2.reverse number
#include<iostream>
using namespace std;
int revnum(int n)
{
     int revnum=0;
     while(n>0)
     {
          int lastdigit=n%10;
          revnum=revnum*10+lastdigit;
          n=n/10;
     }
     return revnum;
     
}
int main()
{
     int n;
     cin>>n;
     
     cout<<revnum(n);
}


4.cheak it out palindrom
#include<iostream>
using namespace std;
bool palindrom(int n)
{
     int revnum=0;
     int dublicate=n;
     while(n>0)
     {
        int lastdigit=n%10;
        revnum=revnum*10+lastdigit;
        n=n/10;
        
     }
     if(revnum==dublicate)
     {
          cout<<"this is palindrom";
     }
     else
     {
          cout<<"this is not palindrom";
     }
     return palindrom;
}
int main()
{
     int n;
     cin>>n;
     // int revnum=0;
     // int dublicate=n;
     // while(n>0)
     // {
     //    int lastdigit=n%10;
     //    revnum=revnum*10+lastdigit;
     //    n=n/10;
        
     // }
     // if(revnum==dublicate)
     // {
     //      cout<<"this is palindrom";
     // }
     // else
     // {
     //      cout<<"this is not palindrom";
     // }
     cout<<palindrom(n);
} 

5.armstrong number
ex:371=3que+7que+1que=371 =>it is true
ex:35=3que+5que!=35=>it is false

#include<iostream>
using namespace std;
bool armstrong(int n)
{
     int sum=0;
     int dublicate=n;
     while(n>0)
     {
          int lastdigit=n%10;
          sum=sum+(lastdigit*lastdigit*lastdigit);
          n=n/10;
         
     }
     if(sum==dublicate)
     {
          cout<<"this is armstrong number";
     }
     else 
     {
          cout<<"this is not armstrong number";
     }
     return armstrong;
}
int main()
{
     int n;
     cin>>n;
     // int sum=0;
     // int dublicate=n;
     // while(n>0)
     // {
     //      int lastdigit=n%10;
     //      sum=sum+(lastdigit*lastdigit*lastdigit);
     //      n=n/10;
         
     // }
     // if(sum==dublicate)
     // {
     //      cout<<"this is armstrong number";
     // }
     // else 
     // {
     //      cout<<"this is not armstrong number";
     // }
     cout<<armstrong(n);
 }



//6.print all number which is divisible
#include<iostream>
using namespace std;
void allprint(int n)
{
     for(int i=1;i<=n;i++)
     {
          if(n%i==0)
          {
               cout<<i<<" ";
          }
     }
     // return allprint;
     
}
int main()
{
     int n;
     cin>>n;
     // for(int i=1;i<=n;i++)
     // {
     //      if(n%i==0)
     //      {
     //           cout<<i<<" ";
     //      }
     // }
     allprint(n);
}

//7.print prime number
#include<iostream>
using namespace std;
void primenumber(int n)
{
     int count=0;
     for(int i=1;i<=n;i++)
     {
          if(n%i==0)
          {
               count++;
          }
     }
     if(count==2)
     {
          cout<<"this is prime number";
     }
     else 
     {
          cout<<"this is not prime number";
     }
}

int main()
{
     int n;
     cin>>n;
     // int count=0;
     // for(int i=1;i<=n;i++)
     // {
     //      if(n%i==0)
     //      {
     //           count++;
     //      }
     // }
     // if(count==2)
     // {
     //      cout<<"this is prime number";
     // }
     // else 
     // {
     //      cout<<"this is not prime number";
     // }
     primenumber(n);
}


//8.print gcd or hcf value
#include<iostream>
using namespace std;
int gcd(int num1,int num2)
{
     while(num1>0 && num2>0)
     {
          if(num1>num2)
          {
               num1=num1%num2;
          }
          else 
          {
               num2=num2%num1;
          }
     }
     if(num1==0)
     {
          return num2;
     }
     return num1;
}
int main()
{
     int num1,num2;
     cin>>num1>>num2;
     cout<<gcd(num1,num2);
     return 0;
     
}

//9.recursion:when a function call itself 
ex: count the number
#include<iostream>
using namespace std;
int count=0;
void print()
{
     if(count==8)
     {
          return;
     }
     cout<<count<<" "<<endl;
     count++;
     print();
     
}
int main()
{
     print();
}


//10.print n time using recursion 

#include<iostream>
using namespace std;
void function(int i,int n)
{
     if(i>n)
     {
          return;
     }
     cout<<"sam"<<" "<<endl;
     function(i+1,n);
}
int main()
{
     int i=1;
     int n;
     cin>>n;
     function(i,n);
} 

//11.print 1 to n time using recursion 

#include<iostream>
using namespace std;
void number(int i,int n)
{
     if(i>n)
     {
          return;
     }
     cout<<i<<" "<<endl;
     number(i+1,n);
}
int main()
{
    // int n;
    // cin>>n;
     number(1,15);
}

//11.print n to 1 time using recursion 

#include<iostream>
using namespace std;
void number(int n)
{
     if(n==0)
     {
          return;
     }
     cout<<n<<" "<<endl;
     number(n-1);
}
int main()
{
    // int n;
    // cin>>n;
     number(4);
}

//12.sum of first n number from recursion
#include<iostream>
using namespace std;
void addition(int n)
{
     int sum=n*(n+1)/2;
     cout<<"sum of n natural number:"<<sum;
}
int main()
{
     addition(10);
}

//

13.find the factorial from recurcive
#include<iostream>
using namespace std;
int factorial(int n)
{
     if(n==0)
     {
          return 1;
     }
     return n*factorial(n-1);
}
int main()
{
     // int n;

     cout<< factorial(5);
}

//13.reverse of the array in recursion
#include<iostream>
using namespace std;
void function(int i,int arr[],int n)
{
     if(i>=n/2)
     {
          return;
     }
     swap(arr[i],arr[n-i-1]);
     function(i+1, arr, n);
}
int main()
{
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
          cin>>arr[i];
     }
     function(0,arr,n);
     for(int i=0;i<n;i++)
     {
          cout<<arr[i]<<" "<<ends;
     }
     
}

//cheak it out string palindrom
#include<iostream>
using namespace std;
bool fun(int i,string &s)
{
     if(i>=s.size()/2)
     {
          return true;
     }
     if(s[i]!=s[s.size()-i-1])
     {
          return false;
     }
     return fun(i+1,s);
}
int main()
{
     string s="MADAM";
     cout<<fun(0,s);
}

//14.fabnocis series
#include<iostream>
using namespace std;
int fab(int n)
{
     if(n==0 )
     {
          return 0;
     }
     if(n==1)
     {
          return 1;
     }
     return fab(n-2)+fab(n-1);
}
int main()
{
     int n;
     cin>>n;
     cout<<fab(n);
}

*/




