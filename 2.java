 /*example1.print the given number in the functin
import java.util.*;
class Main//Functions
{
     //public,static is keyword
     //void:no return
     //function is camelcase in the java ex:printMyName,toString
     //String is input type ,name is argument
     
     public static void printMyName(String name)//String is input type ,name is argument
     {
          System.out.println(name);
          return; //when you go to outside function
     }
     public static void main(String args[])
     {
          //we can take input from user then we make Scanner object
          System.out.println("enter the name:");
         Scanner sc=new Scanner(System.in);
         String name=sc.next();//take input
         printMyName(name);//we can call function(printMyName) from main function
         
         
     }
}
output
enter the name:
sachin
sachin*/
//2.Make a function to add 2 numbers and return the sum
/*import java.util.Scanner;
class Main 
{
     public static int calulateSum(int a,int b)
     {
          int sum=a+b;
          return sum;
     }
     public static void main(String args[])
     {
          Scanner scan=new Scanner(System.in);
          System.out.println("enter the value of a:");
          int a=scan.nextInt();
          System.out.println("enter the value of b:");
          int b=scan.nextInt();
          int sum=calulateSum(a,b);
          System.out.println("addition of two value:"+sum);
          
     }
     
}
output
enter the value of a:
2
enter the value of b:
5
addition of two value:7 */
//2.Make a function to multiply 2 numbers and return the product
/*import java.util.*;
class Main 
{
     public static int calculatMul(int a,int b)
     {
          int mul=a*b;
          return mul;
     }
     public static void main(String args[])
     {
          Scanner scan=new Scanner(System.in);
          System.out.println("enter the number of a");
          int a=scan.nextInt();
          System.out.println("enter the number of b:");
          int b=scan.nextInt();
          int mul=calculatMul(a,b);
          System.out.println("multiplication of two value:"+mul);
     }
}
output
enter the number of a
15
enter the number of b:
6
multiplication of two value:90 */

//second method;

/*import java.util.*;
class Main 
{
     public static int calculatProduct(int a,int b)
     {
          return a*b;
     }
     public static void main(String args[])
     {
          Scanner scan=new Scanner(System.in);
          System.out.println("enter the number of a");
          int a=scan.nextInt();
          System.out.println("enter the number of b:");
          int b=scan.nextInt();
          System.out.println("product  of two number:"+calculatProduct(a,b));
     }
}
output
enter the number of a
2
enter the number of b:
4
product  of two number:8 */

//3.find the factorial of a number
/*import java.util.*;
class Main 
{
     public static void printFactorial(int n)
     {
          if(n<0)
          {
               System.out.println("invalid Number");
               return;
          }
          int factorial=1;
          // loop
          for(int i=n;i>=1;i--)
          {
               factorial=factorial*i;
          }
          System.out.println(factorial);
          return;
     }
     public static void main(String args[])
     {
          Scanner scan=new Scanner(System.in);
          System.out.println("enter the number of n");
          int n=scan.nextInt();
          printFactorial(n);
          
     }
}
output
enter the number of n
5
120*/

/*function and method both are block of code it take input and give output.
difference between function and metho
method is call through class ke object
function is call through directly*/

/*find the avarage value from functtion
import java.util.*;
class Main 
{
     public static double calculateAvg(double a,double b,double c)
     {
          return (a+b+c)/3;
     }
     public static void main(String args[])
     {
          Scanner scan=new Scanner(System.in);
          System.out.println("enter the value of a:");
          double a=scan.nextDouble();
          System.out.println("enter the value of b:");
          double b=scan.nextDouble();
          System.out.println("enter the value of c:");
          double c=scan.nextDouble();
          System.out.println("the average value:"+calculateAvg(a,b,c));
     }
}
OUTPUT
enter the value of a:
3
enter the value of b:
3
enter the value of c:
3
the average value:3.0*/

/*

calcuate the value of all odd number from 1 to n
import java.util.*;
class Main 
{
     
     public static void main(String args[])
     {
          Scanner scan=new Scanner(System.in);
          int sum=0;
          System.out.println("enter the number of term");
          int n=scan.nextInt();
          for(int i=1;i<=n;i++)
          {
               if((i%2)!=0)
               {
                  sum=sum + i;
               }
          }
           System.out.println("sum of odd number from 1 to"+n+" is:"+sum);
     }
}
output
enter the number of term
3
sum of odd number from 1 to3 is:4*/


     















