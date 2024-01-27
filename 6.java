/* pen  information  

 class Pen // only make blueprint of pen 
{
     String color;//properties
     String type; //ballpen,gel pen 
     public void write()// function defined in the class is called method 
     {
          System.out.println("writing something");
     }
     public void printColor()
     {
          System.out.println(this.color);//this method tell me which object excess first pen1 then pen2 second
     }
}
public class Main  //OOPS // it is public class ubs 
{
     public static void main(String args[])//take main function 
     {
          // object make in the the main method 
          Pen pen1=new Pen();//pen1 is onject 
          pen1.color="blue";//take propetes from class
          pen1.type="gel";//take propetes from class
          pen1.write();
          
          Pen pen2=new Pen();
          pen2.color="black";
          pen2.type="ballpen";
          
          pen1.printColor();
          pen2.printColor();
          
          
     }
}
output
writing something
blue
black  */


/*
// student information
class Student 
{
     String name;
     int age;
     public void printInfo()
     {
         System.out.println(this.name);
         System.out.println(this.age);
     }
    
}
public class Main  //OOPS // it is public class ubs 
{
     public static void main(String args[])//take main function 
     {
          //Student() is constructer
          Student s1=new Student();// new is keyword.it is used to object strored in the memory
          s1.name="aman";
          s1.age=24;
          s1.printInfo();
          
     }
}
output
aman
24  */ 



/*1.default constructor->which constructor does not have any parameter
properties of default constructor 
1.constructor of Object or constructor of class which is same as class name
2.constructor does not return anything 
3.constructor call one time of one object */
/*class Student 
{
     String name;
     int age;
     public void printInfo()
     {
         System.out.println(this.name);
         System.out.println(this.age);
     }
     Student()//it is non parameterised constructer
     {
          System.out.println("constructer called");
     }
    
}
public class Main  //OOPS // it is public class ubs 
{
     public static void main(String args[])//take main function 
     {
          //Student() is constructer
          Student s1=new Student();// new is keyword.it is used to object strored in the memory
          s1.name="aman";
          s1.age=24;
          s1.printInfo();
          
     }
}
output
constructer called // fist thime call constructer then other
aman
24 */ 



/*1.parametaried constructor->which constructor atlest one parameter
properties of default constructor 
1.constructor of Object or constructor of class which is same as class name
2.constructor does not return anything 
3.constructor call one time of one object */
/*class Student 
{
     String name;
     int age;
     public void printInfo()
     {
         System.out.p+rintln(this.name);
         System.out.println(this.age);
     }
     Student(String name,int age)//it is  parameterised constructer
     {
          this.name=name;
          //this.name is object name
          //name is parameter 
          this.age=age;
     }
    
}
public class Main  //OOPS // it is public class ubs 
{
     public static void main(String args[])//take main function 
     {
          //Student() is constructer
          Student s1=new Student("aman",24);// new is keyword.it is used to object strored in the memory
          
          s1.printInfo();
          
     }
}
out
aman
24 */



/*1.copy constructor->copy of one object kept in the other object 
1.constructor of Object or constructor of class which is same as class name
2.constructor does not return anything 
3.constructor call one time of one object */
/*class Student 
{
     String name;
     int age;
     public void printInfo()
     {
         System.out.println(this.name);
         System.out.println(this.age);
     }
     Student(Student s2)//it is  parameterised constructer
     {
          this.name=s2.name;
          //this.name is object name
          //name is parameter 
          this.age=s2.age;
     }
     Student()//s1 constructer defined
     {
          
     }
    
}
public class Main  //OOPS // it is public class ubs 
{
     public static void main(String args[])//take main function 
     {
          //Student() is constructer
          Student s1=new Student();// new is keyword.it is used to object strored in the memory
          s1.name="aman";
          s1.age=24;
          Student s2=new Student(s1);//define copy constructer
          s2.printInfo();
          
     }
}
output
aman
24 */


/*polymorphism->polymorphism makes two words poly and morphism.poly means many(bhutjada)
and morphism means form.one work do different way.it is called polymorphism.
polymorphism two type 
1.function overloading(compile time morphism )->we can create different different function but all funtion name is same in the class.
2.function overriding(run time morphism)->we can create different different function but all funtion name is different in the class*/

/*1.function overriding example
class Student 
{
     String name;
     int age;
     public void printInfo(String name)//same function name printInfo
     {
         System.out.println(name);
     }
     public void printInfo(int age)//same function name printInfo
     {
         System.out.println(age);
     }
     public void printInfo(String name,int age)//same function name printInfo
     {
         System.out.println(name+" "+age);
     }
    
    
}
public class Main  //OOPS // it is public class ubs 
{
     public static void main(String args[])//take main function 
     {
          //Student() is constructer
          Student s1=new Student();// new is keyword.it is used to object strored in the memory
          s1.name="aman";
          s1.age=24;
          s1.printInfo(s1.name);
          s1.printInfo(s1.age);
          s1.printInfo(s1.name,s1.age);
          
          
     }
}
aman
24
aman 24
function overloading means same name of function create in one class */ 

//inheritences->properties of one class  when  any other class wants take .it call inheritences.
// inheritance->properties of one class  when other class wants to take it is called inheritance.
/*class Shape 
{
     String color;
     void show()
     {
          System.out.println("this is red color");
     }
     
}
class Triangle extends Shape
{
     
}
public class Main 
{
     public static void main(String args[])
     {
          Triangle t1=new Triangle();
          t1.color="red";
          t1.show();
     }
}
this is red color */
//1.single inheritance example
/*import java.util.*;//package
class Shape //base class or super class 
{
     public void area()
     {
          System.out.println("display area");
     }
}
class Triangle extends Shape// single inheritance->one super class and one subclass
// triangle is derived class or sub class
{
   public void area(int l,int h)
   {
        System.out.println(1/2 *l*h);
   }
}
class EquilateralTriangle extends triangle//multilable inheritance->one super class and multipal subclass
{
     public void area(int l,int h)
   {
        System.out.println(1/2 *l*h);
   }
}
/*class Circle extends Shape //hararial inheritance->each subclass used same super class
{
     System.out.println((3.14)*r*r);
} */
/*class Main 
{
     public static void main(String args[])
     {
         
          
     }
}  */

//abstraction method
/* an abstract class must be decleared with abstraction keybord
it can have abstract or non abstract method 
we can not make object 
it can have static and constructor method also */
/*abstract class Animal // animal is only concept
{
     abstract void walk();// walk name ka function harik animal me exit karega
     Animal()
     {
          System.out.println("you are creating a new animal");
     }
     public void eat()
     {
          System.out.println("animal eat");
     }
     
}
class Hourse extends Animal// animal me hourse ko show kar sakte hai
{
     public void walk()
     {
          System.out.println("walks on 4 legs");
     }
     Hourse()
     {
          System.out.println("creating a new animal");
     }
}
class  Chicken extends Animal
{
     public void walk()
     {
          System.out.println("walks on 2 legs");
     }
}
class Main //ub class 
{
  public static void main(String args[])
  {
     Hourse horse=new Hourse();
     horse.walk();
     // Animal animal=new Animal(); animal type ke object banasakte hai  animal is abstract concept
     
     // animal.walk();
     horse.eat();
  }
}
output
you are creating a new animal
creating a new animal
walks on 4 legs
animal eat */


//interfaces->pure abstraction in interfaces.
/*interface Animal 
{
     int eyes=2// means all animal have 2
      public void walk();//all Animal define or abstract function
    //non abstract fuction not use  
     
}
class Horse implements  Animal
{
     public void walk()
     {
          System.out.println("walks on 4 legs");
     }
}
class Main {
     
       public static void main(String args[])
      {
          Horse horse=new Horse();
           horse.walk();
      }
}
output
walks on 4 legs */

/*mutiple inheritance

interface Animal 
{
     //int eyes=2// means all animal have 2
      public void walk();//all Animal define or abstract function
    //non abstract fuction not use  
     
}
interface Herbivore// eat plant
{
    
     
}
class Horse implements  Animal,Herbivore
{
     public void walk()
     {
          System.out.println("walks on 4 legs");
     }
     
}
class Main {
     
       public static void main(String args[])
      {
          Horse horse=new Horse();
           horse.walk();
      }
}
output
walks on 4 legs */
/*example of static
class Student 
{
     String name;
     static String school;// school name is same
     // memory give one time of static
     //memory give often of onject
     public static void changeSchool()
     {
          school="newschool";
     }
     
}
public class Main 
{
     public static void main(String args[])
     {
          Student.school="Jvm";// school is static used class name
          Student student1=new Student();
          student1.name="tony";
          System.out.println(student1.school);
     }
}
output
memory give one time of static
Jvm */


