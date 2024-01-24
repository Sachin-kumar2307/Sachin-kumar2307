/*import java.util.*;
public class di4 {
    //string Declaration
    // String  variable name =" "
    // String name="satya";
    // String fullname="my name is satya";
    public static void main(String args[])
    {
      
      Scanner scan=new Scanner(System.in);
      System.out.println("enter the your name");
      String name=scan.next();
      System.out.println("your name is:"+name);
   }
}
output
enter the your name
ramesh
your name is:ramesh */

/*
import java.util.*;
public class di4 {
    public static void main(String args[])
    {

        //concatination
        String firstName="satya";
        String lastName="kumari";
        String fullName=firstName +" "+lastName;
         System.out.println(fullName);
        //find length
        System.out.println(fullName.length());//we call length function (we find length)

        //charAt
        for(int i=0;i<fullName.length();i++)
        {
            System.out.println(fullName.charAt(i));//fullname is strig we are ging to each character when which index pass in char then print
        }
    }
}
 output
 satya kumari
 " "->it take space;  
12
s
a
t
y
a
 
k
u
m
a
r
i */

/* import java.util.*;
public class di4 {
    public static void main(String args[])
    {
        //compare
        String name1="tony";
        String name2="tony";
        //s1>s2:return +ve
        //s1==s2:return 0
        //s1<s2:return -ve value
        //hello cells
        if(name1.compareTo(name2)==0)
        {
           System.out.println("String are equal");
        }
        else 
        {
            System.out.println("String are not equal");
        }

    }
}
output
String are equal  */

/*  import java.util.*;
public class di4 {
    public static void main(String args[])
    {
        String name1="tony";
        String name2="tony";
        if(new String("tony")==new String("tony"));
        {
           System.out.println("String are equal");
        }
        else 
        {
            System.out.println("String are not equal");
        }

    }
}
// output
 String are not  equal  */


 /* import java.util.*;
public class Main {
    public static void main(String args[])
    {
        String sentance="my name is sachin kumar";
        //substring (begning index,ending index)
        String name=sentance.substring(11,sentance.length());
        //String name=sentance.substring(0,4);
        System.out.println(name);
    }
}
//string are imutable:when ever you make string in the momery then you can not change it(interview)
// output
// sachin kumar */



//string builder
/*import java.util.*;
class Main 
{
     public static void main(String args[])
     {
         StringBuilder sb=new StringBuilder("tony");
         //sb is variable
         //sb is string which is the part of string StringBuilder
         //new is keyward
         //StringBuilder(" name")-> we can pass string in StringBuilder like tony
         System.out.println(sb);
         //char at index 0
         System.out.println(sb.charAt(0));
         System.out.println(sb.charAt(1));
         System.out.println(sb.charAt(2));
         System.out.println(sb.charAt(3));
         
         //set char at index 0
         sb.setCharAt(0,'p');//it is change the character name like t change p
         System.out.println(sb);
         //insert character 
         sb.insert(0,'s');
         System.out.println(sb);
         //delete
         sb.delete(2,3);//(2,4) means it go to 2,3 but not include 4 same (2,3) go to 2 not 3
         System.out.println(sb);
         sb.append("t");//add character last index
         sb.append("o"); // str=str+"o";
         sb.append("y");
         System.out.println(sb);
         System.out.println(sb.length());
     }
}*/

//reverse string
/* 
class di4
{
     public static void main(String args[])
     {
          StringBuilder sb=new StringBuilder("hello");
          for(int i=0;i<sb.length()/2;i++)
          {
               int front=i;
               int back=sb.length()-1-i;//5-1-0=4
               
               char frontChar=sb.charAt(front);
               char backChar=sb.charAt(back);
               
               sb.setCharAt(front,backChar);
               sb.setCharAt(back,frontChar);
          }
          System.out.println(sb);
     }
}
output
olleh */


// get bit operation->we cheack 0 or 1 in the position
/*import java.util.*;
class Main 
{
     public static void main(String args[])
     {
          int n=5;//0101
          int position=3;
          int bitmarks=1<<position;
          if((bitmarks & n)==0)
          {
               System.out.println("bit was zero");
          }
          else 
          {
               System.out.println("bit was not zero");
          }
     }
}
output
bit was zero*/
// set bit->we can change value value(1 to 0) or(1 to 1)
// example:set the second bit(position=1) of the number n(n=0101)
/*import java.util.*;
class Main
{
     public static void main( String args[])
     {
         int n=5;//0101
         int position=1;
         int bitmarks=1<<position;
         int number=bitmarks | n;
         System.out.println("print number:"+number);
     }
}
output
print number:7 */

// clear bit->we can chage bit (1 to 0)
// ex:clear the third bit(position=2) of the number n(n=0101)
/*class Main
{
     public static void main( String args[])
     {
         int n=5;//0101
         int position=2;
         int bitmark=1<<position;
         int notbitmark=~(bitmark);
         int newnumber=notbitmark & n;
         System.out.println("print newnumber:"+newnumber);
     }
}
output
print newnumber:1 */


// update->we can change (1 to 0)or (0 to 1)
/*import java.util.*;
class Main 
{
     public static void main(String args[])
     {
          Scanner scan=new Scanner(System.in);
          int operation=scan.nextInt();
          // operation:1->set and 0->clear
          int n=5;
          int pos=1;
          int bitmask=1<<pos;
          if(operation==1)
          {
             //set operation 
             int newNumber=bitmask | n;
             System.out.println("print number:"+newNumber);
          }
          else 
          {
               //clear 
               int newBitmask=~(bitmask);
               int newNumber=newBitmask & n;
               System.out.println(newNumber);
               
          }
          
     }
}
output
1
print number:7 */

0.


//it is bubble sort

/*import java.util.*;
class Main 
{
  public static void printArray(int arr[])
  {
     for(int i=0;i<arr.length;i++)
     {
          System.out.print(arr[i]+" ");
     }
     System.out.println();
  }
  public static void main(String args[])                                                                                                                                                                         
     {
          int arr[]={10,4,15,52,28};
          //time complexcity->O(n2->n squre)
          //bubble short
          for(int i=0;i<arr.length-1;i++)             //arr.length-1 means itration n-1 tak chalega
          {
               for(int j=0;j<arr.length-i-1;j++)        //-i indicate each time last index which is higher excape
               {
                    if(arr[j]>arr[j+1])
                    {
                         //swap
                         int temp=arr[j];
                         arr[j]=arr[j+1];
                         arr[j+1]=temp;                                                                                                                                                                                                                                                                                                              
                    }
               }
          }
          printArray(arr);
     }
 }
//  output
//  4 10 15 28 52   */ 
//selection sort
/*import java.util.*;
class Main 
{
     public static void printArrays(int arr[])
     {
          for(int i=0;i<arr.length;i++)
          {
               System.out.print(arr[i]+" ");
          }
          System.out.println();
     }
     public static void main(String args[])
     {
          int arr[]={23,56,22,1};
          //time complexcity=O(n2 or n squqre);
          //selection sort
          for(int i=0;i<arr.length-1;i++)
          {
               int smallest=i;
               for(int j=i+1;j<arr.length;j++)
               {
                    if(arr[smallest]>arr[j])
                    {
                         smallest=j;
                    }
               }
               int temp=arr[smallest];
               arr[smallest]=arr[i];
               arr[i]=temp;
          }
          printArrays(arr);
          
     }
}
output
1 22 23 56 */
//insertion sort 
/*import java.util.*;
class Main 
{
     public static void printArrays(int arr[])
     {
          for(int i=0;i<arr.length;i++)
          {
               System.out.print(arr[i]+" ");
          }
          System.out.println();
     }
     public static void main(String args[])
     {
           int arr[]={23,56,22,1};
          //insertion sort 
          for(int i=0;i<arr.length;i++)
          {
               int current=arr[i];
               int j=i-1;
               while(j>=0 && current<arr[j])
               {
                    arr[j+1]=arr[j];
                    j--;
               }
               //placement
               arr[j+1]=current;
          }
          printArrays(arr);
     }
}
output
1 22 23 56 */


 /*print  natural number from 5 to 1
class Main 
{
     public static void printNum(int n)
     {
          if( n==0)
          {
               return;//  base(which step stop)
          }
          System.out.println(n);//print argument
          printNum(n-1);
     }
     public static void main(String args[])
     {
          int n=5;
          printNum(n);
     }
}
output
5
4
3
2
1 */
//print  natural number from 5 to 1
/*class Main 
{
     public static void printNum(int n)
     {
          if(n==6)
          {
               return ;
          }
          System.out.println(n);
          printNum(n+1);
     }
     public static void main(String args[])
     {
          int n=1;
          printNum(n);
     }
}
output
1
2
3
4
5 */

/*print  natural number from 5 to 1
class Main 
{
     public static void printNum(int n)
     {
          if( n==0)
          {
               return;//  base(which step stop)
          }
          System.out.println(n);//print argument
          printNum(n-1);
     }
     public static void main(String args[])
     {
          int n=5;
          printNum(n);
     }
}
output
5
4
3
2
1 */
//print  natural number from 5 to 1
/*class Main 
{
     public static void printNum(int n)
     {
          if(n==6)
          {
               return ;
          }
          System.out.println(n);
          printNum(n+1);
     }
     public static void main(String args[])
     {
          int n=1;
          printNum(n);
     }
}
output
1
2
3
4
5 */
// sum of natural number
/*class Main 
{
     public static void printSum(int i,int n,int sum)
     {
          if(i==n)
          {
               sum=sum+i;
               System.out.println("print sum:"+sum);
               return;
          }
          sum=i+sum;//calculate
          printSum(i+1,n,sum);
          System.out.println(i);
     }
     public static void main(String args[])
     {
          printSum(1,5,0);
     }
}
// output 
print sum:15
4
3
2
1*/
//factorial find 5 factorial
/*class Main 
{
     public static int calcfactorial(int n)
     {
          if(n==1 || n==0)
          {
               return 1;
          }
           int fact_nm1=calcfactorial(n-1);
           int fact_n=n*fact_nm1;
           return fact_n;
     }

   public static void main(String args[])
   {
     int n=5;
     int ans=calcfactorial(n);
     System.out.println(ans+" ");
   }
}
output
120 */
// print the fibnonacci sequence till nth term 
/*class Main 
{
     public static void printfib(int a,int b,int n)
     {
          if(n==0)
          {
               return;
          }
          int c=a+b;
          System.out.println(c);
          printfib(b,c,n-1);
     }
     public static void main(String args[])
     {
        int a=0,b=1;
          System.out.println(a);
          System.out.println(b);
          int n=7;
          printfib(a,b,n-2);  
     }
    
}
output
0
1
1
2
3
5
8 */
// print x^n(stack heigth=n)
/*class Main 
{
     public static int calPower(int x,int n)
     {
          if(n==0)//base case 1
          {
               return 1;
          }
          if(x==0) //base case 2
          {
               return 0;
          }
           int xPower1=calPower(x,n-1); //kaam
           int xPown=x*xPower1;
           return xPown;
     }
     public static void main(String args[])
     {
         int x=2,n=5;
         int ans=calPower(x,n);
         System.out.println(ans);
        
     }
     
}
output
32 */
// print x^n(stack heigth=logn)
/*public class Main 
{
     public static int calPower(int x,int n)
     {
     if(n==0)//base case 1
     {
          return 1;
     }
     if(x==0) //base case 2
     {
          return 0;
     }
      //if n is even 
      if(n % 2==0)
      {
         return calPower(x,n/2) * calPower(x,n/2);
      }
      else
      {
        return calPower(x,n/2) * calPower(x,n/2)*x;
      }
     }
     public static void main(String args[])
     {
         int x=2,n=5;
         int ans=calPower(x,n);
         System.out.println(ans);
        
     }
     
}
output
32 */

     
















































        
        



