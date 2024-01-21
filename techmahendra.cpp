// 1.find gp 1,3,9,27,81
// formula:a*(r per power n-1) where a is first term,r is comman ratio n is input
//#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double s;// s is second term
    double t;//t is third term or third element
    int n;// n term 
    cin>>s>>t>>n;
    double r=t/s; //r is common ratio
    double a=s/r; //a is first term
    double result=a*pow(r,n-1);
    cout<<result;
}
//output
3,9,4 //(3 is second term,9,is third term,4 is 4th term )
27//(27 is result)


2.#include <iostream>
#include<math.h>
//#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[50];
    cin>>str;
    for(int i=0;str[i]!='\0';i++)
    {
         str[i]=str[i]+3;
         if(str[i]>'z')//ascii value
         {
              str[i]=str[i]-26;
         }
    }
   // printf("%s",str);
   cout<<str;
}
// for enncription(increase letter 3)
// input: nrfzh
// output:quick

3.given a string,denoting a number.you have to determine the output 
after dividing the string from 11
example-
input:121
output:0

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a number: ";
    cin >> input;

    // Convert string to integer
    int number = stoi(input);

    // Calculate the remainder when dividing by 11
    int remainder = number % 11;

    cout << "Output: " << remainder << endl;

    return 0;
}
output
Enter a number:121
output:0


4. sudha's teacher give her a mathematical probalem to solve.
According to the problem she has to determine if a given positive number is power of 2 or not
example:1. input:n=4  output:yes
        2. input:n=7  output:no
#include <iostream>
#include <string>
using namespace std;
int powerofTwo(int n)
{
     if(n==0)
     {
          return 0;
     }
     while(n!=1)
     {
          if(n%2!=0)
          {
               return 0;
          }
          n=n/2;
     }
     return 1;
     
}

int main() {
     int n;
     cin>>n;
     if(powerofTwo(n))
     {
          cout<<"yes";
     }
     else 
     {
          cout<<"no";
     }
    
}
output
32 yes
17 no


4.1 sudha's teacher give her a mathematical probalem to solve.
According to the problem she has to determine if a given positive number is power of 2 or not
example:1. input:n=4  output:yes
        2. input:n=7  output:no
#include <iostream>
#include <string>
using namespace std;
int powerofTwo(int n)
{
     return n &&(!(n &(n-1)));
     
}

int main() {
     int n;
     cin>>n;
     if(powerofTwo(n))
     {
          cout<<"yes";
     }
     else 
     {
          cout<<"no";
     }
    
}
output
32 yes
17 no



5.first array will be sort then addition of gap between number 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Bubble sort
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Calculate and print the sum of absolute differences
    for (int i = 1; i < n; i++) {
        p += abs(arr[i] - arr[i - 1]);
    }
    cout << endl << "Sum of absolute differences: " << p;

    return 0;
}
out:
4
1 6 -2 4
-2 1 4 6
sum of absolute difference:8 

//write the program to the calculate the tax that is given to you an array of long integers.tax are not apply the amount 100 after that 10% charged for remaning amount.please ignore the fraction part
exaple: 5
       100 200 300 400 500
#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
        cin>>arr[i];
   }
   int tax=0;
   for(int i=0;i<n;i++)
   {
        if(arr[i]>100)
        {
             tax=tax+((arr[i]-100)*0.1);
        }
   }
   cout<<tax<<endl;
   
}

1. the website that is most popular among programmers for program solving
a>twitter b*>stack-overflow c>w3school d>codingqueries
2. what is the feature of chrome browser which allows third parties to add functionality?
a>applets b*>plugin c>favourites d>bookmarks
3. the word process in computer term is matching with which of the foll


// 6.write a program to calculate and return the sum of distance between the numbers in the given  array of positive  numbers
// example: input:5
//      10 11 7 12 14 
//      output 12
#include <iostream> 
using namespace std;

int main()
{
    int n,s=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
         cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
         s=s+abs(arr[i]-arr[i+1]);
    }
    cout<<s;

    return 0;
}
output
5 
10 11 7 12 14
12

//7. ram is very good in mathematics.her teacher gave a problem to find the maximum difference between two adjacent numbers in the given array of positive integers.write the code to help rama.
// input:5
// 10 11 7 12 14
// output:
// 4
#include<iostream>
using namespace std;
int main()
{
     int n,m=0,diff;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
          cin>>arr[i];
     }
     for(int i=0;i<n-1;i++)
     {
        diff=arr[i]-arr[i+1];
        if(diff>m)
        {
             m=diff;
        }
     }
     cout<<m;
     
}
output
5
10 11 7 12 14 
4
/* 8.you are given an array of  positive integers.write a program to determine the difference between the largest and the smallest element present in the array
example- 
input 
5 
10 11  7 12 14 
output
7*/
#include <iostream>

using namespace std;

int main()
{
    int n,min,max;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
         cin>>arr[i];
    }
    min=arr[0];
    max=arr[0];
    for(int i=0;i<n;i++)
    {
         if(arr[i]<min)
         {
              min=arr[i];
         }
         if(arr[i]>max)
         {
              max=arr[i];
         }
    }
    cout<<max-min<<endl;
    

    return 0;
}
output
5 
10 11  7 12 14 
7


// 9.given an  array  arr of positive integers.Determine the diffence between the sum of odd number and even number from the array
// example-
// input
// 5
// 10 11 7 12 14
// output
// -18
#include<iostream>
using namespace std;
int main()
{
     int n,oddnum=0,evennum=0;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
          cin>>arr[i];
     }
     for(int i=0;i<n;i++)
     {
          if(arr[i]%2!=0)
          {
               oddnum=oddnum+arr[i];
          }
          else
          {
          
               evennum=evennum+arr[i];
          }
          
          
     }
     cout<<oddnum-evennum;
     
}


/*10.A sequence is defined as below
seq[1]=0 
seq[2]=1 
seq[n]=1*seq[n-1]+2*seq[n-2]+3*1 
input:3 
output:4 */
#include <iostream>

using namespace std;
int sequence(int n)
{
     if(n==1)
     {
          return 0;
     }
     if(n==2)
     {
          return 1;
     }
     int seq[n+1];// array of size 
     seq[1]=0;
     seq[2]=1;
     for(int i=3;i<=n;i++)
     {
         seq[i]=1*seq[i-1]+2*seq[i-2]+3*1;
         
     }
     return seq[n];
     
}

int main()
{
  int n,a;
  cin>>n;
  a=sequence(n);
  cout<<a;
  
}

/*11.given an expression infix(string) from determine its postfix expression.
input:infix expression of string 
output:postfix expression of string 
example-
input:9+(10-9)*2 
output:9109-2*+

input 1+2 
output:12+ */ 
//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int precedence(char c)
{
     if(c=='^')
     {
          return 3;
     }
     else if(c=='*' || c=='/')
     {
          return 2;
     }
      else if(c=='+' || c=='-')
     {
          return 1;
     }
     return -1;
}
string infixToPostfix(string s)
{
     stack<char>st;
     string res;
     for(int i=0;i<s.length();i++)
     {
          if(s[i]>='0' && s[i]<='9')
          {
               res=res+s[i];
          }
          else if(s[i]=='(')
          {
               st.push(s[i]);
          }
          else if(s[i]==')')
          {
               while(!st.empty() && st.top()!='(')
               {
                    res=res+st.top();
                    st.pop();
               }
               if(!st.empty())
               {
                    st.pop();
               }
          }
          else 
          {
               while(!st.empty() && precedence(st.top())>precedence(s[i]))
               {
                    res+=st.top();
                    st.pop();
               }
               st.push(s[i]);
          }
     }
     while(!st.empty())
     {
          res+=st.top();
          st.pop();
     }
     return res;
     
}
int main()
{
     string str="9+(10-9)*2";
     string a=infixToPostfix(str);
     cout<<a;
}

/*12. ex. input:n=7,x=3,arr[]={7,3,2,4,9,12,56}
 output:2 
 Explanation:The minimum difference between maximum chocalates is 4-2=2 by choosing following Mpackets:{2,3,4} */
 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
      int n,x;
      cin>>n>>x;//x is indicate number of student,n represent number of packet
      int arr[n];
      for(int i=0;i<n;i++)
      {
           cin>>arr[i];
      }
      sort(arr,arr+n);// sort the array 
     
     int min=9999;
     for(int i=0;i<=n-x;i++)
     {
          int diff=arr[i+x-1]-arr[i];
          if(diff<min)
          {
               min=diff;
          }
     }
     cout<<min;
 }
output 
7 3 
7 3 2 4 9 12 56 
2

13.'''sheetal has two strings one is collection of the input string and second is the collection of queries.she has to find 
how many times a query string occurs in the input string occurs in the input string Write the code to help sheetal.
input=["abc","ab","abc"]
queries=["abc","ab"]
result=[2,1],here occurences of "abc" and 1 occurrence of "ab" '''
def matchingStrings(strings,queries):
     l=[] # l represent result
     for i in range(len(queries))
       c=0
       for j in range(len(string)):
             if(queries[i]==string[j])
               c+=1;
               
        l.append(c)
     return l
     

