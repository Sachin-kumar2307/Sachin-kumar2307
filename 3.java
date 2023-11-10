// array 

/*
import java.util.*;

class Main 
{
     public static void main(String args[])
     {
          int[]marks=new int[3];// array defined
          marks[0]=97;//phy
          marks[1]=98;//chem
          marks[2]=95;//eng
     // System.out.println(marks[0]);
      //  System.out.println(marks[1]);
       // System.out.println(marks[2]); 
     for(int i=0;i<3;i++)
     {
          System.out.println(marks[i]);
     }
     }
}
output
97
98
95*/

/*
import java.util.*;
class Main 
{
     public static void main(String args[])
     {
          int[]marks={97,98,95};
         
     for(int i=0;i<3;i++)
     {
          System.out.println(marks[i]);
     }
     }
}
output
97
98
95 */

/*
import java.util.*;
class Main 
{
     public static void main(String args[])
     {
          Scanner scan=new Scanner(System.in);
          System.out.println("enter the size");
          int size=scan.nextInt();
          int number[]=new int[size];
         
     for(int i=0;i<size;i++)
     {
          System.out.println(number[i]);
     }
  }
}
output
enter the size
6
0
0
0
0
0
0 */

/*import java.util.*;
class Main 
{
     public static void main(String args[])
     {
          Scanner scan=new Scanner(System.in);
          System.out.println("enter the size");
          int size=scan.nextInt();
          int number[]=new int[size];
          //input
          for(int i=0;i<size;i++)
         {
          number[i]=scan.nextInt();//form scan.nextInt() we can take one input and stored in number[i]
         }
         //output
         System.out.println("print the number");
         for(int i=0;i<size;i++)
          {
             System.out.println(number[i]);
          }
  }
}
output
enter the size
5
1
2
3
4
5
print the number
1
2
3
4
5  */
/*

// example1.Take an array as input from the user.Search for a given 
// number x and print the index at which it occurs?
import java.util.*;
class Main 
{
     public static void main(String args[])
     {
          Scanner scan=new Scanner(System.in);
          System.out.println("enter the size");
          int size=scan.nextInt();
          int number[]=new int[size];
          //input
          for(int i=0;i<size;i++)
         {
          number[i]=scan.nextInt();//form scan.nextInt() we can take one input and stored in number[i]
         }
         int x=scan.nextInt();
         //output
         System.out.println("print the number");
         for(int i=0;i<number.length;i++)
          {
          
             if(number[i]==x)
             {
                  System.out.println("x found at index:" +i);
             }
             
          }
  }
}
output
enter the size
4
1
3
5
9
5
print the number
x found at index:2
//it is linear search
*/

//2d array

/*import java.util.*;
class Main 
{
     public static void main(String args[])
     {
          Scanner scan=new Scanner(System.in);
          System.out.println("enter the row");
          int row=scan.nextInt();
          System.out.println("enter the colum");
          int col=scan.nextInt();
          int number[][]=new int[row][col];
          //input
           System.out.println("enter the  matxix");
          for(int i=0;i<row;i++)
          {
               //row
               for(int j=0;j<col;j++)
               {
                    //colum
                    number[i][j]=scan.nextInt();
               }
          }
          System.out.println("print matxix");
          for(int i=0;i<row;i++)
          {
               for(int j=0;j<col;j++)
               {
                   System.out.print(number[i][j]+" ");
               }
               System.out.println();
          }
     }
}
output
enter the row
2
enter the colum
3
enter the  matxix
1 2 3
4 5 6
print matxix
1 2 3 
4 5 6 */




// q.take a matrix as input from the user.Search for a given number x and print the indices
// at which it occurs.
/*import java.util.*;
class Main 
{
     public static void main(String args[])
     {
          Scanner scan=new Scanner(System.in);
          System.out.println("enter the row");
          int row=scan.nextInt();
          System.out.println("enter the colum");
          int col=scan.nextInt();
          int number[][]=new int[row][col];
          //input
           System.out.println("enter the  matxix");
          for(int i=0;i<row;i++)
          {
               //row
               for(int j=0;j<col;j++)
               {
                    //colum
                    number[i][j]=scan.nextInt();
               }
          }
          int x=scan.nextInt();
          System.out.println("print matxix");
          for(int i=0;i<row;i++)
          {
               for(int j=0;j<col;j++)
               {
                  //compare with x
                  if(number[i][j]==x)
                  {
                       System.out.println("x found at the location{"+i+","+j+"}");
                  }
               }
               //System.out.println();
          }
     }
}
output
enter the row
2
enter the colum
3
enter the  matxix
1 2 3
4 5 6
6
print matxix
x found at the location{1,2}

*/




















