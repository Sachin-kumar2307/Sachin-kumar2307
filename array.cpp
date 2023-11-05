/*#include<iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int arr[n];
     int smallest=arr[0];
     for(int i=1;i<n;i++)
     {
          if(arr[i]<smallest)
          {
               smallest=arr[i];
          }
     }
     cout<<smallest;
}*/
/*1.print each index value
#include<iostream>
using namespace std;
int main()
{
     
int n=5;
int arr[5]={1,2,3,4,5};
cout<<arr[3];
return 0;
}*/


/*2.without array used print value
#include<iostream>
using namespace std;
int main()
{
     int  a=10;
     int b=20;
     int  c=30;
     int d=50;
     cout<<a<<ends<<" "<<b<<ends<<" " <<c<<ends<<" "<<d<<ends;
} */


/*3.print array element in given value
#include<iostream>
using namespace std;
int main()
{
     int arr[5]={10,20,30,40,50};
     for(int i=0;i<5;i++)
     {
         cout<<"print array element:"<<arr[i]<<endl; 
     }
} */ 
/*
4.take input and print value in the array
#include<iostream>
using namespace std;
int main()
{
     int arr[5];
     for(int i=0;i<5;i++)
     {
          cin>>arr[i];
     }
     for(int i=0;i<5;i++)
     {
          cout<<"printthe number of array:"<<arr[i];
     }
     return 0;
     
}*/
/* 5.reverse array 
#include<iostream>
using namespace std;
int main()
{
     int arr[5];
     for(int i=0;i<5;i++)
     {
          cin>>arr[i];
     }
     for(int i=4;i>=0;i--)
     {
          cout<<arr[i]<<ends;
     }
     return 0;
} */

/* 6.print single vale in input arrays element
#include<iostream>
using namespace std;
int main()
{
     int arr[5];
     for(int i=0;i<5;i++)
     {
          cin>>arr[i];
     }
         cout<<arr[2]<<ends;
     return 0;
}
*/
/*7.print smallest element in the array 
#include<iostream>
using namespace std;
int main()
{
     int arr[5];
     for(int i=0;i<5;i++)
     {
          cin>>arr[i];
     }
     int smallest=arr[0];
     for(int i=1;i<5;i++)
     {
          if(arr[i]<smallest)
          {
               smallest=arr[i];
          }
     }
     cout<<"smallest value:"<<smallest;
     
}*/
/* 7. reverse array
#include<bits/stdc++.h>
using namespace std;
int main()
{   int n=5;
    int arr[5]={22,56,78,34,67};
    for(int i=0;i<2;i++)
    {
      int tem=arr[i];
      arr[i]=arr[n-i-1];
      arr[n-i-1]=tem;
    }
    for(int i=0;i<5;i++)
    {
         cout<<arr[i]<<" ";
    }
      
} */
/* 8.find largest value in the array 
#include<iostream>
using namespace std;
int main()
{
     int arr[5];
     for(int i=0;i<5;i++)
     {
          cin>>arr[i];
     }
     int largest=arr[0];
     for(int i=1;i<5;i++)
     {
          if(arr[i]>largest)
          {
               largest=arr[i];
          }
     }
     cout<<"largest value:"<<largest;
     
}*/

/*9.selection sort
#include<iostream>
using namespace std;
void selection_sort(int arr[],int n)
{
     for(int i=0;i<=n-2;i++)
     {
         int  min=i;
          for(int j=i;j<=n-1;j++)
          {
               if(arr[j]<arr[min])
               {
                    min=j;
               }
          }
          int temp=arr[min];
          arr[min]=arr[i];
          arr[i]=temp;
     }
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
     selection_sort(arr,n);
     for(int i=0;i<n;i++)
     {
          cout<<arr[i];
     }
     return 0;
} */
/*10. bubble sorting

#include <iostream>

using namespace std;
void bubbleSort(int arr[],int n)
{
     for(int i=0;i<n-1;i++)
     {
          for(int j=i+1;j<n;j++)
          {
               if(arr[i]>arr[j])
               {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
               }
          }
     }
}

int main()
{
     int n;
     cin>>n;
     int arr[n];
     cout<<"enter the arry element";
     for(int i=0;i<n;i++)
     {
          cin>>arr[i];
     }
     bubbleSort(arr,n);
     
     cout<<"enter the arry element";
     for(int i=0;i<n;i++)
     {
          cout<<arr[i];
     }
     
     
}*/ 
/* 11. insertion sort
#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{
     for(int i=0;i<=n-1;i++)
     {
         int  j=i;
          while(j>0 && arr[j-1]>arr[j] )
          {
               int temp=arr[j-1];
               arr[j-1]=arr[j];
               arr[j]=temp;
               j--;
          }
     }
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
     insertion_sort(arr,n);
     for(int i=0;i<n;i++)
     {
          cout<<arr[i]<<" ";
     }
     return 0;
} 

// 1.remove dublicate element
#include<bits/stdc++.h>
using namespace std;
// int removedub(int n,int arr[])
// {
//      int i=0;
//      for(int j=1;j<n;j++)
//      {
//           if(arr[i]!=arr[j])
//           {
//                arr[i+1]=arr[j];
//                i++;
               
//           }
//           i++;
//      }
//      return i+1;
     
// }
int main()
{
     int n;
     cin>>n;
     int arr[n];
     set<int>st;
     for(int i=0;i<n;i++)
     {
          cin>>arr[i];
          st.insert(arr[i]);//remove the twice elementt
     }
     // removedub(n, arr);
     for(auto it=st.begin();it!=st.end();it++)
     {
          cout<<*it<<" ";
     }

}
//1.1 function remove dubliate
#include<iostream>
using namespace std;
int removeDublecate(int arr[],int n)
{
     int i=0;
     for(int j=1;j<n;j++)
     {
          if(arr[i]!=arr[j])
          {
               arr[i+1]=arr[j];
               i++;
          }
     }
     return i+1;
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
     cout<<removeDublecate(arr,n);
}

//2.left rotate array in one place
#include<iostream>
using namespace std;
int main()
{
     int arr[5]={1,2,3,4,5};
     int temp=arr[0];
     for(int i=0;i<4;i++)
     {
          arr[i]=arr[i+1];
     }
     arr[4]=temp;
     for(int i=0;i<5;i++)
     {
          cout<<arr[i]<<" "<<ends;
     }
}

//3.right rotate array in one place
#include<iostream>
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
     int temp=arr[n-1];
     for(int i=n-1;i>=1;i--)
     {
          arr[n-1]=arr[n-2];
     }
     arr[0]=temp;
     for(int i=0;i<n;i++)
     {
          cout<<arr[i]<<" "<<ends;
     }
     
}
//4.#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void leftRotate(int arr[],int n)
{
     int temp=arr[0];
     for(int i=0;i<n-1;i++)
     {
          arr[i]=arr[i+1];
     }
     arr[n-1]=temp;
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
     leftRotate(arr,n);
     
     for(int i=0;i<n;i++)
     {
          cout <<arr[i]<<" "<<ends;
     } 
     
} 


//4.left rotate array in d place(like 1,2 ,3,--- etc)
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void LeftRotate(int arr[],int n,int d)//here d is indicate rotate
{
     d=d%n;//it is indicate rotate
     int temp[d];
     //arr[7]={1,2,3,4,5,6,7}
     for(int i=0;i<d;i++)//d=3(here is 3 index)
     {
           temp[i]=arr[i];//for 1,2,3 
     }
     for(int i=d;i<n;i++)
     {
          arr[i-d]=arr[i];// for 4,5,6,7  shift  and staring index i=0 to 3
     }
     for(int i=n-d;i<n;i++)
     {
          arr[i]=temp[i-(n-d)];//temp is shift right stating index i=4 to 6
     }
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
     int d;
     cin>>d;
     LeftRotate(arr,n,d);
     for(int i=0;i<n;i++)
     {
          cout<<arr[i]<<" ";
     }
     
}
//output 7
1 2 3 4 5 6 7
3
4 5 6 7 1 2 3

4. method two left rotate array in d place(like 1,2 ,3,--- etc)
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void LeftRotate(int arr[],int n,int d)//here d is indicate rotate
{
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr, arr+n);
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
     int d;
     cin>>d;
     LeftRotate(arr,n,d);
     for(int i=0;i<n;i++)
     {
          cout<<arr[i]<<" ";
     }
     
}
//output
output 7
1 2 3 4 5 6 7
3
4 5 6 7 1 2 3


//6.all zero element shift left position
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> moveZeros(vector<int>arr,int n)
{
     vector<int>temp;
     //int temp[];
     for(int i=0;i<n;i++)
     {
          if(arr[i]!=0)
          {
               temp.push_back(arr[i]);
          }
     }
     int nz=temp.size();
     for(int i=0;i<nz;i++)
     {
          arr[i]=temp[i];
     }
     for(int i=nz;i<n;i++)wer9
     {
          arr[i]=0;
     }
     return arr;
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
     moveZeros(arr,n);
     for(int i=0;i<n;i++)
     {
          cout<<arr[i];
     }
     
}

/*6.liner search =>it is find out number which index;
//liner search 
#include<iostream>
using namespace std;
int  Linearsearch(int n,int num,int arr[])
{
     for(int i=0;i<n;i++)
     {
          if(arr[i]==num)
          {
            return i;   
          }
     }
     return -1;
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
     int num;
     cin>>num;
    cout<< Linearsearch(n,num,arr);
     
}

/*7.bubble,selection,insertion sorting
#include<iostream>
using namespace std;
void bubsort(int arr[],int n)
{
     for(int i=0;i<n-1;i++)
     {
          for(int j=1;j<n;j++)
          {
               if(arr[j-1]>arr[j])
               {
                    int temp=arr[j-1];
                    arr[j-1]=arr[j];
                    arr[j]=temp;
               }
          }
     }
     //return bubsort;
}

void selectionSort(int arr[],int n)
{
     for(int i=0;i<n-1;i++)
     {
          int min=i;
          for(int j=i;j<n;j++)
          {
               if(arr[j]<arr[min])
               {
                    min=j;
               }
          }
          int temp=arr[min];
          arr[min]=arr[i];
          arr[i]=temp;
          
     }
} 
void insertionSort(int arr[],int n)
{
     for(int i=0;i<n;i++)
     {
          int j=i;
          while(j>0 && arr[j-1]>arr[j])
          {
               int temp=arr[j-1];
               arr[j-1]=arr[j];
               arr[j]=temp;
               j--;
          }
          
     }
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
     //bubsort(arr,n);
    //selectionSort(arr,n);
     insertionSort(arr,n);
     for(int i=0;i<n;i++)
     {
          cout<<arr[i]<<" ";
     }
     
}

//7. find the union  sort
#include<bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int n1=a.size();
     int n2=b.size();
     set<int>st;
     for(int i=0;i<n1;i++)
     {
          st.insert(a[i]);
     }
     for(int i=0;i<n2;i++)
     {
          st.insert(b[i]);
     }
     vector<int>temp;
     for(auto it:st)
     {
          temp.push_back(it);
     }
     return temp;
}

/*8.find out missing number
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int missingnumber(int arr[],int n)
{
     int sum=n*(n+1)/2;
     for(int i=0;i<n;i++)
     {
          sum=sum-arr[i];
     }
     return sum;
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
   cout<< missingnumber(arr,n);
    
    
}
output
4
0 1 3 4
2
*/

//9.find maximum consucutive number 1 ex:[1,1,1,1,0]=>output:4
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int count=0;
        for(int i=0;i<nums.length();i++)
        {
            if(nums[i]==1)
            {
                count++;
                maxi=max(maxi,count);
            }
            else 
            {
                count=0;
            }
        }
        return maxi;

        
    }
};
//9.1 find maximum consucutive number 1 ex:[1,1,1,1,0]=>output:4

#include<iostream>
using namespace std;
int Maxnum(int arr[],int n)
{
     int maxi=0;
     int count=0;
     for(int i=0;i<n;i++)
     {
          if(arr[i]==1)
          {
               count++;
               maxi=max(maxi,count);
          }
          else 
          {
               count=0;
          }
     }
     return maxi;
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
     cout<<Maxnum(arr,n);
}
//how many one in the array
#include<iostream>
using namespace std;
int Maxnum(int arr[],int n)
{
     int maxi=0;
     int count=0;
     for(int i=0;i<n;i++)
     {
          if(arr[i]==1)
          {
               count++;
               maxi=max(maxi,count);
          }
         
     }
     return maxi;
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
     cout<<Maxnum(arr,n);
} 

//10.find the number appears one and other number twice
#include<vector>

int getSingleElement(vector<int> &arr){
	// Write your code here.
	int xorr=0;
	for(int i=0;i<arr.size();i++)
	{
		xorr=xorr^arr[i];
	}
	return xorr;	
}
//10.find the number appers one and other number twice 
#include<iostream>
using namespace std;
int singleElement(int arr[],int n)
{
     int xorr=0;
     for(int i=0;i<n;i++)
     {
          xorr=xorr^arr[i];
     }
     return xorr;
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
     cout<<singleElement(arr,n);
}

//11.longest subarray with sumk
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int n = a.size();
    // maxLength is used to store the maximum 
    // length of a subarray whose sum = 'k'
    
    int maxLength = 0;

    // Iterating over 'a'
    for (int i = 0; i < n; ++i) {
        long long currentSum = 0;
        for(int j = i; j < n; ++j) {
            currentSum += a[j];

            if(currentSum == k) {
                maxLength = max(maxLength, j - i + 1);
            }
        }
    }

    return maxLength;
}


/*1.Sort An Array of 0s, 1s and 2s
#include <iostream>

using namespace std;
void sortArray(int arr[], int n)
{
    // Write your code here
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else 
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
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
    sortArray(arr, n);
    
    for(int i=0;i<n;i++)
    {
         cout<<arr[i];
    }
}
output
5
1 0 1 0 2
0 0 1 1 2
*/


/*2.two sum arr[5]={4,2,3,4,1},target=5 check sum=taget ,yes or no 
string read(int n, vector<int> book, int target)
{
    // Write your code here.
    int left=0,right=n-1;//left and right are index
     sort(book.begin(),book.end());
     while(left<right)
     {
          int sum=book[left]+book[right];
          if(sum==target)
          {
               return "YES";//5=5
          }
          else if (sum<target)
          {
               left++;
          }
          else
          {
               right--;
          }
     }
     return "NO";
}

method second of two sum arr[5]={4,2,3,4,1},target=5 check sum=taget ,yes or no 

// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

string read(int n, vector<int> book, int target)
{
    // Write your code here.
    int left=0,right=n-1;//left and right are index
     sort(book.begin(),book.end());
     while(left<right)
     {
          int sum=book[left]+book[right];
          if(sum==target)
          {
               return "YES";//5=5
          }
          else if (sum<target)
          {
               left++;
          }
          else
          {
               right--;
          }
     }
     return "NO";
}

int main()
{
     int n;
     cin>>n;
     vector<int>book(n);
     for(int i=0;i<n;i++)
     {
          cin>>book[i];
     }
    //cout<<yesno(arr,n,target)
    cout<<read(n,book,7);
     
}
*/

/*3. find Majority Element  if (no of element>n/2)ex:arr[]={2,2,2,1,4} output 2 because 2 is comes maximum=3>n/2(5/2)

int majorityElement(vector<int> v) {
	// Write your code here
	int count=0;
	int element;
	for(int i=0;i<v.size();i++)
	{
		if(count==0)
		{
			count++;
			element=v[i];

		}
		else if(v[i]==element)
		{
               count++;
		}
		else 
		{
			count--;
		}
	}
	int count1=0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]=element)
		{
			count1++;
		}
	}
	if(count1>v.size()/2)
	{
		return element;
	}
	return -1;

}

*/
/* 4. Kadane's Maximum Subarray Sum
  
#include <iostream>
using namespace std;

    int maxSubArray(int nums[],int n) {
        int ans=nums[0];
        int sum=0;
        
        for(int i=0;i<n;i++){
          
            sum=sum+nums[i];
            if(sum<0){
                sum=0;
            }
            
            ans=max(ans,sum);
          
            
        }
        return ans;
        
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
    cout<<maxSubArray(arr,n);
    
    
}output
5 
-2 -3 7 4 9
20

*/

/*5.Best time to buy and sell stock(for maximum profit)
#include <iostream>
using namespace std;
int bestTimeToBuyAndSellStock(int prices[],int n) {
    // Write your code here.
    int mini=prices[0];
    int maxprofit=0;
    for(int i=0;i<n;i++)
    {
        int cost=prices[i]-mini;
        maxprofit=max(maxprofit,cost);
        mini=min(mini,prices[i]);
    }
    return maxprofit;
}
int main()
{
    int n;
    cin>>n;
    int prices[n];
    for(int i=0;i<n;i++)
    {
         cin>>prices[i];
    }
    cout<<bestTimeToBuyAndSellStock(prices,n);
    
}
output
5
23 10 55 66 77
67(maximumvalue-minimumvalue)

*/

/*6.
Alternate Numbers(posive and negative number will kept alternative position ex:arr[6]={1,2,-3,4,-2,-9} then output
arr[6]={1,-3,2,-2,4,-9}

vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    int n=a.size();
    vector<int>ans(n,0);
    int posindex=0;
    int negindex=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {

            ans[posindex]=a[i];
            posindex+=2;
        }
        else 
        {
            ans[negindex]=a[i];
            negindex+=2;
        }
    }
    return ans;
}

method second of alternative of positive and negative number
#include <iostream>
using namespace std;

int* alternativenumber(int arr[], int n) {
    int* ans = new int[n];
    int posindex = 0;
    int negindex = 1;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            ans[posindex] = arr[i];
            posindex += 2;
        } else {
            ans[negindex] = arr[i];
            negindex += 2;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    

   int* result = alternativenumber(arr, n);

   for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
   }

    //delete[] result;  // Don't forget to free the dynamically allocated memory.

    return 0;
}
/*11.binary search
#include <iostream>

using namespace std;
int binarySearch(int arr[],int n,int key)
{
     int s=0;//s means starting index
     int e=n-1;//e means ending index
     while(s<=e)
     {
         int  mid=(s+e)/2;
          if(arr[mid]==key)
          {
               return mid;
          }
          else if(arr[mid]>key)
          {
               e=mid-1;
          }
          else 
          {
               s=mid+1;
          }
     }
     return -1;
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
    int key;
    cin>>key;
    cout<<binarySearch(arr,n,key);
}
output
5
12 34 56  78 90
34
1

/*11. liner and binary
  #include <iostream>

using namespace std;
/*int LinerSearch(int arr[],int n,int key)
{
     for(int i=0;i<n;i++)
     {
          if(arr[i]==key)
          {
               return i;
          }
     }
     return -1;
     
}*/
int binarySearch(int arr[],int n,int key)
{
     for(int i=0;i<n;i++)
     {
          int s=0;
          int e=n-1;
          while(s<=e)
          {
               int mid=(s+e)/2;
               if(arr[mid]==key)
               {
                    return mid;//here mid is index
               }
               else if(arr[mid]<key)
               {
                    s=mid+1;
               }
               else 
               {
                    e=mid-1;
               }
               
          }
     }
     return -1;
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
     int key;
     cin>>key;
     //cout<<LinerSearch(arr,n,key);
    cout<<binarySearch(arr,n,key);

    return 0;
}

*/
/*12.set matfix zero
  #include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	 int col[m]={0};
     int row[n]={0};
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<m;j++)
          {
               if(matrix[i][j]==0)
               {
                    row[i]=1;
                    col[j]=1;
               }
          }
     }
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<m;j++)
          {
               if(row[i] || col[j])
               {
                    matrix[i][j]=0;
               }
          }
     }
     return matrix;
}
//second method of zero matrix
#include <iostream>
using namespace std;

void zeromatrix(int arr[100][100], int n, int m)
{
    int row[n] = {0};//all index zero
    int col[m] = {0};
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] || col[j])
            {
                arr[i][j] = 0;
            }
        }
    }
}

int main()
{
    int n, m;
    cout<<"enter the two array element"<<endl;
    cin >> n >> m;
    int arr[100][100];
    cout<<"enter the zeor matrix"<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    zeromatrix(arr, n, m);
     cout<<"output of zero matrix"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
} 
*/
/*13.rotate matrix by 90 degree
   #include<vector>

void rotateMatrix(vector<vector<int>> &mat){
	// Write your code here.
	int n=mat.size();
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			swap(mat[i][j],mat[j][i]);
		}
	}
	for(int i=0;i<n;i++)
	{
		reverse(mat[i].begin(),mat[i].end());
	}
	
}


//second method rotate matrix by 90 degree 

#include <iostream>
#include <algorithm>  // Include the algorithm header for swap and reverse
using namespace std;

const int MAX_SIZE = 100; // Define a maximum size for your array

void transpose(int arr[MAX_SIZE][MAX_SIZE], int n) {
   for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
   }
   for (int i = 0; i < n; i++) {
        reverse(arr[i], arr[i] + n);
   }
}

int main() {
   int n;
   cin >> n;
   int arr[MAX_SIZE][MAX_SIZE];

   for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
   }

   transpose(arr, n);

   for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
   }

   return 0;
}

*/
/*14.spiral matrix
  
vector<int> spiralMatrix(vector<vector<int>>&MATRIX) {
    // Write your code here.
    int n=MATRIX.size();
    int m=MATRIX[0].size();
    int left=0,right=m-1;
    int top=0,bottom=n-1;
    vector<int>ans;
    while(top<=bottom && left<=right) 
    {
        for(int i=left;i<=right;i++)
        {
               ans.push_back(MATRIX[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            ans.push_back(MATRIX[i][right]);
        }
        right--;
        if(top<=bottom)
        {
        for(int i=right;i>=left;i--)     
        {
            ans.push_back(MATRIX[bottom][i]);
        }
        bottom--;
        }
        if(left<=right)
        {
        for(int i=bottom;i>=top;i--)
        {
            ans.push_back(MATRIX[i][left]);
        }
        left++;
        }
    }

    return ans;

}
*/
/* 15.count the subarray with the given sum
   int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here
     int n = arr.size();
    int res = 0;

    // Calculate all subarrays.
    for (int i = 0; i < n; i++) {
        int currSum = 0;

        for (int j = i; j < n; j++) {

            // Calculate required sum.
            currSum += arr[j];

            // Check if currSum is equal to required sum.
            if (currSum == k) {
                res += 1;
            }
            else if(currSum > k) break;
        }
    }

    return res;

} */

/* count the subarray with given sum

#include <iostream>

using namespace std;
int subarraysum(int arr[],int n,int k)
{
     int res=0;
     for(int i=0;i<n;i++)
     {
          int cursum=0;
          for(int j=i;j<n;j++)
          {
               cursum+=arr[i];
               if(cursum==k)
               {
                    res+=1;
               }
               else if(cursum<arr[i])
               {
                    break;
                    
                    
               }
          }
     }
     return res;
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
    int k;
    cin>>k;
   cout<< subarraysum(arr,n,k);
    
}

// #include <bits/stdc++.h>
// using namespace std;

// void Bsh(vector<int> v, vector<int> v1)
// {
//    int x = v.size();
//    int y = v1.size();
//    set<int> s;
//    for (int i = 0; i < x; i++)
//    {
//         s.insert(v[i]);
//    }

//    for (int i = 0; i < y; i++)
//    {
//         s.insert(v1[i]);
//    }

//    for (auto it : s)
//    {
//         cout << it << " ";
//    }
// }

// int main()
// {
//    int n, n1;
//    cin >> n;
//    cin >> n1;

//    vector<int> v(n);
//    vector<int> v1(n1);

//    for (int i = 0; i < n; i++)
//    {
//         cin >> v[i];
//    }
//    for (int i = 0; i < n1; i++)
//    {
//         cin >> v1[i];
//    }

//    Bsh(v, v1);

//    return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int  missingnumber(int arr[],int n)
// {
//   int x=0;
//   int k=arr[0];
//   for(int i=0;i<n;i++)
//   {
//        if(arr[i]!=(i+k))
//        {
//            x=i+k;
//             break;
//        }
//   }
//   return x;
  
// }
// int main()
// {
//      int n;
//      cin>>n;
//      int arr[n]; 
//      cout<<"enter the array element";
//      for(int i=0;i<n;i++)
//      {
//           cin>>arr[i];
//      }
//      cout<<missingnumber(arr,n);
     
     
// }

17.in the given array find even number sum
#include<iostream>
using namespace std;
int main()
{
     int arr[3]={5,20,30};
     int sum=0;
     for(int i=0;i<3;i++)
     {
          if(arr[i]%2==0)
          {
              sum=sum+arr[i]; 
          }
     }
     cout<<sum;
}

