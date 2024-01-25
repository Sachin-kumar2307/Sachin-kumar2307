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

/* find towerofHanori

//time complexity is O(2 per power n -1) or O(2 per power n)
class Main 
{
     public static void towerHanori(int n,String source,String helper,String destination)
     {
          if(n==1)
          {
                  System.out.println("disk transfer: "+n+" from: "+source+"to: "+destination);
                  return;
          }
        towerHanori(n-1,source,destination,helper);
        System.out.println("disk transfer: "+n+" from: "+source+"to: "+destination);
        towerHanori(n-1,helper,source,destination);
     }
     public static void main(String args[])
     {
          int n=3;
         towerHanori(n,"S","H","D");
          
     }
}
output
disk transfer: 1 from: Sto: D
disk transfer: 2 from: Sto: H
disk transfer: 1 from: Dto: H
disk transfer: 3 from: Sto: D
disk transfer: 1 from: Hto: S
disk transfer: 2 from: Hto: D
disk transfer: 1 from: Sto: D  */


//method 1 example reverse string
/*class Main 
{
     public static void printReverse(String str,int i)
     {
          if(i==0)
          {
               System.out.println(str.charAt(i));//i=index,str is string
               return;
          }
          System.out.print(str.charAt(i));
          printReverse(str,i-1);
        
     }
     public static void main(String args[])
     {
          String str="sachinkumar";
          int i=10;
          printReverse(str,i);
          
     }
}
output
ramuknihcas */


//method 2 example reverse string
//timecomplicity of reverse string is O(n) where n is string
/*class Main 
{
     public static void printReverse(String str,int i)
     {
          if(i==0)
          {
               System.out.println(str.charAt(i));//i=index,str is string
               return;
          }
          System.out.print(str.charAt(i));
          printReverse(str,i-1);
        
     }
     public static void main(String args[])
     {
          String str="raviteja";
          int i=10;
          printReverse(str,str.length()-1);
          
     }
}
output
ajetivar */
// find the first and last occurence of an element in the String
//timecomplicity of reverse string is O(n) where n is string
/*class Main
{
     public static int first=-1;
     public static int last=-1;
     public static void findOccurence(String str,int index,char element)
     {
          if(index==str.length())
          {
               System.out.println("first index:"+first);
               System.out.println("last index"+last);
               return;
          }
          char currChar=str.charAt(index);
          if(currChar==element)
          {
               if(first==-1)
               {
                    first=index;
               }
               else 
               {
                    last=index;
               }
          }
          findOccurence(str,index+1,element);
     }
     public static void main(String args[])
     {
          String str="abaacdaefaah";
          findOccurence(str,0,'a');
          
     }
}
output
first index:0
last index:10 */

//check if an array is sorted(Strictly increasing)
/* class Main 
{
     public static boolean isSorted(int arr[],int i) 
     {
          if(i==arr.length-1)
          {
               return true;
          }
          
          if(arr[i]<arr[i+1])
          {
               //array is sorted
               return isSorted(arr,i+1);
          }
          else 
          {
               return false;
          }
     }
     public static void main(String args[])
     {
          int arr[]={12,56,78,90};
          System.out.println(isSorted(arr,0));
          
     }
}
output
true */
//reverse sorted
/*class Main 
{
     public static boolean isSorted(int arr[],int i) 
     {
          if(i==arr.length-1)
          {
               return true;
          }
          
          if(arr[i]>=arr[i+1])
          {
               //array is unsorted
               return false;
          }
          else 
          {
               return isSorted(arr,i+1);
          }
     }
     public static void main(String args[])
     {
          int arr[]={72,56,78,90};
          System.out.println(isSorted(arr,0));
          
     }
}
output
false */
//q1.input "axbcxxd" and output "abcdxxx"
/*class Main 
{
     public static void moveAllX(String str,int idx,int count,String newString)
     {
          if(idx==str.length())
          {
               for( int i=0;i<count;i++)
               {
                    newString+='x';
               }
               System.out.println(newString);
               return;
          }
          char currChar=str.charAt(idx);
          if(currChar=='x')
          {
               count++;
               moveAllX(str,idx+1,count,newString);
               
          }
          else 
          {
               newString=newString+currChar;
               moveAllX(str,idx+1,count,newString);
          }
     }
     public static void main(String args[])
     {
          String str="axbcxxd";
          moveAllX(str,0,0,"");
         
     }
}
output
abcdxxx */


// example remove dubliate in the string
/*class Main 
{
     public static  boolean map[]=new boolean[26];
     public static void removedublicate(String str,int index,String newString)
     {
          if(index==str.length())
          {
               System.out.println(newString);
               return;
          }
          char currChar=str.charAt(index);
          if((map[currChar-'a']==true))//it is find out index;
          {
            removedublicate(str,index+1,newString);   
          }
          else 
          {
               newString =newString+currChar;//we will see first time char 
               map[currChar-'a']=true;
               removedublicate(str,index+1,newString);   
          }
     }
     public static void main(String args[])
     {
          String str="abbdyggdhhhg";
          removedublicate(str,0,"");   
     }
}
output
abdygh */

/* 
//print  all subseuence of a string
//time comlixcity is O(2 per power n)
class Main 
{
     public static void subSequence(String str,int index,String newString)
     {
          if(index==str.length())
          {
               System.out.println(newString);
               return;
          }
          char currChar=str.charAt(index);
          //to be  include currChar
          subSequence(str,index+1,newString+currChar);
          //to be  not include currChar
          subSequence(str,index+1,newString);
          
     }
     public static void main(String args[])
     {
          String str="abc";
          subSequence(str,0,"");
     }
}
output
abc
ab
ac
a
bc
b
c  */
// example print all the unique subseuences of a String
/*import java.util.HashSet;
class Main 
{
     public static void subsequene(String str,int index,String newString,HashSet<String>set)
     {
          if(index==str.length())
          {
               if(set.contains(newString))//if String already containt in set it is only return
               {
                    return;
               }
               else 
               {
                    System.out.println(newString);
                    set.add(newString);//if string is not containt in set then add String
                   return;
                    
               }
               
          }
          char curChar=str.charAt(index);
          //to be include curChar
          subsequene(str,index+1,newString+curChar,set);
          //to be  not include curChar
          subsequene(str,index+1,newString,set);
          
          
     }
     public static void main(String args[])
     {
          String str="aaa";
          HashSet<String>set=new HashSet<>();
          subsequene(str,0,"",set);
          
          
     }
}
output
aaa
aa
a */
//mobile keypadd problem
/*
import java.util.HashSet;
class Main 
{
     public static String[]keypad={".","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
     public static void printCombination(String str,int index,String combination)
     {
          if(index==str.length())
          {
               System.out.println(combination);
               return;
          }
          char curChar=str.charAt(index);
          String mapping=keypad[curChar-'0'];//2-0=2(index) mapping comes def
          for(int i=0;i<mapping.length();i++)
          {
            printCombination(str,index+1,combination+mapping.charAt(i));   
          }
     }
     public static void main(String args[])
     {
          String str="23";
          printCombination(str,0,"");
          
     }
}
output
dg
dh
di
eg
eh
ei
fg
fh
fi
*/

 /*
 
 //print the all permutation of string 
 //time complicity  of permutation O(n!)
  public class Main
  {
       public static void printPermutation(String str,String permutation)
       {
            if(str.length()==0)//all charcter kept in the chair
            {
                 System.out.println(permutation);
                 return;
            }
            for(int i=0; i<str.length();i++)
            {
                 char currChar=str.charAt(i);//first chair per character a
                 //"abc"->"bc" when choose a character
                 String newStr=str.substring(0,i)+str.substring(i+1);
                 printPermutation(newStr,permutation+currChar);
            }
       }
       public static void main(String args[])
       {
            String str="abc";
            printPermutation(str,"");
       }
  }
output
abc
acb
bac
bca
cab
cba */

/*2.count total paths in a maze to move from (0,0)to (n,m)
class Main 
{
     public static int countPaths(int i,int j,int n,int m)
     {
          if(i==n || j==n)
          {
               return 0;
          }
          if(i==n-1 && j==m-1)
          {
               return 1; //here only one path we can not move  
          }
          //move downword
          int downPaths=countPaths(i+1,j,n,m);
          int rightPaths=countPaths(i,j+1,n,m);
          return downPaths+rightPaths;
     }
     public static void main(String args[])
     {
          int n=3,m=3;
         int totalPaths=countPaths(0,0,n,m);//main function se call lagayege
         System.out.println("totalpaths count:"+totalPaths);
          
     }
}
output
totalpaths count:6  */

/*example.place Tiles of size 1xm in a floor of size nxm
class Main 
{
     public static int placeTiles(int n,int m)
     {
          if(n==m)
          {
               return 2;
          }
          if(n<m)
          {
               return 1;
          }
          //vertical
          int verticalPlacement=placeTiles(n-m,m);
          //horigentally 
          int horigentalPlacement=placeTiles(n-1,m);
          return verticalPlacement+horigentalPlacement;
     }
     public static void main(String args[])
     {
          int n=4,m=2;
           System.out.println(placeTiles(n,m));
          
     }
}
output 
5 */

/*find the number of ways in which you can invites n people to your party,single in the pairs.
class Main 
{
     public static int callGuests(int n)//here n=number of gest
     {
          if(n<=1)
          {
               return 1;//one way gest ko party me bulane ka 
          }
          //single
          int ways1=callGuests(n-1);
          //pair 
          int ways2=(n-1)*callGuests(n-2);
          //here (n-1) ways pair karne ke
          //here callGuests(n-2) ->gest ko bulana parega 
          return ways1 + ways2;
     }
     public static void main(String args[])
     {
          int n=4;
          System.out.println(callGuests(n));
     }
}
output
10  */

/*example.print all the subsets of a set of first n natural number
import java.util.*;
class Main 
{
     public static void printSubset(ArrayList<Integer>subset)
     {
          for(int i=0;i<subset.size();i++)
          {
               System.out.print(subset.get(i)+" ");//print karege subset ke all element ko
          }
          System.out.println();
     }
     public static void findSubsets(int n, ArrayList<Integer>subset)//find all subset element
     {
          if(n==0)//all element chose choice done 
          {
               printSubset(subset);
               return;
          }
          //hersubset me element add hoga or nahi hoga
          //add hoga
          subset.add(n);
          findSubsets(n-1,subset);
          //add nahi hoga
          subset.remove(subset.size()-1);
          findSubsets(n-1,subset);
     }
     
     public static void main(String args[])
     {
          int n=3;
          ArrayList<Integer>subset=new ArrayList<>();//element of subset are stored in ArrayList
          findSubsets(n,subset);
     }
}
output
3 2 1 
3 2 
3 1 
3 
2 1 
2 
1 */

/*example pemutation of ABC
time complexity O(n*n!)
class Main//backtracking
{
     public static void printPermutation(String str,String perm,int idx)
     {
          if(str.length()==0)
          {
               System.out.println(perm);
               return;
          }
          for(int i=0;i<str.length();i++)
          {
               char currChar=str.charAt(i);
               String newStr=str.substring(0,i)+str.substring(i+1);//curchar ko string per se remove kar deya
               //and newsubstring i+1 se start hote hai so one position fill kar de
               printPermutation(newStr,perm+currChar,idx+1);//all position fill up
               //perm=perm+currChar->all position fill up one by one
               
          }
     }
     public static void main(String args[])
     {
          String str="ABC";
          printPermutation(str,"",0);
     }
}
output
ABC
ACB
BAC
BCA
CAB
CBA
permutation of ABC ->permutation=n!=3!=6 */
//cheesh bord  4*4(4 queen safe in bord)



/*class Main //mergesort
{
     public static void conquer(int arr[],int si,int mid,int ei)
     {
          int merged[]=new int[ei-si+1];//starting to ending element  array size
          int idx1=si;//index1 track first array
          int idx2=mid+1;//index2 track first array
          int x=0;//x=0 is track merged array
          while(idx1<=mid && idx2<=ei)//it is Compiler between two array
          {
               if(arr[idx1]<=arr[idx2]) 
               {
                    merged[x]=arr[idx1];
                    x++;
                    idx1++;
                    // merged[x++]=arr[idx1++];
               }
               else 
               {
                     merged[x]=arr[idx2];
                     x++;
                     idx2++;
                     // merged[x++]=arr[idx2++];
               }
          }
          
           while(idx1<=mid)//it is Compiler between one array
           {
              merged[x]=arr[idx1];
              x++;
              idx1++;  
           }
            while(idx2<=ei)//it is Compiler between one array
           {
              merged[x]=arr[idx2];
              x++;
              idx2++;  
           }
           for(int i=0,j=si;i<merged.length;i++,j++)//merged copy in the original array
           {
               arr[j]=merged[i]; 
           }
     }
     public static void divide(int arr[],int si,int ei)
     {
          if(si>=ei)
          {
               return;
          }
          int mid=si+(ei-si)/2;//array of mid
          divide(arr,si,mid);
          divide(arr,mid+1,ei);
          //sort 
          conquer(arr,si,mid,ei);
     }
     public static void main(String args[])
     {
          int arr[]={6,3,9,5,2,8};
          int  n=arr.length;//size of array
          divide(arr,0,n-1);
          //print 
          for(int i=0;i<n;i++)
          {
               System.out.print(arr[i]+" ");
          }
          System.out.println();
          
          
     }
}
output
2 3 5 6 8 9
timecomplexcity O(nlogn) */

/* 

// timecomplexityn in worstcase of quickSort->O(n^2 or n squree)
// timecomplexityn in worstcase of mergeSort->O(nlogn)
// timecomplexityn in averagecase case of quickSort->O(nlogn)
// worstcase occurs when pivot is always the smallest or the the largest element in quickSort

class Main //quickSort
{
     public static int partition(int arr[],int low,int high)
     {
          int pivot=arr[high];
          int i=low-1;// atlest one element is not less then pivot in array 
          for(int j=low;j<high;j++)
          {
              if(arr[j]<pivot)// all smallest element take left side pivot with used swap
              {
                   i++;
                   //swap 
                   int temp=arr[i];
                   arr[i]=arr[j];
                   arr[j]=temp;
              }
          }
          i++;
          int temp=arr[i];
          arr[i]=pivot;//pivot=arr[high]
          arr[high]=temp;
          return i;//pivot index
     }
     public static void quickSort(int arr[],int low,int high)
     {
          if(low<high)
          {
               int pivotindex=partition(arr,low,high);//here take  privot if low is less then pivot element place leftside
               //and high is more than privot element place rightside element of pivot  so used partition.
               quickSort(arr,low,pivotindex-1);
               quickSort(arr,pivotindex,high);
          }
          
     }
     public static void main(String args[])
     {
          int []arr={6,3,9,5,2,8};//array already defined
          int n=arr.length;
          quickSort(arr,0,n-1);
          // print
          for(int i=0;i<n;i++)
          {
               System.out.print(arr[i]+" ");
          }
          System.out.println();
     }
}
output
2 3 5 6 8 9        */






















     

     
     
     
     
     
     
     
     
     
     
     
     
    

























     
