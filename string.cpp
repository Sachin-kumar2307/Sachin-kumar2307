string->string is sequence of character. ex:"sachin" 
note:1.string index always starts with 0.
2.the last character of string is NULL(\0)
c++ proivides pre-defined functions to manulate strings:(
1.strlen() 2.strrev() 3.strcat() 4.strcat() 5.strcmp() 6.strcpy() 7.getline() (string input function)
8.push_back() 9.pop_back()


#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
     char myname[20];//in character type ka string array we works with  fixed size.or size is defind  before compile time.it is mutable nature.ending char is null 
     cout<<"enter your full name:";
     gets(myname);
     puts(myname);
     
     // cin>>myname;
     // cout<<"full name: "<<myname<<endl;
     string address; //dynami nature of size according.size is not fixed we can  do increase or dencrease size. it is immutable nature.it has no null  end char
     cout<<"enter your full addresh"<<endl;
    // cin>>address;
    getline(cin,address);
     cout<<"full address:"<<address<<ends;
     
}
#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    string myaddress="Learn Coding";
    cout<<"orignal value:"<<myaddress<<endl;//Learn Coding
    myaddress.push_back('A');
    cout<<"modified  value:"<<myaddress<<endl;//Learn CodingA
    myaddress.pop_back();
    cout<<"pop  value:"<<myaddress<<endl;//Learn Coding
     
}
2.find length
#include<iostream>
#include<string.h>
using namespace std; 
int  main()
{
    char str[]="Akhilesh";
   int l=strlen(str);
   cout<<l;
      
}
output:8
3.reverse order 
#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    char str[]="Akhilesh";
    cout<<strrev(str);//reverse order
}
output:hselihkA
4.copy string
#include<iostream>
#include<string.h>
using namespace std; 
int  main()
{
    char str[]="Akhilesh";
    char str2[10];
    strcpy(str2,str);//reverse order
    cout<<str2;
}
5.addition of two string(concatinate)
#include<iostream>
#include<string.h>
using namespace std; 
int  main()
{
    char str[20]="Akhilesh";
    char str2[10]="prasad";
    cout<<strcat(str,str2);//reverse order
   // cout<<str;
}
output:Akhileshprasad
6.compairsion between two string
#include<iostream>
#include<string.h>
using namespace std; 
int  main()
{
    char str[20]="Akhilesh";
    char str2[10]="Akhilesh";
    int value=strcmp(str,str2);
    if(value==0)
    {
         cout<<"strings are equal";
    }
    else 
    {
         cout<<"strings are not equal";
    }
}
output:strings are equal

7.length,replace and append in string
#include<iostream>
#include<string.h>
using namespace std; 
int  main()
{
   string name="sachin";
   string naam=" kumar ";
   cout<<name.length()<<endl;
   name.replace(0,6,"ritesh");
   cout<<name<<endl;
   name.append(naam);
   cout<<name<<endl;
}

8.reverse array 
#include<iostream>
#include<string.h>
using namespace std; 
#include<algorithm>
int  main()
{
   string name="sachin kumar";
   reverse(name.begin(),name.end());
   cout<<name<<endl;
}
//example1.reverse word in the string
#include <iostream>
#include <string>
using namespace std;

string reverseword(string s)
{
    string s2;
    int len = s.length();

    for (int i = len - 1; i >= 0; i--)
    {
        if (s[i] == '.')
        {
            int r = len - i;
            len = i - 1;
            s2.append(s.substr(i + 1, r));
            s2.append(".");
        }
    }

    s2.append(s.substr(0, len + 1));
    return s2;
}

int main()
{
    string s = "my.name.is.sachin.kumar";
    cout << reverseword(s);

    return 0;
}

