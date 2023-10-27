pythen
[19:08, 10/12/2022] sachin Kumar: #write a program to print hellow world
print('''hellow world,hellow world,hellow world,hellow world,hellow world,hellow world,hellow world,hellow world,hellow world,hellow world,hellow world,
hellow world,hellow world,hellow world,hellow world''')
#correct
[19:11, 10/12/2022] sachin Kumar: #write a program to print hellow world
print("hellow world")# " is a single line but multipale line use '''
#correct
[19:13, 10/12/2022] sachin Kumar: '''write a program to print hellow world'''# here ''' word ''' used comment line  and same #
print("hellow world")# " is a single line but multipale line use '''
#correct
[19:37, 10/12/2022] sachin Kumar: # use repl and print the table of 5 using iter?
# repl means read evalute print loop
 
n=int(input("enter the number"))
for i in range(1,11):
    print(n,"*",i,"=",n*i)
[19:42, 10/12/2022] sachin Kumar: # use repl and print the table of 5 using iter?
# repl means read evalute print loop
 
n=int(input("enter the number"))
for i in range(1,11):
    print(n,"*",i,"=",n*i)
 
 output
 
    5*1=5
    5*2=10
    5*3=15
    5*4=20
    5*5=25
    5*6=30
    5*7=35
    5*8=40
    5*9=45
    5*10=50
[19:56, 10/12/2022] sachin Kumar: #install an external module and used to perdform of operation internet
 from playsound import playsound
playsound('/path/to/a/sound/file/you/want/to/play.mp3')
[20:04, 10/12/2022] sachin Kumar: #write a pythen program to print the contents of a directory using os module.search online for the fuction which does that
import os
print(os.listdir())
output
[main.py]
[20:07, 10/12/2022] sachin Kumar: #label the program written in problem 4 with comments?
 
#sgdyhuujfj
import os
print(os.listdir())
output
[main.py]
[17:16, 10/13/2022] sachin Kumar: # here a is string,b is integer,c is floating point,d is boolean,e is none
# a,b,c,d,e is variable
# datatuype integer,floating point,string,blooeans,none
# bolleans means either true or False
# none meane neither true,false
a="sachin"
b=345
c=45.78
d=True
# e=none
print(a)
print(b)
print(c)
print(d)
# print(e)
[17:16, 10/13/2022] sachin Kumar: output sachin
345
45.78
True
[17:30, 10/13/2022] sachin Kumar: a='''sachin'''
b=345
c=45.78
# printing the variables
print(a)
print(b)
print(c)
#printing the type of variables
print(type(a))
print(type(b))
print(type(c))
out put
sachin
345
45.78
<class 'str'>
<class 'int'>
<class 'float'>
[17:31, 10/13/2022] sachin Kumar: _a='''sachin'''
b=345
c=45.78
# printing the variables
print(_a)
print(b)
print(c)
#printing the type of variables
print(type(_a))
print(type(b))
print(type(c))
output
sachin
345
45.78
<class 'str'>
<class 'int'>
<class 'float'>
[17:38, 10/13/2022] sachin Kumar: a_22='''sachin'''
b=345
c=45.78
# printing the variables
print(a_22)
print(b)
print(c)
#printing the type of variables
print(type(a_22))
print(type(b))
print(type(c))
output
sachin
345
45.78
<class 'str'>
<class 'int'>
<class 'float'>
[17:53, 10/13/2022] sachin Kumar: ''' in the pythen mainly four common operater like 
    1.arthematic operaters->+,-,*,/ etc
    2.assigment operaters->=,+=,-= etc
    3.compression operaters->==,>,>=,<,!= etc 
    4.logical operaters -> and,or, not etc '''
# 1.arthematic operater
a=20
b=5
print("the value of 20+5 is",20+5)
print("the value of 20-5 is",20-5)
print("the value of 20*5 is",20*5)
print("the value of 20/5 is",20/5)
print("the value of 20%5 is",20%5)
output
the value of 20+5 is 25
the value of 20-5 is 15
the value of 20*5 is 100
the value of 20/5 is 4.0
the value of 20%5 is 0
[18:15, 10/13/2022] sachin Kumar: ''' in the pythen mainly four common operater like 
    1.arthematic operaters->+,-,*,/ etc
    2.assigment operaters->=,+=,-= etc
    3.compression operaters->==,>,>=,<,!= etc 
    4.logical operaters -> and,or, not etc '''
# 1.arthematic operater
'''a=20
b=5
print("the value of 20+5 is",20+5)
print("the value of 20-5 is",20-5)
print("the value of 20*5 is",20*5)
print("the value of 20/5 is",20/5)
print("the value of 20%5 is",20%5)
output
the value of 20+5 is 25
the value of 20-5 is 15
the value of 20*5 is 100
the value of 20/5 is 4.0
the value of 20%5 is 0 '''
# 2.assigment operaters
'''a=34
b=30
c=50
d=35
a+=2
b-=20
c*=3
d/=5
print(a)
print(b)
print(c)
print(d)
output
36
10
150
7.0'''
#3.compression operaters
'''a=(14>7)
b=(18>=7)
c=(12<11)
d=(12<=12)
e=(12!=10)
print(a)
print(b)
print(c)
print(d)
print(e)
outtput
True
True
False
True
True'''
# 4.logical operaters
'''bool1=True
bool2=False
print("the vale of bool1 and bool2 is",(bool1 and bool2 ))
print("the vale of bool1 or bool2 is",(bool1 or bool2 ))
print("the vale of not bool2 is",(not bool2 ))
out output
the vale of bool1 and bool2 is False
the vale of bool1 or bool2 is True
the vale of not bool2 is True'''
[18:44, 10/13/2022] sachin Kumar: ''' in the pythen mainly four common operater like 
    1.arthematic operaters->+,-,*,/ etc
    2.assigment operaters->=,+=,-= etc
    3.compression operaters->==,>,>=,<,!= etc 
    4.logical operaters -> and,or, not etc '''
# 1.arthematic operater
'''a=20
b=5
print("the value of 20+5 is",20+5)
print("the value of 20-5 is",20-5)
print("the value of 20*5 is",20*5)
print("the value of 20/5 is",20/5)
print("the value of 20%5 is",20%5)
output
the value of 20+5 is 25
the value of 20-5 is 15
the value of 20*5 is 100
the value of 20/5 is 4.0
the value of 20%5 is 0 '''
# 2.assigment operaters
'''a=34
b=30
c=50
d=35
a+=2
b-=20
c*=3
d/=5
print(a)
print(b)
print(c)
print(d)
output
36
10
150
7.0'''
#3.compression operaters
'''a=(14>7)
b=(18>=7)
c=(12<11)
d=(12<=12)
e=(12!=10)
print(a)
print(b)
print(c)
print(d)
print(e)
outtput
True
True
False
True
True'''
# 4.logical operaters
'''bool1=True
bool2=False
print("the vale of bool1 and bool2 is",(bool1 and bool2 ))
print("the vale of bool1 or bool2 is",(bool1 or bool2 ))
print("the vale of not bool2 is",(not bool2 ))
out output
the vale of bool1 and bool2 is False
the vale of bool1 or bool2 is True
the vale of not bool2 is True'''
# typecasting means it  is change datatype anyvariable
'''a="3434"
a=int(a)
print(type(a))
print(a+5)
output
<class 'int'>
3439'''
# here a is not integer becase  value is between" 3434"
'''a="3434"
print(type(a))
print(a+5)
output
<class 'str'>
Traceback (most recent call last):
  File "main.py", line 75, in <module>
    print(a+5)
TypeError: can only concatenate str (not "int") to str'''
# change the datatype any variable
'''a=31
print(a)
b="31"
print(type(b))
output
31
<class 'str'>'''
# input fuction
'''a=input("enter youer name:")
print(a)
output
enter youer name:sachin
sachin'''
# cheak which datatype
'''a=input("enter youer name:")
print(type(a))
output
enter youer name:sachin
<class 'str'>'''
# change the datatype
'''a=input("enter youer name:")
a=int(a)
print(type(a))#convert a to integer(if possible)here name is not integer but number is not integer
output
enter youer name:7
<class 'int'>'''
[19:22, 10/13/2022] sachin Kumar: ''' in the pythen mainly four common operater like 
    1.arthematic operaters->+,-,*,/ etc
    2.assigment operaters->=,+=,-= etc
    3.compression operaters->==,>,>=,<,!= etc 
    4.logical operaters -> and,or, not etc '''
# 1.arthematic operater
'''a=20
b=5
print("the value of 20+5 is",20+5)
print("the value of 20-5 is",20-5)
print("the value of 20*5 is",20*5)
print("the value of 20/5 is",20/5)
print("the value of 20%5 is",20%5)
output
the value of 20+5 is 25
the value of 20-5 is 15
the value of 20*5 is 100
the value of 20/5 is 4.0
the value of 20%5 is 0 '''
# 2.assigment operaters
'''a=34
b=30
c=50
d=35
a+=2
b-=20
c*=3
d/=5
print(a)
print(b)
print(c)
print(d)
output
36
10
150
7.0'''
#3.compression operaters
'''a=(14>7)
b=(18>=7)
c=(12<11)
d=(12<=12)
e=(12!=10)
print(a)
print(b)
print(c)
print(d)
print(e)
outtput
True
True
False
True
True'''
# 4.logical operaters
'''bool1=True
bool2=False
print("the vale of bool1 and bool2 is",(bool1 and bool2 ))
print("the vale of bool1 or bool2 is",(bool1 or bool2 ))
print("the vale of not bool2 is",(not bool2 ))
out output
the vale of bool1 and bool2 is False
the vale of bool1 or bool2 is True
the vale of not bool2 is True'''
# typecasting means it  is change datatype anyvariable
'''a="3434"
a=int(a)
print(type(a))
print(a+5)
output
<class 'int'>
3439'''
# here a is not integer becase  value is between" 3434"
'''a="3434"
print(type(a))
print(a+5)
output
<class 'str'>
Traceback (most recent call last):
  File "main.py", line 75, in <module>
    print(a+5)
TypeError: can only concatenate str (not "int") to str'''
# change the datatype any variable
'''a=31
print(a)
b="31"
print(type(b))
output
31
<class 'str'>'''
# input fuction
'''a=input("enter youer name:")
print(a)
output
enter youer name:sachin
sachin'''
# cheak which datatype
'''a=input("enter youer name:")
print(type(a))
output
enter youer name:sachin
<class 'str'>'''
# change the datatype
'''a=input("enter youer name:")
a=int(a)
print(type(a))#convert a to integer(if possible)here name is not integer but number is not integer
output
enter youer name:7
<class 'int'>'''
#1. write a pythen program add two number?
'''a=20
b=10
print("the sum of a and b =",a+b)
output
30'''
#2. write a pythen program to find remainder when a number is devided by 2?
'''a=45
b=2
print("the remender when a is divided by b",a%b)
output
the remender wwhich a is divided by b 1'''
#3.cheak the type of variable  assiged using input()function?
'''a=input("enter your name:")
print(type(a))
output
enter your name:sachin
<class 'str'>'''
#4.use compression operaters to find out wheter a given variable a is greater then b or not.take a=34 and b=80
'''a=34
b=80
print("a is greater than b",a>b)
output
a is greater than b False'''
#5 write a pythen program to find aveerage of two numbrer enter by the user
'''a=input("enter the first number")
b=input("enter the second number")
a=int(a)
b=int(b)
avg=(a+b)/2;
print("average vale of a and b",avg)
output
enter the first number 23
enter the second number24
average vale of a and b 23.5'''
#6.write a program to calculate square of a number entered by the user
'''a=input("enter the a number")
a=int(a)
square=a*a
print("square of a",square)
output
enter the a number 25
square of a 625'''
 
 
//2.day friday ka work//
# string is a data type in pythen
# string is sequence of character
'''string is a sequance of characters inclosed in quotes
    ex 1.single quoted stringe->a='sachin'
       2.double quoted stringe->b="sachin"
       3.triple quoted stringe->c='"sachin"'
'''
#1. when interger and string both are print when we take  type cast integer then class is integer 
'''
a=34
b="sachin"
print(a,b)
print(type(a))
output
34 sachin
<class 'int'>'''
## 2.when interger and string both are print when we take  type cast string then class is string
'''a=34
b="sachin"
print(a,b)
print(type(b))
output
34 sachin
<class 'str'>'''
# use this if you have single quotes in your string
'''b="sachin's"
b="sachin's'
print(b)
output
File "main.py", line 26
    b="sachin's'
               ^
SyntaxError: EOL while scanning string literal'''
# used thripal quote
'''
b='"sachin"s and sachin's"'
print(b)
output
sachin"s and sachin's '''
# used name  and greeting both are add here two string addition
#concatenating two string
'''greeting="good morning,"
name="sachin"
print(type(name))
c=greeting+name
print(c)
output
<class 'str'>
good morning,sachin'''
# work of index in string
'''name="sachin"
print(name[2])
output
c'''
#stringlength(sl)=name[index start:index end]
#here index start==first index include,index end =last index is not include
#sl[o:3] retutn "sac"->character from 0 to 3
#sl[:3] retutn "ac"->character from 0 to 3 # for sachin
# we can take some word in full word when take index  start 0
# print(name[:4]) is same as name[0:4]
'''name="sachin"
print(name[0:4])
output
sach'''
# we can take some word in full word when take index  start 1
'''name="sachin"
print(name[2:5])
output
chi'''
#check length of stringlength
'''1.name="sachin"
print(name[0:])
output
sachin'''
'''2.name="sachin"
print(name[1:])# is a same  as[1:6]
output
achin'''
#-1 is start last index but negative nuber start last index
'''name="sachin"
print(name[-5:-1])
output
achi'''
# slicing with skip value
# word="amazing" here word[1:6:2]->mzn
'''1.name="sachin"
d=name[0:4:2]# 0 repregent first index,4 repregent index 4 tak and 2 repregent skip 2 character
print(d)
output
sc'''
'''2.name="sachin"
d=name[0::2]# 2 repreget skip 2 character regular
print(d)
output
sci'''
#string function
#string.endswith("sachin")
'''story="sachin is a very week in the programming so i learn pyton  is a language"
print(len(story))#used lenth function
print(story.endswith("notes"))# endswith used check last string name which is finished last word when last we take then it is true oherwise false
print(story.endswith("language"))#true be
print(story.count("a"))#string.count(" c")here check number of chacter c 
print(story.count("is"))# check number of string
print(story.capitalize())
print(story.find("language"))#check string is include in story when it is include computer told string is pregent how many place
print(story.find("saurav"))# when string is not include then indecate -1
print(story.replace("sachin","prahalad"))#it is repace other string
output
72
False
True
7
2
Sachin is a very week in the programming so i learn pyton  is a language
64
-1
prahalad is a very week in the programming so i learn pyton  is a language'''
#\n(backslase)->it repregent new line
'''story="sachin is good  boy.\nhe\t is very good"
print(story)
output
sachin is good  boy.
he       is very good'''
#1.write a program to display a user entered name followed by good afternoon using input()function
'''name=input("enter your name\n")
print("good afternoon,"+name)
output
enter your name
sachin
good afternoon,sachin'''
#2.write a program to fill in a letter teplete given below with name and date
#letter='''dear<|name|>,you are selected!,<||date1>'''
'''letter='"Dear<|NAME|>,
greatting from abc house.i am happy to tell you about your selected
          you are selected!
          have a great day ahead!
 
          thanks and regards,bill
          Date:  <||DATE|>
        "'
name=input("enter your name\n")
date=input("enter the date\n")
letter=letter.replace("<|NAME|>,name")
letter=letter.replace("<|DATE|>,date")
print(letter)
output
enter your name
sachin
enter the date
2 nov
Traceback (most recent call last):
  File "main.py", line 143, in <module>
    letter=letter.replace("<|NAME|>,name")
TypeError: replace expected at least 2 arguments, got 1'''# wong output
#3.write a program to detect double spaces in a string?
'''st="this is a string with double  space "
doubleSpace=st.find("  ")
print(doubleSpace)
output
28'''
#4.replace the doundle spaces from problem 3 with single spaces
'''st="this is a string with double  space"
st=st.repace("  "," ")
print(st)
output
this is string with double spaces'''
#5.write a program to formate the following letter using eslape sequence characters
#letter="Dear Harry,This python course is nice!Thanks!"
'''letter="Dear Harry,This python course is nice!Thanks!"
print(letter)
formated_letter="Dear Harry,\n\tThis python course is nice!\nThanks!"
print(formated_letter)
output
Dear Harry,This python course is nice!Thanks!
Dear Harry,
        This python course is nice!
Thanks!'''
 
 
 
//3.day saturday ka work//
#pythen lists are containers to store a set of values of any data type
#friends=["apple","akash","rohan",7,false]
''''a=[1,4,6,89,45]
print(a)
output
[1, 4, 6, 89, 45]'''
 
''''a=[1,4,6,89,45]
print(a[1])
output
4'''
 
''''a=[1,4,6,89,45]
print(a[4])
output
45'''
 
# create a list using []
''''a=[1,4,6,89,45]
a[0]=78
print(a)
output
[78, 4, 6, 89, 45]'''
 
'''a=[1,4,6,89,45]
a[0]=78
print(a[0])
output
78'''
 
#create a list using []
'''a=[1,2,4,56,6]
#print the list using print() function()
print(a)
#access using index using a[0],a[1],a[2]
print(a[2])
#chnge the value of list using
a[0]=98
print(a)
output
[1, 2, 4, 56, 6]
4
[98, 2, 4, 56, 6]'''
 
 
#we can create list with with items of different type
'''c=[45,"sachin","false",6.8]
print(c)
output
[45, 'sachin', 'false', 6.8]'''
 
 
#list slicing
'''friends=["sachin","azad","navlesh","deepak",45]
print(friends[0:4])
print(friends[-3:])
output
'sachin', 'azad', 'navlesh', 'deepak']
['navlesh', 'deepak', 45]'''
 
 
 
# sortest arry
'''l1=[2,6,3,8,5,78,45,71]
print(l1)
l1.sort()# sorts the list
print(l1)
output
[2, 6, 3, 8, 5, 78, 45, 71]
[2, 3, 5, 6, 8, 45, 71, 78]'''
 
 
 
#reverse arry
'''l1=[2,6,3,8,5,78,45,71]
print(l1)
l1.reverse()# reverse the list
print(l1)
output
[2, 6, 3, 8, 5, 78, 45, 71]
[71, 45, 78, 5, 8, 3, 6, 2]'''
 
 
# dout append in arry
'''l1=[2,6,3,8,5,78,45,71]
print(l1)
l1.append(100)
l1.append(105)# adds at the end of list
print(l1)
output
[2, 6, 3, 8, 5, 78, 45, 71]
[2, 6, 3, 8, 5, 78, 45, 71, 100, 105]'''
 
 
 
# insert element  in arry
'''l1=[2,6,3,8,5,78,45,71]
print(l1)
l1.insert(2,512)#inserts 512nat index 2
print(l1)
output
[2, 6, 3, 8, 5, 78, 45, 71]
[2, 6, 512, 3, 8, 5, 78, 45, 71]'''
 
 
 
# pop element in the arry
'''l1=[2,6,3,8,5,78,45,71]
print(l1)
l1.pop(3)#remove element at index 3
print(l1)
output
[2, 6, 3, 8, 5, 78, 45, 71]
[2, 6, 3, 5, 78, 45, 71]'''
 
 
 
# remove element in the arry
'''l1=[2,6,3,8,5,78,45,71]
print(l1)
l1.remove(78)#remove 78 from a list
print(l1)
output
[2, 6, 3, 8, 5, 78, 45, 71]
[2, 6, 3, 8, 5, 45, 71]'''
 
 
 
#create a tuple using()
'''t=(1,2,4,5)
#printing the element of a tuple
print(t[0])
#can not update the values of a tuple
t[0]=34
output
Traceback (most recent call last):
  File "main.py", line 134, in <module>
    t[0]=34
TypeError: 'tuple' object does not support item assignment'''
 
 
 
 
#create a tuple using()
'''t=(1,2,4,5)
#t1=()#empty tuple
#t1=(1)#wrong way to declare a tuple with  single element
t1=(1,)#tuple with single element
print(t1)
output
(1,)'''
 
#creating a tuple using()
'''t=(1,2,4,5,1,2,1,1,5,6,1,2,1)
print(t.count(1))#count nuber of 1
output
6'''
 
 
# inserting element cheak index
'''t=(1,2,4,1,2,1,1,5,6,1,2,1)
print(t.count(1))#count nuber of 1
print(t.index(5))#number 5 exit in index 7
output
6
7'''
 
 
#pratic set
#1.write a program to store seven fruits in a list enter by user?
'''f1=input("enter frue number 1:")
f2=input("enter frue number 2:")
f3=input("enter frue number 3:")
f4=input("enter frue number 4:")
f5=input("enter frue number 5:")
f6=input("enter frue number 6:")
f7=input("enter frue number 7:")
myfruitlist=[f1,f2,f3,f4,f5,f6,f7]
print(myfruitlist)
output
enter frue number 1:apple
enter frue number 2:banana
enter frue number 3:guava
enter frue number 4:mango
enter frue number 5:graapes
enter frue number 6:watermelon
enter frue number 7:pears
['apple', 'banana', 'guava', 'mango', 'graapes', 'watermelon', 'pears']'''
 
 
#2.write a program to accept marks of 6 students and display then in a stored manner
'''m1=int(input("enter marks for student number 1:"))
m2=int(input("enter marks for student number 2:"))
m3=int(input("enter marks for student number 3:"))
m4=int(input("enter marks for student number 4:"))
m5=int(input("enter marks for student number 5:"))
m6=int(input("enter marks for student number 6:"))
mylist=[m1,m2,m3,m4,m5,m6]
mylist.sort()
print(mylist)
output
enter marks for student number 1:2
enter marks for student number 2:1
enter marks for student number 3:4
enter marks for student number 4:7
enter marks for student number 5:3
enter marks for student number 6:9
[1, 2, 3, 4, 7, 9]'''
 
 
 
#3.check that a tuple cannot be changed in python?
'''a=(2,4,5,6,3)
a[0]=45
print(a[0])
output
Traceback (most recent call last):
  File "main.py", line 212, in <module>
    a[0]=45
TypeError: 'tuple' object does not support item assignment'''
 
 
 
#write a program to sum a list with 4 number?
'''a=[3,6,34,56]
print(a[0]+a[1]+a[2]+a[3])
print(sum(a))
output
99
99'''
 
 
#write a program to count the number of zeros in the following tuple:a=(7,0,8,0,0,9)?
'''a=(7,0,8,0,0,9)
print(a.count(0))
output
3'''
 
 
//3.day sunday ka work//
[10:12, 10/16/2022] sachin Kumar: #dictonary and sets
#dictonary is a collection  of key-value pairs
# syntex: a={"key":"value","sachin":"code","markes":"100","list":[1,2,9]}
#a["key"]->prints"value"
#a["list"]->prints[1,2,9]
'''mydict={"fast":"in a quick manner","sachin":"a coder","markes":"[1,3,100]","anotherdict":{'sachin':'player'}}
print(mydict['fast'])
print(mydict['sachin'])
print(mydict['markes'])
print(mydict['anotherdict'])
print(mydict['anotherdict']['sachin'])
output
in a quick manner
a coder
[1,3,100]
{'sachin': 'player'}
player'''
 
 
 
#properties of a python dictionary
#1.it is unorder
#2. it is mutable here mutable means value change 
#3.it is index
#4.cannot contains doublecates key
'''mydict={"fast":"in a quick manner","sachin":"a coder","markes":"[1,3,100]","anotherdict":{'s…
[12:47, 10/16/2022] sachin Kumar: #dictonary and sets
#dictonary is a collection  of key-value pairs
# syntex: a={"key":"value","sachin":"code","markes":"100","list":[1,2,9]}
#a["key"]->prints"value"
#a["list"]->prints[1,2,9]
'''mydict={"fast":"in a quick manner","sachin":"a coder","markes":"[1,3,100]","anotherdict":{'sachin':'player'}}
print(mydict['fast'])
print(mydict['sachin'])
print(mydict['markes'])
print(mydict['anotherdict'])
print(mydict['anotherdict']['sachin'])
output
in a quick manner
a coder
[1,3,100]
{'sachin': 'player'}
player'''
 
 
 
#properties of a python dictionary
#1.it is unorder
#2. it is mutable here mutable means value change 
#3.it is index
#4.cannot contains doublecates key
'''mydict={"fast":"in a quick manner","sachin":"a coder","markes":"[1,3,100]","anotherdict":{'sachin':'player'}}
print(mydict['fast'])
print(mydict['sachin'])
mydict['markes']=[43,67,68]
print(mydict['markes'])
print(mydict['anotherdict'])
print(mydict['anotherdict']['sachin'])
output
in a quick manner
a coder
[43, 67, 68]
{'sachin': 'player'}
player'''
 
 
 
 
#dictionary method
'''mydict={"fast":"in a quick manner","sachin":"a coder","markes":"[1,3,100]","anotherdict":{'sachin':'player'},1:2}
print(mydict.keys())
print(type(mydict.keys()))#prints the keys of the dictionary
print(list(mydict.keys()))
print(list(mydict.values()))#prints the values of the dictionary
print(mydict.items())#prints the (key,value)for all containts items of the dictionary
 
print(mydict)
updatedict={"lovish":"friend","azad":"best friend","sam":"college friend"}#heate mupdate means new item addes
mydict.update(updatedict)#update the dictionary by adding key_value pairs from updates
print(mydict)
 
 
print(mydict.get("sachin"))# prints vaue associated with key "sachin"
print(mydict["sachin"])# prints vaue associated with key "sachin"
 
#the difference between  .get and []syntex in dictionaries?
print(mydict.get("sachin2"))# return none as sachin2 is not present in the dictinary
print(mydict["sachin2"])#throws an error  as sachin2 is not present in the dictionary
output
dict_keys(['fast', 'sachin', 'markes', 'anotherdict', 1])
<class 'dict_keys'>
['fast', 'sachin', 'markes', 'anotherdict', 1]
['in a quick manner', 'a coder', '[1,3,100]', {'sachin': 'player'}, 2]
dict_items([('fast', 'in a quick manner'), ('sachin', 'a coder'), ('markes', '[1,3,100]'), ('anotherdict', {'sachin': 'player'}), (1, 2)])
{'fast': 'in a quick manner', 'sachin': 'a coder', 'markes': '[1,3,100]', 'anotherdict': {'sachin': 'player'}, 1: 2}
{'fast': 'in a quick manner', 'sachin': 'a coder', 'markes': '[1,3,100]', 'anotherdict': {'sachin': 'player'}, 1: 2, 'lovish': 'friend', 'azad': 'best friend', 'sam': 'college friend'}
a coder
a coder
None
Traceback (most recent call last):
  File "main.py", line 62, in <module>
    print(mydict["sachin2"])#throws an error  as sachin2 is not present in the dictionary
KeyError: 'sachin2' '''
 
#set inpythen->set is collection of non repetative elements
# s=set()->no repetition allow
#s.add(1)
#s.add(2)->or set={1,2}
'''a={1,3,5,7,9,1,2,3,2,1}
print(a)
print(type(a))
output
{1, 2, 3, 5, 7, 9}
<class 'set'>'''
 
 
#important:this syntax will create an empty dictionary and not an empty set
'''a={}
print(type(a))
# an empty set can be created using the blow syntax
b=set()
print(type(b))
output
<class 'dict'>
<class 'set'>'''
 
 
#creating an empty set
'''b=set()
print(type(b))
#adding value to an empty set
b.add(4)
b.add(5)
b.add(5)
b.add(5)
b.add(4)
b.add(7)#adding a value repeatedly does not changes a set
b.add((4,5,8))#note we can not used  the list ex b.add[4,5,8] in the set.list is not hasable in the list and not used dictnary ex b.add({4:5})
#b.add({4:5})#can not add list and dictionary to set
print(b)
print(len(b))#prints the lenghts of this set
b.remove(5)#removel of item 5
print(b)
print(b.pop())
print(b)
output
<class 'set'>
{(4, 5, 8), 4, 5, 7}
4
{(4, 5, 8), 4, 7}
(4, 5, 8)
{4, 7}'''
 
 
 
#remove 55 which is not contain in the sett
'''b=set()
print(type(b))
#adding value to an empty set
b.add(4)
b.add(5)
b.add(5)
b.add(5)
b.add(4)
b.add(7)#adding a value repeatedly does not changes a set
b.add((4,5,8))#note we can not used  the list ex b.add[4,5,8] in the set.list is not hasable in the list and not used dictnary ex b.add({4:5})
#b.add({4:5})#can not add list and dictionary to set
print(b)
print(len(b))#prints the lenghts of this set
b.remove(55)#throws an error while trying to move 15 but 55 can noot contain in the sets
print(b)
output
<class 'set'>
{(4, 5, 8), 4, 5, 7}
4
Traceback (most recent call last):
  File "main.py", line 139, in <module>
    b.remove(55)
KeyError: 55'''
 
 
#properties of sets
#1.set are unordered->element's order does not matter
#2.sets are unindex->can not access elements by index
#3.there is no way to change items in sets
#4.sets can not contains dublicates values
 
#pratic set 5
#1.write a prrogram to create a dictionary of hindi words with values as theirs english translattion.provide user with an option to look it up!
# using dictionary
'''mydict={"pankha":"fan","dabba":"box","vastu":"item"}
print("options are",mydict.keys())
a=input("enter the hindi word\n")
print("the meaning of your word is:",mydict[a])
output
options are dict_keys(['pankha', 'dabba', 'vastu'])
enter the hindi word
vastu
the meaning of your word is: item'''
 
 
 
#key are not avilable in dictionary
'''mydict={"pankha":"fan","dabba":"box","vastu":"item"}
print("options are",mydict.keys())
a=input("enter the hindi word\n")
#print("the meaning of your word is:",mydict[a])
#below line will not throw an error if the key is not present in the dictionary
print("the meaning of your word is:",mydict.get(a))#get used not avalable key in dictionary
options are dict_keys(['pankha', 'dabba', 'vastu'])
enter the hindi word
pen
the meaning of your word is: None'''
 
 
#2.write a program to input eight numbers from the user and display all the unique number(once)?
#unique mens sets
'''num1=int(input("enter the number 1\n"))
num2=int(input("enter the number 2\n"))
num3=int(input("enter the number 3\n"))
num4=int(input("enter the number 4\n"))
num5=int(input("enter the number 5\n"))
num6=int(input("enter the number 6\n"))
num7=int(input("enter the number 7\n"))
num8=int(input("enter the number 8\n"))
s={num1, num2, num3, num4, num5, num6, num7, num8}
print(s)
output
enter the number 1
23
enter the number 2
34
enter the number 3
56
enter the number 4
67
enter the number 5
54
enter the number 6
39
enter the number 7
24
enter the number 8
12
{34, 67, 39, 12, 54, 23, 56, 24}'''
 
 
 
 #3.can we have a set with 18(int) and "18"(str) as a values in it?
''' s={18,"18",18.1}
 print(s)
output
File "main.py", line 222
    s={18,"18",18.1}
    ^
IndentationError: unexpected indent'''
 
 
 
#4.what will be the length of following set s.
#s=set()
#s.add(20)
#s.add(20.0)
#s.add("20")?->length of s after these operations
'''s={20,20.0,"20"}#20 and 20.0 only one time count
print(s)
print(len(s))
output
{20, '20'}
2'''
 
#5.s={},what is the type of s
'''s={}
print(type(s))
output
<class 'dict'>'''
 
 
#6.create an empty dictionary.allow 4 friends to enter their favourate language as values and use keys as their names.assume that the names are uniue
'''favouratelanguage={}
a=input("enter your favourate language sachin\n")
b=input("enter your favourate language prahalad\n")
c=input("enter your favourate language kthies\n")
d=input("enter your favourate language sam\n ")
favouratelanguage['sachin']=a
favouratelanguage['prahalad']=b
favouratelanguage['kthies']=c
favouratelanguage['sam']=d
print(favouratelanguage)
output
enter your favourate language sachin
python
enter your favourate language prahalad
c++
enter your favourate language kthies
c 
enter your favourate language sam
 java
{'sachin': 'python', 'prahalad': 'c++', 'kthies': 'c', 'sam': 'java'}'''
 
 
#7.if names of 2 friends are same;what will happen to the program in problem 6
'''a=input("enter your favourate language sachin\n")
b=input("enter your favourate language prahalad\n")
c=input("enter your favourate language kthies\n")
d=input("enter your favourate language sam\n ")
favouratelanguage['sachin']=a
favouratelanguage['prahalad']=b
favouratelanguage['prahalad']=c
favouratelanguage['sam']=d
print(favouratelanguage)
output
enter your favourate language sachin
python
enter your favourate language prahalad
c++
enter your favourate language kthies
c 
enter your favourate language sam
 java
Traceback (most recent call last):
  File "main.py", line 281, in <module>
    favouratelanguage['sachin']=a
NameError: name 'favouratelanguage' is not defined'''
 
 
#if language of two friends are same;what will happen to the program in problem 6?
'''a=input("enter your favourate language sachin\n")
b=input("enter your favourate language prahalad\n")
c=input("enter your favourate language kthies\n")
d=input("enter your favourate language sam\n ")
favouratelanguage['sachin']=a
favouratelanguage['prahalad']=b
favouratelanguage['prahalad']=b
favouratelanguage['sam']=d
print(favouratelanguage)
output
enter your favourate language sachin
python
enter your favourate language prahalad
c++
enter your favourate language kthies
c++
enter your favourate language sam
 java
Traceback (most recent call last):
  File "main.py", line 306, in <module>
    favouratelanguage['sachin']=a
NameError: name 'favouratelanguage' is not defined'''
 
 
#9.can you change the values inside a list which is contained in set 5
#s={8,7,12,"harry",[1,2]}
'''answer->question is wrong becuse list[1,2] is not allow in the set.but tuple(1,2) is not change in the set'''
 
 
 
//4.day monday ka work//
#conditional statement
#if else and elif in pythen
#if else and elif statement s areba multiway decision taken by our program due to certain conditions in our unicode
''' santax:if(condition1):->if condition 1 is true
               print("yes")
            elif(conition 2):->if condition 2 is true
                print("no")
            else: ->otherwise
                print("maybe)'''
 
 
 
 
#if-elif-else ladder in pythen               
'''a=45
if(a>3):
    print("the value of a is greater than 3")
elif(a>13):
    print("the value of a is greater than 13")
elif(a>17):
    print("the value of a is greater than 17")
else:
    print("the value is  not  greater than 3 and 13")
output
the value of a is greater than 3'''
 
 
#multipal if statement
'''a=45
if(a>3):
    print("the value of a is greater than 3")
if(a>13):
    print("the value of a is greater than 13")
if(a>17):
    print("the value of a is greater than 17")
else:
    print("the value is  not  greater than 3 and 13")
output
the value of a is greater than 3
the value of a is greater than 13
the value of a is greater than 17'''
 
 
 
#example
'''a=22
if(a>9):
    print("greater")
else:
        print("lesser")
output
greater'''
 
 
#1.write a program to print yes when the age entered by the user is greater then or equal to 18
'''age=int(input("enter your age\n"))
if(age>=18):
    print("yes")
else:
     print("no")
output
enter your age
19
yes'''
 
 
#relational operaters:relational operations are used to evaluates conditions inside the statements.some examples of relational operators are:
#==->equals
#>=->greater than/equal to
#<=,etc
 
 
#logical operaters
#in python logical operaters opeerate on conditional statements.examples
# and->true if both operands are true else False
# or->true if at lest one operand is true else False
# not->inverts true to false & false to true
#progaram related to logical operaters used and operator
'''age=int(input("enter your age:\n"))
if(age>34 and age<56):
    print("you can work with us")
else:
        print("you can not work with us")
output
enter your age:
40
you can work with us'''
 
 
#progaram related to logical operaters used or operator
'''age=int(input("enter your age:\n"))
if(age>34 or age<56):
    print("you can work with us")
else:
        print("you can not work with us")
output
enter your age:
10
you can work with us'''
 
 
#elif clause->elif in pythen means [else if].an if statement can be change together with a lot of these elif statements followed by an else statement
'''if(condition 1):
         #code
    elif(condition 2):
         #code          ->an all statement this ladder will stop once a condition in an if or elif is met
    elif(condition 3):
         #code
     .
     .
     .
     else:
         #code
 '''
# important notes
#1.there can be any number of elif statement
#2.last else is executed only if all the conditions inside elifs fail.
#IS used in pythen ->here is  used  only one object ex a=none but == check value
'''a=None
if(a is None):
    print("yes")
else:
    print("no")
output
yes'''
 
#IN used in pythen->in is used in python what is contains in the least or no
'''1example.a=[45,56,6]
print(45 in a)
output
true'''
 
'''2example.a=[45,56,6]
print(455 in a)
output
false'''
 
#not used of else write a program
'''a=7
if(a==7):
    print("yes")
elif(a>56):
    print("no and yes")
output
yes
'''
#write a progam using else,elif and if used
'''a=6
if(a==7):
    print("yes")
elif(a>56):
    print("no and yes")
else:
    print("i am optional")
output
i am optional'''
 
 
#write a program to find greatest of four numbers enter in the user
'''num1=int(input("enter number 1:"))
num2=int(input("enter number 2:"))
num3=int(input("enter number 3:"))
num4=int(input("enter number 4:"))
if(num1>num4):
    f1=num1
else:
    f1=num4
if(num2>num3):
    f2=num2
else:
    f2=num3
if(f1>f2):
    print(str(f1)+"is greatest")
else:
    print(str(f2)+"is greatest")
output
enter number 1:34
enter number 2:23
enter number 3:45
enter number 4:11
45is greatest'''
 
 
#2.write a program to find out whether a student is pass or fail,if it requies total 40% and at least 33% in each sunject to pass.assume 3 sunjects and takes marks as an input from the user
'''sub1=int(input("enter first subject marks\n"))
sub2=int(input("enter first subject marks\n"))
sub3=int(input("enter first subject marks\n"))
if(sub1<33 or sub2<33 or sun3<33):
    print("you are fail because you have less than 33% in one of the subjects")
elif(sub1+sub2+sun3)/3<40:
    print("you are fail due to total percentage less than 40")
else:
    print("congatulation! you passed the exame")
output
enter first subject marks
1
enter first subject marks
2
enter first subject marks
3
you are fail because you have less than 33% in one of the subjects'''
 
 
 
#5.tuesday ka work
#3.a spam comment is definded as a text containing following keywords
#"make a lot of money","buy now","subscribe this","click this",write a program to detect these spams?
'''text=input("enter the text\n")
if("make a lot of money"in text):
    spam=True
elif("buy now"in text):
    spam=True
elif("subscribe this"in text):
    spam=True    
elif("click this"in text):
    spam=True
else:
    spam=False
if(spam):
    print("this text is spam")
else:
    print("this text is not spam")
output
enter the text
make a lot of money
this text is spam'''
 
 
 
#4.write a program to find whether a given username contains less than 10 charactrer or not?
'''username=input("enter the username\n")
if("abcdefghi" in username):
  username=True
 
elif("abcdefgh" in username):
  username=True
elif("abcdefg" in username):
  username=True
elif("abcdef" in username):
  username=True
elif("abcde" in username):
  username=True
elif("abcd" in username):
  username=True
elif("abc" in username):
  username=True
elif("ab" in username):
  username=True
elif("a" in username):
  username=True
else:
     username=False
if(username):
    print("less than 10 character")
else:
    print("not less than 10 character")
output
enter the username
abcd
less than 10 character'''#output is wrong
 
 
 
 
#5.write a program to finds out whether a given name is present in the list or not?
'''names=["sachin","azad","navlesh","deepak","sonu"]
name=input("enter the name\n")
if (name in names):
    print("your name is present in the list\n")
else:
    print("your name is not present in the list\n")
output
enter the name
sachin
your name is present in the list'''
 
 
#6.write a program to calculate the grade of a student from his markes from the following scheme
#90-100->ex
#80-90->A
#70-80->B
#60-70->C
#50-60->D
#<50->F
'''markes=int(input("enter your markes\n"))
if (markes>=90):
    grade="EX"
elif(markes>=80):
    grade="A"
elif(markes>=70):
    grade="B"
elif(markes>=60):
    grade="C"   
elif(markes>=50):
    grade="D"
else:
    grade="F"
print("your grade is"+grade)
output
enter your markes
78
your grade isB'''
 
 
# 7.write a program to find out whether a given post is taking about "harry" or not
'''post="harry"
name=input("enter your name\n")
if(name in post):
    print("your name is harry")
else:
    print("your name not is harry")
output
enter your name
harry
your name is harry'''
 
 
 
6.wednesday ka work
[10:35, 10/19/2022] sachin Kumar: #loop in pythen->sometime we want to repeat a set of statements in our program for instance:print 1:1000
#loops make it easy for a programmer to tell the computer,which set of instanctions to repeat and how!
 
 
#type of loops in pythen
#primarily there are two types of loops in pythen
#1.while loop 2.for loop->we will look into these one by one!
#while loop
#the syntex of a while loop loks like this:
#while condtion:->the block keeps executing until the condition is True
    #body of the loop
'''i=0
while(i<5):
    print("yes"+str(i))
    i=i+1
print("done")
output
yes0
yes1
yes2
yes3
yes4
done'''
 
 
#write a program to print 1 to 15 using a while loop
'''i=1
while(i<=15):
    print(i)
    i=i+1
output
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15'''
 
 
#1.example
'''i=0
while(i<5):#prints "harry"-5 times
    print("harry")
    i=i+1
output
harry
harry
harry
harry
harry'''
#notes->if the condition never becomes false,the loop keeps getting executed
 
 
 
#2.example
'''i=0
while(i<5):
    print("harry"+str(i))
    i=i+1
output
harry0
harry1
harry2
harry3
harry4'''
 
 
#write a program to print the content of a of a list using while loops
'''fruits=["mango","guava","apple","watermelon","grapes","muskmelon"]
i=0 
while(i<len(fruits)):
    print(fruits[i])
    i=i+1
output
guava
apple
watermelon
grapes
muskmelon'''
 
#for loop->a for loop to iterate through a sequence like list,tuple or string[iterable]
#the syntex of a for loop looks like this:
#l=[1,7,8]
#for item in l:
  #print(item)->print 1,7,and 8
 
 #example using for loop
'''fruits=["mango","guava","apple","watermelon","grapes","muskmelon"]
for item in fruits:
    print(item)
output
guava
apple
watermelon
grapes
muskmelon'''
[12:36, 10/19/2022] sachin Kumar: #range function in python
#the range function in python is used to generate sequence of numbers
#we can also specify the start,stop and step-size as a follow: range(start,stop,step_size)
#step_size is usually not used in range()
#1.example of rrange function
'''for i in range(8):#(8)means number is start from 0 and end sequence 8
    print(i)
output
0
1
2
3
4
5
6
7'''
 
 
 
#example2.number is indicate nuber is start  from where
'''for i in range(1,8):#(1,8)meansnuber is starting from 1 and end sequence 8
    print(i)
output
1
2
3
4
5
6
7'''
 
 
#example 3.
'''for i in range(1,8,2):#(1,8,2)last 2 indicate gap between number or 2 is step_size
    print(i)
output
1
3
5
7
'''
 
#exaple4.
'''for i in range(1,8,3):#(1,8,3)last 3 indicate gap between number or 3 is step_size
    print(i)
output
1
4
7'''
 
#for loop with else->an optional else can be used with a for loop if the code  is to be executed when the loop executed
#example1.
'''for i in range(10):
    print(i)
else:
    print("this is inside else of for")
output
0
1
2
3
4
5
6
7
8
9
this is inside else of for'''
#example2.
'''for i in range(10):
    print(i)
print("this is inside else of for")
output
0
1
2
3
4
5
6
7
8
9
this is inside else of for'''
 
 
 
#the break statement->'break' is used to come out of the loop when encountered itinstructs the program to Exit the loop now
#example1.
'''for i in range(10):
    print(i)
    if(i==5):#here (i==5)means loop is starting 0 to 5 then break  statement
        break
output
0
1
2
3
4
5'''
 
#example 2.
'''for i in range(10):
    print(i)
    if(i==5):#here (i==5)means loop is starting 0 to 5 then break  statement or 0,1,2,3,4 are false stement when 5 is true then break only print 0,1,2,3,4
        break   
else:#here in the else part  of print is not include in the loop of output beuse used break or else depend break statement. wben break statement used the not used else statement.
    print("this is inside else of for")
output
0
1
2
3
4
5'''
 
 
# the continue statement->continue is used to stop the current iteration of the loop and continue with the next one.it instruv=cts the program to "skip this itration"
#example1.
'''for i in range(10):
    if(i==5):#(i==5)here i is true only number 5 so only 5 is skip
        continue
    print(i)
output
0
1
2
3
4'''
#example2.even number print
'''for i in range(10):
    if(i%2!=0):# only even number print 
        continue
    print(i)
output
2
4
6
8'''
 
#example3.odd number
'''for i in range(10):
    if(i%2==0):# only even number print 
        continue
    print(i)
output
1
3
5
7
9'''
 
 
#pass statement->pass is a null statement in pythen.it instructs to "do nothing"
#example1.
'''i=4 
if(i>0):
    pass
while(i>6):
    pass
print("sachin is good boy")
output
sachin is good boy'''
 
 
#1.write a program to print multipalication table of a given number using for loop
'''num=int(input("enter the number"))
for i in range(1,11):
    print(str(num) + "x" +str(i)+"="+str(i*num))
output
enter the number5
5x1=5
5x2=10
5x3=15
5x4=20
5x5=25
5x6=30
5x7=35
5x8=40
5x9=45
5x10=50'''
#example 1.seconfd method
'''num=int(input("enter the number"))
for i in range(1,11):
    print(f"{num}x{i}={num*i}")
output
enter the number5
5x1=5
5x2=10
5x3=15
5x4=20
5x5=25
5x6=30
5x7=35
5x8=40
5x9=45
5x10=50'''
[13:39, 10/19/2022] sachin Kumar: #range function in python
#the range function in python is used to generate sequence of numbers
#we can also specify the start,stop and step-size as a follow: range(start,stop,step_size)
#step_size is usually not used in range()
#1.example of rrange function
'''for i in range(8):#(8)means number is start from 0 and end sequence 8
    print(i)
output
0
1
2
3
4
5
6
7'''
 
 
 
#example2.number is indicate nuber is start  from where
'''for i in range(1,8):#(1,8)meansnuber is starting from 1 and end sequence 8
    print(i)
output
1
2
3
4
5
6
7'''
 
 
#example 3.
'''for i in range(1,8,2):#(1,8,2)last 2 indicate gap between number or 2 is step_size
    print(i)
output
1
3
5
7
'''
 
#exaple4.
'''for i in range(1,8,3):#(1,8,3)last 3 indicate gap between number or 3 is step_size
    print(i)
output
1
4
7'''
 
#for loop with else->an optional else can be used with a for loop if the code  is to be executed when the loop executed
#example1.
'''for i in range(10):
    print(i)
else:
    print("this is inside else of for")
output
0
1
2
3
4
5
6
7
8
9
this is inside else of for'''
#example2.
'''for i in range(10):
    print(i)
print("this is inside else of for")
output
0
1
2
3
4
5
6
7
8
9
this is inside else of for'''
 
 
 
#the break statement->'break' is used to come out of the loop when encountered itinstructs the program to Exit the loop now
#example1.
'''for i in range(10):
    print(i)
    if(i==5):#here (i==5)means loop is starting 0 to 5 then break  statement
        break
output
0
1
2
3
4
5'''
 
#example 2.
'''for i in range(10):
    print(i)
    if(i==5):#here (i==5)means loop is starting 0 to 5 then break  statement or 0,1,2,3,4 are false stement when 5 is true then break only print 0,1,2,3,4
        break   
else:#here in the else part  of print is not include in the loop of output beuse used break or else depend break statement. wben break statement used the not used else statement.
    print("this is inside else of for")
output
0
1
2
3
4
5'''
 
 
# the continue statement->continue is used to stop the current iteration of the loop and continue with the next one.it instruv=cts the program to "skip this itration"
#example1.
'''for i in range(10):
    if(i==5):#(i==5)here i is true only number 5 so only 5 is skip
        continue
    print(i)
output
0
1
2
3
4'''
#example2.even number print
'''for i in range(10):
    if(i%2!=0):# only even number print 
        continue
    print(i)
output
2
4
6
8'''
 
#example3.odd number
'''for i in range(10):
    if(i%2==0):# only even number print 
        continue
    print(i)
output
1
3
5
7
9'''
 
 
#pass statement->pass is a null statement in pythen.it instructs to "do nothing"
#example1.
'''i=4 
if(i>0):
    pass
while(i>6):
    pass
print("sachin is good boy")
output
sachin is good boy'''
 
 
#1.write a program to print multipalication table of a given number using for loop
'''num=int(input("enter the number"))
for i in range(1,11):
    print(str(num) + "x" +str(i)+"="+str(i*num))
output
enter the number5
5x1=5
5x2=10
5x3=15
5x4=20
5x5=25
5x6=30
5x7=35
5x8=40
5x9=45
5x10=50'''
#example 1.seconfd method
'''num=int(input("enter the number"))
for i in range(1,11):
    print(f"{num}x{i}={num*i}")
output
enter the number5
5x1=5
5x2=10
5x3=15
5x4=20
5x5=25
5x6=30
5x7=35
5x8=40
5x9=45
5x10=50'''
 
 
#2.write a program to greet al the person names stored in a list l1 and which starts with s
#l1=["harry","sohan","sachin","rahul"]?
'''l1=["harry","sohan","sachin","rahul","hurry"]
for name in l1:
    if name.startswith("s"):
        print("hellow"+name)
output
hellowsohan
hellowsachin'''
 
 
#3.attemp1 problem 1 using while loop?
#4.write a program to find whether a given number inis prime or not?
'''num=int(input("enter the number "))
prime=True
for i in range(2,num):
    if(num%i==0):
        prime=false
        break
if prime:
    print("this number is prime")
else:
    print("this number is not prime")
 
output
enter the number 19
this number is prime'''
 
 
#5.write a program to calculate the factorial of a given number using for loop
#n!=1*2*3*---*n
'''num=int(input("enter the number:"))
factorial=1
for i in range(1,num+1):
    factorial=factorial*i
print(f"the factorial of this number is{factorial}")
output
enter the number:5
the factorial of this number is120'''
 
 
#6.write a program to find sum of first n natural number using for loop?
'''num=int(input("enter the number"))
sum=0 
for i in range(1,num+1):
    sum=sum+i
print(f"sum of number is {sum}") 
output
enter the number4
sum of number is 10'''
 
 
#7.write a program to print the following star pattern
#*
#**
#** for n=3?
'''n=3
for i in range(3):
    print(""(i+1))
output
*
**
*'''
 
#8.write a program to print the following star pattern
#*
#*
#*** for n=3?
'''n=3
for i in range(3):
    print(" " * (n-i-1), end="")
    print("*" * (2*i+1), end="")
    print(" " * (n-i-1))
output
 *  
 * 
***'''
#9.write a program to print the following star pattern
#* * * 
#*   *
#* * * for n=3?
 
 
# 10.write a program to print multipliacation table of  n using for loop in reverse order?
 
 
 
 
7.thrusday ka work
#function and recursion
#function->a function is a group of statements performing a specific task.
#example1.to find average value of markes
'''marks1=[45,78,86,77]
percentage1=(sum(marks1)/400)*100
markes2=[54,78,90,95,78]
percentage2=(sum(markes2)/500)*100
print(percentage1)
print(percentage2)
output
71.5
79.0'''
 
#example2.to find average value of markes method other
'''marks1=[45,78,86,77]
percentage1=((marks1[0]+marks1[1]+marks1[2]+marks1[3])/400)*100
marks2=[54,78,90,95,78]
percentage2=((marks2[0]+marks2[1]+marks2[2]+marks2[3]+marks2[4])/500)*100
print(percentage1)
print(percentage2)
output
71.5
79.0'''
 
 #example3.to find average value of markes method other
''''def percent(marks):
     return ((marks[0]+marks[1]+marks[2]+marks[3])/400)*100
marks1=[45,78,86,77]
percentage1=percent(marks1)#lot chalo ease value ke sath return ka matlab
marks2=[54,78,90,95,56]
percentage2=percent(marks2)
print(percentage1)
print(percentage2)
output
71.5
79.25'''
 
 
 
#a function can be reused by the programmer in a given program any number of times
#example and syntax of a function as follows
#the syntax of a functions looks as follows
#def func1():->def is keyward , func1 is function name ,() is open and close braces,() told me fuction boby is start,:coln
#    print("hellow")
#this function can be called any number of times anywhere in the program
 
 
#function call->whenever we want to call a function,we put the name of the function followed by paranthesis as follows or fuction is used:
 #   func1()->this is called function call
 
 #function defined->the part containg the exact   set of instructions which are executed during the function call.
#example1.write a program to greet a user with "good day"using function?
''''def greet(name):
     print("Good day,"+ name)#function defination
greet("sachin")#it is function call
output
Good day,sachin'''
 
#example2.
''''def greet():#here geet is user defined function
     print("Good day,")#here print is built in function
greet()
output
Good day,'''
 
#type  of function in pythen
#there are two type of the function in pythen
#1.built in functions->already present in pythen
#2.user defined functions->defined by the user
#example of built in function includes len(),print(),range() etc
#the func1() function we definr=ed is an example of user defind function
#function with arguments->a function can accept some values in the parentheses a function can also return values as shown blow:
''''def greet(name):
    gr="hellow"+name
    return gr
a=greet("sachin")#"sachin"is passed to greet in name and a will now contain "hellow  sachin"
output
hellow sachin'''
 
 
#example1.addition of name and addition of number
'''def greet(name):
    print("good mornig,"+name)
greet("sachin")
def sum(num1,num2):
    return num1+num2
s=sum(6,94)
print(s)
output
good mornig,sachin
100'''
 
#default parameter value->we can have a value as default argument in a function.
#if we specify name="stranger"in the line containing def,this value is used when no argument is passed
#example1.
'''def greet(name="stanger"):
    print("good mornig,"+name)
greet("sachin")#name will be "sachin"in function body(passed)
greet()#(stanger automaticaly passed in greet() .it is also called default parameter values) or(name will be "stanger" in function body(passed))
output
good mornig,sachin
good mornig,stanger'''
 
#recurction defination->recursion is a function which calls itselfs.
#it is used to directly use a mathemathecal formula as a function.for example:
#factorial(n)=n x function(n-1)
#this function can be defined as following
 
#example of factorial
#n!=1*2*3*4*5*...*n
'''n=5
product=1
for i in range(n):
    product=product *(i+1)
print(product)
output
120'''
#example1,method 2 used itration
'''def factorial_iter(n):
    product=1
    for i in range(n):
        product=product *(i+1)
    return product
f=factorial_iter(5)
print(f)
output
120'''
 
 
#in recurcive 
#n!=[1*2*3*4*5*...*n-1]*n
#n!=n*(n-1)! used for recurcive
# example1 method 3 used recurcive
''''def factorial_recursive(n):
    if(n==1 or n==0):#->base condition which does not call the function any further
        return 1
    return n*factorial_recursive(n-1)#->fution call itself
f=factorial_recursive(5)
print(f)
output
120'''
 
#the programmer need to be externely careful while working with recursion to ensure that the function does not infinitely keep calling itself.
#recursion is sometime the most direct way to code an algorithem