// 1.what is class and objet?
// class->class is group of object.or 
// class is user defined datatype.it has it own "data members" and member functions which are used by creating instant of class. 
// object->object is instant of class.that have state and behavior.
//any object  have three properties 1. identity(person classname),state(public),behaviour(public)
// 1.real example of object and class
/*#include <iostream>

using namespace std;
class person
{
     private://state
     int run;
     string message;
     
     public: //behavior
     void play()
     {
          run=264;
          cout<<"Rohit sharama made run :"<<run<<endl;
     }
     void walk()
     {
          message="i am walking everyday";
          cout<<message;
     }
};



int main()
{
     person obj;//create object,person is identifier
     obj.play();
     obj.walk();//call walk function
    
}
*/
/*there are three accesibility of access specifiers
  1.private 2.publis 3. protected */

/*private is access either insideclass or outsideclass
private is access onlyinsideclass
#include <iostream>

using namespace std;
class A
{
     private://state
     int a;
     protected:
     int b;
     
     public: //behavior
     int c;
    
};
int main()
{
A obj;
obj.c=20;
cout<<obj.c;
} 

/*constructor->constructor is special method which name is the same as classname.
note: the main purpose of  constructor is used to "initialized the object".
there are three type of constructor
1.default constructor->which constructor does not have any parameter
2.parameter constructor->which constructor have one or more than one parameter
3.copy constructor->if one constructor contain data then copy data  other constructor
1.default construter
#include <iostream>

using namespace std;
class A
{
     private://state
     int a,b;
     
     public: //behavior
     A()
     {
          a=20;
          b=30;
          cout<<a<<ends<<b;
     }
    
};



int main()
{
     A obj;
     
     
} 

2.parameterised constructor
#include <iostream>

using namespace std;
class A
{
     
     public: //behavior
     A(int a,int b)
     {
          cout<<a<<" "<<b;
     }
    
};



int main()
{
     A obj(10,20);
     
     
}
//3.copy constructer
#include <iostream>

using namespace std;
class A
{
     public:
     int x,y;
     public: //behavior
     A(int a,int b)
     {
          x=a; y=b;
          cout<<x<<" "<<y <<endl;
     }
     A(A &ref)
     {
          x=ref.x;
          y=ref.y;
          cout<<x<<" "<<y;
     }
    
};



int main()
{
     A obj(10,20);
     A obj2=obj;
     
     
}

//3.deconstructer->deconstructer is special type of method it is used to deallcate the memory,allocated by deconstructer.
#include <iostream>

using namespace std;
int count=0;//global variable
class A
{

public:			//behavior
  A ()
  {
    cout <<"object"<<++count<<"created"<<endl;
    

  }
  ~A ()
  {
    cout <<"object"<<count--<<"delete"<<endl;
  }

};



int
main ()
{
  A obj1,obj2;


}

//3.what is abstraction->abstration is nothing but hinding the essential information and highlight
//the only set of services.
#include <iostream>

using namespace std;
class car
{
     bool startEngine;//engine kase start ho rahe ye nahi bataya jayega
     public:
      void start() //start function se start ho raha hai
      {
           startEngine=true;
           cout<<"engine is started"<<endl;
      }
      void drive() //drive function se car drive hoga engine start hone ke bad
      {
           if(startEngine)
           {
                cout<<"you are ready to drive"<<endl;
           }
      }
    
};
int main()
{
 car c;
 c.start();
 c.drive();
} 

//4.what is encapsulation->
// 1.class is the bast example of encapsulation
// 2.encapsulation means binding data and method with in the class and data is private in encapsulation
#include <iostream>

using namespace std;
class ENC
{
     private:
     int age;
     public:
     string name;
     void setvalue(int a)
     {
          age=a;
          cout<<age<<endl;
     }
       
     
    
};
int main()
{
 ENC obj;
 obj.name="sachin";
 cout<<obj.name<<endl;
 obj.setvalue(20);
} 

//5.what is polymorphism->polymorpism is greek word whose meaning is same object having different behaviour
// 1.comile time polymorpism(function overloading,early binding,static polymorpism)->class contains more than one methed with same name different types of parameter called function overloading.

// 2.runtime polymorpism(function overriding)
1.overloading
#include <iostream>

using namespace std;
class A
{
     private:
     int num1,num2,s,m;
     public:
     void person()
     {
          cout<<"enter two number";
          cin>>num1>>num2;
          s=num1+num2;
          cout<<"Addition"<<s<<endl;
     }
     void person(int a,int b)
     {
         m=a*b;
          cout<<"multiplication"<<m<<endl;
     }
};
int main()
{
 A obj;
 obj.person();
 obj.person(10,20);
}


// 2.runtime polymorpism(function overriding,late binding or dynamic polymorphism)->function name and parameter must be same in base and drived class is called funtion overriding

#include <iostream>

using namespace std;
class A
{
     
     public:
     void person()
     {
          cout<<"good morning"<<endl;
         
     }
};
class B: public A
{  
    public: 
     void person()
     {
          cout<<"good night"<<endl;
         
     }
};
int main()
{
 B obj;//which class have obeject  create print same class B
 obj.person();
 obj.A::person();
 
}  
example2:
#include <iostream>

using namespace std;
class A
{
     private:
     int sum;
     
     public:
     void person(int a,int b)
     {
         
          sum=a+b;
          cout<<"addition:"<<sum<<endl;
     }
};
class B: public A
{
     private:
     int mul;
     public:
     
     void  person(int a,int b)
     {
          mul=a*b;
          
          cout<<"multiplication:"<<mul<<endl;
     }
};

int main()
{
     B obj;
     obj.person(20,30);
     obj.A::person(40,50);
     //obj.person(20,30);
    
}
-------------------------------------------------------------------------------inheritance---------------------------------------
what is inheritance? full explain
->inhertance is nothing but when one class access the property of another class is called inheritance.
1.single inheritance:when one derived class is using properties of base class  is called single class.

ex:#include <iostream>

using namespace std;
class dad 
{
     protected:
      int amount;
      public:
       void input()
       {
            amount=10000;
       }
};
class son : public dad
{
     int money;
     public:
     void show()
     {
          money=35000;
          cout<<"son money:"<<money<<endl;
          cout<<"dad amount:"<<amount;
     }
};

int main()
{
     son obj;
     obj.input();
     obj.show();
    return 0;
}

2.multi-level inheritance:in the inheritance it is use one base class and more than one derived class.when one drived classis using previous drived class and base class.

#include <iostream>

using namespace std;
class A
{   protected:
    int a,b;
      public:
       void input()
       {
            cout<<"enter two numbers:";
            cin>>a>>b;
       }
};
class B : public A
{
     int c;
     public:
     void add()
     {
          c=a+b;
          cout<<"addition:"<<c;
     }
};
class C : public B 
{
    int d;
     public:
     void sub()
     {
          d=a-b;
          cout<<"addition"<<d;
     } 
};

int main()
{
     C obj;
     obj.input();
     obj.add();
     obj.sub();
    return 0;
}
3.multiple inheritance:one derived class is used propeties of more than one base class
example:
#include <iostream>
using namespace std;
int a,b,c;
class A
{   protected:
    //int a,b;
      public:
       void input()
       {
            cout<<"enter the number";
            cin>>a>>b;
       }
       
};
class B 
{
     //int a,b,c;
     public:
     void add()
     {
          c=a+b;
          cout<<"addition:"<<c<<endl;
     }
};
class C 
{
     //int a,b,d;
     public:
     void sub()
     {
          c=a-b;
          cout<<"subtraction"<<c<<endl;
     } 
};
class D :public A,public B,public C
{
     //int a,b,e;
     public:
     void mul()
     {
          
     
       c=a*b;
       cout<<"multiplication"<<c<<endl;
     }
};

int main()
{
     D obj;
     obj.input();
     obj.add();
     obj.sub();
     obj.mul();
      return 0;
}

//what is hierarechical inheritance->multipal dervived class is inherite of single class.

#include <iostream>

using namespace std;
class animal
{
     
     public:
     void eat()
     {
          cout<<"animal eating..";
          
     }
     
};
class cat :public animal
{
     public:
     void voice()
     {
          cout<<"meow meow..."<<endl;
     }
};
class  dog :public animal
{
     public:
     void bark()
     {
          cout<<"woof woof..."<<endl;
     }
};


int main()
{
   cat c;
   dog d;
   c.eat();
   c.voice();
   d.eat();
   d.bark();
}

//what is exception handling->an exception is unexpected/unwanted/abnormal situation that occured at runtime called exception.

#include <iostream>

using namespace std;

int main()
{
     cout<<"execution starting..."<<endl;
     int a,b,c;
     cout<<"enter the two number:"<<endl;
     cin>>a>>b;
     try// give any exeeption  so we should used try 
     {
         if(b==0)
         throw b;//throw kar dege b ko in catch blow ko
           
         c=a/b;
         cout<<"result:"<<c;
     } 
     catch(int x)//give reasion
     {
       cout<<"can not divided by zero ";   
     }
     cout<<"execution ended..."<<endl;
     
     return 0;
   
}


//12.what is abstract class? full explanation
// ->abstract classes are such classes that you are defiend to inherit only by ohter classes.
// the purpuse of abstract classes is to provide a structure to other classes which you can inherit.
// or
/* abstract class->a class which contain at least one pure virtual function called abstract class.
 we can not create object for abstract class*/
//syntax: virtual return.type function_name()=0
example:
#include <iostream>

using namespace std;
class animal
{
     public:
     virtual void sound()=0;//make pure virtural function(we can not say that  sound is  which animal)
    //virtual is keyward
    void eat()
    {
         cout<<"animal is eating"<<endl;
    }
};
class dog:public animal
{
     public:
     void sound()
     {
          cout<<"woof woof"<<endl;
     }
};

int main()
{
    
   dog d;
   d.sound();
   d.eat();
   return 0;
}


//templet->independent of data type is called templete.
//we can use templete in c++ by two ways:1.function templete 2. class templete
//1.function templete->function templete  works with different-different type at a time.
/*syntax:
templete<class type>
  return-type function-name(parammeters-list)
  {
       //code
  }
*/
example: function templete
#include <iostream>

using namespace std;
template<class A>
void print(A x,A y)
{
     cout<<x<<" "<<y<<endl;
}

int main()
{
    print(10,20);
    print(20.1,10.9);
    print('a','b');
    print("sachin","sam");
   
}
//class templete->user does not know what kind of value to pass from the parameters.
/*synta:
templete<class type>
  class class_name
  {
       //code
  }
*/
//example: function templete
#include <iostream>

using namespace std;
template<class A>
class print
{
     public:
     print(A x,A y)
     {
       cout<<x<<" "<<y<<endl;
     }
};

int main()
{
    // print<int> obj(100,200);
    // print<char> obj('a','b');
   // print<string> obj("sachin","sam");
   print<double> obj(10.3,10.8);//you will print one type 
   
   
} 
*/
