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
 
 
[24:21, 11/19/2022] sachin Kumar: function set practise
#write a program using fuction to find greatest of three number
'''def maximum(num1,num2,num3):
    if(num1>num2):
        if(num1>num3):
            return num1
        else:
            return num3
    else:
        if(num2>num3):
            return num2
        else:
            return num3
m=maximum(234,14,7)
print("maximum number"+str(m))
output
maximum number234'''
 
#2.write a program using function to find of three number
 
'''def maximum(num1,num2,num3,num4):
    if(num1>num2):
        if(num1>num4):
            return num1
        else: return num4
    elif(num2>num3):
            if(num2>num4):
                return num2
            else:
                return num4
    else:
            if(num3>num4):
                return num3
            else:
                    return num4
m=maximum(23345,3,34,345)
print("maximum number"+str(m))
output
maximum number23345'''
 
 
 
#write a program using function to find of five number 5 
'''def maxmum(num1,num2,num3,num4,num5):
    if(num1>num2):
        if(num1>num5):
            return num1
        else:
            return num5
    elif(num2>num3):
        if(num2>num5):
            return num2
        else:
            return num5
    elif(num3>num4):
        if(num3>num5):
            return num3;
        return num5;
    else:
            if(num4>num5):
                return num4
            else:
                return num5
m=maxmum(23,45,34556,333,567)
print("maximum number"+str(m))
output
maximum number34556'''
 
 
#write a pythen program using function to convert celsius to foharenhit
#(0degreeC * 9/5)+32=32degree foharenhit
#farenhit=(c*(9/5))+32
'''def farh(cel):
    return (cel*(9/5))+32
cel=0
f=farh(cel)
print("farenhit temperature:\n"+str(f))
output
farenhit temperature:
32.0'''
 
 
#3.how do you prevent a python print()function to print a new line at the ends
'''print("hello",end="")#end=""#without space
print("how",end="")
print("are",end="")
print("you",end="")
output
hellohowareyou'''
 
 
 
#4.how do you prevent a python print()function to print a new line at the ends
'''print("hello",end=" ")#end=""#with one space
print("how",end=" ")
print("are",end=" ")
print("you",end=" ")
output
hello how are you '''
 
#5.how do you prevent a python print()function to print a new line at the ends
'''print("hello",end="\n")#end=""#with one space
print("how",end="\n")
print("are",end="\n")
print("you",end="\n")
output
hello
how
are
you'''
 
 
#6.write a recursive function to calculate the sum of first n natural numbers
'''def sumN(n):
    if n==1:
        return 1
    return sumN(n-1)+n
r=sumN(5)
print("addition of first 5 natural number:\n"+str(r))
output
addition of first 5 natural number:
15'''
 
#7.write a recursive function to calculate the factorial of first n natural numbers
'''def factN(n):
    if(n==0 or n==1):
        return 1
    return factN(n-1)*n
r=factN(5)
print("factorial of 5 natural number\n"+str(r))
output
factorial of 5 natural number
120'''
 
 
#8.write a pythen fuction to print first n lines of the following pattern
#* * *
#* *   =>n=3
#*
'''n=3
for i in range(n):
    print("*" *(n-i))#prints * n-i times
output
*
**
*'''
 
 
#9. write a pythen function which converts inches to cms
# 1 inches=2.54 cms
'''def cms(inches):
    return 2.54*inches
inches=5
c=cms(inches)
print("the value of centemerter\n"+str(c))
output
the value of centemerter
12.7'''
 
 
#write a pythen to remove a green words from a string and strip it at the same time.
'''def remove_and_strip(string,word):
    newStr=string.replace(word,"")
    return newStr.strip()
this="          sachin is a good student           "
n=remove_and_strip(this,"sachin")
print👎
output
is a good student'''
 
# write a pythen function  to print multiplication table of a given number
'''def table(n):
    for i in range(1,11):
        print(n,"*",i,"=",n*i)
n=int(input("enter the number"))  
table👎
output
enter the number10
10 * 1 = 10
10 * 2 = 20
10 * 3 = 30
10 * 4 = 40
10 * 5 = 50
10 * 6 = 60
10 * 7 = 70
10 * 8 = 80
10 * 9 = 90
10 * 10 = 100'''
[11:34, 11/19/2022]    sachin Kumar: #file i/ob
#file->a file is a data stored in a strorage device.
#a pythen program can talk to the file by reading content from it and writting contains to it.
#thre are two types of files 1.text files 2.binary files
#pythen has a lot of functions for reading,updating and deleting files.
#opening a files->pythen has a open() function for opening files.it takes 2 parameters:filename and mode
#open("this.text","r")
#here open->open is a built in function,"this,text"->filename,"r"->mode of opening(read mode)
 
#use open function to read the content of a files
'''f=open('sample.text','r')
data=f.read()
print(data)
f.close()'''
 
 
#read a files in pythen
#f=open("this.text","r")->open the files in the mode
#text=f.read()->read its contents
#print(test)->print its contents
#f.close()->close the file
#we can specify the number of characters in the read() function:f.read(2)#here 2 is reads first 2 characters.
 
 
#other method to read the files->we cabn also used f.readline() function to read on fiull lines at a time
'''f=open('sample.text')
#read first line
data=f.readline()
print(data)
 
#read second line
data=f.readline()
print(data)
 
#read third line
data=f.readline()
print(data)
 
#read fourth line... and so on
data=f.readline()
print(data)
f.close()'''
 
 
#modes of operating a files
#r->open for reading
#w->open for writing
#a->open for appending
#+->open for#->open for updating(read and write open)
#'rb'will open for read in binary mode
#'rt'will open for read in text mode
#writing files in pythen->in order to write to a files,we first open it in write or append mode
#+after which,we use the pythen's f.write()method to write to the files
'''f=open("this.txt"w")
f.write("this is nice")#can be call multiple times
f.close()
output
this.txt->this is nice'''
 
 
 
'''f=open('another.txt','w')
f.writr("i am writing")
f.writr("i am writing")
f.writr("i am writing")
f.writr("i am writing")
f.close()
output
another.text->i am writingi am writingi am writingi am writing'''
 
 
#with statement->the best way to open and close the file authomatically is the with statement
#with open("this.txt")as f:
#f.read->do not to read write f.close() as it is done authomatically
'''with open('another.txt','r')as f;
    a=f.read()
print(a)
with open('another.txt','w')as f;
    a=f.write("me")
print(a)
output
i am sachin
me'''
 
#1.write a program to read the text from a gives files'poems.txt'and find out whether it contains the word'twinkle'
 
 
 
#object oriented programmig->solving a problem by creating objects is one of the most popular
#approuches in programming.this is call object oriented programmig.
 
#the concept focus ses on using resolve code or implements dry principal
#dry principle means do not repeat yourself.fuction is implement dry principle.
#class->a class is a blueprint for creating object.
#blueprint means templet.
 
#the syntax of a class looks like this
#class Employee:
    #methods & variable
 
#classname is written in pascalcase.
'''PascalCase
EmployeeName-->PascalCase #pascalcase start bybid letter
 
 
camelCase
isNumeric,isFloatOrInt-->camelCase''' #camelcase start by smallercase then bigger smallercase
 
#many form fill in railways
'''class railwaysform:
    fromtype="railwaysform"
    def printdata(self):
        print(f"Name is {self.name}")
        print(f"train is {self.train}")
sachinapplication=railwaysform()
sachinapplication.name="sachin"
sachinapplication.train="patliputra"
sachinapplication.printdata()
output
Name is sachin
train is patliputra'''
 
 
'''class Remote():
    pass
class Player:
    def moveRight(self):
        pass
    def moveLeft(self):
        pass
    def moveTop(self):
        pass
 
remote1=Remote()# remote1 is variable,Remote()->class name is Remote,open and close breasses(), total part is call object
player1=Player()
if(remote1.isLeftpressed()):
    player1.moveLeft()'''
 
 
#object->an object is an instantiation of a class.
#when class is defined a templet(information) is detail.Memory is allocated only after object instaance.
#objects of a given class can invoke the methods available to it without reveling the implementation detail to the user.
#->abstrtruction & encapsulation.
# player ke all function is encapsulation.
 
 
#modelling a problem in oops
#we identified the following in our problem
#Noun->class->Employee
#adjective->attributes->name,ags,salary,
#verbs->methed->getsalary(),increment()
#attrbuts are two type 1.class attributes 2,instance attributes
#class attributes->an attributes that belogs to the class rather than a particular object.example below
'''class Employee:
    company="Google"
sachin=Employee()
prahalad=Employee()
print(sachin.company)
print(prahalad.company)
Employee.compony="youTube"
print(sachin.company)
print(prahalad.company)
output
Google
Google
youTube
youTube'''
 
#instance attributes->an attribute that belongs to the instance(object)assuming the claass from the previous example:  example1
'''class Employee:
    company="Google"
sachin=Employee()
prahalad=Employee()
sachin.salary=300
prahalad.salary=400
print(sachin.company)
print(prahalad.company)
Employee.compony="youTube"
print(sachin.company)
print(prahalad.company)  
print(sachin.salary)
print(prahalad.salary)
output
Google
Google
youTube
youTube
300
400'''
 
#notes: instance attributes takes preference over class attributes during assignment & retrival
#sachin attributes->1.is attributes- present in object? 2.is attributes  present in class? example1.
'''class Employee:
    company="Google"
    salary=100
sachin=Employee()
prahalad=Employee()
#sachin.salary=300
#prahalad.salary=400
print(sachin.company)
print(prahalad.company)
Employee.compony="youTube"
print(sachin.company)
print(prahalad.company)  
print(sachin.salary)
print(prahalad.salary)
output
Google
Google
youTube
youTube
100
100'''
 
 
#example2.
'''class Employee:
    company="Google"
    salary=100
sachin=Employee()
prahalad=Employee()
#sachin.salary=300
#prahalad.salary=400
#print(sachin.company)
#print(prahalad.company)
#Employee.compony="youTube"
#print(sachin.company)
#print(prahalad.company)  
print(sachin.salary)
print(prahalad.salary)
output
100
100'''
 
 
'''class Employee:
    company="Google"
    salary=100
sachin=Employee()
prahalad=Employee()
#sachin.salary=300
#prahalad.salary=400
#print(sachin.company)
#print(prahalad.company)
#Employee.compony="youTube"
#print(sachin.company)
#print(prahalad.company)
sachin.salary=45
print(sachin.salary)
print(prahalad.salary)
output
45
100'''
 
 
#'self'parameter->self refer to the instance of the class it is automatically passed with a function call from object.
#sachin.getSalary->here self is sachin  and equivalent to employee getSalary-(sachin)
'''class Employee:
    company="Google"
    def getSalary(self):
        print("salary is 100k")
sachin=Employee()
sachin.getSalary()
output
salary is 100k'''
 
 
#static method->sometimes we need a function that does not used the self parameter.we can defined a static method like tthis:
#@staticmethod
#def greet()
 #   print("hellow user")
 
'''class Employee:
    company="Google"
    def getSalary(self):
        print("salary is 100k")
    @staticmethod
    def greet():
       print("hellow user")
sachin=Employee()
sachin.getSalary()
sachin.greet()
output
alary is 100k
hellow user'''
 
 
'''class Employee:
    company="Google"
    def getSalary(self,signature):
        print("salary is 100k")
    @staticmethod
    def greet():
       print("hellow user")
sachin=Employee()
sachin.Salary=1000
sachin.getSalary("thanks!")
sachin.greet()
output
salary is 100k
hellow user'''
 
 
'''class Employee:
    company="Google"
    def getSalary(self):
        print("salary is 100k")
    @staticmethod
    def greet():
       print("hellow user")
    @staticmethod
    def time():
       print(" the time is 9am in the morning ")
sachin=Employee()
sachin.getSalary()
sachin.greet()
sachin.time()
output
salary is 100k
hellow user
 the time is 9am in the morning '''
 
 
 #constructor->--int--() is a special methed which is first run as soon as the object is created.
 #--init--() method  is also know as constructor
 #it takes self argument and can also take further arguments.
 
'''class Employee:
    company="Google"
    def _init_(self):
        print("employee is created!")
    def getSalary(self):
        print("salary is 100k")
    @staticmethod
    def greet():
       print("hellow user")
    @staticmethod
    def time():
       print(" the time is 9am in the morning ")
sachin=Employee()  
output
employee is created!'''
 
 
''''class Employee:
    company="Google"
    def _init_(self,name,salary,subunit):
        self.name=name
        self.salary=salary
        self.subunit=subunit
        print("employee is created!")
    def getdetails(self):
        print(f"the names of  the employee is {self.name}")
        print(f"the salary of  the employee is {self.salary}")
        print(f"the subunit of  the employee is {self.subunit}")
    def getSalary(self):
        print("salary is 100k")
    @staticmethod
    def greet():
       print("hellow user")
    @staticmethod
    def time():
       print(" the time is 9am in the morning ")
sachin=Employee("sachin",100,"youTube")
#sachin=Employee()-->this throws an error
sachin.getdetails()
output
employee is created!
the names of  the employee is sachin
the salary of  the employee is 100
the subunit of  the employee is youTube'''
 
 
 
#1.create a class programmer for storing information of few programmers working at microsoft.
'''class programmer:
    company="microsoft"
    def _init_(self,name,product):
        self.name=name
        self.product=product
    def getinfo(self):
        print(f"the name of programmer is {self.name} and product is {self.product}")
sachin=programmer("sachin","skype")
sam=programmer("sam","github")
sachin.getinfo()
sam.getinfo()
output
the name of programmer is sachin and product is skype
the name of programmer is sam and product is github'''
 
#method second
'''class programmer:
    company="microsoft"
    def _init_(self,name,product):
        self.name=name
        self.product=product
    def getinfo(self):
        print(f"the name of{self.company} programmer is {self.name} and product is {self.product}")
sachin=programmer("sachin","skype")
sam=programmer("sam","github")
sachin.getinfo()
sam.getinfo()
output
the name ofmicrosoft programmer is sachin and product is skype
the name ofmicrosoft programmer is sam and product is github'''
 
 
#2.write a class calculater capable of finding square.cube and squreeroot of a number.
'''class calculator:
    def _init_(self,number):
        self.number=number
    def square(self):
        print(f"the value of{self.number} square is{self.number **2}")
    def cube(self):
        print(f"the value of{self.number} cube is{self.number **3}")
    def squareRoot(self):
        print(f"the value of{self.number} squareRoot is{self.number **.5}")
a=calculator(3)
a.square()
a.cube()
a.squareRoot()
output
the value of3 square is9
the value of3 cube is27
the value of3 squareRoot is1.7320508075688772'''
 
#3.create  a class with a class attribute a; create an object  from it and set a directly
#using object a=0.does this change the class attributes
'''class sample:
    a="sachin" #it is class attributes
obj=sample()
obj.a="sam"#instance attributes
print(sample.a)
print(obj.a)
output
sachin
sam
notes->does not change the class attributes'''
 
#4.add a static method in problem 2 to greet the user with hello
'''class calculator:
    def _init_(self,number):
        self.number=number
    def square(self):
        print(f"the value of{self.number} square is{self.number **2}")
    def cube(self):
        print(f"the value of{self.number} cube is{self.number **3}")
    def squareRoot(self):
        print(f"the value of{self.number} squareRoot is{self.number **.5}")
    @staticmethod
    def greet():
        print("***hellow i am sachin kumar****")
a=calculator(3)
a.greet()
a.square()
a.cube()
a.squareRoot()
output
***hellow i am sachin kumar****
the value of3 square is9
the value of3 cube is27
the value of3 squareRoot is1.7320508075688772'''
 
 
#5.write a class train which has methods to book a ticket,get status(no of seats)
#and get fare information of trains running under indian railways.
'''class train:
    def _init_(self,name,fare,seats):
        self.name=name
        self.fare=fare
        self.seats=seats
    def getStatus(self):
        print(f"the name of the train is{self.name}")
        print(f"the seats available in the trains are{self.seats}")
    def fareInfo(self):
        print(f"the price of the ticket is:{self.fare}")
    def bookticket(self):
        if(self.seats>0):
            print(f"yor ticket has been booked!your seat number is {self.seats}")
            self.seats=self.seats-1
        else:
            print("sorry this train is full! kindly try in tatkal")
intercity=train("intercity express:14015",90,300)
intercity.getStatus()
intercity.fareInfo()
intercity.bookticket()
intercity.getStatus()
output
the name of the train isintercity express:14015
the seats available in the trains are300
the price of the ticket is:90
yor ticket has been booked!your seat number is 300
the name of the train isintercity express:14015
the seats available in the trains are299'''
 
''''class train:
    def _init_(self,name,fare,seats):
        self.name=name
        self.fare=fare
        self.seats=seats
    def getStatus(self):
        print(f"the name of the train is{self.name}")
        print(f"the seats available in the trains are{self.seats}")
    def fareInfo(self):
        print(f"the price of the ticket is:{self.fare}")
    def bookticket(self):
        if(self.seats>0):
            print(f"yor ticket has been booked!your seat number is {self.seats}")
            self.seats=self.seats-1
        else:
            print("sorry this train is full! kindly try in tatkal")
intercity=train("intercity express:14015",90,300)
intercity.getStatus()
intercity.fareInfo()
intercity.bookticket()
intercity.bookticket()
intercity.getStatus()
 
output
the name of the train isintercity express:14015
the seats available in the trains are300
the price of the ticket is:90
yor ticket has been booked!your seat number is 300
yor ticket has been booked!your seat number is 299
the name of the train isintercity express:14015
the seats available in the trains are298'''
 
 
#1.create a class programmer for storing information of few programmers working at microsoft.
'''class programmer:
    company="microsoft"
    def _init_(self,name,product):
        self.name=name
        self.product=product
    def getinfo(self):
        print(f"the name of programmer is {self.name} and product is {self.product}")
sachin=programmer("sachin","skype")
sam=programmer("sam","github")
sachin.getinfo()
sam.getinfo()
output
the name of programmer is sachin and product is skype
the name of programmer is sam and product is github'''
 
#method second
'''class programmer:
    company="microsoft"
    def _init_(self,name,product):
        self.name=name
        self.product=product
    def getinfo(self):
        print(f"the name of{self.company} programmer is {self.name} and product is {self.product}")
sachin=programmer("sachin","skype")
sam=programmer("sam","github")
sachin.getinfo()
sam.getinfo()
output
the name ofmicrosoft programmer is sachin and product is skype
the name ofmicrosoft programmer is sam and product is github'''
 
 
#2.write a class calculater capable of finding square.cube and squreeroot of a number.
'''class calculator:
    def _init_(self,number):
        self.number=number
    def square(self):
        print(f"the value of{self.number} square is{self.number **2}")
    def cube(self):
        print(f"the value of{self.number} cube is{self.number **3}")
    def squareRoot(self):
        print(f"the value of{self.number} squareRoot is{self.number **.5}")
a=calculator(3)
a.square()
a.cube()
a.squareRoot()
output
the value of3 square is9
the value of3 cube is27
the value of3 squareRoot is1.7320508075688772'''
 
#3.create  a class with a class attribute a; create an object  from it and set a directly
#using object a=0.does this change the class attributes
'''class sample:
    a="sachin" #it is class attributes
obj=sample()
obj.a="sam"#instance attributes
print(sample.a)
print(obj.a)
output
sachin
sam
notes->does not change the class attributes'''
 
#4.add a static method in problem 2 to greet the user with hello
'''class calculator:
    def _init_(self,number):
        self.number=number
    def square(self):
        print(f"the value of{self.number} square is{self.number **2}")
    def cube(self):
        print(f"the value of{self.number} cube is{self.number **3}")
    def squareRoot(self):
        print(f"the value of{self.number} squareRoot is{self.number **.5}")
    @staticmethod
    def greet():
        print("***hellow i am sachin kumar****")
a=calculator(3)
a.greet()
a.square()
a.cube()
a.squareRoot()
output
***hellow i am sachin kumar****
the value of3 square is9
the value of3 cube is27
the value of3 squareRoot is1.7320508075688772'''
 
 
#5.write a class train which has methods to book a ticket,get status(no of seats)
#and get fare information of trains running under indian railways.
'''class train:
    def _init_(self,name,fare,seats):
        self.name=name
        self.fare=fare
        self.seats=seats
    def getStatus(self):
        print(f"the name of the train is{self.name}")
        print(f"the seats available in the trains are{self.seats}")
    def fareInfo(self):
        print(f"the price of the ticket is:{self.fare}")
    def bookticket(self):
        if(self.seats>0):
            print(f"yor ticket has been booked!your seat number is {self.seats}")
            self.seats=self.seats-1
        else:
            print("sorry this train is full! kindly try in tatkal")
intercity=train("intercity express:14015",90,300)
intercity.getStatus()
intercity.fareInfo()
intercity.bookticket()
intercity.getStatus()
output
the name of the train isintercity express:14015
the seats available in the trains are300
the price of the ticket is:90
yor ticket has been booked!your seat number is 300
the name of the train isintercity express:14015
the seats available in the trains are299'''
 
''''class train:
    def _init_(self,name,fare,seats):
        self.name=name
        self.fare=fare
        self.seats=seats
    def getStatus(self):
        print(f"the name of the train is{self.name}")
        print(f"the seats available in the trains are{self.seats}")
    def fareInfo(self):
        print(f"the price of the ticket is:{self.fare}")
    def bookticket(self):
        if(self.seats>0):
            print(f"yor ticket has been booked!your seat number is {self.seats}")
            self.seats=self.seats-1
        else:
            print("sorry this train is full! kindly try in tatkal")
intercity=train("intercity express:14015",90,300)
intercity.getStatus()
intercity.fareInfo()
intercity.bookticket()
intercity.bookticket()
intercity.getStatus()
 
output
the name of the train isintercity express:14015
the seats available in the trains are300
the price of the ticket is:90
yor ticket has been booked!your seat number is 300
yor ticket has been booked!your seat number is 299
the name of the train isintercity express:14015
the seats available in the trains are298'''
 
#6.can you cange the self parameter inside a class to somethong else (say,"harry").try changing
#self to 'self' or 'harry'and see the effect?
'''class Sample:
    def _init_(self,name):
        self.name=name
obj=Sample("sachin")
print(obj.name)
output
sachin'''
 
#second method
'''class Sample:
    def _init_(slf,name):
        slf.name=name
obj=Sample("sachin")
print(obj.name)
output
sachin'''
#inheritence & more on oops
#inheritance->inheritance is a way of creating a new class from an exiting class.
#syntax:
#    class employee:->base class
 #       #code
 
 
 #class programmer(employee):->derivedd or child class
      #code
 
 
#we can use the methods and attributes of employee in programmer object. 
#also we can overwrite or add new attributes and methods in programmer class.
 
'''class Employee:           #base class
    company="google"
    def showDetails(self):
        print("this is an Employee")
class programmer(Employee):           #child class
    language="python"
    def getlanguage(self):
        print(f"the language is {self.language}")
e=Employee()
e.showDetails()
p=programmer()
p.showDetails()
print(p.company)
output
this is an Employee
this is an Employee
google'''
 
 
#type of inheritance 1.single inheritance  2.multiple inheritance  3.multilevel inheritance
 
#single inheritance->single inheritance occurs when chid class inherits only a singe parent class
#base->derivedd
#example of singe inheritance
''''class Employee:           #base class
    company="google"
    def showDetails(self):
        print("this is an Employee")
class programmer(Employee):           #child class
    language="python"
    def getlanguage(self):
        print(f"the language is {self.language}")
    def showDetails(self):
        print("this is an programmer")
e=Employee()
e.showDetails()
p=programmer()
p.showDetails()
print(p.company)
output
this is an Employee
this is an programmer
google'''
 
 
 
#multiple inheritance->multiple inheritance occurs when the child class inherits from  more than one parent class
#parent1 and parent2 connected  one child
''''class Employee:
    company="visa"
    ecode=120
class freelancer:
      company="Fiverr"
      level=0
      def upgradeLevel(self):
          self.level=self.level+1
class programmer(Employee,freelancer):
    name="sam"
p=programmer()
p.upgradeLevel()
print(p.company)
outout
visa'''
 
#multileval inheritances->when a child class becomes a parent for another child class.
#parent->child1->child2
'''class person:
    country="india"
    def takebreath(self):
        print("i am breathing...")
class Employee(person):
    company="honda"
    def getSalary(self):
       print(f"salary is {self.salary}")
    def takebreath(self):
        print("i am Employee so that i am lucy")
class programmer(Employee):
    company="fiverr"
    def getSalary(self):
        print(f"no salary to programmers")
    def takebreath(self):
        print("i am programmer so i am happy")
p=person()
p.takebreath()
e=Employee()
e.takebreath()
pr=programmer()
pr.takebreath()
output
i am breathing...
i am Employee so that i am lucy
i am programmer so i am happy'''
 
 
#super()method->super method is used to access the method of a super class in the derived class.
#super._init_()->calls constructer of the base class
 
'''class person:
    country="india"
    def takebreath(self):
        print("i am breathing...")
class Employee(person):
    company="honda"
    def getSalary(self):
       print(f"salary is {self.salary}")
    def takebreath(self):
        super().takebreath()
        print("i am Employee so that i am lucy")
class programmer(Employee):
    company="fiverr"
    def getSalary(self):
        print(f"no salary to programmers")
    def takebreath(self):
        super().takebreath()
        print("i am programmer so i am happy")
p=person()
p.takebreath()
e=Employee()
e.takebreath()
pr=programmer()
pr.takebreath()
output
i am breathing...
i am breathing...
i am Employee so that i am lucy
i am breathing...
i am Employee so that i am lucy
i am programmer so i am happy'''
 
 
#class method method->a class method is a method which is bound to the class and not the object of the class.
#@classmethod decorator is used to create a class method.
#syntax to create a class method:
# @classmethod
#  def(cls,p1,p2):
#getter method
'''class Employee:
    company="bharat gas"
    salary=5600
    salarybonus=400
    @property
    def totalsalary(self):
        return self.salary+self.salarybonus
e=Employee()
print(e.totalsalary)
output
6000'''
# sytax of setter->@name.setter
#                      def name(self,value)
#                          self.ename=value
#example of setter
'''class Employee:
    company="bharat gas"
    salary=5600
    salarybonus=400
    @property
    def totalsalary(self):
        return self.salary+self.salarybonus
    @totalsalary.setter
    def totalsalary(self,val):
        self.salarybonus=val-self.salary
e=Employee()
print(e.totalsalary)
e.totalsalary=5800
print(e.salary)
print(e.salarybonus)
output
6000
5600
200'''
 
 
#operators overloadding in pythen->operators in pythen can be overloaded usind dunder methods.
#these methods are called when a given operater is used on the objeects.
 
'''class number:
    def _init_(self,num):
        self.num=num
    def _add_(self,num2):
        print("lets add")
        return self.num+num2.num
    def _mul_(self,num2):
        print("lets multiply")
        return self.num *num2.num
n1=number(4)
n2=number(6)
sum=n1+n2
print(sum)
mul=n1*n2
print(mul)
output
lets add
10
lets multiply
24'''
 
 
#operater in pythen can be overloaded using the following method
''''p1+ p2->p1_add_(p2)
p1- p2->p1_sub_(p2)
p1* p2->p1_mul_(p2)
p1/ p2->p1_truediv_(p2)
p1// p2->p1_floordiv_(p2)
 
 
#other dunder/magic method in pythen
_str_()->used to set what gets displayed upon calling str(obj)
_len()->used to set what gets displayed upon callinglen_ or len(obj) '''
 
 
class number:
    def _init_(self,num):
        self.num=num
    def _add_(self,num2):
        print("lets add")
        return self.num+num2.num
    def _mul_(self,num2):
        print("lets multiply")
        return self.num *num2.num
    def _str_(self):
        return(f"decimal number:{self.num}")
    def _len_(self):
        return 1
 
n=number(9)
print👎
print(len(n))
output
decimal number:9
1
#create a class E2vector and use it to create another class representing a 3-d vector
'''class c2dvector:
    def _init_(self,i,j):
        self.icap=i
        self.jcap=j
    def _str_(self):
        return f"{self.icap}i + {self.jcap}j"
class c3dvector(c2dvector):
    def _init_(self,i,j,k):
        super()._init_(i,j)
        self.kcap=k
    def _str_(self):
        return f"{self.icap}i + {self.jcap}j + {self.kcap}k"
v2d=c2dvector(1,3)
v3d=c3dvector(1,9,7)
print(v2d)
print(v3d)
output
1i + 3j
1i + 9j + 7k'''
 
#create a class pets from a class animals and further create class dog from pets.add a method bark to class dog.
'''class Animals:
    animaltype="mannal"
class Pets:
    color="white"
class Dog:
    @staticmethod
    def bark():
        print("bow bow")
d=Dog()
d.bark()
output
bow bow'''
 
 
#3.create a class employee and add salary and increment properties to it.(multilable inheretance)
#write a method salaryafter increment method with a @propertydecorator with a setter
#which changes the value of increment  based on a salary?
'''class employee:
    salary=1000
    increment=1.5
    @property
    def salaryAfterIncrement(self):
        return self.salary*self.increment            #salaryAfterIncrement=salary * increment
 
    @salaryAfterIncrement.setter
    def salaryAfterIncrement(self,sai):
        self.increment= sai/self.salary                #(sai means salaryAfterIncrement)
 
e=employee()
print(e.salaryAfterIncrement)
print(e.increment)
e.salaryAfterIncrement=2000
print(e.increment)
output
1500.0
1.5
2.0'''
 
#4.write a class complex to representing a vector of n dimension.overload 
#the + and * operater which calculates the sum and the dot product of them?
'''class complex:
    def _init_(self,r,i):
        self.real=r
        self.imagenary=i
    def _add_(self,c):
        return complex(self.real+c.real,self.imagenary+c.imagenary)
    def _str_(self):
        return f"{self.real}+{self.imagenary}j"
 
 
c1=complex(1,4)
c2=complex(8,4)
print(c1+c2)  
output
9+8j'''
#(a+bi)(c+di)=(ac-bd)+(ad+bc)i
'''class complex:
    def _init_(self,r,i):
        self.real=r
        self.imagenary=i
    def _add_(self,c):
        return complex(self.real+c.real,self.imagenary+c.imagenary)
    def _mul_(self,c):
        mulreal=self.real*c.real - self.imagenary*c.imagenary
        mulimag=self.real*c.imagenary +self.imagenary*c.real
        return complex(mulreal,mulimag)
    def _str_(self):
        return f"{self.real}+{self.imagenary}j"
 
 
c1=complex(1,4)
c2=complex(8,4)
print(c1+c2)
print(c1*c2)
output
9+8j
-8+36j'''
#5.write a class vector representing a vector of n dimension.overload the + and * operate 
#which calculate the sum and the dot product of them?
'''class vector:
    def _init_(self,vec):
        self.vac=vec
 
    def _str_(self):
        str1=""
        index=0 
        for i in self.vac:
            str1+=f"{i}a{index}+"
            index+=1
        return str1[:-1]
    def _add_(self,vec2):
        newList=[]
        for i in range(len(self.vac)):
            newList.append(self.vac[i] + vec2.vac[i])
        return vector(newList)
    def _mul_(self,vec2):
        sum=0
        for i in range(len(self.vac)):
           sum+=self.vac[i]*vec2.vac[i]
        return sum
 
v1=vector([1,4,5])
v2=vector([1,6,9])
print(v1+v2)
print(v1*v2)
output
2a0+10a1+14a2
70'''
 
#6.write _str_() method to print the vector as follows: 7i+8j+10k
#assume vector of dimension 3 for this problem?
'''class vector:
    def _init_(self,vec):
        self.vec=vec
 
    def _str_(self):
        self.vec=vec
    def _str_(self):
        return f"{self.vec[0]}i + {self.vec[1]}j + {self.vec[2]}k"
v1=vector([1,4,6])
v2=vector([1,6,9])
print(v1)
print(v2)
output
1i + 4j + 6k
1i + 6j + 9k'''
 
#7.override the _len_()method on vector of problem 5 to display the dimension of the vector
'''class vector:
    def _init_(self,vec):
        self.vac=vec
 
    def _str_(self):
        str1=""
        index=0 
        for i in self.vac:
            str1+=f"{i}a{index}+"
            index+=1
        return str1[:-1]
    def _add_(self,vec2):
        newList=[]
        for i in range(len(self.vac)):
            newList.append(self.vac[i] + vec2.vac[i])
        return vector(newList)
    def _mul_(self,vec2):
        sum=0
        for i in range(len(self.vac)):
           sum+=self.vac[i]*vec2.vac[i]
        return sum
    def _len_(self):
        return len(self.vac)
 
v1=vector([1,4,5])
v2=vector([1,6,9])
print(v1+v2)
print(v1*v2)
print(len(v1))
print(len(v2))
output
2a0+10a1+14a2
70
3
3'''