//solid rectangle
//1q.print the pattern


/*import java.util.*;
class sa 
{
    public static void main(String args[])
    {


    Scanner scan=new Scanner(System.in);
    int n=4;
    int m=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            System.out.print("*");
        }
        System.out.println();                                                                            
    }

  }
}
output
*****
*****
*****
******/

/*2.pattern

import java.util.*;
class Main 
{
     public static void main(String args[])
     {
          Scanner scan=new Scanner(System.in);
          int n=4;
          int m=5;
          //outer loop
          for(int i=1;i<=n;i++)
          {
            //inner loop
               for(int j=1;j<=m;j++)
               {
                //cell->(i,j)
                    if(i==1 || j==1 || i==n || j==m)
                    {
                         System.out.print("*");
                    }
                    else{
                         System.out.print(" ");
                    }
               }
               System.out.println();
          }
     }
}
output
*****
*   *
*   *
***** */

/*3.pattrn

 import java.util.Scanner;
 class Main 
{
     public static void main(String args[])
     {
          Scanner scan=new Scanner(System.in);
          int n=4;
          
          for(int i=1;i<=n;i++)
          {
               for(int j=1;j<=i;j++)
               {
                    System.out.print("*");
               }
               System.out.println();
          }
     }
}
output
*
**
***
****
 
 */

 /* 
 4.pattern 

  import java.util.Scanner;
 class Main 
{
     public static void main(String args[])
     {
          Scanner scan=new Scanner(System.in);
          int n=4;
          
          for(int i=n;i>=1;i--)
          {
               for(int j=1;j<=i;j++)
               {
                    System.out.print("*");
               }
               System.out.println();
          }
     }
}
output
****
***
**
*
       */


/* 5.pattern 

       import java.util.Scanner;
       class Main 
      {
           public static void main(String args[])
           {
                Scanner scan=new Scanner(System.in);
                int n=4;
                //pouter loop
                for(int i=1;i<=n;i++)
                {//inner loop
                   for(int j=1;j<=n-i;j++)
                   {
                          System.out.print(" ");
                   }
                   //inner loop -star loop
                   for(int j=1;j<=i;j++)
                   {
                        System.out.print("*");
                   }
                   System.out.println();
                }
           }
      }
      output
         *
        **
       ***
      ****
   */   
  
   
   /*
import java.util.*;
class Main 
{
     public static void main(String args[])
     {
          int n=5;
          for(int i=1;i<=n;i++)
          {
               for(int j=1;j<=i;j++)
               {
                    System.out.print(j+" ");
               }
               System.out.println();
          }
     }
}
output
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
*/

/*import java.util.*;
class Main 
{
     public static void main(String args[])
     {
          int n=5;
          
          // outer loop
          for(int i=n;i>=1;i--)
          {
               //inner loop
               for(int j=1;j<=i;j++)
               {
                    System.out.print(j+" ");
               }
               System.out.println();
          }
     }
}
output
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 */

/*import java.util.*;
class Main 
{
     public static void main(String args[])
     {
          int n=5;
          int number=1;
          
          // outer loop
          for(int i=1;i<=n;i++) // it is used to all row (outer loop)
          {
               //inner loop
               for(int j=1;j<=i;j++)  //it is check out how many nuber print i9n the row(inner loop)9999999999999999999999                                         
               {
                    System.out.print(number+" ");
                    number++;//number=number+1;
               }
               System.out.println();
          }
     }
}
output
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 */

/*import java.util.*;
class Main 
{
     public static void main(String args[])
     {
          int n=5;
          for(int i=1;i<=n;i++)//outer loop
          {
               for(int j=1;j<=i;j++)//inner loop
               {
                    int sum=i+j;
                    if(sum % 2==0)
                    {
                         System.out.print("1 ");//even
                    }
                    else
                    {
                          System.out.print("0 ");//odd
                    }
                    
               }
                System.out.println();
          }
     }
}
output
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 */

/*import java.util.*;
class Main 
{
     public static void main(String args[])
     {
          int n=5;
          //upper half
          for(int i=1;i<=n;i++)
          {
               //1st part
               for(int j=1;j<=i;j++)
               {
                    System.out.print("*");
               }
               //spaces
               int spaces=2*(n-i);//total number of spaces tell me (int spaces)
               for(int j=1;j<=spaces;j++)
               {
                    System.out.print(" ");
               }
               //2nd part
               for(int j=1;j<=i;j++)
               {
                    System.out.print("*");
               }
               System.out.println();
          }
          //lower half
          for(int i=n;i>=1;i--)
          {
               //1st part
               for(int j=1;j<=i;j++)
               {
                    System.out.print("*");
               }
               //spaces
               int spaces=2*(n-i);//total number of spaces tell me (int spaces)
               for(int j=1;j<=spaces;j++)
               {
                    System.out.print(" ");
               }
               //2nd part
               for(int j=1;j<=i;j++)
               {
                    System.out.print("*");
               }
               System.out.println();
          }
     }
}

output
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *
*/

/*import java.util.Scanner;
       class Main 
      {
           public static void main(String args[])
           {
                Scanner scan=new Scanner(System.in);
                int n=5;
           
                for(int i=1;i<=n;i++)
                {//output
                   for(int j=1;j<=n-i;j++)
                   { //spaces
                        System.out.print(" ");
                   }
                   for(int j=1;j<=5;j++)
                   {
                        //stars
                        System.out.print("*");
                   }
                   System.out.println();
                }
           }
      }
      
      output
      *****
   *****
  *****
 *****
*****

*/

/*
import java.util.*;
class Main 
{
     public static void main(String args[])
     {
          int n=5;
          for(int i=1;i<=n;i++)
          {
               for(int j=1;j<=n-i;j++)
               {
                    //spaces
                    System.out.print(" ");
               }
               for(int j=1;j<=i;j++)
               {
                    // number->print row number,row number time
                    System.out.print(i+" ");
               }
               System.out.println();
          }
     }

}
output
    1 
   2 2 
  3 3 3 
 4 4 4 4 
5 5 5 5 5 

*/

/*palindrom related question

import java.util.*;
class Main 
{
     public static void main(String args[])
     {
          int n=5;
          for(int i=1;i<=n;i++)
          {
               for(int j=1;j<=n-i;j++)
               {
                    //spaces
                    System.out.print(" ");
               }
               for(int j=i;j>=1;j--)
               {
                    //first half number
                    System.out.print(j);// when j is 4th row then 4 then 3 then 2 then 1
               }
               for(int j=2;j<=i;j++)
               {
                    // second half number
                    System.out.print(j);
               }
               System.out.println();
          }
     }

}
output
    1
   212
  32123
 4321234
543212345
*/

/*import java.util.*;
class Main 
{
     public static void main(String args[])
     {
          int n=5;
          for(int i=1;i<=n;i++)
          {
               for(int j=1;j<=n-i;j++)
               {
                    //spaces
                    System.out.print(" ");
               }
               for(int j=i;j>=1;j--)
               {
                    //first half number
                    System.out.print(j);// when j is 4th row then 4 then 3 then 2 then 1
               }
               for(int j=1;j<=i;j++)
               {
                    // second half number
                    System.out.print(j);
               }
               System.out.println();
          }
     }

}
output
    11
   2112
  321123
 43211234
5432112345*/


/*class Main 
{
     public static void main(String args[])
     {
          int n=4;
          //upper half
          for(int i=1;i<=n;i++)
          {
               for(int j=1;j<=n-i;j++)
               {
                    // print spaces
                    System.out.print(" ");
               }
               for(int j=1;j<=2*i-1;j++)
               {  //star print 
                    System.out.print("*");
               }
               System.out.println();
          }
          //lower  half
          for(int i=n;i>=1;i--)
          {
               for(int j=1;j<=n-i;j++)
               {
                    // print spaces
                    System.out.print(" ");
               }
               for(int j=1;j<=2*i-1;j++)
               {  //star print 
                    System.out.print("*");
               }
               System.out.println();
          }
     }
}
output
   *
  ***
 *****
*******
*******
 *****
  ***
   *
   
*/















          
               



          








