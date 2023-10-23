/*1.What is MySQL?
MySQL is open source a relational database management system.mysql is commonly used for web application
MySQL is open-source.MySQL was first released in 1995
2.Who Uses MySQL?
Huge websites like Facebook, Twitter, Airbnb, Booking.com, Uber, GitHub, YouTube, etc.
3.What is RDBMS?->RDBMS is a program used to maintain a relational database.RDBMS uses SQL queries to access the data in the database.
4.database:->database organized collection of data.data is madeup tabes/storied in the tabular formate.tables will be madeup coloum and row.coloum as catogries and row will be information/data  entry.
5.database table->A table is a collection of related data entries, and it consists of columns and rows.
6.What is SQL?
SQL is the standard language for dealing with Relational Databases.

SQL is used to insert, search, update, and delete database records.
7.How to Use SQL
The following SQL statement selects all the records in the "Customers" table:
example:=>SELECT * FROM Customers;
8.Some of The Most Important SQL Commands
<i>SELECT - select data from a database
=>SELECT Syntax
SELECT column1, column2, ...
FROM table_name;
example:SELECT CustomerName, City, Country FROM Customers;

<ii>UPDATE - updates data in a database
UPDATE Syntax:
UPDATE table_name
SET column1 = value1, column2 = value2, ...
WHERE condition;
example:
UPDATE Customers
SET ContactName = 'Alfred Schmidt', City = 'Frankfurt'
WHERE CustomerID = 1;
<iii>DELETE - deletes data from a database
delete syntax:
example:
DELETE FROM Customers WHERE CustomerName='Alfreds Futterkiste';
DELETE FROM table_name WHERE condition;
<iv>INSERT INTO - inserts new data into a database
--------------------------------------------------------
<v>The MySQL WHERE Clause
The WHERE clause is used to filter records.
WHERE Syntax
SELECT column1, column2, ...
FROM table_name
WHERE condition;
//The ALTER TABLE statement is used to add, delete, or modify columns in an existing table.

1.ALTER TABLE - ADD Column
To add a column in a table, use the following syntax:
ALTER TABLE table_name
ADD column_name datatype;
example:
ALTER TABLE Customers
ADD Email varchar(255);
2.ALTER TABLE - DROP COLUMN
 ALTER TABLE table_name
 DROP COLUMN column_name;
example:
ALTER TABLE Customers
DROP COLUMN Email;
3.ALTER TABLE - MODIFY COLUMN
ALTER TABLE table_name
MODIFY COLUMN column_name datatype;
example:
ALTER TABLE Persons
MODIFY COLUMN DateOfBirth year;
------------------------------------------------------------------------------------------
1.The CREATE DATABASE statement is used to create a new SQL database.
syntax:
CREATE DATABASE databasename;
-------------------------------------------------------------------------------------------
2.MySQL CREATE TABLE Statement:The CREATE TABLE statement is used to create a new table in a database.
syntax:
CREATE TABLE table_name (
    column1 datatype,
    column2 datatype,
    column3 datatype,
   ....
);

3.The MySQL DROP TABLE Statement
The DROP TABLE statement is used to drop an existing table in a database.
Syntax
DROP TABLE table_name;

4.The PRIMARY KEY constraint uniquely identifies each record in a table.

ex:CREATE TABLE Persons (
    ID int NOT NULL,
    LastName varchar(255) NOT NULL,
    FirstName varchar(255),
    Age int,
    PRIMARY KEY (ID)
);
5.A FOREIGN KEY is a field (or collection of fields) in one table, that refers to the PRIMARY KEY in another table.
example:CREATE TABLE Orders (
    OrderID int NOT NULL,
    OrderNumber int NOT NULL,
    PersonID int,
    PRIMARY KEY (OrderID),
    FOREIGN KEY (PersonID) REFERENCES Persons(PersonID)
); */

//cheack it out 1NF OR NOT

**until you know that this variable is containing number of comma(,)=>what will do->we will give the value to the function  if number is postive then table is not 1NF otherwise 1NF

** maltivalue is present  in row is not 1NF

what normalization : database normalization  is a technique  of organizing the data in the database.
1NF:- in the first normal form we tackle the problem of atomicity


-----------------------------------------------------------------------------------top interview question------------------------
1.difference between DBMS and RDMS
->DBMS-> databsae is managed by different different form me ex: database is stored in  form   of graph , in the document form,in  the keyvalue pair ,in the relation or table form.
RDMS->database is stored only in the form of  table only.ex: mysql,sql server

2.what is primary key
->primary key is key which is unique  plus Not NULL
ex:primary=unique + Not Null

3. what is foreign key 
->A Foreign key is a column in the table that are refers to the primary key in the another table.
 
4. what are Constraints & their type
->sql constraints are used to specify rules for the data in the table
there are following step
i>.NOT NULL ->ensures that a column cannot have a NULL value
ii>.UNIQUE->ensures that all values in a column are different
iii>.PRIMARY KEY
iv>.FOREIGN KEY
v>.CHECK:->ensures that the values in a column satisfied  a specific condition 
vi>.DEFAULT:->sets a default value for a column if no value is  specified.

5.explain different types of SQL Commands
 1>data definition language(DDL):Create,alter,Drop,Truncate,Rename
 ii>data manulation language->Select,Insert,Update,Delete
iii>data control language->Grant,Revoke
iv>transaction Control language->Commit,Rollback,Savepoint
v>Constraints->not null,unique,primary key,foreign key cheack,default 

6.Diffrentiation Delete,Drop & Truncate
1.delete-> i>Remove rows from a table(delete one or more than one row in one time but not delete table ka structure) ii>DML iii>can be rolled back
2.drop->i>Remove a table from the database/data dictionary(delete table structure) ii>DDL iii>can not rolled back
3.Truncate->Remove all rows from a table(delte all row  in one time but not delete table ka structure) ii>DDL iii> can not be rolled back


7.Differentiate group by & order by
 i>group by-> group by  clause is applied when we want to use aggreate functions to more  than one set of rows.(aggregate function example:max(),min(),count(),average())
ii> order by ->order by is used to data sort

8. type of joins in sql(detail)

->they are following joins in sql
i>cross join ii> inner join iii>left outer join/left join iv>right outer join/right join v>full outer join

9.Nested subquery vs Correelated subquery
 i>nested query->it is buttom up approuch(outside each row is compair to inside row)
ex:select * from table where salary=(Select Max(salary) from table)
ii>correlated subquery->it is top down appruch( outside each row is compair to inside row)
exampe:select * from employee where EXISTS(SELECT emp_id FROM project WHERE employee.emp_id=project.emp_id);

 10. Pattern Matching
->1.WHERE Name LIKE'a%'(first letter 'a' hona chahiye in the name)
2.WHERE Name LIKE'%a'(last letter 'a' hona chahiye in the name)
3.WHERE Name LIKE'%a%'(kahi per letter 'a' hona chahiye in the name)
4.WHERE Name LIKE'_a%'(first letter kush vi ho but second letter'a' hona chahiye in the name)
5.WHERE Name LIKE'a_%'(first letter'a' ho thub bad ka letter kuch vi  hona chahiye in the name)
6.WHERE Name LIKE'a% y'(first letter'a' ho thub bad ka letter kuch vi  hona but last letter y ho in the name)

11.Find 2nd Highest salary

ex:SELECT name,MAX(salary)AS salary FROM employee
       WHERE salary<>(SELECT MAX(salary) FROM employee);

12.what is sql vs nosql
->i>sql->sql is working on relational data(like table store)
ii>nosql->nosql is working on non-relational data(like document store)
13.Varchar vs varchar(both are data type)
->VARCHAR is ANSI Standard and VARCHAR2 is oracle standard

14.triggers->triggers is a special type of stored procedure that automatically runs when an  event occurs in the database server.
15. what is acid properties in the database
->1.atmicity:either all the changes are performed, or none of them
 2.consistency:value is same from starting to ending
 3.isolation:it should be serialised version
 4.durability: data is save in the database permanent


15.what is database?
16.what is DBMS?
17.what is RDMS? How is differerent from DBMS?
18.differnce between  primary key and unique key?
19.what is difference between sql and mysql
20.difference between stored procedure and functions?
21.what is a join?lists its different types
22.what is an index?explain its different types
23.what is the difference between clustered and non clustered index?
24.what are constraints in sql?
-----------------------------------------------------------------------------------cloud computering------------------------------
1.what is cloud computering
->cloud computering is basicaly the power to access any application  or information from any part of the world. example: youtub,zoom,goolemeet.
2.tell me different type of cloud models?
->i>IAAS(infrastracture as a servies)
 ii>PAAS(platform as a servies)
 iii>SAAA(software as a servies)->example: email service,online food ordering
3.what is the benifit of cloud computering?
->i>cost Reduction
 ii>easily scalable
 iii>high security
 iv>access any where from the world

4.what are the different of cloud
->1.private cloud->it is deployed locally. advance i>it has high secureity ii>cost is high,more custamization
 ii>hibride cloud->it is mixture of public cloud and private cloud
iii>public cloud->it is deployed globally. advance i>it has less security ii>cost is low,less custamization .
------------------------------------------------------------------------------------------------------------------------------------------------------operating system-----------------------------
1.what is operating system?what does it do?
->provides an enviroment to exrcute program.
  it is doing memory management,file management,processore management,Device management,security,networking.
2.what are the most popular operating stystems at present?
->android,window,IOS,world's most used mobile opereating system(android) 
3.what are the main functions of an operating system?
->it prvides the interface,it deals with memory management,it deals with various file activities.
4.what is a kernal? what are the different types of kernals?
->kernal is core of the operating system.it is controls all the other programs.it is    responsible for low level task.
Types of kernals:monolithic,micro,Hybrid,Exo,Nano kernal
5.what is the difference between monolithic and micro kernal?
->i>monolithic kernal->user and kernal services share the same memory space.it is bigger in  size. it is faster.
ii>Micro Kernal->user and kernal services are kept in seprate addresh space.it is smaller in size.it is slower.
6.what are device drivers?
->A device driver is a piece of software  that allows the kernal of the OS to communicate with different hardware in thre system.
7.what is paging?
->paing is a memory management schema.the process of transferring of pages between main memory and virtual memory.
8.what is a process in operating system?
->process is program in execution.
  when a process executes,it passes through many different stages like start,ready,running,watting and terminated state.

9.what are the various attributes asssociated with a process?
->process id,process state,priority, process counter,cpu registers,list of open files,list of open devices.
10.what is a thread?
->a thread is the smallest unit of execution within a process.a thread is a lightweight process.
11.what is mutile thread?
->Multiple threads can run in parallel on different processors.
12.what is a deadlock?
->Deadlock is a situation where two processes are waiting for each other to complete  in  order to start their operations.
13.what are the necessary conditions that can lead to a deadlock situation in a system?
->i>mutual Exclusion ii>Hold and Wait iii>no preemption iv> Circular wait
14.what is a Banker's algorithm?
->Banker's algorithm is deadlock avoidance algorithm
it is named as Banker's algorithm because the bankers use the same technique to allocate money.
15.what are the different states of prcess?
->state,ready,running,waiting,terminated.
16.what is a suduling algorithm?Name the different types of scheduling algorithms.
->a scheduling algorithm is an algoritham which insteds to improve efficiencyby reducing the waiting time to a minimum while allocating resources to various computing task.

Type of scheduling algorithams
i.FCFS(first come first serve)
ii>Priority Scheduling
iii>round robin scheduling

17.what is the difference between segmentation and paging?
->paging->i>the size of a page is fixed ii>it is faster iii>the size of the pages is determined by the CPU and avilable memory.
segmentation->i>the size of a segmentation is not fixed ii>it is slower iii>the size of the segmentation is determined by the user.
18.what is thrashing?
->
19.what is a virtual memory->user is used main memory and secondary memory.secondary memory is working like main memory.

20.demand paging->it does not keep all proceess in main memory. because size is limited.which pages will be demand then pages will keep in main memory if  page demand is finish then pages kept outside of the main memory.
11.preemptive vs Non preemptive scheduling?
example:preemptive scheduling->if procees send from ready to running then  proesser send from running to ready it is called preemptive scheduling.
Non preemptive scheduling:->if procees send from ready to running then  proesser does not send from running to ready it is called  non preemptive scheduling.
21.multiprogramming vs multitasking 
->multiprogramming->in multiprogramming,multiple programs execute  at a same time on a single device.
multitasking->in multitasking, a single resource is used to proess multiple tasks.ex:linux
-------------------------------------------------------------------------------------networking-----------------------------------
what is computer network?
->two or more computers which are connected to each other for perpose of sharing their resource or data is called computer network.
2.what is first computer network?
->ARPANET(Advance Reaserch Projects Agency Network)
3.what is featcure or characteristics of computer  Network
->1.Resourse or data sharing
  ii>communication speed 
  iii>Backup
 iv>Scalability
  v>Realiability
 vi>software and hardware sharing
 v>Security
4.NetWork Devices:->any computer network is connected network is Network Devices.ex:HUB,SWITCH,BRIDGE,ROUTER
5.How many types of network
->1.PAN(personal  Area Network)->it has range less than 10 meter. example  it is used in HOME(moblile is connect to wifi) 
ii>LAN(Local Area netwok)->it has range less than 150 meter.example it is used in office
iii>MAn(Metropolitan AREA Network)->it has range less than  50 KM. it is use in city
iv>WAN(Wide Area network)->range is not fixed in WAN .it is used for countries or all aroud world.
6.what is advantes of networking
->i>open to everyone
  ii>File sharing
  iii>network provides security
  iv>easy to add new devices.
   v>Backup and storage.

7.what is disadvantage of networking
->i>network device required 
  ii>virus attack
  iii>required handler
  iv>high speed internet 
  v>Server

8.what is a link?
->Refers to the connectivity between two devices.
9.what are the types of LAN cables used?
->there are two types of LAN used-'categry 5(100Mbps)' and 'categry 6(1000Mbps)'
10.what is a 'cross table'?
->this is a type of connection between same types of device without using a hub/switch so that they can communicate.
11.what is state table?
->this is a type of connection between different types of device 

12.what is DNS?
->DNS-(Domain Name System)it is centeral part of internet.
13.Gateway works at which layer of the OSI model?
->Transport layer
How many layers are there in the OSI refrence model?
->there are 7 layers(physical layer,data link layer,network layer,transport layer,session layer,presentation layer,application layer)
14.difference between 'forword lookup' and 'reverse lookup'in DNS?
->'forword lookup': converting names to IP address
-> 'reverse lookup':Resolving IP address to names
15.How many layer are there in TCP/IP network reference model?
->there are four layers(network layer,internet layer,transport layer,application layer)
16.what is RIP?(routing information protocal)
->it is dyami routing protocol  used by routers to send data from one network to another.

                         or

 dynamic routing protocal  is used for select best root of mutiple root in the networking
17.what are 'firewalls'?
->Firewalls serve to protect an internal network from external attacks.
 



























  














