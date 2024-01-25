1.<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>javascript tutorial</title>
</head>
<body>
    <div class="container">
        <div class="row">
           <p>
            this is row in the container
            UserName:Sachinkumar5085
            Passward:Sachin@70
            Pin:2002
            finger print:right thumb                                                                                                 
            
           </p>
        </div>
    </div>
    <script>
        // write your javascript here
        console.log('hello word');
        console.log('my name is sachin kumar i amfrom bihar.my father name is akhileshwar prasad');
        console.log("my mother name is gitanjali kumari");
        console.log("i am sachin kumar");
        console.log("my name is akash");
        
    
    </script>
    
</body>
</html>



2.<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <style>

    </style>
    <script>
        var a=78;
        var b="sachin";
        c=34;
        console.log(a)
        console.log(b)
        console.log(c)
        
        // operators in java
        //operand->entities on which operators operate
        //in 3+4 '+' is the operator and 3,4 are operands
        // 1.unary operator->it has single operand(x=-x)

        //example of unary operators
        c=-c;
        console.log(c);
        // 2.binary operator->it has two operand(x=x+6)
        //example of binary operator
        d=456+8;
        console.log(d);
        //arthematic operator in action in javaScript
        var num1=2;
        var num2=3;
        console.log("the value of num1 + num2 is:"+(num1 + num2));
        console.log("the value of num1 - num2 is:"+(num1 - num2));
        console.log("the value of num1 * num2 is:"+(num1 * num2));
        console.log("the value of num1 / num2 is:"+(num1 / num2));
        console.log("the value of num1 + num2 is:"+(num1 ** num2));
        console.log("the value of num1++:"+(num1++));
        console.log("the value of num1++:"+(++num1));
         console.log("the value of num1++:"+(num1--));
        console.log("the value of num1++:"+(--num1));
         
<head>
<body>
    <div class="container">
        <h1>this is a heading</h1>
        <div class="content">
            <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Labore laborum voluptatem repellat, officiis voluptates maxime voluptate magnam, provident sint distinctio quas? Laudantium quasi dignissimos aspernatur architecto quaerat saepe, cupiditate dolor id quis natus? Vitae minus culpa aspernatur sunt delectus, nisi dolores expedita nemo quibusdam consectetur magni, sequi repellat voluptatem repudiandae tempora voluptate! Corporis, temporibus tempora! Ab totam vel excepturi. Molestiae!</p>
        </div>
    </div>
    
</body>
</html>



3.<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>javascript|String and string methods</title>
</head>
<body>
    <div class="container">
        <h1>Lorem ipsum dolor sit amet consectetur adipisicing elit. Provident, eum.</h1>
        <div class="" id="content"></div>
        <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Molestiae quod libero aliquam facilis doloribus quidem eius maiores ipsum sapiente, iste ab autem perspiciatis molestias accusamus! Animi fugit ad cum illo.
        Nam, et. Pariatur cum, voluptatum consequatur sapiente tempore impedit illum rerum architecto deserunt temporibus, et in, est accusamus nisi quaerat excepturi! Earum doloremque quidem molestiae provident. Commodi, inventore? Veritatis, illum.
        Sapiente neque sint nihil error accusantium repellat consequatur nobis, dolore et hic harum reiciendis eligendi autem labore temporibus natus ratione cum asperiores. Non dolorum vel iusto esse, quibusdam praesentium veniam?
        Quae officiis exercitationem quaerat ipsa alias minima veritatis, assumenda, a laboriosam at quas? Explicabo porro praesentium, itaque corporis numquam ab ea iure est ducimus odit modi cumque ipsam distinctio velit?</p>
    </div>
    <script>
        var string="this";
        // console.log(string)
        var name="sachin";
        var message="sachin is a good boy"
        var channel="codeWithSachin";
        var temp=`${name} is a nice person "and" he has a 'channel' called ${channel}`
        console.log(temp);
        // console.log(string + name + message);
        var len=name.length;
        // console.log('Length of name is ${len}' +len);
        console.log("legth:"+len);
        console.log("HELLO WORLD\nSACHIN kumar\t my father name is \\nakhileshwar prasad");/* here \n indicate second line*/
        document.getElementById("content").innerHTML='<h3> this is an h3 heading</h3>'

    </script>
    
</body>
</html>



4.<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>my name is sachin kumar</title>
    <style>
        .container{
            border:2px solid black;
            background-color: cyan;
            height:400px;
            width:400px;
            padding: 14px 14px 14px 14px;
            margin:14px 14px;
            border-radius: 40px;

            
        }
        h1{
            color:red;
        }
        p{
            color:yellow;
        }
    
    </style>
    <script>
        a=10;
        var b=20;
        var c="sachin";
        console.log(a);
        console.log(b);
        console.log(c);
        b=-b;
        console.log(b);
        d=20+30;
        console.log(d);
        var num1=10;
        var num2=2;

        console.log("addition of num1 and num2"+(num1+num2));
        console.log("subtraction of num1 and num2"+(num1-num2));
        console.log("multiplication of num1 and num2"+(num1*num2));
        console.log("division of num1 and num2"+(num1/num2));
        console.log("modulation of num1 and num2"+(num1%num2));
        console.log("power of num1 and num2"+(num1**num2));
        console.log("num1 value is: "+(num1 ++));
        console.log("num1 value:"+(++num1));
        console.log("num1 value:"+(num1--));
        console.log("num1 value:"+(--num1));
        var name="sachin";
        var message="you are a student.";
        var ra="you always like cricket";
        var temp=`${name} you have good friend ${message}`;
        console.log(temp);
        console.log(name +message+ra);
        var len=name.length;
        console.log(len);
        console.log("sachin\n hello world");
        console.log("sachin\t hello world");
        console.log("sachin\b hello world");
        
    </script>
</head>
<body>
       <div class="container">
        <h1>my name is sachin kumar</h1>
          <p>database management</p>
          <p>unix programming</p>
          <p>data structure</p>
          <p>embedded system</p>
        </div>
    
</body>
</html>


5.<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>javascript string function</title>
    <style>

    </style>
    
</head>
<body>
    <h1>my name is sachin kumar</h1>


    <script>
        var str="this is a string";
        console.log(str);
        // first occurance of substring
        var position=str.indexOf('is');
        console.log(position);
        // last occurance of substring
        position=str.lastIndexOf("is");
        console.log(position);
        // substring from a string
        //var substr=str.substring(1,7);//   //(1,7) means it print 1 to 6
        //console.log(substr);//
        var substr1=str.substr(1,7);//(1,7) means it print 1 to 6
        console.log(substr1);
        var replaced=str.replace("string","sachin");
        console.log(str);
        console.log(replaced);
        console.log(str.toUpperCase());
        console.log(str.toLowerCase());
       var newString=str.concat("my name is sachin kumar");
       console.log(newString);
       var strWithWhitespaces="   this contains       whitespaces";
       console.log(strWithWhitespaces);
       console.log(strWithWhitespaces.trim());
       var char3=str.charAt(2);
       console.log(char3);
       var space="   sachin    kumar         ";
       console.log(space);
       console.log(space.trim());
       var char2=str.charAt(0);
       console.log(char2);


    </script>
    
    

</body>
</html>



6.<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Scope,and conditionals</title>
</head>
<body>
    <!-- div>ul>li{item-$}*7 -->
    <div>
        <ul>
            <li>item-1</li>
            <li>item-2</li>
            <li>item-3</li>
            <li>item-4</li>
            <li>item-5</li>
            <li>item-6</li>
            <li>item-7</li>
        </ul>
    </div>
    <script>
        var string1="this is a string";
        var string1="this is a string2";
        console.log(string1);
        let a="u";
        {
            let a="u6";
            console.log(a);
           
        }
        console.log(a);



       /* const a="this can not be change";
        a="i want to change this.this can not be change"
        console.log(a);*/


     //if, else if,else statement example*/ 
       let age=5;
        if(age>18)
        {
            console.log("you can drink water");
        }
        else if(age==2)
        {
            console.log(age)
        }
        else if(age==5)
        {
            console.log("Age is 5");
        }
        else
        {
            console.log("you can drink cold drink");
        }


        //switch case statement exaample
        const cups=41;
        switch (cups)//key is variable
         {
            case 4://value
                console.log("this value of cups is 4");
                break;
            case 41://value
                console.log("this value of cups is 41");
                break;
            case 42://value
                console.log("this value of cups is 42");
                break;
            case 43://value
                console.log("this value of cups is 43");
                break;
            default:
                  console.log("the value of cups is none of 4,41,42,43");
                break;
        }

    </script>
    
</body>
</html>




7.<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Arrays and object</title>
</head>
<body>
    <div class="container">simple si html</div>
    <script>
        let myvar=34;
        let myvar1="sachin";
        let myvar2=true;
        let myvar3=null;
        let myvar4=undefined;
        let employee={
            name:"sachin",
            salary:10,
            channel:"CodeWithSachin",
            channel2:"ProgrammWithHarry",
        }
        console.log(employee);



        //array is object
       let names= [1, 2, 4, "Sachin",undefined ,1];
        let name= new Array(1, 21, 4, "Sachin",undefined );
        console.log(names);
        console.log(name);//it is find out array value
        console.log(names[3]);//it is find out index value
        console.log(names.length);//it is findout length;



        let myvar6=[43,23,67,26];
        myvar6=myvar6.sort();
        console.log(myvar6.sort());
        myvar6.push("this is pushed");
        console.log(myvar6);
        


        let names1= new Array(23 );
        console.log(names1.length);//it is findout length;*/
        names1=names1.sort();
        names1.push("this is pushed");
        console.log(names1);//it is find out array value
       /* employee.channel
'CodeWithSachin'
employee.channel2 or employee['channel2']
'ProgrammWithHarry' */     
    </script>
    
</body>
</html>


8.<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title> Function</title>
</head>
<body>
    <script src="tut8.js"></script>
    
</body>
</html>

// tut8.js 
console.log("this is tutorial 8");
function greet(name,greetText="greeating from javaScript")
{
    let name1="Name1";//it is local varivable
    console.log(greetText+"  "+name);
    console.log(name+" is good boy");
}

let name="sachin";
let name1="sam";//it is global variable
let name2="harshanand";
let name3="ritesh";
let greetText="good Morning";
greet(name,greetText);
greet(name1,greetText);
greet(name2,greetText);
greet(name3);// here we not take greetText so he takes default value of greetText.


function sum(a,b,c)
{
    let d=a+b+c;
    return d;
    //console.log("Function is returned") 
    //this line will never execute(unreachable code)
}
let returnVal=sum(1,2,3);
console.log(returnVal);

function simpleinterest(p,t,r)
{
    let si=(p*t*r)/100;
    return si;
}
let returnVal1=simpleinterest(100,5,9);
console.log(returnVal1);

/*console.log(name+" is good boy");
console.log(name1+" is good boy");
console.log(name2+" is good boy");
console.log(name3+" is good boy");*/




9.<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Interaction using alert,confirm and prompt</title>
</head>
<body>
    <div class="container">
        this is a page
    </div>
    <script>
        // alert in in-browser javaScript-does not return anything it is only ok
    //    alert("this is message");
          alert("please cheak your message");

        let name=prompt("what is your name?","Guest");
        console.log(name);


        // console.log(delete the post)
        let deletePost=confirm("do you really want to delete this post?");
        console.log(deletePost);
        if(deletePost)
        {
            //code to cancel delete of the post
            console.log("your post has been deleted successfully");
        }
        else
        {
            //code to cancel deletion of the post
            console.log("your post has not  been deleted");
        }

        //alert,prompt,confirm used in html

       /* let assigment=confirm("will you submit the assigment");
        console.log(assigment);
        if(assigment)
            {
                console.log("i will sumit the assigment");
            }
        else
            {
                console.log("i will not submit the assigment");
            }*/



           /* alert("please check your message");
    let name=prompt("what is your name:");
    console.log(name);*/
      

let num1=1000,num2=3000,num3=450,num4=45;
if(num1>num2)
{
    if(num1>num4)
    {
        console.log("num1 is  greater: "+num1);
    }
    else
    {
        console.log("num4 is  greater:"+num4);
    }

}
else if(num2>num3)
{
    if(num2>num4)
    {
        console.log("num2 is  greater: "+num2);
    }
    else
    {
        console.log("num4 is  greater: "+num4);
    }
          
}
else
{
         if(num3>num4)
         {
            console.log("num3 is greater:"+num2);
         }
         else
         {
            console.log("num4 is greater:"+num4);
         }
}
let newdate=new Date();
console.log(newdate);

       
        


    </script>
    
</body>
</html>



10. <!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>loops </title>
</head>
<body>
    <div class="container">
        This is about loops
    </div>
    <script>
        /*console.log("this is tutorial 10");

        let i=0;
        for(i=0;i<3;i++)
        {
            console.log(i);            
        }   */
        
      /*  let friends=["rohan","sanjeev","deepti","pooja","skillf"];
        for (let i= 0; i < friends.length;i++)
         {
           let element = friends[i];
            console.log("hello friend,"+element);

            // console.log("hello friend,"+friends[index]);  
            //console.log(friends[i]);
           
        }  */      
        



    /*    let friends=["rohan","sanjeev","deepti","pooja","skillf"];
        for (let index = 0; index < friends.length; index++)
         {
           let element = friends[index];
           console.log("hello friend,"+element);

            // console.log("hello friend,"+friends[index]);  
        }                                                     */


    /* let friends=["rohan","sanjeev","deepti","pooja","skillf"];
        friends.forEach(function f(element)
        {
            console.log("hello friend,"+element+"to modern java javaScript");
        });           */


      /*let friends=["rohan","sanjeev","deepti","pooja","skillf"];
        for(element of friends)
        {
            //console.log("hello friend,"+element+"to modern java javaScript"); 
                     console.log(element);
        }    */                                    
       



     /* let employee={
            name:"sachin",
            salary:2,
            channel:"cws"
        }
        //use this loop to iterate over objects in javaScript
        for(key in employee)
        {
            console.log(`the ${key} of employee is ${employee[key]}`);
        }    */                                                                 
        

        // while loop in js
       /*let i=0;
        while(i<4)
        {
            console.log(`${i} is less than 4`);
            i++;
        }  */                                     


         // do  while loop in js
         /*let j=34;
         do
         {
            console.log(`${j} is less than 4 but and we are inside do while loop`);
            j++;
         }while(j<4);*/







         /*alert("please cheak your message");
         let name=prompt("what is your name?","friends");
         console.log(name);
         let show=confirm("do you show your name");
         console.log(show);
         let friends=["rohan","sanjeev","deepti","pooja","skillf"];
         let i=0;
         do 
         {
            console.log("print my friend name:"+friends[i]);
            i++;
         }while(i<5);

         let age=39;
         if(age<18)
         {
            console.log("you are child");
        
         }
         else if(age<41)
         {
            console.log("you are young");
         }
         else 
         {
            console.log("you are old");
         }*/

        /* let a=40,b=20,c;
         let choice=5;
         switch(choice)
         {
        
            case 1:c=a+b;
                console.log("addition of two number:"+c);
            break;
            case 2:c=a-b;
                   console.log("subtraction of two number:"+c);
             break;
             case 3:c=a*b;
                   console.log("multiplication of two number:"+c);
             break;
             case 4:c=a/b;
                   console.log("division of two number:"+c);
             break;
             case 5:c=a%b;
                   console.log("remainder of two number:"+c);
             break;
            default:console.log("invalid value"); 
         }*/
                                                                                                                                             

    </script>
    
</body>
</html>


11. <!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Manipulating Dom</title>
</head>
<body>
    <div id="main" class="container">
        <ul id="nav">
            <li>Home</li>
            <li>About</li>
            <li>Contact Us</li>
            <li>Services</li>
            <li>More About US</li>
        </ul>                                                           
    </div>
    <div class="container">
        Another Container     
    </div>
    <script>     
         let main = document.getElementById('main');
         console.log(main);

         let nav=document.getElementById("nav");
         console.log(nav);
        

          let containers=document.getElementsByClassName('container');
          console.log(containers);

        //  let sel=document.querySelector('#nav>li');
        //  console.log("Selector return",sel);
         
    

        
        let sel=document.querySelectorAll('#nav>li');
        console.log("Selector return",sel);
    </script>

    

    
</body>

</html>


12.<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Js Events</title>
    <style>
        #btn{
            padding:34px;
            background:blue;
            color:red;
            border:2px solid black;
            font-weight: bold;
            border-radius: 20px;
            cursor:pointer;
        }
    </style>

</head>
<body>
<!-- Browser events: 
    click
    contextmenu
    mouseover/mouseout
    mousedown/mouseup
    mousemove

    submit
    focus
    DOMContentLoaded
    transionend -->
    <div class="container">
        <h1>This is my heading</h1>
        <p id="para">Lorem, ipsum dolor sit amet consectetur adipisicing elit. Accusamus, assumenda, voluptatum quae fugiat cumque similique earum esse eius modi sequi illum, velit sint. Aspernatur quidem veniam ipsum maxime, error soluta eveniet nesciunt in quos rerum consequuntur officia eos accusantiumsimilique, laudantium possimus necessitatibus voluptatem. Doloribus iure quos nisi nam voluptate aliquid laborum saepe incidunt possimus facilis eum maxime doloremque veniam voluptatum iusto suscipit, aperiam itaque? Vel velit accusantium voluptas fugit iste, quaerat, magni odio placeat commodi repudiandae saepe dolores dolor sapiente earum, quis consequatur eius amet mollitia! Tenetur, voluptas omnis? Repellendus corporis nesciunt velit mollitia! Aspernatur dolore minima quo animi, sunt fuga ratione pariatur? Beatae at deleniti in harum minima laboriosam aut excepturi sunt cupiditate. Suscipit deserunt ab adipisci obcaecati optio dolore sint ullam quis culpa quae laborum ipsum commodi nesciunt, totam quod dolorem quam molestias maiores ipsa, rem vero, saepe exercitationem asperiores. Libero cupiditate ut nesciunt eveniet autem beatae, sapiente iste harum adipisci recusandae error repudiandae accusantium, eaque, corporis vero provident dolorum laudantium laborum minus. Quisquam, nisi non illum sunt dicta eum hic architecto dolorum cum, ratione veritatis. Animi ducimus, delectus repellendus earum similique, quidem error quia iste sapiente quasi cum quas ad tempora quam vitae! Eligendi, rem tenetur doloribus, eos et nostrum error debitis recusandae molestias consequatur mollitia numquam perferendis. Tempore nostrum optio cumque quas sequi. Laudantium placeat tempore, voluptatum laborum, in harum impedit sunt debitis doloremque numquam, quo explicabo officiis.</p>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               





        <p id="para">Lorem ipsum dolor sit amet consectetur adipisicing elit. Quae eveniet quasi officiis ab enim modi mollitia inventore voluptatum, consectetur sunt?</p>





    </div>
    <button id="btn" onclick="toggleHide()">Show/Hide</button>
    <script>
        // alert("cheak your message");
        // let para=document.getElementById('para');
        // console.log(para);
        // para.addEventListener('mouseover',function run()
        // {
        //     alert('Mouse Inside')
        //      console.log('Mouse Inside')

        // })
        
        /* para.addEventListener('mouseout',function run()
        {
            alert('Mouse Inside')

            console.log('Mouse now went outside')

        });  */
        
        function toggleHide(){
          let btn=document.getElementById('btn');
          let para=document.getElementById('para');
    
          if(para.style.display!='none')
          {
            para.style.display='none';
          }
          else
          {
            para.style.display='block';
          }
         
        }                                                                


       /* function toggleHide()
        {
            let btn1=document.getElementById('btn');
           let para1=document.getElementById('para1');
           
            if(para1.style.display !='none')
            {
                para1.style.display='none';
            }
            else 
            {
                para1.style.display='block';
            }

        }*/
    </script>
    
</body>
</html>   



13.   <!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>javascript setTimeOut and ClearTimeout</title>
</head>                                                                                                   
<body>
    <div class="container">
        <!-- this is a container -->                                                                      
        Time now is <span id="time"></span>
    </div>
    <script>
        console.log("this is tutorial 13");
       // setTimeout-->Allows us to run the  function once after the interval of time                                                                                                                                                                                                                                                                                                                                                                                                 
       //clearTimeout-->Allows us to run the  function repeatedly after the interval of time
       function greet(name,byteText)
       {
        // console.log("Hello good morning");
        console.log("Hello good morning :" +name+" "+byteText);
       }
       greet();
      timeout= setTimeout(greet,5000," sachin","takecare");
      console.log(timeout);
      //clearTimeout(timeout);                                                                                                                                                                                                                                                                                                                                                                                                                                     
      setInterval(greet,1000,"sachin","Good Night");
     // clearInterval(intervalId);
     //setTimeut(greet(),12000)-->wrong as it is callinng the function inside setTimeout
     //intervalId=setInterval(greet,1000,"sachin","good Morning");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             s                                           s                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
     //clearInterval(intervalId);


     function displayTime()
     {
        time=new Date();
        console.log(time);
        document.getElementById('time').innerHTML=time;

     }
     setInterval(displayTime,1000);                                                                                                                                                              
                                      
    /* function sir(name,number)
     {
         console.log("detail of sir:"+name+" "+number);
     }
     setInterval(sir,1000,"name","number"); */
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             

    </script>
    
</body>
</html>


14.  <!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>javascript dates</title>
    <style>
        .container{
            font-size:23px;
            background-color: violet;
            border:2px solid black;
            padding:34px;
            margin:4px;
            text-align: center;
        }
        #time{
            font-weight: bold;
        }
    </style>
</head>
<body>
    <div class="container">
        this is a container
        current time is <span id="time"></span>
    </div>
    <script>
        console.log("this is data and time tutorial");
        let now=new Date();
        console.log(now);

        let date=new Date(1000);//1000 indicate 1second time
        console.log(date);
        /*let newDate=new Date("2029-09-30");
        console.log(newDate);*/


        //let newDate=new Date(year,month,date,hours,minutes,seconds,milliseconds);
        let newDate=new Date(3020,4,6,9,3,2,34);
        console.log(newDate);

        let yr=newDate.getFullYear();
        console.log("the year is",yr);

        let dat=newDate.getDate();
        console.log("the date is",dat);
        let month=newDate.getMonth();
        console.log("the month is",month);
        let hours=newDate.getHours();
        console.log("the hours is",hours);
        let minute=newDate.getMinutes();
        console.log("the minutes is:"+minute);
        let second=newDate.getSeconds();
        console.log("the second is:"+second);


        newDate.setDate(15);//when you takes 40 then it is automatically chage date 1 to 31
        newDate.setHours(11);
        newDate.setMinutes(29);
        newDate.setSeconds(36);
        console.log(newDate);

       /* Date.now();
        1681582952287 millisecond pass it take in console */
         //setInterval(updateTime,1000);
        function updateTime()
        {
             time.innerHTML=new Date();
        }
        setInterval(updateTime,1000);
    //    let date1=newDate.getDate();
    //    console.log("date is "+date1);
    //    let month1=newDate.getMonth();
    //     console.log("the month is",++month1);
       
    
       



    </script>
   
    
</body>
</html> 


15.  <!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">                                                                                                                                                        
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Arrow function</title>
</head>
<body>
    <div class="container">
        this is arrow functions tutorial
    </div>
    <script>
        /*function  greet() {
            console.log("good morning");
        }                                                                                                                                                                                                                                                                                                                                                      
        greet();*/

        // arrow function
         let greet= ()=> {
            console.log('good morning');
        }
        greet();
        greet();
        

        /* let sum=(a,b)=>{
             return a+b;
         }; */                   
 //add,sub,mul,div,rem is used to function       

      /*   let sum=(a,b)=>a+b;
        let sub=(a,b)=>a-b;
        let mul=(a,b)=>a*b;
        let div=(a,b)=>a/b;
        let rem=(a,b)=>a%b;
        let half=(a)=>a/2;
         sum(); */
         
/*output in console
sum(20,10);
30
sub(30,10);
20
mul(20,10);
200
div(20,10);
2
rem(10,2);
0sum(20,10);
30
sub(30,10);
20
mul(20,10);
200
div(20,10);
2
rem(10,2);
0  
half(20);
10                     */
let greed=()=>console.log("my name is sachin kumar");
greed();







        setTimeout(() => {
            console.log("we are inside settimeout")
        },3000);


        setTimeout(() => {
            console.log("good evening");
            
        },5000);


      /*  let obj1={
            greeting:"good morning\t ",
            names:["sachin","sam","ritesh","harsh","shivam"],
            speak(){
                this.names.forEach((student)=>{
                console.log(this.greeting+"my name is:"+student)
                    
                });
            }
        }
        obj1.speak();

        output in obj1                                                                                                                                                  
        good morning	 my name is:sachin
 good morning	 my name is:sam
 good morning	 my name is:ritesh
good morning	 my name is:harsh
good morning	 my name is:shivam            */                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          

    </script>
    
</body>
</html>



16. <!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Math object</title>
</head>
<body>
    <div class="container">
        <h>this is math object tutorial</h>
    </div>
    <script>
        let m= Math;
        //printing the constants from Math object
        console.log(m);
        console.log("the value of MATH.E  is",Math.E);
        console.log("the value of MATH.LN2  is",Math.LN2);
        console.log("the value of MATH.LN10  is",Math.LN10);
        console.log("the value of MATH.LOG2E  is",Math.LOG2E);
        console.log("the value of MATH.PI  is",Math.PI);
        console.log("the value of MATH.SQRT1_2  is",Math.SQRT1_2);
        console.log("the value of MATH.SQRT2  is",Math.SQRT2);


        //printing the function from Math object                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
        let a=34.64543;
        let b=89;
        console.log("the value of a and b is ",a,b);
        console.log("the value of a and b  rounded is ",Math.round(a),Math.round(b));

        //calulate  power
        console.log("3 power 2:",Math.pow(3,2));
        console.log("2 power 12:",Math.pow(2,12));
        console.log("1 power 2:",Math.pow(1,2));

        //calculate squre root value
        console.log("squre root of 7:",Math.sqrt(7));
        console.log("squre root of 64:",Math.sqrt(64));
        
        //ceil and floor
        console.log("5.8 rounded up to nearest integer is",Math.ceil(5.8));
        console.log("5.8 rounded down to nearest integer is",Math.floor(5.8));

        //absulute value calulate
        console.log("Abbsolute value of 5.66 is ",Math.abs(5.66));
        console.log("Abbsolute value of -5.66 is ",Math.abs(5.66));

        //trignomatric function
        console.log("the value of sin(pi) is ",Math.sin(Math.PI/2));
        console.log("the value of tan(pi) is ",Math.tan(Math.PI/2));
        console.log("the value of cos(pi) is ",Math.cos(Math.PI/2));


        //min  and max function
        console.log("Minimum value of 4,5,6,7 is:",Math.min(4,5,6,7));
        console.log("Maxmum value of 4,5,6,7 is:",Math.max(4,5,6,7));

        //Generating a random number
        let r=Math.random();
        console.log("the random number is",r);
        //random number b/w (a,b)=a+(b-a)*Math.random()
        // takes number between two number
        let a1=1;                                                                                                                
        let b1=100;
        let r1_100=a1+ (b1-a1)*Math.random();
        console.log("the random number is",r1_100);
        let a2=50;
        let b2=60;
        let r50_60=a2+ (b2-a2)*Math.random();
        console.log("the random number is",r50_60);
        console.log(Math.clz32(1000));
        
 
    </script>

    
</body>
</html>



17. <!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>JSON tutorial</title>
</head>
<body>
    <div class="container">this is my container</div>
    <script>
        /*let jsonObj={
            name:"sachin",
            channel:"CWS",
            friend:"sam",
            food:"Bhandi"
        }
        console.log(jsonObj);
        let myJsonStr=JSON.stringify(jsonObj);
        console.log(myJsonStr);
        myJsonStr= myJsonStr.replace("sachin","shuvam");//it is replace name
        console.log(myJsonStr);
        newjsonObj=JSON.parse(myJsonStr);
        console.log(newjsonObj);*/
         
        let jsonObj={
            name:"tuntun",
            usn:"1RN20CS119",
            friend:"rahul",
            food:"ladiesfinger"
        }
        console.log(jsonObj);
        let myJsonStr=JSON.stringify(jsonObj);
        console.log(myJsonStr);
        myJsonStr=myJsonStr.replace("tuntun","sachin");
        console.log(myJsonStr);
        newJsonObj=JSON.parse(myJsonStr);
        console.log(newJsonObj);

        
    </script>
       
</body>
</html>

tut17.js

// console.log("Hello word");
const http = require('http');

const hostname = '127.0.0.1';
const port = 3000;

const server = http.createServer((req, res) => {
  res.statusCode = 200;
  res.setHeader('Content-Type', 'text/plain');
//   res.end('Hello World this is rohan das');
   res.end(`<!DOCTYPE html>
   <html lang="en">
   <head>
       <meta charset="UTF-8">
       <meta http-equiv="X-UA-Compatible" content="IE=edge">
       <meta name="viewport" content="width=device-width, initial-scale=1.0">
       <title>pseudo selectors & more designing</title>
       <style>
           .container{
               border:30px solid purple;
               background-color: red;
               padding:34px 34px 34px 34px;
               margin:34px auto;
               width:444px;
   
           }
           /* a{} means delete the horizental line in the bottem */
           a{
               /* text-emphasis:  means underline delete from read more; */
               text-decoration: none;
               color:black;
               
               
           }
           /* a:hover{} means arrow insicate change the color*/
           a:hover{
               color:red;
               background-color: yellow;
               border:2px solid blue;
           }
           /* a:visited means open the read href contail like google is open  */
           a:visited{
               background-color:red;
   
           }
           /* a:active means cliking time change */
           a:active{
               background-color: green;
               color:violet;
   
           }
           .btn{
           
               font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
               font-weight: bold;
               background-color: aqua;
               padding:6px;
               margin: 2px;
               /* border:none means delete the border ex-contact us show in the figer */
               border:2px solid green;
               cursor:pointer;
               font-size: 13px;
               border-radius: 4px;
           
               
           }
   
       </style>
   </head>
   <body>
       <div class="container">
           <h3>this is my heading</h3>
           <p>Lorem ipsum dolor sit amet consectetur, adipisicing elit. Expedita repudiandae deleniti consectetur nulla unde, ipsum corporis error asperiores id fugit architecto placeat quam quod dolorum harum inventore esse quis. Molestias cum corrupti dolores odit temporibus deserunt nam vitae fugit enim aspernatur neque tenetur asperiores architecto exercitationem culpa sed, laudantium ipsum atque quidem dignissimos facilis amet rerum. Necessitatibus eligendi perspiciatis pariatur?</p>
           <a href="google.com"class="btn">Read more</a>
           <button class="btn">contact us</button>
           
   
       </div>
       
   </body>
   </html>`)
});

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
}); 

tut18.js 









