//insert list example
/* class Main//LL link list
{
     Node head;
     private int size;
     Main()
     {
          this.size=0;
     }
     class Node 
     {
          String data;
          Node next;
          Node(String data)//node of constructor
          {
               this.data=data;
               this.next=next;
               size++;
          }
     }
     //add-first
     public void addFirst(String data)//add first position in the link list
     {
          Node newNode=new Node(data);
          if(head==null)
          {
               head=newNode;
               return;
          }
          newNode.next=head;
          head=newNode;
     }
     //add-last 
     public void addLast(String data)//add last position in the link list
     {
          Node newNode=new Node(data);
          if(head==null)
          {
               head=newNode;
               return;
          }
          Node currNode=head;
          while(currNode.next!=null)
          {
               currNode=currNode.next;
          }
          currNode.next=newNode;
     }
     //print 
     public void printList()
     {
          if(head==null)
          {
               System.out.println("list is empty");
               return;
          }
         Node currNode=head;
          while(currNode!=null)
          {
               System.out.print(currNode.data+"->");//each time print curNode data
               currNode=currNode.next;//currNode is update
          }
          System.out.println("Null");
     }
     
     //delete first 
     public void deleteFirst()
     {
          if(head==null)
          {
               System.out.println("the list is empty");
               return;
          }
          size--;
          head=head.next;
     }
     ///delete last
     public void deleteLast()
     {
          if(head==null) // not any node
          {
               System.out.println("the list is empty");
               return;
          }
          size--;
          if(head.next==null)//single node
          {
               head=null;
               return;
          }
          Node secondLast=head;
          Node lastNode=head.next;//head.next=null->lastnode=null
          while(lastNode.next !=null)//null.next
          {
               lastNode=lastNode.next;
               secondLast=secondLast.next;
          }
          secondLast.next=null;
     }
     public int getSize()
     {
          return size;
     }
          
     public static void main(String args[])
     {
        Main list=new Main();//we want to makelink list so we should make object of link list
        list.addFirst("a");
        list.addFirst("is");
        list.printList();
        list.addLast("list");
        list.printList();
        list.addFirst("this");
        list.printList();
        list.deleteFirst();
        list.printList();
        list.deleteLast();
        list.printList();
        System.out.println(list.getSize());
         list.addFirst("this");
         System.out.println(list.getSize());
        
     }
}
output
is->a->Null
is->a->list->Null
this->is->a->list->Null
is->a->list->Null
is->a->Null
2
3 */

// second method add first,last and delete first ,last  and length,search;
/*import java.util.*;
class Main //LL
{
    public static void main(String args[])
    {
         LinkedList<String>list=new LinkedList<String>();
         list.addFirst("a");
         list.addFirst("is");
         System.out.println(list);
         list.addFirst("this");
         list.addLast("list");
         System.out.println(list);
         System.out.println(list.size());
         for(int i=0;i<list.size();i++)
         {
              System.out.print(list.get(i)+"->");
         }
         System.out.println("null");
     //    list.removeFirst();
     //    System.out.println(list);
     //    list.removeLast();
     //    System.out.println(list);
     list.remove(3);
     System.out.println(list);
    }
}
output
[is, a]
[this, is, a, list]
4
this->is->a->list->null
[this, is, a]  */



/*class Main//LL link list
{
     Node head;
     private int size;
     Main()
     {
          this.size=0;
     }
     class Node 
     {
          String data;
          Node next;
          Node(String data)//node of constructor
          {
               this.data=data;
               this.next=next;
               size++;
          }
     }
     //add-first
     public void addFirst(String data)//add first position in the link list
     {
          Node newNode=new Node(data);
          if(head==null)
          {
               head=newNode;
               return;
          }
          newNode.next=head;
          head=newNode;
     }
     //add-last 
     public void addLast(String data)//add last position in the link list
     {
          Node newNode=new Node(data);
          if(head==null)
          {
               head=newNode;
               return;
          }
          Node currNode=head;
          while(currNode.next!=null)
          {
               currNode=currNode.next;
          }
          currNode.next=newNode;
     }
     //print 
     public void printList()
     {
          if(head==null)
          {
               System.out.println("list is empty");
               return;
          }
         Node currNode=head;
          while(currNode!=null)
          {
               System.out.print(currNode.data+"->");//each time print curNode data
               currNode=currNode.next;//currNode is update
          }
          System.out.println("Null");
     }
     
     //delete first 
     public void deleteFirst()
     {
          if(head==null)
          {
               System.out.println("the list is empty");
               return;
          }
          size--;
          head=head.next;
     }
     ///delete last
     public void deleteLast()
     {
          if(head==null) // not any node
          {
               System.out.println("the list is empty");
               return;
          }
          size--;
          if(head.next==null)//single node
          {
               head=null;
               return;
          }
          Node secondLast=head;
          Node lastNode=head.next;//head.next=null->lastnode=null
          while(lastNode.next !=null)//null.next
          {
               lastNode=lastNode.next;
               secondLast=secondLast.next;
          }
          secondLast.next=null;
     }
     public int getSize()
     {
          return size;
     }
     public void reverseIterate()// reverse of the string ,int for iterative
     {
          Node prevNode=head;
          Node currNode=head.next;
          while(currNode !=null)
          {
               if(head==null || head.next==null)
               {
                    return;
               }
               Node nextNode=currNode.next;
               currNode.next=prevNode;
               //update 
               prevNode=currNode;
               currNode=nextNode;
          }
          head.next=null;
          head=prevNode;
     }
          
     public static void main(String args[])
     {
        Main list=new Main();//we want to makelink list so we should make object of link list
        list.addLast("this");
        list.addLast("is");
         list.addLast("a");
          list.addLast("boy");
        list.printList();
        list.reverseIterate();
        list.printList();
        
     }
}
output
this->is->a->boy->Null
boy->a->is->this->Null  */


/*class Main//LL link list
{
     Node head;
     private int size;
     Main()
     {
          this.size=0;
     }
     class Node 
     {
          String data;
          Node next;
          Node(String data)//node of constructor
          {
               this.data=data;
               this.next=next;
               size++;
          }
     }
     //add-first
     public void addFirst(String data)//add first position in the link list
     {
          Node newNode=new Node(data);
          if(head==null)
          {
               head=newNode;
               return;
          }
          newNode.next=head;
          head=newNode;
     }
     //add-last 
     public void addLast(String data)//add last position in the link list
     {
          Node newNode=new Node(data);
          if(head==null)
          {
               head=newNode;
               return;
          }
          Node currNode=head;
          while(currNode.next!=null)
          {
               currNode=currNode.next;
          }
          currNode.next=newNode;
     }
     //print 
     public void printList()
     {
          if(head==null)
          {
               System.out.println("list is empty");
               return;
          }
         Node currNode=head;
          while(currNode!=null)
          {
               System.out.print(currNode.data+"->");//each time print curNode data
               currNode=currNode.next;//currNode is update
          }
          System.out.println("Null");
     }
     
     //delete first 
     public void deleteFirst()
     {
          if(head==null)
          {
               System.out.println("the list is empty");
               return;
          }
          size--;
          head=head.next;
     }
     ///delete last
     public void deleteLast()
     {
          if(head==null) // not any node
          {
               System.out.println("the list is empty");
               return;
          }
          size--;
          if(head.next==null)//single node
          {
               head=null;
               return;
          }
          Node secondLast=head;
          Node lastNode=head.next;//head.next=null->lastnode=null
          while(lastNode.next !=null)//null.next
          {
               lastNode=lastNode.next;
               secondLast=secondLast.next;
          }
          secondLast.next=null;
     }
     public int getSize()
     {
          return size;
     }
     public void reverseIterate()// reverse of the string ,int for iterative
     {
          Node prevNode=head;
          Node currNode=head.next;
          while(currNode !=null)
          {
               if(head==null || head.next==null)
               {
                    return;
               }
               Node nextNode=currNode.next;
               currNode.next=prevNode;
               //update 
               prevNode=currNode;
               currNode=nextNode;
          }
          head.next=null;
          head=prevNode;
     }
     public Node reverseRecursive(Node head)//recursive method
     {
          if(head==null || head.next==null)
          {
               return head;
          }
         Node newhead= reverseRecursive(head.next);
         head.next.next=head;
         head.next=null;
         return newhead;
     }
          
     public static void main(String args[])
     {
        Main list=new Main();//we want to makelink list so we should make object of link list
        list.addLast("this");
        list.addLast("is");
         list.addLast("a");
          list.addLast("boy");
        list.printList();
        list.head=list.reverseRecursive(list.head);
        list.printList();
        
     }
}
output
this->is->a->boy->Null
boy->a->is->this->Null  */


//-------------------------------------STACK----------------------------------------------------------------------------------

//1. example statck implement in the linklist form
/*public class Main//StackClass 
{
     static class Node 
     {
          int data;
          Node next;
          public  Node(int data)
          {
             this.data=data;
             next=null;
          }
     }
     static class Stack{
          public static  Node head;//link list ka head and stack ka top 
          public static boolean isEmpty()
          {
               return head==null;
          }
          public static void push(int data)
          {
               Node newNode=new Node(data);
               if(isEmpty())
               {
                  head=newNode;
                  return;
               }
               newNode.next=head;
               head=newNode;
          }
          public static int pop()
          {
               if(isEmpty())
               {
                    return -1;
               }
                    int top=head.data;
                    head=head.next;
                    return top;
               
          }
          public static int peek()
          {
               
               if(isEmpty())
               {
                    return -1;
               }
               return head.data;
          }
          
     }
     public static void main(String args[])
     {
        Stack s=new Stack();
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        while(!s.isEmpty())
        {
             System.out.println(s.peek());
             s.pop();
        }
     }
}
output
4
3
2
1  */
//2 example stack using array list
/*import java.util.*;
public class Main 
{
      static class Stack
     {
         static ArrayList<Integer> list=new ArrayList<>();
          public static boolean isEmpty()
          {
              return list.size()==0;
          }
          //push 
          public static void push(int data)
          {
               list.add(data);
          }
          //pop
          public static int pop()
          {
               if(isEmpty())
               {
                    return -1;
               }
               int top=list.get(list.size()-1);
               list.remove(list.size()-1);
               return top;
               
          }
          //peek 
          public static int peek()
          {
             if(isEmpty())
               {
                    return -1;
               }  
                return list.get(list.size()-1);
          }
     }

public static void main(String args[])
     {
        Stack s=new Stack();
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        while(!s.isEmpty())
        {
             System.out.println(s.peek());
             s.pop();
        }
     }
}
output
4
3
2
1  */
//3.example  frint stack 4,3,2,1
/*import java.util.*;
public class Main 
{
   public static void main(String args[])
     {
        Stack<Integer>s=new Stack<>();
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        while(!s.isEmpty())
        {
             System.out.println(s.peek());
             s.pop();
        }
     }
} */ 

// 4. push at the Buttom of stack :3,2,1 but bottom 4
/*import java.util.*;
public class Main 
{
     public static void pushAtBottom(int data,Stack<Integer>s)
     {
          if(s.isEmpty())
          {
               s.push(data);
               return ;
          }
          int top=s.pop();// remove top element 
          pushAtBottom(data,s);
          s.push(top);
     }
   public static void main(String args[])
     {
        Stack<Integer>s=new Stack<>();
        s.push(1);
        s.push(2);
        s.push(3);
        pushAtBottom(4,s);
        while(!s.isEmpty())
        {
             System.out.println(s.peek());
             s.pop();
        }
     }
}
output
3
2
1 
4  */

//reverse stack 3,2,1=>1,2,3
/*import java.util.*;
public class Main 
{
     public static void pushAtBottom(int data,Stack<Integer>s)
     {
          if(s.isEmpty())
          {
               s.push(data);
               return ;
          }
          int top=s.pop();// remove top element 
          pushAtBottom(data,s);
          s.push(top);
     }
   public static void reverse(Stack<Integer>s)
   {
         if(s.isEmpty())
             {
                  return ;
             }
             int top=s.pop();
             reverse(s);
             pushAtBottom(top,s);
   }
   public static void main(String args[])
     {
        Stack<Integer>s=new Stack<>();
        s.push(1);
        s.push(2);
        s.push(3);
        reverse(s);
        while(!s.isEmpty())
        {
             System.out.println(s.peek());
             s.pop();
        }
     }
}
output
1 
2
3 */

// 1.find & delete the nth nodes from the end of linked list
// 2.cheack if a linked list is a palindrom 
// 3.delete a cycle in a linked list +trick the remove cycle
/*definition for single-liked list
public class ListNode
{
     int val;
     ListNode  next;
     ListNode(){}
     ListNode(int val)
     {
          this.val=val;
     }
     ListNode(int val,ListNode  next)
     {
          this.val=val;
          this.next=next
     }
     
} */
// example 1.
class Main// Solution 
{
     public ListNode removeNthFromEnd(ListNode head,int n)
     {
          if(head.next==null)
          {
               return null;
          }
          //size calculate
          int size=0;
          ListNode curr=head;
          while(curr !=null)
          {
               curr=curr.next;
               size++;
          }
          if(n==size)
          {
               return head.next;
          }
          //calculate previous node search
          int indexToSearch=size-n;
          ListNode prev=head;
          int i=0;
          while(i<indexToSearch)
          {
               prev=prev.next;// prev where from connection break
               i++;
          }
          // between nth node remove
          prev.next=prev.next.next;
          return head;
          
     }
}


/*import java.util.ArrayList;//package 
import java.util.*;
import java.util.Collections;
class Main //ArrrayLists
{
    public static void main(String args[])
    {
     // ArrayList used Object like Integer | Float | String | Boolean 
         ArrayList<Integer>list=new ArrayList<Integer>();
     //    ArrayList<String>list1=new ArrayLists<String>();
     //    ArrayList<Boolean>list2=new ArrayLists<Boolean>();
     
         //add element 
         list.add(0);
         list.add(2);
         list.add(3);
         list.add(10);
         System.out.println(list);
         
         //get elements 
         int element=list.get(3);//here .get(3) index tell me value of array list
         System.out.println(element);
         
         
         //add element in between 
         list.add(1,5);//here  1 is indicate index and 5 is indicate value on 1 index
         System.out.println(list);
         
         //delete element 
         list.remove(4);
         System.out.println(list);
         
         //size 
         int size=list.size();
         System.out.println(size);
         
         //loops
         for(int i=0;i<list.size();i++)
         {
              System.out.print(list.get(i));// here i is indecate index and get give value of index
         }
         System.out.println();
         
         
         //sorting 
         Collections.sort(list);//Collections is class 
         System.out.println(list);
    }
}
output
[0, 2, 3, 10]
10
[0, 5, 2, 3, 10]
[0, 5, 2, 3]
4
0523
[0, 2, 3, 5]  */













