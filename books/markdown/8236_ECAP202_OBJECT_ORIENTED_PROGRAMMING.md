# **Object Oriented Programming**
### **ECAP202** **Edited by** **Balraj Kumar**


##### **CONTENT**

**Unit 1:** **Principles of OOP** 1

_Prikshit Kumar Angra, Lovely Professional University_

**Unit 2:** **Basics of C++** 17

_Prikshit Kumar Angra, Lovely Professional University_

**Unit 3:** **Operators and Type Casting** 30

_Prikshit Kumar Angra, Lovely Professional University_

**Unit 4:** **Control Structures** 50

_Prikshit Kumar Angra, Lovely Professional University_

**Unit 5:** **Pointers and Structures** 63

_Prikshit Kumar Angra, Lovely Professional University_

**Unit 6:** **Classes and Objects** 74

_Prikshit Kumar Angra, Lovely Professional University_

**Unit 7:** **More on Classes and Objects** 90

_Prikshit Kumar Angra, Lovely Professional University_

**Unit 8:** **Handling Functions** 104

_Prikshit Kumar Angra, Lovely Professional University_

**Unit 9:** **More on Functions** 113

_Prikshit Kumar Angra, Lovely Professional University_



**Unit 10:**



**Static Members and Polymorphism** 128

_Prikshit Kumar Angra, Lovely Professional University_



**Unit 11:** **Constructors and Destructors** 141

_Prikshit Kumar Angra, Lovely Professional University_

**Unit 12:** **More on Constructors and Destructors** 160

_Prikshit Kumar Angra, Lovely Professional University_

**Unit 13:** **Inheritance** 169

_Prikshit Kumar Angra, Lovely Professional University_

**Unit 14:** **File Handling** 184

_Prikshit Kumar Angra, Lovely Professional University_


_**Notes**_



_**Prikshat Kumar Angra, Lovely Professional University**_

##### **Unit 01: Principles of OOP**


**CONTENTS**

Objectives

Introduction

1.1 Basic Concept of Object-oriented Programming

1.2 Introduction to OOP languages

1.3 Procedural programming v/s Object-oriented programming

1.4 Procedure oriented Programming Paradigm

1.5 Object-oriented Programming Paradigm

1.6 Benefits of OOP

1.7 Applications of Object Oriented Programming

1.8 C++ Class Member Function

1.9 Private Member Function

Summary

Keywords

Self Assessment

Answers for Self Assessment

Review Questions

Further Readings

**Objectives**

After studying this unit, you will be able to:

  - Recognize the basic concept of object-oriented programming

  - Describe the OOP languages

  - Understand Basics of C++



_**Unit 01:Principles of OOP**_




  - Compare the procedural Oriented and object-oriented programming


**Introduction**

Over the last few decades, programming practices have changed dramatically. As more
programmers gained competence, previously undiscovered difficulties began to emerge. The
programming community became increasingly worried about the programming philosophy they
use and the methodologies they use in software development.

Productivity, reliability, cost effectiveness, reusability, and other factors began to become key
concerns. Many conscious attempts were made to comprehend these issues and find potential
answers. This is precisely why a growing number of programming languages have been developed
and are still being developed. Furthermore, techniques to programme creation have been the
subject of extensive research, resulting in the development of several frameworks. The objectoriented programming method, or simply OOP, is one such approach, and it is perhaps the most
common.

C++ programming's main goal is to introduce the concept of object orientation to the C
programming language.

Inheritance, data binding, polymorphism, and other notions are all part of the Object Oriented
Programming paradigm.


**Lovely Professional University** **1**


_**Notes**_



_**Object Oriented Programming**_



**1.1** **Basic Co**

Object oriented **p**
functioning. The
polymorphism, d **a**
sets into a single **e**

In object-oriented


1. Objects

2. Classes



**ncept of Object-oriented Programming**



rogramming is a type of programming which u **s**
object oriented programming is based on real wor **l**

ta hiding, etc. It aims at binding together data and f **u**
ntity to restrict their usage.

parlance, a problem is viewed in terms of the followi **n**



es objects and classes its
d entities like inheritance,



nction work on these data



g concepts:



3. Data abstr **a**

4. Data enca **p**

5. Inheritanc **e**

6. Polymorp **h**

7. Dynamic **b**

8. Message p **a**



ction



sulation



ism



inding



ssing



Let us now study the entire concept in detail.



1. **Objects** : **O**



riented system. They may

y may also represent user


bjects are the basic run-time entities in an object- **o**



represent **a**

defined da



person, a place, a bank account, a table of data; th **e**



ta such as vectors, time and lists.



They occupy spa **c**
the object. Each o **b**



e in memory that keeps its state and is operated on b **y**



ject contains data and code to manipulate the data.



the defined operations on



**Notes: -** Obj **e**



cts can interact without having to know details of eac **h**



other data or code.



2. **Classes:** **A**



class represents a set of related objects. The object



has some attributes, whose



value cons **i**

object has.



**i** st much of the state of an object. The class of an obje **c** t defines what attributes an



**i** st much of the state of an object. The class of an obje **c**

The entire set of data and code of an object can be m **a**



de a user-defined data type



with the h **e** lp of a class.



Classes are user **d**
Classes have an i **n**
and how. A class
that contain the st **a**



efined data types that behave like the built-in types **o**

terface that defines which part of an object of a class c **a**
body that implements the operations in the interfac **e**



te of an object of that class.



f a programming language.

**a** n be accessed from outside

, and the instance variables



**2** **Lovely Professional University**


_**Notes**_



_**Unit 01:Principles of OOP**_



**Notes:-** A class is a data-type th **a**
functions. It is the blueprint for an obje **c**
building block of object oriented progra **m**



t has its own members i.e. data members and me
t in objects oriented programming language. It is the



ming in c++.



mber

basic



The data and the operation of a class ca **n** be declared as one of the three types:



(a) **Public:** These are declarations th **a**

access an object of this class.



(a) **Public:** These are declarations th **a**



t are accessible from outside the class to anyone wh **o**



can



(b) **Protected** : These are declaration **s**

can access an object of this class.



(b) **Protected** : These are declaration **s**



that are accessible from outside the class to anyone


at are accessible only from within the class itself.



who



(c) **Private:** These are declarations t **h**


Syntax of class

class class_name {

data_typedata_name;

return_typemethod_name(parameters);

}



**Lovely Professional University** **3**


_**Notes**_



_**Object Oriented Programming**_



**traction:** _**-**_ Data abstraction or Data Hiding is the **c**
nly relevant data to the final user. It is also an im **p**
g.

e real life example to understand concept better, w **h**

t pressing the brake will stop the bike and rotating th **e**
t know how it works and it is also not think we sho **u**



3. **Data** **Abs**



oncept of hiding data and
ortant part object oriented



showing **o**
programin



Let’s ta **k**
know th **a**
you don **'**
done fro **m**



en we ride a bike we only



the same as a concept data abstraction.



throttle will accelerate but
ld know that's why this is



In C plus plus **p**
abstraction −

1. using clas **s**



rogramming language write two ways using whic **h**



we can accomplish data



2. using hea **d** er file



**Example:** **-** **W**
explanations.



e can represents essential features without includi **n** g background details and



index of text boo **k** .

class School

{

void sixthc lass();

void seventhclass **(**

void tenthclass();

}



.



);



4. **Data Enc**



**apsulation:** In object oriented programming, enca **p**

together of data and information in a single un
ion would be: encapsulation is binding together the d **a**



wrapping
encapsula **t**
can manip **u**



late the data.



sulation is the concept of
it. A formal definition of

ta and related function that



5. **Inheritan**



**ce:** A class's capacity to inherit or derive attributes **o**

nown as inheritance. It is particularly significant in

ws for reusability, i.e. using a method defined in a **n**
or subclass is a class that inherits properties from an **o**
lass is the class from which the properties are inherite **d**



classes is **k**
since it all **o**
Child clas **s**
or parent c



r characteristics from other
an object-oriented software

other class via inheritance.



ther class, while base class
.



**Notes: -** Inh **e**
class).



ritance allows us to create a new class (derived class)



from an existing class (base



C plus plus progr **a**



mming language supports the following types of inh **e**



ritance




- single in **h**

- multiple

- multi le **v**



eritance



inheritance



el inheritance




- Hierarc **h**

- hybrid i **n**



ical inheritance



heritance



**Caution: -** K **e**



ep in mind that each subclass defines only those feat **u** res that are unique to it.



ep in mind that each subclass defines only those feat **u**



6. **Polymorp**



**hism:-** Polymorphism means the ability to take **m**

ay exhibit different behavior in different instances. **T**
f the data used in the operation. For example consider **i**



operation **m**
the types **o**



**m** ore than one form. An

he behavior depends upon

**i** ng the operator plus (+).



**4** **Lovely Professional University**


_**Notes**_



_**Unit 01:Principles of OOP**_



16 + 4 = 20

“xyz” + “sqr” = “xyzsqr”



Example:   - A person can have mo **r**
woman a mother, manager and a daug **h**
concept of polymorphism came from.



e than one behavior depending upon the situation. **l**



ike a
e the



ter And this define her behavior. This is from whe **r**



In c++ programming language, polym **o** rphism is achieved using two ways. They are op **e**
overloading and function overloading.



In c++ programming language, polym **o**
overloading and function overloading.



rator



7. **Dynamic Binding:-** Binding ref **e**



**e** rs to the process of converting identifiers (such as va **r**

resses. Binding is done for each variable and function **s**
the call with the right function definition by the co **m**



and performance names) into ad **d**
functions, it means that matchin **g**
It takes place either at compile ti **m**



e or at runtime.



iable

. For
piler.



This is associated with polymorphis **m**
polymorphic reference depends on the
figure, by inheritance, every object will
each object so the procedure will be red **e**
code matching the object under referenc **e**



**m** and inheritance. A function call associated w **i**

dynamic type of that reference. For example in the **a**



th a
bove
ue to



have this procedure. Its algorithm is, however, uniq
fined in each class that defines the objects. At run-tim **e**



will be called.



, the



**Did you know?**

Difference between static and d **y** namic binding in C++



























|BASIS FOR COMPARISON|STATIC BINDING|DYNAMIC BINDING|
|---|---|---|
|Event Occurrence|Eve**n**<br>**a**<br>ts occur at compile time<br>re "Static Binding".|Event Occurrence|
|Information|All i**n**<br>a <br>formation needed to call<br>function is known at<br>compile time.|All information need to c**a**<br>function come to know at**r**<br>time.<br>ll a<br>un|
|Advantage|Efficiency.|Flexibility.|


**Lovely Professional University** **5**




_**Notes**_










|Object Oriented Programming Object Oriented Programming Object Oriented Programming|Col2|Col3|
|---|---|---|
|Ti**m**<br>e|Fast execution.|Slow execution.|
|Alternat**e**<br> name|Early Binding.|Late Binding.|



8. **Message**



**Passing:** Objects communicate with one another



by sending and receiving

**o** r execution of a procedure

enerates the desired results.



informatio **n**
and theref **o**
Message p
the inform **a**



**n** to each other. A message for an object is a request f **o**

re will invoke a function in the receiving object that **g**
assing involves specifying the name of the object, th **e**



tion to be sent.



name of the function and



**Example**

#include<iostrea **m**

using namespace **s**

class demo{

public:

int f_num,s_num;

sum(int a,int b){

cout<<a+b;

}

};

main(){

demo d1;

d1.sum(d1.f_num **=**

return 0;

}







td;



10,d1.s_num=39);



**1.2** **Introduc**

Object oriented p **r**
C and Pascal can
program grow in
easier to impleme **n**



**tion to OOP languages**



ogramming is not the right of any particular langua **g**

be used but programming becomes clumsy and ma **y**
size. A language that is specially designed to support



t them.



e. Although languages like

**y** generate confusion when

the OOP concepts makes it



To claim that the **y**

Depending upon **t**

1. Object-based p **r**

2. Object-oriented



are object-oriented they should support several conc **e**

he features they support, they are classified into the f **o**



pts of OOP.



llowing categories:



ogramming languages.



programming languages.



**6** **Lovely Professional University**


_**Notes**_



_**Unit 01:Principles of OOP**_



Major features required by object-based **p**

1. Polymorphism

2. Data encapsulation

3. Data hiding

4. Operator Overloading

5. Inheritance

Languages that support programming
languages. These do not support inherit **a**
oriented programming incorporates al **l**
additional feature, namely, inheritance a

Languages that support these features:
C++

.NET

Java

PHP

C#

Python

Ruby


**1.3** **Procedural programming**



rogramming are:



with objects are said to be object-based progra **m**
nce and dynamic binding ADA is a typical example **O**
of objects-based programming features along wit **h**
nd dynamic binding.



ming

bject
two



**v/s Object-oriented programming**



Let's see the comparison between Proce **d** ural programming and object-oriented programmin **g** . We
are comparing both terms on the ba **s** is of some characteristics. The difference between both
languages are tabulated as follows –



**Lovely Professional University** **7**


_**Notes**_



_**Object Oriented P**_



_**rogramming**_
























|Definition|It is a programming language that<br>is derived from structure<br>programming and based upon the<br>concept of calling procedures. It<br>follows a step-by-step approach in<br>order to break down a task into a<br>set of variables and routines via a<br>sequence of instructions.|Object-oriented programming is a<br>computer programming design<br>philosophy or methodology that<br>organizes/ models software<br>design around data or objects<br>rather than functions and logic.|
|---|---|---|
|Approach|It follows a top-down approach.|It follows<br>a bottom-up approach.|
|Importance|It gives importance to functions<br>over data.|It gives i**m**<br>functions.<br>portance to data over|
|Data hiding|There is not any proper way for<br>data hiding.|There is<br>hiding.<br>a possibility of data|
|Program divisi**o**<br>n|In Procedural programming, a<br>program is divided into small<br>programs that are referred to as<br>functions.|In OOP,**a**<br>small par**t**<br>objects.<br> program is divided into<br>s that are referred to as|



In the modern pr **o**
areas, programmi **n**
characteristic of **p**
programs can n **o**
programming ap **p**

1. Procedure-orie **n**

2. Object-oriented



gramming parlance, at least in most of the commerci **a**

**n** g has been made independent of the target machine **.**

rogramming has given rise to a number of differe **n**
w be developed. We will particularly concern **o**
roaches – or paradigm as they are called in the prese **n**



l and business applications
This machine independent

**n** t methodologies in which

urselves with two broad
t context.



ted paradigm



paradigm



**1.4** **Procedure oriented Programming Paradigm**



Before you get i **n**
language such as
things to do such
languages is com **m**



**n** to OOP, take a look at conventional procedure-o

C. Using the procedure-oriented approach; you view
as reading, calculating and printing. Conventional pr **o**



only known as procedure-oriented programming.



riented programming in a

a problem as a sequence of
gramming using high-level



Example C, **C** OBOL and FORTRAN



You organize t **h**
(procedures) to **m**
your problem. Str **u**



e related data items into C structures and writ **e**

anipulate the data and, in the process, complete the **s**



**e** the necessary functions

equence of tasks that solve
lowing figure.



cture of procedure oriented paradigm is shown in fo **l**



**8** **Lovely Professional University**


_**Notes**_



_**Unit 01:Principles of OOP**_



Many key data items are put as global i **n**
all functions. It's possible that each fu **n**
vulnerable to a function's unintended **a**
which function in a huge software. If **w**
must likewise make changes to any f **u**
through this opening.

Another serious drawback with the p **r**
problems very well. This is because fun **c**
to the element of the problem.



a multi-function software so that they can be accessi **b**
ction has its own set of local data. Global data are
lteration. It's difficult to figure out which data is us **e**

e need to make changes to an external data structur **e**
nctions that access the data. Bugs will be able to **g**



le by
more

d by

, we
et in



ocedural approach is that we do not model real **w**



orld
ding



tions are action-oriented and do not really correspo **n**



**Some Characteristics exhibited by procedure-oriented programming are:-**



Emphasis is on doing things (algorith **m**

Large programs are divided into small **e**



s).



r programs known as functions.



Most of the functions share global dat **a** .

Data move openly around the system **f**



.



rom function to function.



Functions transform data from one for **m** to another.



**1.5** **Object-oriented Program**

The term Object-oriented Programming
its exact definition. However, most exp **e**
(ADT) representing complex real-worl **d**
collection of ADTs with an eye toward e
refers to the process of defining ADTs; i **n**
enable you to take advantage of the com **m**

Before going any further into OOP, t **a**
designing and implementing software. **U**
to a finished software product that
implementing the software, you can gai **n**
especially in large software projects. Be **c**
higher-level model of the real-world
complexity better than with approaches
language. You can take advantage of **t**
relatively independent units that are eas **i**
objects through inheritance.



**ming Paradigm**



(OOP) is widely used, but experts do not seem to agr **e**

rts agree that OOP involves defining Abstract Data **T**
or abstract objects and organizing programs aroun **d**
xploiting their common features. The term data abstr **a**



heritance and polymorphism refer to the mechanism **s**



on characteristics of the ADTs – the objects in OOP.



**e** e on

ypes

**d** the

ction

that



ke note of two points. First, OOP is only a meth **o**

se of object-oriented techniques does not impart any
the user can see. However, as a programmer **w**

**n** significant advantages by using object-oriented met **h**

ause OOP enables you to remain close to the conce **p**
problem you are trying to solve, you can manag **e**

that force you to map the problem to fit the features **o**
he modularity of objects and implement the progr **a**

**i** er to maintain and extend. You can also share code a **m**



d of
thing

hile

**h** ods,

tual,

the
f the
m in



ong



**Lovely Professional University** **9**


_**Notes**_



_**Object Oriented Programming**_


Secondly, OOP has nothing to do with any programming language, although a programming
language that supports OOP makes it easier to implement the object-oriented techniques. As
you will see shortly, with some discipline, you can use objects even in C programs.


**1.6** **Benefits of OOP**

     - It is easy to model a real system as real objects are represented by programming objects in

OOP. The objects are processed by their member data and functions. It is easy to analyze the

user requirements.

     - With the help of inheritance, we can reuse the existing class to derive a new class such that the

redundant code is eliminated, and the use of existing class is extended. This saves time and

cost of program.

     - Modular approach is used for write code.

     - In OOP, data can be made private to a class such that only member functions of the class can

access the data. This principle of data hiding helps the programmer to build a secure program

that cannot be invaded by code in other part of the program.

     - It is very easy to partition the work in a project based on objects.

     - It is possible to map the objects in problem domain to those in the program.

     - With the help of polymorphism, the same function or same operator can be used for different

purposes. This helps to manage software complexity easily.

     - Large problems can be reduced to smaller and more manageable problems. It is easy to

partition the work in a project based on objects.


**1.7** **Applications of Object Oriented Programming**

Perhaps the most logical description of the real world is the object-oriented approach. As a result, it
may be used in practically every problem-solving circumstance. OOP has been widely accepted in
the software industry due to its effectiveness in problem solving and programming. Existing
systems will be converted to OOP.

The framework, which spans all phases of system development, is one fundamental component of
OOP that is extremely advantageous. Thus, OOA (Object Oriented Analysis), OOD (Object
Oriented Design), OOT (Object Oriented Testing), and other object-oriented tools are significantly
more appropriate than non-object-oriented ones.

Object oriented programming provides many applications:

      - **Client-Server Systems:** Object-oriented client-server systems provide the IT infrastructure,

creating Object-Oriented Client-Server Internet (OCSI) applications. Here, infrastructure

refers to operating systems, networks, and hardware. OSCI consist of three major

technologies:

`o` The Client Server

`o` Object-Oriented Programming

`o` The Internet

      - **Real-Time System:** A real time system is a system that give output at given instant and its

parameters changes at every time. A real time system is nothing but a dynamic system.

Dynamic means the system that changes every moment based on input to the system. OOP

approach is very useful for Real time system because code changing is very easy in OOP

system and it leads toward dynamic behavior of OOP codes thus more suitable to real time

system.

      - **Object-Oriented Databases:** They are also called Object Database Management Systems

(ODBMS). These databases store objects instead of data, such as real numbers and integers.

Objects consist of the following:


**10** **Lovely Professional University**


_**Notes**_



_**Unit 01:Principles of OOP**_




`o` **Attributes:** Attributes



are data that define the traits of an object. This data c **a**



n be



as simple as integers **a**

object.



nd real numbers. It can also be a reference to a co **m** plex



nd real numbers. It can also be a reference to a co **m**




`o` **Methods:** They define



the behavior and are also called functions or procedu **r**



es.




- **Simulation and modelling:** Ano **t**



her area where OOP approach criteria might be coun **t** ed is



her area where OOP approach criteria might be coun **t**



system modelling. Because OO **P**



programmers are easier to grasp, it is prefera **b** le to



programmers are easier to grasp, it is prefera **b**



represent a system in a simpler f **o** rm when using the OOP approach.


- **AI and expert systems:** These are computer applications that are developed to



solve

ch of


and



complex problems pertaining to **a**

a human brain.



specific domain, which is at a level far beyond the re **a**



It has the following ch **a** racteristics:

`o` Reliable

`o` Highly responsive

`o` Understandable

`o` High-performance



**rogramming:** It address the problem of predictio **n**




- **Neural networks and parallel p**



approximation of complex time- **v**

split into several time intervals o **r**

time interval to disperse the loa **d**

simplifying the approximation a **n**



arying systems. Firstly, the entire time-varying proc **e**



ss is



slots. Then, neural networks are developed in a part **i**

of various networks. OOP simplifies the entire proc **e**



cular

ss by



d prediction ability of networks.



**1.8** **C++ Class Member Function**



Member function of a class is a functi **o** n that has its definition or its prototype within the class
definition like any other variable. It operates on any object of the class.



A member function is defined outside t **h**
operator. This is useful when we did **n**
which makes the program more underst **a**



e class using the::( double colon symbol) scope resol **u**
ot want to define the function within the main pro **g**



ndable and easier to maintain.



**u** tion

ram,



**Syntax**

return_type class_name :: member_func


Example

#include<iostream>

using namespace std;

class find_sum{

public:

int x,y;

int sum();

};

int find_sum ::sum(){

return x+y;

}



tion


**Lovely Professional University** **11**


_**Notes**_



_**Object Oriented Programming**_



**1.9** **Private Member Function**

A private membe **r** variable or function cannot be accessed, or even vie **w**
Only the class an **d** friend functions can access private members.


Example



ed from outside the class.



#include <iostrea **m**

using namespace **s**

class Box {

public:

double length;




 


td;



void setWidth **(** double wid );



double getWi **d** th( void );

private:

double width;



};

double Box::getW **i** dth(void) {

return width ;

}


**Summary**




- Program **m**

- By the e **n**



ing practices have evolved considerably over the pa **s**



t few decades.



es have been designed and



d of last decade, millions and millions of lines of co **d**



impleme **n** ted all over the word.




- The mai **n**



objective is to reuse these lines of codes. More and **m** ore software development



objective is to reuse these lines of codes. More and **m**



projects **w** ere software crisis.




- It is this

which s **u**

- Softwar **e**



immediate crisis that necessitated the development **o**

pports reusability of the existing code.

is not manufactured. It is evolved or developed aft **e**



f object-oriented approach



r passing through various



develop **m**

mainten **a**



ental phases including study, analysis, desi **g**



n, implementation, and



nce.




- Convent **i**



onal programming using high level languages such a **s**



COBOL, FORTRAN and C



is comm **o** nly known as procedures-oriented programming.




- In order

tasks to **b**

- OOP is a

- Since O **O**



to solve a problem, a hierarchical decomposition h **a**

e completed.

method of designing and implementing software.

P enables you to remain close to the conceptual, hi **g**

oblem, you can manage the complexity better than



s been used to specify the



her-level model of the real

with approaches that force



world p **r**

you to **m**



ap the problem to fit the features of the language.




- Some es **s**



object-oriented are objects,

Polymorphism, dynamic



classes,



ential concepts that make a programming approach

Data abstraction, Data encapsulation, Inheritance **,**



binding **a** nd message passing.




- The dat **a**



and the operation of a class can be disclosed public **,**



provides

mainten **a**



greater programmer productivity, better qualit **y**



protected or private. OOP

of software and lesser



nce cost.



**12** **Lovely Professional University**


_**Notes**_



_**Unit 01:Principles of OOP**_


**Keywords**

**Classes:** A class represents a set of related objects.

**Data Abstraction** : Abstraction refers to the act of representing essential-features without
including the background details or explanations.

**Data Encapsulation:** The wrapping up to data and functions into a single unit (class) is known as
encapsulation.

**Design:** The term design describes both a final software system and a process by which it is
developed.

**Dynamic Binding:** Binding refers to the linking of a procedure call to the code to be executed in
response to the call.

**Inheritance:** Inheritance is the process by which objects of one class acquire the properties of
objects of another class.

**Message Passing:** Message passing is another feature of object-oriented programming.

**Object-oriented Programming Paradigm:** The term object-oriented programming (OOP) is
widely used, but experts do not seem to agree on its exact definition.

**Objects:** Objects are the basic run-time entities in an object-oriented system.

**Polymorphism:** Polymorphism means the ability to take more than one form.


**Self Assessment**

1. Which feature of OOPS described the reusability of code?

A. Abstraction

B. Encapsulation

C. Polymorphism

D. Inheritance


2. Which of the following is not an OOP?

A. Java

B. C#

C. C++

D. C


3. OOP acronym for

A. Object of Programming

B. Object Original Programming

C. Object Oriented Programming

D. Operating Original Programming


4. Which feature of OOPS derives the class from another class?

A. Inheritance

B. Data hiding

C. Encapsulation

D. Polymorphism

5. Which of the following is correct about class?

A. class can have member functions while structure cannot.

B. class data members are public by default while that of structure are private.

C. Pointer to structure or classes cannot be declared.

D. class data members are private by default while that of structure are public by default.


**Lovely Professional University** **13**


_**Notes**_



_**Object Oriented Programming**_


6. Which of the following is not an access specifier?

A. Public

B. Char

C. Private

D. Protected


7. Which of the following OOP concept is not true for the C++ programming language?

A. A class must have member functions

B. C++ Program can be easily written without the use of classes

C. At least one instance should be declared within the C++ program

D. C++ Program must contain at least one class


8. What is the extra feature in classes which was not in the structures?

A. Member functions

B. Data members

C. Public access specifier

D. Static Data allowed


9.   Which operator is used to define a member function outside the class?
A.       
B. ( )

C. +

D. ::


10.  Nested member function is
A. A function that call itself again and again.

B. A member function may call another member function within itself.

C. Same as Class in the program

D. Accessed using * operator


11. Which of the following is syntax of C++ class member function?

A. class_name,function_name

B. return_type class_name :: member_function

C. datatype_class_name,function_name

D. class_name_function_name


12. Which among the following feature does not come under the concept of OOPS?

A. Platform independent

B. Data binding

C. Data hiding

D. Message passing


13. The combination of abstraction of the data and code is viewed in________.

A. Inheritance

B. Class

C. Object

D. Interfaces


**14** **Lovely Professional University**


_**Notes**_



_**Unit 01:Principles of OOP**_



14. Which is private member functio **n**

A. Member functions which can use **d**

B. Member functions which can onl **y**



s access scope?



outside the class



be used within the class



C. Member functions which are acc **e**

D. Member functions which can’t be



ssible in derived class



accessed inside the class



15. Which syntax among the followi **n**

A. private::Name(parameters)

B. private: function Name(paramet **e**

C. private(function Name(paramete **r**



g shows that a member is private in a class?



rs)

s))



D. private function Name(paramete **r** s)


**Answers for Self Assessment**



1. D 2. D 3. **C**


6. B 7. D 8. **A**


11. B 12. A 13. **C**


**Review Questions**

1. Discuss basic concepts of C++ in **d** etail.



4. A 5. D


9. D 10. B


14. B 15. D



2. Inheritance is the process by wh **i**

another class. Analyze.



ch objects of one class acquire the properties of obje **c** ts of



ch objects of one class acquire the properties of obje **c**



3. Examine what are the benefits of **O** OP?



4. Compare what you look for in

approach in contrast to the proce **d**

5. What is OOP? Explain the applic **a**

6. Differentiate procedural progra **m**

7. Write programs that demonstrat **e**


**Further Readings**



the problem description when applying object-ori **e**



nted



ural approach. Illustrate with some practical exampl **e**



s.



tions of object oriented programming in detail.



ming and object oriented programming.



working of classes and objects



E. Balagurusamy, Object-oriente **d** Programming through C++, Tata McGraw Hill.



Herbert Schildt, The Complete **R**

Robert Lafore, Object-oriented P **r**


**Web Links**

https://en.wikipedia.org/wiki **/**

www.web-source.net

www.webopedia.com



eference – C++, Tata Mc Graw Hill.



ogramming in Turbo C++, Galgotia Publications



Object-oriented_programming



**Lovely Professional University** **15**


_**Notes**_



_**Object Oriented Programming**_


**16** **Lovely Professional University**


_**Notes**_



_**Prikshat Kumar Angra, Lovely Professional University**_

##### **Unit 02: Basics of C++**


**CONTENTS**

Objectives

Introduction

2.1 What is C?

2.2 What is C++?

2.3 Similarities Between C and C++

2.4 C Vs. C++

2.5 Simple C++ Program

2.6 Compiling and linking

2.7 Review of Tokens

2.8 Keywords

2.9 Identifiers

2.10 Constants

2.11 Strings

2.12 Operators

2.13 Data Types

2.14 Reference Variables

Summary

Keywords

Self Assessment

Answer for Self Assessment

Review Questions

Further Readings

**Objectives**

After studying this unit, you will be able to:

     - Recognize the tokens

     - Understand keywords

     - Describe the expressions

     - Recognize the reference variable

     
**Introduction**



_**Unit 02: Basics of C++**_



C++ is a language in essence. It is made up of letters, words, sentences, and constructs just like

English language. This unit discusses these elements of the C++ language along with the operators

applicable over them.


**2.1** **What is C?**

It is a very powerful and general-purpose language used in programming. We can use C to develop
software such as databases, operating systems, compilers, and many more. This programming
language is excellent to learn for beginners in programming.


**Lovely Professional University** **17**


_**Notes**_



_**Object Oriented Programming**_

C is the basic programming language that can be used to develop from the operating systems (like
Windows) to complex programs like Oracle database, Git, Python interpreter, and many more. C
programming language can be called a god's programming language as it forms the base for other
programming languages. If we know the C language, then we can easily learn other programming
languages. C language was developed by the great computer scientist Dennis Ritchie at the Bell
Laboratories. It contains some additional features that make it unique from other programming
languages.


**2.2** **What is C++?**

It is a subset of the C language. C++ is object-oriented, designed as an extension to the C language.
Thus, apart from the features of procedural language from C, C++ provides support to objectoriented features as well. For instance, polymorphism, inheritance, encapsulation, abstraction, and
more.

C++ is a special-purpose programming language developed by Bjarne Stroustrup at Bell Labs circa
1980. C++ language is very similar to C language, and it is so compatible with C that it can run 99%
of C programs without changing any source of code though C++ is an object-oriented
programming language, so it is a safer and well-structured programming language than C.


**2.3** **Similarities Between C and C++**

  - Both languages have the same code structure.

  - They both have a similar syntax.

  - They both have a similar compilation.

  - Their basic memory model is very close to the hardware.

  - Both the languages share the same basic syntax. Also, almost all the operators and
keywords of C are present in C++ as well, and they do the same thing.

  - Similar notions of heap, stack, static, and file-scope variables are present in both of these
languages.

  - As compared to C, C++ has more extended grammar. But the basic grammar here is the
same.











|2.4 C Vs. C++|Col2|Col3|
|---|---|---|
|**Parameter**|**C**|**C++**|
|Definition|It is a structural programming<br>language that doesn’t provide<br>any support for classes and<br>objects.|It<br>is<br>an<br>object-oriented<br>programming language, and it<br>provides<br>support<br>for<br>the<br>concept of classes and objects.|
|History|Dennis Ritchie developed the<br>C language at the AT&T Bell<br>Laboratories in around 1969.|Bjarne Stroustrup developed<br>the C++ language in 1979-1980<br>at Bell Labs.|
|Type<br>of<br>Programming<br>Language|C <br>primarily<br>supports<br>procedural programming for<br>developing codes. Here, it<br>checks the code line by line.|C++<br>supports<br>both<br>programming<br>paradigms-<br>procedural as well as object-<br>oriented. It is, thus, known as a<br>hybrid language.|
|Support for OOPs Feature|C has no support for the<br>OOPs concept. Thus, it does<br>not support encapsulation,<br>polymorphism,<br>and<br>inheritance.|The C++ language supports<br>encapsulation, inheritance, and<br>polymorphism because it is an<br>object-oriented programming<br>language.|


**18** **Lovely Professional University**


_**Notes**_









_**Unit 02: Basics of C++**_




|Supported Features|C has no support for<br>functions and operator<br>overloading. It also does not<br>have any namespace feature<br>and functionality of reference<br>variables.|C++, on the other hand,<br>supports both of the functions<br>and operator overloading. It<br>also has the namespace feature<br>and the functionality of<br>reference variables.|Col4|
|---|---|---|---|
|Driven Type|The C is a function-driven<br>language<br>because<br>it<br>is<br>procedural programming.|The C++ language,<br>on the<br>other hand, is object-driven<br>because it is OOP (object-<br>oriented programming).|The C++ language,<br>on the<br>other hand, is object-driven<br>because it is OOP (object-<br>oriented programming).|
|Data Security|C <br>is<br>vulnerable<br>to<br>manipulation<br>via<br>outside<br>code. It is because it does not<br>support<br>encapsulation-<br>leading to its data behaving<br>as a free entity.|C++, on the other hand, is a<br>very<br>secure<br>language.<br>It<br>supports encapsulation of data<br>in the form of objects- thus<br>hiding the information and<br>ensuring that one uses the<br>structures and operators as<br>intended.|C++, on the other hand, is a<br>very<br>secure<br>language.<br>It<br>supports encapsulation of data<br>in the form of objects- thus<br>hiding the information and<br>ensuring that one uses the<br>structures and operators as<br>intended.|
|Type of Subset|It is a subset of the C++<br>language. It cannot run the<br>codes used in C++.|It is a superset of the C<br>language. It is capable of<br>running 99% of the C language<br>codes.|It is a superset of the C<br>language. It is capable of<br>running 99% of the C language<br>codes.|
|Segregation<br>of<br>Data<br>and<br>Functions|Since<br>C <br>is<br>a <br>procedural<br>programming language, the<br>data<br>and<br>functions<br>stay<br>separate in it.|In the case of C++, the data<br>and<br>functions<br>stay<br>encapsulated in an object’s<br>form.|In the case of C++, the data<br>and<br>functions<br>stay<br>encapsulated in an object’s<br>form.|
|Hiding Data and Information|C does not support the hiding<br>of data and information.|C++ language hides the data<br>through encapsulation. This<br>process ensures that a user<br>utilizes<br>the<br>structures<br>as<br>operators as intended.|C++ language hides the data<br>through encapsulation. This<br>process ensures that a user<br>utilizes<br>the<br>structures<br>as<br>operators as intended.|
|Built-in Data Types|The C language does not<br>support built-in data types.|The C++ language supports<br>built-in data types.|The C++ language supports<br>built-in data types.|
|Function Inside Structures|In the case of C, it does not<br>define the functions inside<br>structures.|In the case of C++, it uses<br>functions inside a structure.|In the case of C++, it uses<br>functions inside a structure.|
|Reference Variables|It does not support any<br>reference variables.|It supports reference variables.|It supports reference variables.|
|Overloading of Functions|Function overloading allows<br>a user to have more than one<br>function<br>with<br>different<br>parameters<br>but<br>the<br>same<br>name. The C language does<br>not support it.|The C++ language supports<br>function overloading.|The C++ language supports<br>function overloading.|
|Overriding of Functions|Function overriding provides<br>the specific implementation to<br>any function that is defined<br>already in the base class. The<br>C language does not support<br>it.|The C++ language supports<br>function overriding.|The C++ language supports<br>function overriding.|



**Lovely Professional University** **19**


_**Notes**_











|Object Oriented Programming|Col2|Col3|Col4|
|---|---|---|---|
|Header File|C <br>language<br>uses<br>the** <stdio.h>** header file.|C++<br>language<br>uses<br>the** <iostream.h>** header file.||
|Namespace Features|The<br>namespace<br>feature<br>groups various entities like<br>objects, classes, and functions<br>under a specific name. No<br>namespace<br>features<br>are<br>present in the C language.|The C++ language uses the<br>namespace features to help<br>avoid name collisions.|The C++ language uses the<br>namespace features to help<br>avoid name collisions.|
|Virtual and Friend Functions|The C language does not<br>support virtual and friend<br>functions.|The C++ language supports<br>virtual and friend functions.|The C++ language supports<br>virtual and friend functions.|
|Primary Focus|C language focuses on the<br>process or method instead of<br>focusing on the data.|C++ language focuses on the<br>data instead of focusing on the<br>procedure or method.|C++ language focuses on the<br>data instead of focusing on the<br>procedure or method.|
|Inheritance|The inheritance feature assists<br>the child class in reusing the<br>parent class’s properties. The<br>C language offers no support<br>for inheritance.|The C++ language provides<br>support for inheritance.|The C++ language provides<br>support for inheritance.|
|Allocation and Deallocation<br>of Memory|The C language<br>provides<br>calloc()<br>and<br>malloc()<br>for<br>dynamic<br>allocation<br>of<br>memory<br>and<br>free()<br>for<br>deallocation of memory.|The C++ language provides a<br>new operator for the allocation<br>of<br>memory<br>and<br>a <br>delete<br>operator for the deallocation of<br>memory.|The C++ language provides a<br>new operator for the allocation<br>of<br>memory<br>and<br>a <br>delete<br>operator for the deallocation of<br>memory.|
|Exception Handling|It does not provide any direct<br>support<br>for<br>exceptional<br>handling. C language requires<br>the usage of functions that<br>support exception handling.|It provides direct support for<br>exceptional handling. The C++<br>language<br>uses<br>a <br>try-catch<br>block.|It provides direct support for<br>exceptional handling. The C++<br>language<br>uses<br>a <br>try-catch<br>block.|
|Access Modifiers|The structures in C have no<br>access modifiers.|The structures in C++ do have<br>access modifiers.|The structures in C++ do have<br>access modifiers.|
|Type of Approach|C language follows a top-<br>down approach. It functions<br>to break down the main<br>module into various tasks.<br>Then it breaks these tasks into<br>sub-tasks, and so on.|C++<br>language<br>follows<br>the<br>bottom-up approach. It means<br>that it first develops the lower-<br>level modules and then moves<br>on to the next-level modules.|C++<br>language<br>follows<br>the<br>bottom-up approach. It means<br>that it first develops the lower-<br>level modules and then moves<br>on to the next-level modules.|
|Function for Input/Output|The C language uses the<br>scanf() and printf() functions<br>for the input and output<br>operations.|In the C++ language, it uses<br>the cin and cout for the input<br>and output operations.|In the C++ language, it uses<br>the cin and cout for the input<br>and output operations.|
|||||


**2.5** **Simple C++ Program**



A "Hello, World!" is a simple program that outputs Hello, World! on the screen. Since it's a very
simple program, it's often used to introduce a new programming language to a newbie.

Let’s see simple c++ program example.


**20** **Lovely Professional University**


_**Notes**_



_**Unit 02: Basics of C++**_



**Example**

// Simple C++ Program

#include <iostream>

using namespace std;

int main() {

cout << "Hello world!";

return 0;

}

Output


**Did you know?**

1. // Simple C++ Program



In C++, any line starting with // is a co **m**
code to better understand the function **a**
compiler.



**m** ment. Comments are intended for the person readi **n**

lity of the program. It is completely ignored by the



g the

C++



2. #include <iostream>



The #include is a preprocessor directiv **e**
including the contents of the iostream fil **e** .

This allows us to use cout in our progra **m**

3. int main() {...}



used to include files in our program. The above c **o**



.



de is



to print output on the screen.



A valid C++ program must have the ma **i**
of the function.

The execution of code beings from this f **u**

4. cout << "Hello World!";

cout prints the content inside the quo **t**
format string. In our example, "Hello W **o**

5. return 0;

The return 0; statement is the "Exit statu **s**


**Note**

; is used to indicate the end of a stateme **n**


**2.6** **Compiling and linking**



n() function. The curly braces indicate the start and th **e**



end



nction.



ation marks. It must be followed by << followed b **y**



the



rld!" is the format string.



" of the program.



t.



The modified source code is compiled i **n**



to binary object code. This code is not yet executable.


**Lovely Professional University** **21**


_**Notes**_



_**Object Oriented Programming**_



The object code is



combined with the required supporting code to make an executable program.



combined with the required supporting code to make



_**Compiling and linking**_



**22** **Lovely Professional University**


_**Notes**_



_**Unit 02: Basics of C++**_



_**Compiling of C++ Program**_



1. **Preprocessing** −In simple ter **m**
instructs the compiler to do **r**
handles preprocessing directiv **e**
2. **Compilation** −The compilatio **n**
the pure C++ source code and **c**
error unless the source code is **n**
3. **Linking** - The linker produc **e**
compiler produced. This outpu **t**



s, a C Preprocessor is just a text substitution tool **a**
equired pre-processing before the actual compilati **o**
s like #include, #define, etc.

takes place on the preprocessed files. The compiler **p**

onverts it into assembly code. The compiler won't gi **v**
ot well-formed.
s the final compilation output from the object file
can be a shared (or dynamic) library or an executable.



nd it



s the
.



n. It



arses



e an



**2.7** **Review of Tokens**

As we know, the smallest individual uni **t**

following tokens:

1. Keywords
2. Identifiers
3. Constants
4. Strings
5. Operators

A C++ program is written using these t **o**
the C++ tokens are basically similar to t **h**
modifications.



s in a program are known as tokens. C++ has the



kens, white spaces, and the syntax of the language. **M**

e C tokens with the exception of some additions and **m**



ostof



inor



Did you Know?

How tokens are being separated?

Tokens are usually separated by “white **s**

a) Blanks
b) Horizontal or vertical tabs
c) New lines
d) Formfeeds
e) Comments


**2.8** **Keywords**

The keywords implement specific C++
and cannot be used as names for the p **r**



ifiers

ents.



pace.” White space can be one or more:



language features. They are explicitly reserved iden **t**

ogram variables or other user-defined program ele **m**



**Lovely Professional University** **23**


_**Notes**_



_**Object Oriented P**_

The following Ta **b**
are shown in bol
enhance its featur **e**



_**rogramming**_



le gives the complete set of C++ keywords. The key **w**
dface. These keywords have been added to the AN



s making it an object-oriented language.



ords not found in ANSI C
SI C keywords in order to



**2.9** **Identifie**

Identifiers refer
programmer. The **y**
rules for naming **t**



**rs**



sses, etc., created by the

Each language has its own
th C and C++:



to the names of variables, functions, arrays, cl **a**

**y** are the fundamental requirement of any language.

hese identifiers. The following rules are common to b **o**



1. Only alp **h** abetic characters, digits, and underscores are permitt **e**
2. The nam **e** cannot start with a digit.
3. Upperca **s** e and lowercase letters are distinct.
4. A declar **e** d keyword cannot be used as a variable name.



1. Only alp **h**
2. The nam **e**
3. Upperca **s**
4. A declar **e**



d.



A major differe **n**
Crecognizes onl **y**
therefore,all the c **h**

Care should be
filecontaining C **a**
ofsuch a variable **n**



ce between C and C++ is the limit on the lengt **h**
the first 32 characters in a name, C++ places n **o**



of a name. While ANSI



aracters in a name are significant.



limit on its length and,



exercised while naming a variable that is being **s**

nd C++ programs. Some operating systems impose



ame.



**s** hared by more than one

a restriction on the length



**Caution**



The first charact **e**
beginning identif **i**



r in an identifier must be a letter or the _ (unde **r**
ers with an underscore is considered a poor program **m**



score) character; however,



ing style.



**2.10** **Constan**

In C++, we can c **r**
constant.


**Example**

const float pi = 3. **1**

**Types of Consta**



**ts**



eate variables whose value cannot be changed. const **k**



eyword is used for declare



4;



**nts in C++**



1. Integer c **o**
2. Floating
3. Charact **e**
4. String co
5. Octal co **n**




**o** nstants

cconstants
r constants
nstants



stants



**24** **Lovely Professional University**


_**Notes**_



_**Unit 02: Basics of C++**_



6. Hexadecimal constants


**2.11** **Strings**

  - A string stores a sequence of ch **a** racters.

  - It terminates with a null charac **t** er ‘\0’.

  - Unlike characters, strings in C++ are always enclosed within double quotes (” “).


**Example**

char name[30] = ‘’Hell **o** ”;


**2.12** **Operators**



Operators are symbols that operate o **n** operands. These operands can be variables or v **a**
Operators help us to perform mathemat **i** cal and logical computations.

**Common C++ Operators are**

1. Arithmetic
2. Assignment
3. Relational
4. Logical
5. Bitwise
6. Other operators


**2.13** **Data Types**



Data types define the type of data a va **r**
integer data, a character type variable ca **n**



iable can hold, For Example, an integer variable can



hold character data, etc.



lues.


hold



**Primitive Data Types**



These data types are built-in or prede **f** ined data types and can be used directly by the u **s** er to
declare variables. For Example: int, char **,** float, bool etc.

**Derived Data Types**


**Lovely Professional University** **25**


_**Notes**_



_**Object Oriented P**_

The data-types th **a**
Data Types.



_**rogramming**_



t are derived from the primitive or built-in datatyp **e**



s are referred to as Derived



**2.14** **Reference Variables**




- Referenc **e**

- It canno **t**
declarati **o**

- The ope **r**



**e** variable is an alternate name of already existing vari **a**

be changed to refer another variable and should **b**




**o** n and cannot be NULL.

ator ‘&’ is used to declare reference variable.



ble.
e initialized at the time of



**Lab Excercise**



#include<iostrea **m**

using namespace **s**

int main(){

int x=30;

int &r=x;

cout<<r;

return 0;

}


Output


**Summary**







td;




- C++ lan **g**
languag **e** .

- A collect **i**

- A token **c**

- Keywor **d**
userdefi **n**

- Identifie **r**
program **m**

- An arra **y**
named p

- A pointe **r**
alternati **v**
change **d**



uage is made up of letters, words, sentences and **c**
.
on of characters, much like a word in English langua **g**

an be a keyword, or identifier, constant, string or an **o**
s are the reserve words that cannot be used as **n**
ed program elements.
s refer to the names of variables, functions, arrays,

**m** er, Basic types.

represents named list of finite number of similar da **t**
art of a program that can be invoked from the other p **a**

**r** is a variable that holds a memory address of anothe **r**

e name for an object. A constant is a data item **w**
uring the program run.



onstructs just like English



e are called tokens.
perator.



ames of variable or other



classes etc. created by the



a elements. A function is a
rts of the program.

**r** variable. A reference is an

hose data value can never



**Keywords**

**Character Constan**

**Expression** : A co **m**

rules.



**t** : One or more characters enclosed in single quotes.



bination of variables, constants and operators writte **n**



according to some



**26** **Lovely Professional University**


_**Notes**_



_**Unit 02: Basics of C++**_

**Identifies:** The names of variables, functions, arrays, classes, etc. created by the programmer.


**SelfAssessment**


1. What is C++?
A. C++ is an object oriented programming language
B. C++ is a procedural programming language
C. C++ supports both procedural and object oriented programming language
D. C++ is a functional programming language


2. Which of the following approach is used by C++?
A. Left-right
B. Right-left
C. Top-down
D. Bottom-up


3. Which of the following is an extension of C program?
A. .doc
B. .c
C. .cc
D. .cprog


4. Which of the following type is provided by C++ but not C?
A. double
B. float
C. int
D. bool


5. What would be the output of following code snipet?
#include <stdio.h>


int main()


{


printf("1024");


return 0;


}


A. 1024
B. 10
C. Error
D. 0


6. C++ provides various types of …………………… that include keywords, identifiers,
constants, strings, and operators.
A. expressions
B. structures
C. tokens
D. None of the above


**Lovely Professional University** **27**


_**Notes**_


_**Object Oriented Programming**_

7. ………………….. refer to fixed values that do not change during the execution of a program.
A. Identifiers
B. Constants
C. Strings
D. Operators


8. _________ used for function calls and parameters.
A. { }
B. ( )
C. @
D. #


9. _________ used to access a structure member.
A. @
B. .
C. //
D. $


10. What are the parts of the literal constants?
A. integer numerals
B. floating-point numerals
C. strings and boolean values
D. all of the above


11. ` Which of the following is not a derived data type?
A. Function
B. Int
C. Array
D. Pointer


12. Pick the odd one out.
A. boolean type
B. integer type
C. array type
D. character type


13. What is the size of an int data type?
A. 4 Bytes
B. 2 Bytes
C. 8 Bytes
D. Depends on the system/compiler


14. _______ data type holds whole numbers? (4 bytes)
A. Bool
B. String
C. Double
D. Int


15. What would be the output of following code snippet?
#include <iostream>


using namespace std;


int main() {


double a;


**28** **Lovely Professional University**


_**Notes**_



_**C++**_



cout <<sizeof(a);


return 0;


}


A. 1
B. 0
C. 8
D. 4


**Answer for Self Assessment**


1. C 2. D


6. C 7. B


11. B 12. C


**Review Questions**



_**Unit 02: Basics of**_


3. B 4. D 5. A


8. B 9. B 10. D


13. D 14. D 15. C



1. Explain various types of data typ **e**
2. What is a constant?
3. Why keywords required in the p **r**
4. Write a program that performs r **e**
5. Explain different types of operat **o**



s in c++.



ogramming? Explain.
ference operation.



rs.



**Further Readings**




- E Balagurusamy; O **b**
Hill.

- Herbert Schildt; The

- Robert Lafore; Objec **t**



ject-oriented Programming with C++; Tata Mc Gra **w**







Complete Reference C++; Tata Mc Graw Hill.



-oriented Programming in Turbo C++; Galgotia.



**Web Links**

  - http://msdn.micros **o** ft.com/en-us/library/wcz57btd(v=vs.80).aspx

  - https://www.codec **a** demy.com/learn/learn-c-plus-plus


**Lovely Professional University** **29**


_**Notes**_



_**Prikshat Kumar Angra, Lovely Professional University**_



_**Unit 03: Operators and Type Casting**_


##### **Unit 03: Operators and Type Casting**

**CONTENTS**

Objectives

Introduction

3.1 Operators in C++

3.2 Scope Resolution Operator

3.3 Member de-referencing operators

3.4 Type Conversion

3.5 Basic Type to Class Type

3.6 Class Type to Basic Type

3.7 Class Type to another Class Type

Summary

Keywords

Self Assessment

Answers for Self Assessment

Review Questions

Further Readings


**Objectives**

After studying this unit, you will be able to:


     - Recognize the type conversions

     - Understand operators

     - Describe the basic type to class type

     - Explain the class type to basic type

     - Discuss the class type to another type


**Introduction**

It is the transformation of one type into another. Type casting, in other terms, is the process of
transforming an expression of one type into another.Conversion of variables from one type to
another are known as type conversion. Type conversions ultimate aim is to make variables of one
data type work with variables of another data type.Type conversions can be used to force the
correct type of mathematical computation needed to be performed.

Depending on whether the type conversion is ordered by the programmer or the compiler, it can be
explicit or implicit. When a programmer wants to go around the compiler's typing system, he or
she uses explicit type conversions (casts); however, the programmer must use them appropriately
to succeed. Problems that the compiler avoids may develop, such as when the processor requires
data of a certain type to be stored at specific addresses or when data is truncated because a data
type on a given platform does not have the same size as the original type. Explicit type conversions
between objects of different kinds result in difficult-to-read code at best.


**30** **Lovely Professional University**


_**Notes**_



_**Object Oriented P**_

**3.1** **Operato**

An operator is a
computations. Th **e**
operators to prov **i**

An operator oper **a**


**Example**

int c = a + b;

Here, ‘+’ is the ad **d**

_**Operators in C+**_



_**rogramming**_
**rs in C++**



symbol that operates on a value to perform speci **f**

**e** y form the foundation of any programming langua **g**

de the required functionality.



ic mathematical or logical
e. In C++, we have built-in



tes the operands. For example,



ition operator. ‘a’ and ‘b’ are the operands that are b **e**



ing ‘added’.



_**+ can be classified into 6 types:**_



1. Arithme **t**

2. Assign **m**

3. Relation **a**

4. Logical **O**

5. Bitwise **O**

6. Other O **p**



ic Operators



ent Operators



l Operators



perators

perators



erators



**Arithmetic Ope**

Arithmetic operat



**rators**





ors are used to perform arithmetic operations on varia **b** les and data. For example,



ors are used to perform arithmetic operations on varia **b**


|E Example a+b; E Example a+b; E Example a+b;|Col2|
|---|---|
|Operator|Operation|
|+|Addition|
|-|Subtraction|
|*|Multiplication|
|/|Division|
|%|Modulo Operation (**R**<br>emainder after division)|



**Assignment Op**

Assignment oper **a**


**Example**

X=10;

Here, we have as **s**



**erators**



tors are used to assign values to variables. For examp **l**



e,



igned x value of 5 to the variable x..

|Operator|Example|
|---|---|
|=|x = y;|
|+=|x += y;|



**Lovely Professional University** **31**


_**Notes**_



_**Unit 03: Operators and Type Casting**_



|Col1|-=|x -= y;|Col4|
|---|---|---|---|
||*=|x *= y;|x *= y;|
||/=|x /= y;|x /= y;|
||%=|x %= y;|x %= y;|


**Relational Operators**

A relational operator is used to check th **e**


**Example**

a > b;

Here, > is a relational operator. It checks

If the relation is true, it returns 1 wherea **s**



relationship between two operands. For example,



if a is greater than b or not.



if the relation is false, it returns 0.















|Operator|Meaning|Example|
|---|---|---|
|==|Is Equ<br>al To|3 == 5 gives us false|
|!=|Not E**q**<br>ual To|3 != 5 gives us true|
|>|Great**e**<br>r Than|3 > 5 gives us false|
|<|Less**T**<br>han|3 < 5 gives us true|
|>=|Great**e**<br>r Than or Equal To|3 >= 5 give us false|
|<=|Less**T**<br>han or Equal To|3 <= 5 gives us true|


**Logical Operators**

Logical operators are used to check wh **e**
it returns 1 whereas if the expression is f **a**





ther an expression is true or false. If the expression is



lse, it returns 0.



true,















|Operator|Example|Meaning|
|---|---|---|
|&&|expre**s**<br>sion1** &&** expression2|Logical<br>A**N**<br>True only if all the oper**a**<br>are true.<br>D.<br>nds|
||||expre**s**<br>sion1** ||** expression2|Logical<br>True if at least one of<br>operands is true.<br>OR.<br>the|
|!|**!**expre**s**<br>sion|Logical<br>**N**<br>True only if the operan**d**<br>false.<br>OT.<br> is|


**Bitwise Operators**

In C++, bitwise operators are used to pe **r**
alongside char and int data types.











form operations on individual bits. They can only be



used



**32** **Lovely Professional University**


_**Notes**_



_**Object Oriented Programming**_

|Col1|Operator|Description|
|---|---|---|
||&|Binary AND|
||||Binary OR|
||^|Binary XOR|
||~|Binary One's Complement|
||<<|Binary Shift Left|
||>>|Binary Shift Right|



**Other C++ Operators**







|Here's a list of some other comm utorials.|mon operators available in C++. W|We will learn about them in later|
|---|---|---|
|Operator|Description|Example|
|sizeof|returns the size of data type|sizeof(int); // 4|
|?:|returns value based on the<br>condition|string result = (5 > 0) ? "even"<br>: "odd"; // "even"|
|&|represents memory address of<br>the operand|&num; // address of num|
|.|accesses members of struct<br>variables or class objects|s1.marks = 92;|
|->|used with pointers to access<br>the class or struct variables|ptr->marks = 92;|
|<<|prints the output value|cout << 5;|
|>>|gets the input value|cin>> num;|


**3.2** **Scope Resolution Operator**

The scope resolution operator is used to reference the global variable or member function that is out
of scope. Therefore, we use the scope resolution operator to access the hidden variable or function
of a program. The operator is represented as the double colon (::) symbol.

_**Uses of the scope resolution Operator**_


1. It is used to access the hidden variables or member functions of a program.

2. It defines the member function outside of the class using the scope resolution.

3. It is used to access the static variable and static function of a class.

4. The scope resolution operator is used to override function in the Inheritance.


**3.3** **Member de-referencing operators**

The pointer-related operator & and * are called referencing and dereferencing operators.

The referencing operator (&) is a unary operator and it returns the address of its operand variable.


**Lovely Professional University** **33**


_**Notes**_



_**Unit 03: Operators and Type Casting**_



The dereferencing operator (*) is a una **r**
address.


**Example**

#include<iostream>

using namespace std;

int main()

{

int n= 50;

int *ptr;

ptr=&n;

cout<<"\nAddress of n ="<<&n;



y operator that returns the value present at the spe **c** ified



y operator that returns the value present at the spe **c**



cout<<"\nValue in variable ptr ="<< **p**

cout<<"\nValue of n ="<<n;

cout<<"\nValue using dereferencing **o**

return 0;



tr;



perator="<<*ptr;



}

Output


**3.4** **Type Conversion**



Constants and variables in a mixed expr **e**
assignment operations cause automatic **ty**



ssion are of distinct data kinds. According to certain **r**



pe conversion between the operands.



ules,



The data type to the right of an assign **m**
on the left automatically.


**Example**

int a = 45;

float b= 1253.25;

a=b;



ent operator is transformed to the data type of the va **r**



iable



This converts float variable b to an int **e**
automatic as far as data types involved **a**
in case of objects to copy values of all d **a**
The objects in this case are of same data **t**

**Different types of Type Convers**


1. Implicit type conversion

2. Explicit type conversion

_**Implicit type conversion**_



ger before its value assigned to a. The type convers **i**

re built in types. We can also use the assignment op **e**
ta members of right hand object to the object on left **h**
ype.



on is

rator

and.



**ion**



**34** **Lovely Professional University**


_**Notes**_



_**Object Oriented P**_

Done by the com **p**
when in an expre **s**
place to avoid los **s**



_**rogramming**_



iler on its own, without any external trigger from th **e**
sion more than one data type is present. In such con **d**
of data.



user.Generally takes place
ition type conversion takes



**Lab Excersise**

//Program



#include <iostrea **m**

using namespace **s**

int main()

{




 


td;



int x = 1 **0**



0;

**'** a';



char y = **'**

x = x + y **;**

float z = x + 1.0;



cout << **"** x = " << x << endl

<< "y = " << y << endl

<< "z = " << z << endl;

return 0;



}


**Output**


_**Explicit type conversion**_

This process is us **e** r defined, also called type casting.


**Lab Exercise**

//Program



#include <iostrea **m**

using namespace **s**

int main()

{

double x = 25.5 **;**




 


td;



int sum = (int)x + 1;



cout << "Sum =

return 0;



" << sum;


**Lovely Professional University** **35**


_**Notes**_



_**Unit 03: Operators and Type Casting**_



}

Output



There are three types of situations th **a** t arise where data conversion are between incomp **a** tible
types. Possible Type Conversions in C+ **+**



1. Conversion from basic type to **c**

2. Conversion from class type to **b**

3. Conversion from one class type



lass type

asic type



to another class type



**3.5** **Basic Type to Class Type**

A constructor was used to build a matri
constructor to build a string type object
performed a defect type conversion fro **m**



x object from an int type array. Similarly, we used an

from a char* type variable. In these examples constr **u**
the argument’s type to the constructor’s class type



other

ctors



Consider the following constructor:

string::string(char*a)

{

length = strlen(a);

name=new char[len+1];

strcpy(name,a);

}



This constructor builds a string type ob **j**
name are data members of the class stri **n**
be used for conversion from char* type t **o**



ect from a char* type variable a. The variables lengt **h**
g. Once you define the constructor in the class string, **i**



string type.



and
t can



**Example**

string s1, s2;

char* name1 = “Good Morning”;

char* name2 = “STUDENTS” ;

s1 = string(name1);

s2 = name2;

The program statement

s1 = string (name1);

first converts name1 from char* type to
object s1. The statement

s2 = name2;

performs the same job by invoking the c **o**

Consider the following example

class time

{

int hours;

int minutes;



string type and then assigns the string type values **t** - the



string type and then assigns the string type values **t**



nstructor implicitly.



**36** **Lovely Professional University**


_**Notes**_



_**Object Oriented P**_

public:

time (int t) II cons **t**

{

hours = t / 60; // **t**



_**rogramming**_



**t** ructor



is inputted in minutes



minutes = t % 60; .

}

};



In the following c **o** nversion statements:



In the following c **o**

time T1; //object **T**

int period = 160;

T1 = period; //in **t**

The object T1 is c **r**
invoking the cons
minutes will hav **e**



1 created



to class type



eated. The variable period of data type integer is conv **e**
tructor. After this conversion, the data member hours
a value of 40 denoting 2 hours and 40 minutes.



rted into class type time by
of T1 will have value 2 arid



In both the exam **p** les, the left-hand operand of = operator is always a
also accomplish t **h** is conversion using an overloaded = operator.



In both the exam **p**
also accomplish t **h**



class object. Hence, we can



**Lab exercise**

// Program - Usi **n** g Constructor



#include<iostrea **m**

using namespace **s**

class Time

{

int hrs,min;

public:

Time(int t)

{

cout<<"Basic Typ **e**

hrs=t/60;

min=t%60;

}

void show();

};

void Time::show( **)**

{

cout<<hrs<< ": H **o**

cout<<min<< " M

}

int main()

{

int duration;

cout<<"\nEnter t **i**







td;


to Class Type Conversion...\n";



urs(s)" <<endl;



inutes" <<endl;



me duration in minutes";


**Lovely Professional University** **37**


_**Notes**_



_**Unit 03: Operators and Type Ca**_



_**sting**_



cin>>duration;

Time t1(duration);

t1.show();

return 0;

}


Output


**Lab exercise**

// Program - Using Operator

#include<iostream>

using namespace std;

class Time

{

int hrs,min;

public:

void display()

{

cout<<hrs<< ": Hour(s)\n";

cout<<min<<": Minutes\n";

}

void operator =(int t)

{

cout<<"\nBasic Type to Class Type Con **v**

hrs=t/60;

min=t%60;

}

};

int main()

{

Time t1;

int duration;

cout<<"Enter time duration in minutes";



ersion...\n";



**38** **Lovely Professional University**


_**Notes**_



_**Object Oriented P**_

cin>>duration;

cout<<"object t1 **o**

t1=duration;

t1.display();

cout<<"object t1 a

t1.operator=(dura

t1.display();

return 0;

}


Output


**Notes**



_**rogramming**_



verloaded assignment..."<<endl;



ssignment operator 2nd method..."<<endl;

tion);




- In this c **o**

- Basic da **t**



nversion source type is basic type and the destination



type is class type.



a type is converted into class type.



**3.6** **Class Ty**

The constructor f **u**
todefine a overlo **a**
of an overloaded **c**

operator typena **m**

{

//Program state **m**

}



**pe to Basic Type**



**u** nctions do not support conversion from a class to

ded casting operator that convert a class type data to **b**



basic type. C++ allows us

asic type. The generalform
on function, is:



asting operator function, also referred to as a convers **i**



e()



ent



This function con **v** erts a class type data to type name. For example, the **o**
class object to typ **e** double, in the following conversion function:



This function con **v**
class object to typ **e**



perator double() convertsa



vector:: operator **d**

{

double sum = 0;

for(int I = 0; i<siz **e**

sum = sum + v[i] *****



ouble()



; i++)



v[i ]; //scalar magnitude



**Lovely Professional University** **39**


_**Notes**_



_**Unit 03: Operators and Type Casting**_



return sqrt(sum);

}


**Did you know?**

Conversion function must be a class me **m**

Conversion function must not specify th **e**

Conversion function must not have any **a**

In the string example discussed earlier, **w**

string::operator char*()

{

retum(str);

}


**Did you know?**

Dynamic_cast can be used only with po **i**
the result of the type conversion is a vali **d**



ber.



return value even though it returns the value.

rgument.



e can convert the object string to char* as follows:



nters and references to objects. Its purpose is toensur **e**



complete object of the requestedclass.



that



**Lab exercise**

// Program


#include<iostream>

using namespace std;

class Time

{

int h,m;

public:

Time(int a,int b)

{

h=a;

m=b;

}

operator int()

{

cout<<"\nClass Type to Basic Type Con **v** ersion...";

return(h*60+m);

}

~Time()

{

cout<<"\nDestructor called..."<<endl;

}


**40** **Lovely Professional University**


_**Notes**_



_**Object Oriented P**_

};

int main()

{

int h,m,duration;

cout<<"\nEnter **H**

cin>>h;

cout<<"\nEnter **M**

cin>>m;

Time t(h,m);

duration = t;

cout<<"\nTotal **M**

cout<<"\n2nd m **e**

duration = t.oper **a**

cout<<"\nTotal **M**

return 0;

}


Output


**Notes**



_**rogramming**_



ours ";



inutes ";



inutes are "<<duration;



thod operator overloading ";



tor int();



inutes are "<<duration;



Class type to basi **c** type conversion requires special casting operator fu **n**
type conversion. **T** his is known as the conversion function.



Class type to basi **c**
type conversion. **T**



ction for class type to basic



**3.7** **Class Ty**

We have just see **n**
But sometimes w **e**



**pe to another Class Type**



e and a class to basic type.
lass type.



data conversion techniques from a basic to class ty **p**
would like to convert one class data type to another **c**



**Example**



**Lovely Professional University** **41**


_**Notes**_



_**Unit 03: Operators and Type Ca**_

bj2 are objects of different classes.



_**sting**_



Objl = Obj2 ; //Obj1 and **O**

Obj1 is an object of class one and Obj2 is
to class one type data and the converte **d**
place from class two to class one, two i **s**
class.

Such conversion between objects of diff **e**
conversion function. Which form to **u**
function to be located, whether in the so **u**

We studied that the casting operator fun **c**

Operator typename()

The following Figure illustrates the abo **v**



an object of class two. The class two type data is conv

value is assigned to the Obj1. Since the conversion
known as the source and one is known as the desti **n**



erted

takes
ation



rent classes can be carried out by either a constructo **r**
se, depends upon where we want the type-conv **e**



rce class or in the destination class.



or a
rsion



tion



e two approaches.



The following Table summarizes all the **t**
to any other type (or any other class)
performthe conversion from any other
destination class.



hree conversions. It shows that the conversion from a

makes use of a casting operator in the source clas
type or class to a class type, a constructor is used i **n**



class
s. To



the



When a conversion using a constructor
access the data members of the object se **n**



is performed in the destination class, we must be a **b**
t (by the source class) as an argument.



le to



**Lab Exercise**

// Program – Using Constructor

#include<iostream>

using namespace std;


**42** **Lovely Professional University**


_**Notes**_



_**Object Oriented Programming**_

class Time

{

int hrs,min;

public:

Time(int h,int m)

{

hrs=h;

min=m;

}

Time()

{

cout<<"\n Time's Object Created";

}


int getMinutes()

{

int tot_min = ( hrs * 60 ) + min ;

return tot_min;

}


void display()

{

cout<<"Hours: "<<hrs<<"\n";

cout<<" Minutes : "<<min <<"\n";

}

};

class Minute

{

int min;

public:

Minute()

{

min = 0;

}

void operator=(Time T)

{

min=T.getMinutes();

}

void display()

{

cout<<"\n Total Minutes : " <<min<<"\n";


**Lovely Professional University** **43**


_**Notes**_



_**Unit 03: Operators and Type Casting**_

}

};

int main()

{

Time t1(1,20);

t1.display();

Minute m1;

m1.display();

m1 = t1;

t1.display();

m1.display();

return 0;

}

Output


**Lab Exercise**

//Program – Using conversion function

#include<iostream>

using namespace std;

class inventory1

{

int ino,qty;

float rate;

public:

inventory1(int n,intq,float r)

{

ino=n;

qty=q;

rate=r;

}

int getino()


**44** **Lovely Professional University**


_**Notes**_



_**Object Oriented P**_

{

return(ino);

}

float getamt()

{

return(qty*rate);

}

void display()

{

cout<<"\nino = " **<**

}

};

class inventory2

{

int ino;

float amount;

public:

void operator=(in **v**

{

ino=I.getino();



_**rogramming**_



<ino<<" qty = "<<qty<<" rate = "<<rate;



entory1 I)



amount=I.getamt **(**

}

void display()

{

cout<<"\nino = " **<**

}

};

int main()

{

inventory1 I1(101 **,**

inventory2 I2;

I2=I1;

I1.display();

I2.display();

}



);



<ino<<" amount = "<<amount;



50,45);


**Lovely Professional University** **45**


_**Notes**_



_**Unit 03: Operators and Type Casting**_

**Summary**


  - A type conversion may either be explicit or implicit, depending on whether it is ordered

by the programmer or by the compiler. Explicit type conversions (casts) are used when a

programmer want to get around the compiler’s typing system; for success in this

endeavour, the programmer must use them correctly.

  - Used another constructor to build a string type object from a char* type variable.

  - The general form of an overloaded casting operator function, also referred to as a

conversion function, is:

operator typename()

{

//Program statement

}


  - Which form to use, depends upon where we want the type-conversion function to be

located, whether in the source class or in the destination class.


**Keywords**

**Implicit Conversion** : An implicit conversion sequence is the sequence of conversions required to
convert an argument in a function call to the type of the corresponding parameter in a function
declaration.

**Explicit Conversion:**

**Operator Typename():** Converts the class object of which it is a member to typename.


**Self Assessment**


1. Following program is an example of ___________ conversion.

#include <iostream>


using namespace std;


int main()


{


int x = 100;


char y = 'a';


x = x + y;


float z = x + 1.0;


cout << "x = " << x << endl


<< "y = " << y << endl


<< "z = " << z << endl;


return 0;


}


A. Implicit

B. Explicit

C. Both


**46** **Lovely Professional University**


_**Notes**_



_**Object Oriented Programming**_

D. None of Above


2. What is type casting?

A. Converting one function into another

B. Converting one data type into another

C. Converting operator type to another type

D. None of them


3. Choose the correct syntax for explicit conversion.

A. Explicit (type)

B. (type) expression;

C. Expression (explicit)

D. None of Above


4. Who carries out implicit type casting?

A. The Micro Controller

B. The Compiler

C. The Programmer

D. The User


5. Who initiates explicit type casting?

A. The Micro Controller

B. The Compiler

C. The Programmer

D. The User


6. What will be the data type of the result of the following operation?

(float)a * (int)b / (long)c * (double)d


A. int

B. long

C. float

D. double


7. When double is converted to float, the value is?

A. Truncated

B. Rounded

C. Depends on the compiler

D. Depends on the standard


8. Which of the following type conversion is not possible in C++?

A. Basic to Class type

B. Class to Basic type

C. One Class to another class type

D. Inheritance to inheritance


9. Which of the following is correct statement for class to basic type conversion?


**Lovely Professional University** **47**


_**Notes**_



_**Unit 03: Operators and Type Casting**_

A. Class type to basic type conversion never performed

B. In this conversion source type is class type and the destination type is basic type.

C. Class type to basic type conversion acts like data type

D. None of above


10. Conversion function ___________.

A. must be a class member

B. must not have any argument

C. All of above

D. None of above


11. Conversion function must not specify the return value even though it returns the value.

A. True

B. False


12. To convert from a user defined class to a basic type, you would most likely use.

A. Built-in conversion function

B. A one-argument constructor

C. A conversion function that’s a member of the class

D. An overloaded ‘=‘operator


13. How many ways to perform conversion from one class to another class can perform?

A. 4

B. 2

C. 3

D. 1


14. ____ refers to the process of changing the data type of the value stored in a variable.

A. Type char

B. Type int

C. Type float

D. Type cast


15. Which of the following type-casting have chances for wrap around?

A. From int to float

B. From int to char

C. From char to short

D. From char to int


**Answers for Self Assessment**


1. A 2. B 3. B 4. B 5. C


6. D 7. C 8. D 9. B 10. C


11. A 12. C 13. B 14. D 15. B


**48** **Lovely Professional University**


_**Notes**_



_**Object Oriented Programming**_

**Review Questions**



1. What do **y**



ou mean by type casting? Explain the difference b **e**



tween implicit and explicit



type casti **n** g in detail.



2. How type **c**



onversion occurs in a program. Explain with suitable



example.



3. Write a pr **o** gram that demonstrate working of explicit type conv **e** rsion.



4. The assig **n**



ment operations cause automatic type conversion b **e**



tween the operand as per



certain rul **e** s. Describe.



5. Write a pr **o** gram that demonstrate working of implicit type conv **e**



5. Write a pr **o**

6. What is cl **a**

7. List the sit **u**

8. How to co **n**



in in detail.

conversion.



rsion.



ss to another class type conversion?



ations in which we need class type to basic type conv **e**



rsion.



vert one data type to another data type in C++. Expla



9. Write a pr **o** gram which the conversion of class type to basic type



10. There are

incompati **b**



three types of situations that arise where dat **a**

le types. What are three situations explain briefly.



conversion are between



**Further**


   
   
   


**Readings**


E Balagurusamy; Object-oriented Programming wit **h**



Robert Lafore; Object-oriented Programming in Tur **b** - C++; Galgotia.



C++; Tata Mc Graw-Hill.



Herbert Schildt; The Complete Reference C++; Tata **M**



c Graw Hill.



**Web Lin**


   
   
   


**ks**



https://www.codecademy.com/learn/learn-c-plus **-** plus



http://msdn.microsoft.com/en-us/library/wcz57b **t** d(v=vs.80).aspx

http://www.learncpp.com/cpp-tutorial/117-multi **p** le-inheritance/



**Lovely Professional University** **49**


_**Prikshat Kumar Angra, Lovely Professional University**_

##### **Unit 04: Control Structures**


**CONTENTS**

Objectives

Introduction

4.1 Decision-Making Controls

4.2 Iterative Controls

4.3 Jumping Controls

Summary

Keywords

Self Assessment

Answers for Self Assessment

Review Questions

Further Readings

**Objectives**

After studying this unit, you will be able to:


 - Understand control structure

 - Recognize decision-making control

 - Analyze iterative controls

 - Recognize the jumping controls


**Introduction**



_**Unit 04: Control Structures**_ _**Notes**_



A C++ control statement redirects the flow of a program in order to execute additional code. These
statements come in the form of conditionals (if-else, switch) and loops (for, while, do-while). Each
of them relies on a logical condition that evaluates to a Boolean value in order to run one piece of
code over another.


**4.1** **Decision-Making Controls**

The decision control statements are the decision-making statements that decide the order of
execution of statements based on the conditions. In the decision-making statements, the
programmer specifies which conditions are to be executed or tested with the statements to be
executed if the condition is true or false.

**Decision-making statements are:**


 - if statement

 - if-else statement

 - nested if statements

 - switch statement

_**If statement**_

The if statement consists a condition which is followed by one or some of the statements, if the
condition is true then the statements will be executed or else not. This statement is the simple and
easy decision control statement.

_**Syntax**_


**50** **Lovely Professional University**


_**Notes**_
_**Object Oriented Programming**_

if (condition)

{



//statements to b **e** executed if condition is true

}



**Lab Exercise**



#include<iostrea **m**

Using namespace **s**

int main()

{ int a = 10;

if (a > 20)

{

cout<<"10 is less **t**

}

cout<<"Out of if **b**

}

_**if-else statement**_







td;



han 20";



lock";



In the if-else stat **e** ment the if statement is followed by the else stateme **n**
the expression is **f** alse.

_**Syntax**_

if (condition)



t which will execute when



{  //statement **w**

}

else

{  //statement w **i**

}



ill execute if the condition is true



ll execute if the condition is false



**Lab Exercise**



#include<iostrea **m**

using namespace **s**

int main(){

int a=10,b=20;

if(a>b)

{

cout<<"a is great **e**

}

else

{

cout<<"b is great **e**

}

}







td;



r than b";



r than a";



**Lovely Professional University** **51**


_**Unit 04: Control Structures**_ _**Notes**_



_**nested if statements**_



Nested if statements means “One if stat **e**
where you may need to evaluate a co **n**
cases, nested if statements will come in **h**

if (condition 1)

{

if (condition 2)

{

if (condition 3)

{

// execute statement1;

}

if (condition 4)

{

// execute statement2;

}

}

}


**Lab Exercise**


#include <iostream>

using namespace std;

int main()

{

int a;

cout<< "Enter a number" << '\n';

cin>>a;

if(a>=10)

{

if(a>=20)

{

if(a>=100)

{

cout<<"You entered a value greater tha **n**

}

if(a<=75)

{

cout<<"You entered a value less than 75 **"**

}

}

if(a<=30)

{



ment within another if statement”. There may be situ **a**



dition based on the result of another condition. In
andy.The syntax of nested if statement will be:



tions
these



100." << '\n';



<< '\n';



**52** **Lovely Professional University**


_**Notes**_
_**Object Oriented Programming**_



cout<<"You enter **e**

}

}

if(a<10)

{

cout<<"You enter **e**

}

}

_**switch statement**_

You can use the **s**
(expressions). De **p**
printed. The synt **a**

switch (condition **)**

{

case expression1:



d a value less than 30" << '\n';


d a value less than 10" << '\n';



_**t**_



witch statement when you want to evaluate a cond **i**

ending on the input, the appropriate case will be exe **c**
x of switch case statement will be:



tion against different cases

uted, and the result will be



//statement to ex

break;

case expression2:

//statement to ex

break;

case expression3:

//statement to ex

break;

…

default:

// statement to e **x**

}



ecute;


ecute;


ecute;



ecute;



**Lab Exercise**



#include <iostrea **m**

using namespace

int main()

{

int a;

cout<< "Enter a n **u**

cin>>a;

switch (a)

{

case 1:

{

cout<< "The first **c**

break;







std;



mber between 1 to 7 : " << '\n';



olour of the rainbow is VIOLET: " << '\n';



**Lovely Professional University** **53**


_**Unit 04: Control Structures**_ _**Notes**_

}

case 2:

{

cout<< "The second colour of the rainbow is INDIGO: " << '\n';

break;

}

case 3:

{

cout<< "The third colour of the rainbow is BLUE: " << '\n';

break;

}

case 4:

{

cout<< "The fourth colour of the rainbow is GREEN: " << '\n';

break;

}

case 5:

{

cout<< "The fifth colour of the rainbow is YELLOW: " << '\n';

break;

}

case 6:

{

cout<< "The sixth colour of the rainbow is ORANGE: " << '\n';

break;

}

case 7:

{

cout<< "The seventh colour of the rainbow is RED: " << '\n';

break;

}

default:

cout<< "You have entered a number other than 1 - 7. Please try again!" << '\n';

}

}


**4.2** **Iterative Controls**

The iteration (for, while, and do-while loop) statements allows a set of instruction to be performed
repeatedly until a certain condition is fulfilled. The iteration statements are also called loops or
looping statements. C++ provides three kinds of loops:


 - for loop

 - while loop


**54** **Lovely Professional University**


_**Notes**_
_**Object Oriented Programming**_




- do-while lo **o** p


**Notes**



Aloop has four el **e**

Initialization Exp **r**

Test Expression

Update Expressio **n**

Loop's Body

_**for loop**_

The for loop is - **n**
nature, that is, th **e**



ments that have different purposes. These elements a **r**



eas:



own in advance.



ession(s)



(s)



e of the most widely used loops in C++. The for lo **o**
number of times the body of the loop is executed is k **n**



p is a deterministic loop in



_**Syntax**_

For(initialization **e** xpression(s); test-expression; update expression(s))

{



body-of-the-loo **p** ;



}



**Lab Exercise**



#include<iostrea **m**

using namespace **s**

int main (){

int n=0;

for (n=1; n<=10; **n**

cout<<n<<" ";

return 0;

}

Output:


_**while loop**_

The second loop **a**

_**Syntax**_

While(expression **)**

{

loop-body;

}


**Lab Exerc**







td;



++)



vailable in C++ is the while loop. The while loop is an



empty-controlled loop.



**ise**



#include<iostrea **m** 

**Lovely Professional University** **55**


_**Unit 04: Control Structures**_ _**Notes**_



using namespacestd;

int main(){

int n=0;

while(n<=10){

n++;

cout<<n<<" ";

}

return 0;

}

Output:


_**do-while loop**_



Unlike the for and while loops, the d **o**
expression at the bottom of the loop afte **r**
while loop always executes at least once **.**



-while is an exit-controlled loop i.e., it evaluates its

executing its loop-body statements. This means that



test
a do


_**Syntax**_

do

{

statement ;

}while(test-expression);


**Lab Exercise**


#include<iostream>

using namespacestd;

int main(){

int n=0;

do{

n++;

cout<<n<<" ";

}

while(n<10);

return 0;

}

Output


**56** **Lovely Professional University**


_**Notes**_
_**Object Oriented Programming**_



**4.3** **Jumping**

Jump statements **a**



**Controls**



s of Jump Statements are



re used to interrupt the normal flow of program. Typ **e**




- goto statem **e** nt




 - break state **m** ent

 - continue sta **t** ement

_**goto statement**_



The goto stateme **n** t is a control statement which is used to transfer th **e**
another place wit **h** out any condition in a program.



The goto stateme **n**
another place wit **h**



control from one place to



**Lab Exercise**



#include<iostrea **m**

using namespace **s**

int main(){

int n=0;

while(n<10){

if(n==4)

gotox;

n++;

cout<<n<<" ";

}

x:

cout<<"Hello Lab **e**

return 0;

}

Output


_**break statement**_







td;



l";



**Lovely Professional University** **57**


_**Unit 04: Control Structures**_ _**Notes**_



**Lab Exercise**


#include<iostream>

using namespace std;

int main(){

int n=0;

while(n<10){

if(n==4)

break;

n++;

cout<<n<<"";

}

return 0;

}

Output:


_**continue statement**_



The continue statement works somewh **a**
however, continue forces the next iterati **o**



t like the break statement. Instead of forcing termin **a**
n of the loop to take place, skipping any code in bet **w**



tion,
een.



_**Syntax**_

continue;

#include <iostream>

using namespace std;

int main () {

int a = 5;

do {

if( a == 10) {

a =a+1;

continue;

}

cout<< "value of a: " << a <<endl;

a = a + 1;

}

while( a< 20 );

return 0;

}

Output:


**58** **Lovely Professional University**


_**Notes**_
_**Object Oriented Programming**_


**Summary**




- Selection str **u**

- Looping str **u**

- The stateme **n**

a for loop.

- There are 3 **s**



ctures are implemented using If, If Else and Switch s **t** atements.



ctures are implemented using If, If Else and Switch s **t**



ctures are implemented using While, Do While and F **o**



r statements.



ts given as "initialization statements" are executed o **n**



ly once, at the beginning of



tatements given to a for loop as shown. One for init **i**

ting and last one for iterating the loop. Each of thes **e**



condition te **s**

by semicolo **n**



alization purpose, other for

3 statements are separated



s.




- The C++ lan **g**



uage provides a set of control statements that allows



you to conditionally control



data input a **n**


**Keywords**

**If statement** **-** Th **e**
true.

**If-else statement** **-**
is true or false. It **i**

**Switch Statement**
test a list of cases.


**SelfAssessme**



d output. These controls are referred to as loops.


single if statement in C++ language is used to exec **u**



te the code if a condition is



The if-else statement in C++ language is used to exec **u**
s also called a two-way selection statement.



te the code if the condition




 - Switch statement acts as a substitute for a long if- **e**


**nt**



lse-if ladder that is used to



1. Decision Control statements in C++ can be implemented using

A. if

B. if-else



C. Conditio **n**

D. All of th **e**



al Operator



above



2. _______ **i** s looping statement in C++.

A. If

B. Switch

C. For


**Lovely Professional University** **59**


_**Unit 04: Control Structures**_ _**Notes**_

D. None of above


3. To make decision based on multiple choices, _______ is best suited.

A. If

B. If-else

C. If-else-if

D. None of the above


4. How many case statements are allowed before single break statement in switch statement?

A. 1

B. 2

C. Multiple

D. 100


5. After case keyword ________ symbol is used.

A. :

B. ;

C. 
D. /


6. Which from the following is not a part of the for statement?

A. Initialization

B. Statement checker

C. Update

D. Continuation condition


7. How many types of Iterators are there?

A. 1

B. 2

C. 3

D. 5


8. How many types of loops are there in C++?

A. 4

B. 2

C. 3

D. 1


9. Which Loop is Faster in C++?

A. For

B. While

C. Do While

D. All work at same speed


**60** **Lovely Professional University**


_**Notes**_
_**Object Oriented Programming**_


10. Do While Loop is also known as ______.

A. Entry Control

B. Virtual Control

C. Exit Control

D. All of Above


11. What is true about a break?

A. Break stops the execution of entire program

B. Break halts the execution and forces the control out of the loop

C. Break forces the control out of the loop and starts the execution of next iteration

D. Break halts the execution of the loop for certain time frame


12. Which of the following is used with the switch statement?

A. Continue

B. Exit

C. break

D. for


13. Which of the following is a decision-making statement?

A. main()

B. void

C. goto

D. None of above


14. ___________ loop is guaranteed to execute at leastonce?

A. For loop

B. While loop

C. Do-while loop

D. None of above


15. Which of the following is a looping statement?

A. If

B. If-else

C. Switch

D. None of above


**Answers for SelfAssessment**


1. D 2. C 3. C 4. C 5. A


6. B 7. D 8. A 9. D 10. C


11. B 12. C 13. D 14. C 15. D


**Lovely Professional University** **61**


_**Unit 04: Control Structures**_ _**Notes**_


**Review Questions**


1. What do you mean by nested if sta **t** ement? Explain with suitable example.



2. What is difference between loopin **g**

3. Write a program to reverse entere **d**

4. What do you mean by switch state **m**

5. Differentiate between while loop a **n**


**Further Readings**



statements and jumping statements?



number.



ent? How it is different from if else statement.



d do- while loop with suitable example.




- E Balagurusamy; Object-ori **e** nted Programming with C++; Tata Mc Graw-Hill.




- Herbert Schildt; The Compl **e**

- Robert Lafore; Object-orient **e**


**Web Links**


- http://msdn.microsoft.com **/**

- http://www.learncpp.com **/**

- https://www.codecademy. **c**



te Reference C++; Tata Mc Graw Hill.



d Programming in Turbo C++; Galgotia.



en-us/library/wcz57btd(v=vs.80).aspx



cpp-tutorial/117-multiple-inheritance/



om/learn/learn-c-plus-plus



**62** **Lovely Professional University**


_**Prikshat Kumar Angra, Lovely Professional University**_



_**Unit 05 - Pointers and Structures**_



_**Notes**_


##### **Unit 05: Pointers and Structures**

**CONTENTS**

Objectives

Introduction

5.1 Main Function

5.2 Function Prototyping

5.3 Handling Pointers

5.4 C Structures and Limitations

Summary

Keywords

Self Assessment

Answers for Self Assessment

Review Questions

Further Readings

**Objectives**

After studying this unit, you will be able to:


 - Understand pointers

 - Recognize Structures

 - Analyze C structures


**Introduction**

A function is a programming unit with a unique name that may be identified. It can be invoked by
a programme once it has been defined. When called, it may accept zero or more inputs. The code
placed inside the function specification determines what should be done with the incoming
input(s). The function generates a single output after doing the given transformation. The caller of
the function receives this output.

Computers use their memory for storing instructions of the programs as well as the values of the
variables. Since memory is a sequential collection of storage cells each cell has an address
associated with it. Whenever we declare a variable, the system allocates, somewhere in the
memory, a memory location and a unique address is assigned to this location. Whenever a value is
assigned to this variable the value gets stored in the location having a unique address in the
memory associated with that variable. Therefore, the values stored in memory can be manipulated
using their addresses. Pointer is an extremely powerful mechanism to write efficient programs.
Incidentally, this feature makes C stand out as the most powerful programming language. Pointers
are the topic of this unit.


**5.1** **Main Function**

Main () function is the entry point of any C++ program. It is the point at which execution of
program is started. When a C++ program is executed, the execution control goes directly to the
main() function. Every C++ program have a main() function.

Syntax

void main()

{


**Lovely Professional University** **63**


_**Notes**_



_**Object Oriented Programming**_

............

............

}


**Example**



#include<iostrea **m**

Using namespace

void main()

{

cout<<"This is m **a**

}



.h>



std;


in function";



**5.2** **Function**

Function Prototy **p**
function name, ar **g**

_**Parts Of Functio**_



**Prototyping**



ing is the process of declaring a function for the **c**



uments, and return type.



ompiler to understand the



_**ns**_



1. Function De **c**

2. Function Ca **l** l

3. Function De **f**



laration



l



inition



**Function Declar**

return_typefuncti **o**


**Example**


intsum(intx,int y)

_**return_type**_

A function can re **t**
not return value i **f**



**ation**



n_name( param_1,param_2 ... param_n);



urn a value using the return statement to the main **p**
the return_type is void.



rogram. The function does



_**function_name**_



A function_name
name and the par **a**



is a user-defined name (identifier) for calling/usin **g**



meter list together constitute the function signature.



the function. The function



_**Parameters (par**_

A parameter is v **a**
to the function de **f**



_**am_1,param_2 ... param_n)**_



riable which holds data. The Argument transfers the **d**



inition.



ata from the main program



**Actual arguments** : The main program variables(arguments) are kno **w**
during the functi **o** n call.



: The main program variables(arguments) are kno **w**
n call.

**ts** : The Function definition variables(arguments) **a**



n as the actual arguments



**Formal argumen**
arguments.

**Function Call**



re known as the formal



When the main **p**
function and pass **e**



rogram is run, the program reaches the function cal **l**



s the control to it.



statement and invokes the



int main()

{

....


**64** **Lovely Professional University**


_**Unit 05 - Pointers and Structures**_



_**Notes**_



add(a,b); // Function Call

....



}

**Function Definition**

The actual function code block or functi **o**

When the function call is triggered by t **h**
definition. Then the compiler executes
control returns when the return stateme **n**



n body is called as the function definition.



**h** e compiler, the program control is passed to the fu **n**

statements in the body of the function and the pro



t or closing braces(}) is reached.



ction
gram



**Example**


#include<iostream>

using namespace std;

int add(int x,int y); // Function Declara **t**

int main() {

int a=100,b=100,c;

c = add(a,b); // Function Call

cout<<"Addition : "<<c;

}

int add(int x,int y) // Function Definitio **n**

{

int z;

z = x+y;

return z;

}


**5.3** **Handling Pointers**

A memory variable is merely a symboli **c**
that an expression in a C program is as f **o**



ion



reference given to a memory location. Now let us co **n**



llows:



sider



int a = 10, b = 5, c;

c = a + b;



The above expression implies that a, b a **n**
from the above-mentioned statement let
the memory, ‘b’ occupies 3020 and the **v**
will generate the machine instruction to
CPU, add them and transfer the result t **o**

we can conclude that every variable hol **d**

Address of the variable in the memory ( **l**

Value stored at that memory location re **f**

Pointer is nothing but a simple d **a**
specialcharacteristic to hold the add **r**
programminglanguage provides ‘&’ op **e**
can be storedin the pointer variable and **c**

The syntax for declaring a pointer varia **b**

<data type> *<identifier>;



d c are the variables which can hold the integer data.
us assume that the variable ‘a’ occupies the address 3 **0**
ariable ‘c’ occupies 3040 in the memory. Then the co **m**
transfer the data from the location 3000 and 3020 in **t**



the location 3040 referenced as c. Hence



Now

00 in
piler

- the



s two values:



-value)



erenced by the variable. (r-value)



ta type in C programming language, which **h**
ess of some other memory location as its r-val **u**

rator to extract the address of any object. These add **r**



an be manipulated.



as a

e. C
esses



le is,



**Lovely Professional University** **65**


_**Notes**_



_**Object Oriented P**_

_**Example**_

int n;

int *ptr; /* pointe **r**

The following sta **t**
n.

ptr=&n;

Since a pointer v **a**
pointer variable **b**
*<pointer_variabl **e**

**Accessing the A**

The actual locatio **n**
variable is not kn **o**

This can be don **e**
preceding a varia **b**

_**Example**_ : The st **a**

P = &quantity;

Would assign the



_**rogramming**_



to an integer*/



ement assigns the address location of the variable n t **o**



ptr, and ptr is a pointer to



riable points to a location, the content of that location
y the unary operator * (also called the indirection or **d**



>.



is obtained by prefixing the

ereferencing operator) like,



**ddress of a Variable**



**n** of a variable in the memory is system dependent an **d**

wn to us immediately. How can we then determine t **h**



**d** therefore, the address of a

e address of a variable?



with the help of the operator & available in C. T **h** e operator & immediately
le return the address of the variable associated with i **t** .



with the help of the operator & available in C. T **h**
le return the address of the variable associated with i **t** .



tement



address 5000 to the variable p. The & operator can be **r**



The &operator c **a** n be used only with a simple variable or an array
illegal use of add **r** ess operator:



The &operator c **a**
illegal use of add **r**

&125 (pointing at

Intx[10];

&x (pointing at ar **r**

&(x+y) (pointing **a**

If x is an array, th **e**

&x[0] and &x[i+3 **]**

are valid and rep **r**

**Pointer Declarat**

Since pointer vari
as pointers before
of a pointer varia **b**

data_type *pt_na **m**

The above statem **e**

1. The asterisk (*) **t**

2. pt_name needs

3. pt_name points



emembered as ‘address of’.

element. The following are



constant).



**r** ay names).



t expressions).

n expression such as



esent the addresses of 0th and (i+3)th elements of x.



**ion**



ables contain address that belongs to a separate data **t**

we use them. Pointers can be declared just a any oth **e**
le takes the following form:



ype, they must be declared
r variables. The declaration



e;



nt tells the compiler three things about the variable p **t** _name.



nt tells the compiler three things about the variable p **t**



**t** ells that the variable pt_name is a pointer variable.



a memory location.



to a variable of type data type.



: The stat **e** ment



int *p;



declares the vari **a**
refers to the data
pointer.

Given below are **s**



ble p as a pointer variable that points to an integer **d**

type of the variable being pointed to by p and not **t**



ata type (int). The type int
he type of the value of the



ome more examples of pointer declaration







**66** **Lovely Professional University**


|Col1|Unit 05 - Pointers and Structures|
|---|---|
|Int *rollnumber;|Create a pointer variable rollnumber capable of pointing to an integer type vari<br>able or capable of holding the address of an integer type variable|
|char *name;|Create a pointer variable name capable of pointing to a character type variable<br>or capable of holding the address of a character type variable|
|float *salary;|Create a pointer variable salary capable of pointing to a float type variable or<br>capable of holding the address of a float type variable|


**Accessing a Variable through its Pointer**

Consider the following statements:

int q, * i, n;

q = 35;

i = &q;

n = * i;

i is a pointer to an integer containing the address of q. In the fourth statement we have assignedthe
value at address contained in i to another variable n. Thus, indirectly we have accessed thevariable
q through n. using pointer variablei.


**Pointer Expression**

Like other variables, pointer variables can be used in expressions. Arithmetic and comparison
operations can be performed on the pointers. For example, if p1 and p2 are properly declared and
initialized pointers, then following statements are valid.

y = *p1 * *p2; /multiply values stored in variables pointed to by *p1/and *p2

sum = sum + *p1; /increment sum by the value stored in the variable/pointed to by p1

The pointer may point to any location in the memory therefore you should be careful while using
pointers in your programs.


**5.4** **C Structures and Limitations**

A structure is a collection of variables referenced under one name providing a convenient means of
keeping related information together. The structure definition creates a format that may be used to
declare structure variables in a program later on.

The general format of structure definition is as follows:

structtag_name

{

data_typemember1;

data_typemember2;

- - - - - - 
- - - - - - 
};

A keyword struct declares a structure to hold the details of fields of different datatypes. At this
time, no variable has actually been created. Only a format of a new data type has been defined.

Consider the following example:

structaddr

{

char name [30];

char street [20];


**Lovely Professional University** **67**



_**Notes**_


_**Notes**_



_**Object Oriented P**_

char city [15];

char state [15];

intpincode;

};

The keyword str **u**
street, city, state, **p**

**Creating Struc**

The structure dec **l**
actual use a struc **t**



_**rogramming**_




- ways:



ct declares a structure to hold the details of fine fields

in code. The first four members are character array a **n**



of address, namely, #name,
d fifth one is an integer.



**ture Variables**



**l** aration does not actually create variables. Instead, it

ure variable needs to be created. This can be done in t **w**



defines data type only. For



1. Declarat **i** on using tagname anywhere in the program.



**Example** : struct book



{



char na **m**

char aut **h**

float pri **c** e;

}

struct bo **o**



e [30];



or [25];



e;



k book1, book2;



2. It is also allowe **d**



to combine structure declaration and variable declar **a**



tion in one statement.



This declaration i **s** given below:



struct pe **r** son

{



char * name;

int age;



char *ad **d**

}

p1, p2, p **3** ;



ress;



;



While declaring s **t**

struct

{



ructure variables along with their definition, the use **o**



f tag name is optional.



char *na **m**

int age;

char *ad **d**

}

p1, p2, p **3** ;



e;



ress;



;



**Giving Values**

As the members **a**
Link between a **m**
known as dot ope **r**

This can be explai **n**



**to Members**



re not themselves variables they should be linked to



the structure variables. The

operator ‘.’ which is also



ember and a variable is established using membe **r**
ator.



ed using following example:



Example:



/ * Program to define a structure and assign value to **m** embers*/



/ * Program to define a structure and assign value to **m**



**68** **Lovely Professional University**


_**Unit 05 - Pointers and Structures**_

struct book

{

char * name;

int pages;

char *author;

};

main( )

{

struct book b1;

printf (“\n Enter Values:”);

scanf (“%s %d %s”, b1.name, &b1.page, b1.author);

printf (“%s, %d, %s, b1.name, b1.page, b1.author);

}

**Structure Initialization**

A structure variable can be initialized as any other data type.

main( )

{

staticstruct

{

int weight;

float height;

}

student = {60, 180.75};

This assigns the value 60 to student. Weight and 180.75 student. Height. There is a one-to-one
correspondence between the members and their initializing values.

A structure must be declared as static if it is to be initialized inside a function (similar to arrays).
The following statements initialize two structure variables. Here, it is essential to use a tag

name.

main( )

{

structst_record

{

int weight;

float height;

}

staticstructst_recordstudent1 = {60, 180.75};

staticstructst_recordstudent2 = {53, 170.60};

       - - - - - 
       - - - - - - 
}

Another method is to initialize a structure variable outside the function as shown below:

structst_record / * No static word */


**Lovely Professional University** **69**



_**Notes**_


_**Notes**_



_**Object Oriented Programming**_

{

int weight;

int height;

}

student1 = {60, 180.75};

}

main( )

{

staticstructst_record student 2 = {53, 170.60}

                      - - - - - 
                      - - - - - 
}

The initialization of individual structure members within the template is permitted. The
initialization must be done only in the declaration of the actual variables.


**Limitations of C Structures**


      - The struct data type cannot be treated like built-in data types.

      - Operators like + -, and others cannot be used on structure variables.

      - C Structures do not permit data hiding. Structure members can be accessed by any function,

anywhere in the scope of the Structure.

      - C structures do not permit functions inside Structure

      - C Programming language does not support access modifiers. So they cannot be used in C

Structures.

      - Structures in C cannot have constructor inside Structures.


**Summary**


      - In this unit, we learnt about “Functions”: definition, declaration, prototypes, types, function

calls datatypes and storage classes, types function invoking and lastly Recursion.

      - All these subtopics must have given you a clear idea of how to create and call functions from

other functions, how to send values through arguments, and how to return values to the

called function.

      - Structure is a derived data type used to store the instances of variables of different data types.

      - Structure definition creates a format that may be used to declare structure variables in the

program later on.

      - The structure operators like dot operator “.” are used to assign values to structure members.


**Keywords**

_**Data types**_ : It refers to the type of information while storage class refers to the life-time of a
variable and its scope within the program.

_**Function Call**_ : A function can be called by specifying its name followed by a list of arguments
enclosed in parentheses and separated by commas.

_**Return Statement**_ : Information is returned from the function to the calling portion of the program
via return statement.


**70** **Lovely Professional University**


_**Unit 05 - Pointers and Structures**_

**Structure** : A structure is a collection of variables referenced under one name providing a
convenient means of keeping related information together. Structures within structure: It means
nesting of structures.


**SelfAssessment**


1. Which of the following is the default return value of functions in C++?

A. int

B. double

C. float

D. nothing


2. There are ____ types of functions in C++.

A. Four

B. Two

C. Three

D. None of the above


3. Where does the execution of the program starts?

A. user-defined function

B. main function

C. void function

D. library function


4. What are mandatory parts in the function declaration?

A. Return type, function name, parameters

B. Return type, function name

C. Parameters, function name

D. Parameters, variable


5. How many minimum numbers of functions are present in the C++ program?

A. 1

B. 2

C. 3

D. 0


6. Which of the following operator used for dereferencing or indirection?

A.   
B. &

C. ->

D. –>>


7. Which one of the following is not a possible state for a pointer.

A. hold the address of the specific object

B. point one past the end of an object


**Lovely Professional University** **71**



_**Notes**_


_**Notes**_



_**Object Oriented Programming**_

C. zero

D. point to a type


8. A pointer can be initialized with

A. Null

B. Zero

C. Address of an object of the same type

D. All of the above


9. Referencing a value through a pointer is called

A. Direct calling

B. Indirection

C. Pointer referencing

D. All of the above


10. Choose the right option.

Int * x, y;


A. x is a pointer to an int, y is an int

B. y is a pointer to a string, x is an int

C. both x and y are pointers to integer types

D. y is a pointer to a string


11. A structure is a __

A. Collection of variables (different types) represented by single name.

B. A structure is a user defined data type in C

C. Keyword ‘struct’ is used to define structure in C

D. All of above


12. Structure members are accessed using___

A. :

B. .

C.        
D. <


13. Which keyword is used to define structure in C__

A. structure

B. struct

C. structC

D. None of above


14. Passing structure in function using___

A. Function by value

B. Function by reference


**72** **Lovely Professional University**


_**Unit 05 - Pointers and Structures**_



_**Notes**_



C. Both function by reference and **f** unction by value

D. None of above



15. Which of the following operati **o**

A. Pointer to a variable of the sam **e**



n is illegal in structures?



structure



B. Dynamic allocation of memory for structure

C. Typecasting of structure

D. All of the mentioned


**Answers for SelfAssessment**



1. A 2. B 3. **B**


6. A 7. D 8. **D**


11. D 12. B 13. **B**


**Review Questions**


1. Explain the uses of pointers.



4. B 5. A


9. B 10. A


14. C 15. D



2. Discuss limitations of C structures **i**

3. Write a program that demonstrate **s**

4. What is function? Discuss advanta **g**

5. What do you mean by function pr **o**


**Further Readings**



n detail.



working of C structure.



es of using functions in OOP.



totyping?




- E Balagurusamy; Object-ori **e** nted Programming with C++; Tata Mc Graw-Hill.




- E Balagurusamy; Object-ori **e**

- Herbert Schildt; The Compl **e**

- Robert Lafore; Object-orient **e**


**Web Links**


- http://msdn.microsoft.com **/**

- https://www.codecademy. **c**



te Reference C++; Tata Mc Graw Hill.



d Programming in Turbo C++; Galgotia.



en-us/library/wcz57btd(v=vs.80).aspx



om/learn/learn-c-plus-plus



**Lovely Professional University** **73**


_**Prikshat Kumar Angra, Lovely Professional University**_ _**Unit 06: Classes and Objects**_ _**Notes**_

##### **Unit 06: Classes and Objects**



**CONTENTS**

Objectives

Introduction

6.1 Specifying a Class

6.2 Defining Member Functions

6.3 Creating Class Objects

6.4 Access Specifiers

6.5 The Public Access Specifier

6.6 The Private Access Specifier

6.7 The Protected Access Specifier

Summary

Keywords

Self Assessment

Answers for Self Assessment

Review Questions

Further Readings

**Objectives**

After studying this unit, you will be abl **e**


 - Recognize how to specify a class

 - Define the member functions

 - Explain the creation of class objects

 - Access the class members

 - Discuss the access specifiers


**Introduction**

Classes and objects are at the core
C++essentially means writing classes a **n**
towork with the same.

It is important to note the subtle differe **n**
that specifies different aspects of the o **b**
memory. It only defines various membe **r**



to:



of object-oriented programming. Writing progra **m**



s in
learn



d creating objects from them. In this unit you will



ces between a class and an object, here. A class is ate **m**

ject it models. It has no physical existence. Itoccupi **e**
s (data and/or methods) that constitute theclass.



plate

s no



An object, on the other hand, is an **i** nstance of a class. It has physical existence and **h**
occupiesmemory. You can create as ma **n** y objects from a class once you have defined a class.



An object, on the other hand, is an **i**
occupiesmemory. You can create as ma **n**

You can think of a class as a data typ **e**
example, does not have a physical exi **s**
ofthat type is declared or created; a
memoryuntil an object of that class is cr **e**



ence



; and it behaves like one. Just as a data type like i **n**
tence and does not occupy any memory until a va **r**

class also does not exist physically and occupi **e**
ated.



t, for

iable
s no



**Example**


**74** **Lovely Professional University**


_**Notes**_
_**Object Oriented Programming**_



To understand t **h**
depicted below:



e difference clearly, consider a class of vehicle and **a**



fewobjects of this type as



In this example **v**
andhence are obj **e**
areallocated indi **v**
color – so that the **y**



ehicle is a class while car, scooter and truck are in **s**
cts of vehicle class. Each instance of the class vehicl **e**
idual memory spaces for the variables - reg_no, no_ **w**



tances of the class vehicle



all have their own copies of these variables.




 - car, scooter and truck heels, fuel_type, makeand,



**6.1** **Specifyi**

Like structures a
ofdifferent data-t **y**
operateon them. **C**

There is very littl **e**
can be used inter
type in C++, mo **s**
classes to hold bo **t**

A class is a wa **y**
(andfunctions) to
anew abstract d **a**
classspecification **h**



**ng a Class**



class is just another derived data-type. While struc **t**

**y** pe, class is a group of elements of different dat **a**

++ structure can also have functions defined in it.

syntactical difference between structures and classe **s**
changeably with minor modifications. Since class is

t of the C++ programmers tend to use the structure **s**



ure is a group of elements



-types and functions that



h the data and functions.



in C++ and, therefore,they
a specially introduceddata
for holding only data,and



to bind the data and its associated functions t **o**
be hidden, if necessary, from external use. When defi **n**



ta-type that can be treated like any other built


gether. It allows the data

ing a class, we are creating
in data-type. Generally, a



as two parts:



1. Class declar **a**

2. Class functi **o**



tion



n definitions



The class decla **r**
definitionsdescri **b**
declaration is:

class <class_nam **e**

{

Private:

Variables declara **t**

Function declarat **i**

Public:

Variable declarati **o**

function declarati **o**



ation describes the type and scope of its me **m**
e how the class functions are implemented. Th **e**



bers. The class function
general form of a class






ion;

ons;



n;



ns;



**Lovely Professional University** **75**


_**Unit 06: Classes and Objects**_ _**Notes**_



};



The class declaration is similar to a stru **c**
is an abstract data of type class_name. **T**
by a semicolon. The class body contains **t**

These functions and variables are collec **t**
sections, namely, private and public to **d**
are public. The keywords private and p **u**
been declared as private can be access
members can be accessed from outside **t**
the key feature of object-oriented prog **r**
default, the members of a class are pri **v**
members are private. Such a class is co **m**
any purpose.



t declaration. The keyword class specifies that whatfo **l**
he body of a class is enclosed within braces andtermi **n**



lows



he declaration of variables and functions.



ated



ively called members. They are usually grouped und **e**
enote which of the members are private and whichof

blic are known as visibility labels.The members that
ed only from within the class. Onthe other hand, **p**

he class also. The data hiding(using private declarati **o**

**r** amming. The use of thekeyword private is option **a**

ate. If both the labels aremissing, then, by default, a **l**



rtwo
them

have
ublic

n) is
l. By

l the

erve



pletely hidden fromthe outside world and does not **s**



The variables declared inside a class ar **e**
member functions. Only the member f **u**
private functions. However, the public
outside the class. The binding of data **a**
referred to as encapsulation. The access
diagrammatically in the Figure.

Let us consider the following declaratio **n**

class student

{

private:

int rollno;

char name [20];

public:

void getdata(void);



known as data members and the functions are kno **w**
nctions can have access to the private data member **s**
members (both functions and data) can be accessed

**a** nd functions together into a single class-type varia **b**

to private and public members of a class is well expl **a**



n as
and
from

le is
ined



of a class for student:



**76** **Lovely Professional University**


_**Notes**_
_**Object Oriented Programming**_


void disp(void);

};

The name of the class is student. With the help of this new type identifier, we can declare instances
of class student. The data members of this class are int rollno and char name [20]. The two function
members are getdata() and disp(). Only these functions can access the data members. Therefore,
they provide the only access to the data members from outside the class. The data members are
usually declared as private and member functions as public. The member functions are only
declared in the class. They shall be defined later.

A class declaration for a machine may be as follows:

class machine

{

int totparts, partno;

char partname [20];

public:

void getparts (void);

void disp(part_no);

};

Having defined the class, we need to create object of this class. In general, a class is a user
defineddata type, while an object is an instance of a class. A class provides a template, which
defines themember functions and variable that are required for objects of a class type. A class must
bedefined prior to the class declaration.

The general syntax for defining the object of a class is:

class <class_name>

{

private:

//data

// functions

public:

//functions

};

<class_name>object1, object2,…objectN;

where object1, object2 and objectN are the instances of the class <class_name>.

A class definition is very similar to a structure definition except the class definition defines
thevariables and functions.


**6.2** **Defining Member Functions**

We have learnt to declare member functions. Let us see how member functions of a class can
bedefined within a class or outside a class.

A member function is defined outside the class using the :: (double colon symbol) scope
resolutionoperator. The general syntax of the member function of a class outside its scope is:

<return_type><class_name>::<member_function>(arg1, arg2....argN)

The type of member function arguments must exactly match with the types declared in the
classdefinition of the <class_name>. The Scope resolution operator (::) is used along with the
classname in the header of the function definition. It identifies the function as a member of a
particularclass. Without this scope operator the function definition would create an ordinary
function,subject to the usual function rules of access and scope.


**Lovely Professional University** **77**


_**Unit 06: Classes and Objects**_ _**Notes**_


ow a member function is declared outside the class



The following program segment shows **h**

declaration.

class sample

{

private:

int x;

int y;

public:

int sum (); // member function declarat **i**

};

int sample:: sum ( ) //member function **d**

{

return (x+y);

}



on



efinition



**Notes:** The use of the scope ope **r** ator double colon (::) s important for defining the member
functions outside the class decl **a** ration


**6.3** **Creating Class Objects**



Objects are the basic run-time entities i **n**
place, a bank account, a table of da **t**
vectors,time and lists.



an object-oriented system. They may represent a pe **r**

**t** a; they may also represent user-defined data su **c**



son,a

h as



They occupy space in memory that kee **p**
the object. Each object contains data an **d**
having to know details of each other dat **a**



s its state and is operated on by the defined operatio **n**



**n** s on

**t** hout



code to manipulate the data. Objects can interact wi **t**
or code.



**Objects as Function Arguments**

Like any other data type argument **,** objects can also be passed to a function. As
knowarguments are passed to a functio **n** in two ways:

1. by value

2. by reference



you



Objects can also be passed as argume **n**
acopy of the object is passed to the
functiondoes not affect the object used



ts to the function in these two ways. In the first method,

function. Any modification made to the object i **n** the
to call the function. The following Program illustrat **e** s the



**78** **Lovely Professional University**


_**Notes**_
_**Object Oriented Programming**_


callingof functions by value. The program declares a class integer representing a integer variable
x.Only the values of the objects are passed to the function written to swap them.

#include<iostream.h>

#include<conio.h>

class integer

{

int x;

public:

void getdata()

{

cout<< “Enter a value for x”;

cin>> x;

}

void disp()

{

cout<< x;

}

void swap(integer a1, integer a2)

{

int temp;

temp = a2.x;

a2.x = al.x;

a1.x = temp;

}

};

main()

{

integer int1, int2;

int1.getdata();

int2.getdata();

cout<<“\n the value of x belonging to object int1 is “;

int1.disp();

cout<<“\n the value of x belonging to object int2 is “;

int2.disp();

integer int3; .

int3.swap(int1, int2); //int3 is just used to invoke the function

cout<<“ \nafter swapping “;

cout<<“\n the value of x belonging to object intI is “;

intl.disp();

cout<<“\n the value of x belonging to object int2 is “;

int2.disp() ;


**Lovely Professional University** **79**


_**Unit 06: Classes and Objects**_ _**Notes**_


cout<< “\n”;

getche();

}

You should get the following output.

Enter a value for x 15

Enter a value for x 50

the value of x belonging to object int is 15

the value of x belonging to object int2 is 50

after swapping

the value of x belonging to object int is 15

the value of x belonging to object int2 is 50

In the second method, the address of the object is passed to the function instead of a copy of
theobject. The called function directly makes changes on the actual object used in the call. As
againstthe first method any manipulations made on the object inside the function will occur in
theactual object.

**Accessing a Member of Class**

Member data items of a class can be static. Static data members are data objects that are commonto
all objects of a class. They exist only once in all objects of this class. The static members areused
when the information is to be shared. They can be public or private data. The main advantagef
using a static member is to declare the global data which should be updated while theprogram lives
in memory.

When a static member is declared private, the non-member functions cannot access thesemembers.
But a public static member can be accessed by any member of the class. The static datamember
should be created and initialized before the main function control block begins.

class account

{

private:

int acc _no;

static int balance; //static data declaration

public:

void disp(int acc _no);

void getinfo( );

};

The static variable balance is initialized outside main() as follows:

int account::balance = 0; //static data definition

Consider the following Program which demonstrates the use of static data member count.
Thevariable count is declared static in the class but initialized to 0 outside the class.

#include <iostream.h>

#include <conio.h>

class counter

{

private:

static int count;

public:


**80** **Lovely Professional University**


_**Notes**_
_**Object Oriented Programming**_


void disp();

};

int counter::count = 0;

void counter::disp()

{

count++

cout<< “The present value of count is “ << count << “\n”;

}

main()

{

counter cntl ;

for(int i=0; i<5; i++)

cnt1.disp();

getche();

}

You should get the following output from this program.

The present value of count is 1

The present value of count is 2

The present value of count is 3

The present value of count is 4

The present value of count is 5


**6.4** **Access Specifiers**

Members of a class can access other members (properties and methods) of the same class.Functions,
operators and other classes (corresponding objects) outside the class description of aparticular class
can also access members of that class. An access specifier decides whether or nota function or
operator or class, outside the class description can access the members it controlsinside its class
description. The members an access specifier controls are the members typeDunder it in the class
description (until the next specifier).We will use functions and classes in the illustrations of accesses
to class members. We will notuse operators for the illustrations.

We will be using the phrase, external function. This refers to a function or class method that isnot a
member of the class description in question. When we say an external function can accessclass
member, we mean the external function can use the name (identifier of property or nameof
method) of the member as its argument or as an identifier inside its definition.


**6.5** **The Public Access Specifier**

With the public access specifier, an external function can access the public members of the class.

The following code illustrates this (read the explanation below):

#include <iostream>

using namespace std;

class Calculator

{

public:

int num1;


**Lovely Professional University** **81**


_**Unit 06: Classes and Objects**_ _**Notes**_


int num2; Notes

int add()

{

int sum = num1 + num2;

return sum;

}

};

int myFn(int par)

{

return par;

}

int main()

{

Calculator obj;

obj.num1 = 2;

obj.num2 = 3;

int result = obj.add();

cout<< result; cout<< “\n”;

int myVar = myFn(obj.num1);

cout<<myVar;

return 0;

}

There are two functions in the code: myFn() and main(). The first line in the main
functioninstantiates a class object called, obj. In main, lines 2 and 3 use the properties of the class
asidentifiers. Because the class members are public, the main() function can access the members
ofthe class. Line 4 of the main function also demonstrates this. In line 6 of the main function,
thefunction, myFn() uses the property num1 of the class as its argument. It could do so because
themember, num1 is public in the class.


**6.6** **The Private Access Specifier**

With the private access specifier an external function cannot access the private members of theclass.
With the private specifier only a member of a class can access the private member of theclass. The
following code shows how only a member of a class can access a private member ofthe class (read
the explanation below):

#include <iostream>

using namespace std;

class Calculator

{

private:

int num1;

int num2;

public:

int add()

{


**82** **Lovely Professional University**


_**Notes**_
_**Object Oriented Programming**_


num1 = 2;

num2 = 3;

int sum = num1 + num2;

return sum;

}

};

int main()

{

Calculator obj;

int result = obj.add();

cout<< result;

return 0;

}

The class has two private members (properties) and one public member (method). In the
classdescription, the add() method uses the names of the private members as identifiers. So the
add()method, a member of the class has accessed the private members of the class.The main
function definition (second line) has been able to access the add() method of the classbecause the
add() method is public (it has a public access specifier).

The following code will not compile because the main function tries to access (use as identifier)a
private member of the class:

#include <iostream>

using namespace std;

class Calculator

{

private:

int num1;

int num2;

public:

int add()

{

num1; Notes

num2 = 3;

int sum = num1 + num2;

return sum;

}

};

int main()

{

Calculator obj;

obj.num1 = 2;

int result = obj.add();

cout<< result;

return 0;


**Lovely Professional University** **83**


_**Unit 06: Classes and Objects**_ _**Notes**_


}

The second line in the main function is wrong because at that line, main tries to access (use as

identifier) the private member, num1.


**6.7** **The Protected Access Specifier**

If a member of a class is public, it can be accessed by an external function including a derivedclass.
If a member of a class is private, it cannot be accessed by an external function; even aderived class
cannot access it.

The question is, should a derived class not really be able to access a private member of its baseclass
(since the derived class and base class are related)? Well, to solve this problem you haveanother
access specifier called, protected. If a member of a class is protected, it can be accessed bya derived
class, but it cannot be accessed by an external function. It can also be accessed bymembers within
the class. The following code illustrates how a derived class can access a protectedmember of a base
class:

#include <iostream>

using namespace std;

class Calculator

{

protected:

int num1;

int num2;

};

class ChildCalculator: public Calculator

{

public:

int add()

{

num1 = 2;

num2 = 3;

int sum = num1 + num2;

return sum;

}

};

int main()

{

ChildCalculatormyChildObj;

int result = myChildObj.add();

cout<< result;

return 0;

}

The base class has just two properties and no method; these properties are protected. The
derivedclass has one method and no property. Inside the derived class, the protected properties of
thebase class are used as identifiers. Generally, when a derived class is using a member of a
baseclass, it is a method of the derived class that is using the member, as in this example. The


**84** **Lovely Professional University**


_**Notes**_
_**Object Oriented Programming**_



abovecode is OK. **T** he following code will not compile, because line 2 i **n**
access aprotected member of the base class:



abovecode is OK. **T**
access aprotected

#include <iostrea **m**

using namespace **s**

class Calculator

{

protected:

int num1;

int num2;

};

class ChildCalcul **a**

{

public:

int add()

{

num1;

num2 = 3;

int sum = num1 +

return sum;

}

};

int main()

{

Calculator obj;

obj.num1 = 2;



the main() function tries to







td;



tor: public Calculator



num2;



ChildCalculator **m**

int result = myCh **i**

cout<<result;;

return 0;

}



yChildObj;



ldObj.add();



An external fun **c** tion cannot access a protected member of a clas **s** (base class); however, a
derivedclass met **h** od can access a protected member of the base class.



**Notes:** A
whether t **h**



member of a class can access any member of the sa **m**



e member is public, protected or private.



e class independent of the



You should now **k**
classes. In one of **t**
declaratory of a d **e**

A public member
of a class is acces **s**
and it is not acce **s**
class (and other **m**



now the role of the access specifiers: public, protect **e**
he following parts of the series, we shall see the role **o**



**v** ed class. A privatemember

**e** ssible by externalfunctions

ss is accessibleby a derived
function.



rived class.



d and private as appliedto
f the access specifiersin the



of a class is accessible by external functions and a deri **v**

ible only by other members of the class; it is not acc **e**
sible by a derived class. A protected member of a cl **a**
embers of the class); it is not accessible by an external



**Lovely Professional University** **85**


_**Unit 06: Classes and Objects**_ _**Notes**_


**Summary**


 - A class represents a group of similar objects. A class in C++ binds data and

associatedfunctions together.

 - It makes a data type using which objects of this type can be created. Classes can representthe

real-world object which have characteristics and associated behavior.

 - While declaring a class, four attributes are declared: data members, member

functions,program access levels (private, public, and protected,) and class tag name.

 - While defining a class its member functions can be either defined within the class definitionor

outside the class definition. The public member of a class can be accessed outside theclass

directly by using object of this class type.

 - Private and protected members can be accessed with in the class by the member functiononly.

The member function of a class is also called a method. The qualified name of a classmember

is a class name: class member name.

 - A global object can be declared only from a global class whereas a local object can bedeclared

from a global as well as a local class.

 - The object is created separately to store their data members. They can be passed to aswell as

returned from functions. The ordinary member’s functions can access both static aswell as

ordinary member of a class.


**Keywords**

**Class:** Represents the real-world objects which have characteristics and associatedbehavior.

**Global Class** : A class whose definition occurs outside the bodies of all functions in a
program.Objects of this class type can be declared from anywhere in the program.

**Local Class:** A class whose definition occurs inside a function body. Objects of this class type canbe
declared only within the function that defines this class type.

**Private Members** : Class members that are hidden from the outside world.

**Public Members** : Class members (data members and member functions) that can be used by any

function.


**SelfAssessment**


1. Which of the following is correct about class?

A. Class can have member functions while structure cannot.

B. Class data members are public by default while that of structure are private.

C. Pointer to structure or classes cannot be declared.

D. Class data members are private by default while that of structure are public by default.


2. Which of the following is not an access specifier?

A. Public

B. Char

C. Private

D. Protected


3. Which of the following OOP concept is not true for the C++ programming language?


**86** **Lovely Professional University**


_**Notes**_
_**Object Oriented Programming**_


A. A class must have member functions

B. C++ Program can be easily written without the use of classes

C. At least one instance should be declared within the C++ program

D. C++ Program must contain at least one class


4. Which among the following best describes member functions?

A. Functions which are defined within the class

B. Functions belonging a class

C. Functions in public access of a class

D. Functions which are private to class


5. How can static member function can be accessed directly in main() function?

A. Dot operator

B. Colon

C. Scope resolution operator

D. Arrow operator


6. Which keyword is used to make a nonmember function as friend function of a class?

A. Friendly

B. New

C. Friend

D. Connect


7. Member functions _____________________

A. Must be defined inside class body

B. Can be defined inside class body or outside

C. Must be defined outside the class body

D. Can be defined in another class


8. What is the extra feature in classes which was not in the structures?

A. Member functions

B. Data members

C. Public access specifier

D. Static Data allowed


9. Which operator is used to define a member function outside the class?

A.           
B. ( )

C. +

D. ::


10. Nested member function is

A. A function that call itself again and again.


**Lovely Professional University** **87**


_**Unit 06: Classes and Objects**_ _**Notes**_


B. A member function may call another member function within itself.

C. Same as Class in the program

D. Accessed using * operator


11. Which of the following is syntax of C++ class member function?

A. class_name,function_name

B. return_type class_name :: member_function

C. datatype_class_name,function_name

D. class_name_function_name


12. Which among the following feature does not come under the concept of OOPS?

A. Platform independent

B. Data binding

C. Data hiding

D. Message passing


13. The combination of abstraction of the data and code is viewed in________.

A. Inheritance

B. Class

C. Object

D. Interfaces


14. Which is private member functions access scope?

A. Member functions which can used outside the class

B. Member functions which can only be used within the class

C. Member functions which are accessible in derived class

D. Member functions which can’t be accessed inside the class


15. Which syntax among the following shows that a member is private in a class?

A. private::Name(parameters)

B. private: functionName(parameters)

C. private(functionName(parameters))

D. private functionName(parameters)


**Answers for SelfAssessment**


1. D 2. B 3. D 4. B 5. C


6. C 7. D 8. A 9. D 10. B


11. B 12. A 13. C 14. B 15. D


**88** **Lovely Professional University**


_**Notes**_
_**Object Oriented Programming**_



**Review Questions**



1. Define class.

2. How can yo **u**

3. Can a meth **o**

4. What’s the **d**

5. Write a pro **g**



What is the difference between structures and classes in C++?



What is the difference between structures and classes



pass an object of a C++ class to/from a C function?



d directly access the non-public members of another i **n**



stance of its class?



ifference between the keywords struct and class?



ram to add two numbers defining a member getda **t** a () and display () inside a



ram to add two numbers defining a member getda **t**



class named sum and displaying the result.



6. How does C **+**

7. “The main **a**



+ help with the tradeoff of safety vs. usability?



lobal data which should be



dvantage of using a static member is to declare the **g**

le the program lives in memory”. Justify your statem **e**



updated wh **i**



nt.



8. Write a pro **g**

contain the **b**



ram to print the score board of a cricket match in re **a**



l time. The display should



atsman’s name, runs scored, indication if out, mode **b** y which out, bowler’s score



(overs playe

score shoul **d**

(print: Use s **e**



d, maiden overs, runs given, wickets taken). As and



be updated.



when a ball is thrown, the


tion)



parate arrays to store batsmen’s and bowler’s inform **a**



9. If a member



of a class is public, it can be accessed by an external f **u** nction including a derived



of a class is public, it can be accessed by an external f **u**



class. Explai **n** with an example.



10. Write a pr **o**



gram in which a class has one private member ( **p** roperties) and two public



gram in which a class has one private member ( **p**



member (m **e** thod).



**Further**


- E Bal **a**

- Herb **e**

- Robe **r**



**Readings**


gurusamy; Object-oriented Programming with C++; **T**



Galgotia.



ata Mc Graw-Hill.



rt Schildt; The Complete Reference C++; Tata Mc Gra **w** Hill.



rt Schildt; The Complete Reference C++; Tata Mc Gra **w**



t Lafore; Object-oriented Programming in Turbo C++ **;**



**Web Lin**


- http: **/**

- https **:**



**ks**



/msdn.microsoft.com/en-us/library/wcz57btd(v=vs



.80).aspx



//www.codecademy.com/learn/learn-c-plus-plus



**Lovely Professional University** **89**


_**Notes**_



_**Prikshat Kumar Angra, Lovely Professional University**_



_**Unit 07: More on Classes and Objects**_


##### **Unit 07: More on Classes and Objects**

**CONTENTS**

Objectives

Introduction

7.1 C++ Class Member Function

7.2 Nested Member Function

7.3 Private Member Functions

7.4 Arrays within the Class

7.5 Memory Allocation of Objects

Summary

Keywords

Self Assessment

Answers for Self Assessment

Review Questions

Further Readings

**Objectives**

After studying this unit, you will be able to:

  - Understand function definition

  - Analyze member functions

  - Recognize private member functions

  - Explain memory allocation of objects

  - Analyze arrays with in class


**Introduction**

A class in C++ is the building block that leads to Object-Oriented programming. It is a user-defined
data type, which holds its own data members and member functions, which can be accessed and
used by creating an instance of that class. A C++ class is like a blueprint for an object.

For Example: Consider the Class of Cars. There may be many cars with different names and brand
but all of them will share some common properties like all of them will have 4 wheels, Speed Limit,
Mileage range etc. So here, Car is the class and wheels, speed limits, mileage are their properties.


**7.1** **C++ Class Member Function**

A member function of a class is a function that has its definition or its prototype within the class
definition like any other variable.

It operates on any object of the class.

A member function is defined outside the class using the:: (double colon symbol) scope resolution
operator. This is useful when we did not want to define the function within the main program,
which makes the program more understandable and easier to maintain.

_**Syntax**_

return_typeclass_name :: member_function


**90** **Lovely Professional University**


_**Notes**_



_**Object Oriented Programming**_



**Lab Exercise:**



#include<iostrea **m**

using namespace **s**

class find_sum{

public:

int x,y;

int sum();

};

int find_sum ::su **m**

return x+y;

}

int main(){

find_sumsum1;

sum1.x=100;

sum1.y=200;

cout<<"Sum of x **a**

return 0;

}

Output







td;



(){



nd y is"<<sum1.sum();



**7.2** **Nested M**



**ember Function**




- A member function may call another member function within it **s**
member f **u** nctions.

- A member function can access not only the public functions but **a**
the class it belongs to.



elf. This is called nesting of



lso the private functions of




- Calling a **m**

- Scope reso **l**



ember function with in another member function.



e a class.



ution operators ( : : ) used to defining a function outsi **d**



**Lab Exercise:**



#include<iostrea **m**

using namespace **s**

class area{

private:

int l,w;

public:

void getdata();







td;



**Lovely Professional University** **91**


_**Notes**_



_**Unit 07: More on Classes and Objects**_



void display_area();

};

void area::getdata()

{

cout<<"Enter length and width";

cin>>l>>w;

}

void area::display_area()

{

getdata();

cout<<"area is"<<l*w;

}

int main(){

area a1;

a1.display_area();

}


Output


**7.3** **Private Member Functions**



A function declared inside the class's **p** rivate section is known as "private member functio **n**
private member function is accessible th **r** ough the only public member function.



A function declared inside the class's **p**
private member function is accessible th **r**

A private member variable or function **c**
Only the class and friend functions can **a**



". A



annot be accessed, or even viewed from outside the **c**
ccess private members.



lass.



**Lab Exercise:**

#include<iostream>

using namespace std;

class Box {

public:

double length;

void setWidth( double wid);

double getWidth( void );

private:

double width;

};


**92** **Lovely Professional University**


_**Notes**_



_**Object Oriented Programming**_



double Box::getW **i**

return width ;

}

void Box::setWidt **h**

width = wid;

}

int main() {

Box box;

box.length = 5.0;

cout<< "Length o **f**

box.setWidth(5.0) **;**



dth(void) {



( double wid ) {



box : " <<box.length<<endl;



cout<< "Width of box : " <<box.getWidth() <<endl;

return 0;

}


Output



**7.4** **Arrays within the Class**



An array is a coll **e**

_Syntax_



ction of elements of the same type placed in contiguo **u** s memory .



ction of elements of the same type placed in contiguo **u**



typearrayName [ **a**


**LabExercise**

#include<iostrea **m**

using namespace **s**

int main(){

int arr[5];

cout<<"Enter Arr **a**

for(int i=0;i<=4;i+ **+**

{

cin>>arr[i];

}

cout<<"Entered a **r**

for(int i=0;i<=4;i+ **+**

{



rraySize ];







td;



y Elements";



)



ray elements are"<<endl;



)



**Lovely Professional University** **93**


_**Notes**_



_**Unit 07: More on Classes and Objects**_



cout<<arr[i]<<endl;

}

return 0;

}

Output


_**Array with in class**_

Arrays can be declared as the members
protected members of the class.


**Lab Exercise:**

#include<iostream>

using namespace std;

class student {

int marks[5];

public:

void getdata ();

void showdata();

};

void student::getdata(){

cout<<"Enter marks";

for(int i=0;i<=4;i++){

cin>>marks[i];

}

}

void student::showdata(){

cout<<"Marks are";

for(int i=0;i<=4;i++){



of a class. The arrays can be declared as private, public or



**94** **Lovely Professional University**


_**Notes**_



_**Object Oriented Programming**_



cout<<marks[i]< **<** endl;

}

}

int main(){

student stu;

stu.getdata();

stu.showdata();

}


Output



**7.5** **Memory**

When a class is **d**
allocated.



**Allocation of Objects**



efined, only the specification for the object is define **d**



; no memory or storage is



An object is a dat **a** structure that encapsulates data and functions in a s **i**
oriented framew **o** rk, they are the basic run-time entities.



An object is a dat **a**
oriented framew **o**

_**Format to declar**_

Class_nameonject **_**

Where



ngle construct. In an object


_**e objects**_



list;



Class_name – Is name of class defined



Object_list – com **m**



a-seprated list of objects



**Example**   - **T**   - create an object (obj) for class ‘student’

Student obj;



Class_nameonject **_**



list;



**Example**   - **T**   - create three objects (s1, s2 and s3) for class ‘student’

Student s1, s2, s3;


**Lovely Professional University** **95**


_**Notes**_



_**Unit 07: More on Classes and Objects**_


**Significance of Class and Object in C++**

   - Data Hiding: A class prevents the access of the data from the outside world using access
specifiers. It can set permissions to restrict the access of the data.

   - Code Reusability: You can reduce code redundancy by using reusable code with the help
of inheritance. Other classes can inherit similar functionalities and properties, which
makes the code clean.

   - Data Binding: The data elements and their associated functionalities are bound under one
hood, providing more security to the data.

   - Flexibility: You can use a class in many forms using the concept of polymorphism. This
makes a program flexible and increases its extensibility.


**Memory allocation of objects**

   - Memory allocation of data members is performed each time an object of the class is
created, not when data members are declared inside the class.

   - Every object of a class has an individual copy of data members.

   - Since the member function defined inside the class remains the same for all objects,
memory allocation of a member function is performed at the time of defining the class.


#include <iostream>

using namespace std;

class student{

int roll_no;

char name[20];

int percentage;

public:

void setdata(){

cout<<"Enter Roll Number" ;

cin>>roll_no;

cout<<"Enter Name ";

cin>>name;

cout<<"Enter Percentage";

cin>>percentage;

}

void display(){

cout<<"\n Roll Number " <<roll_no<<" \tName " << name <<" \t Percentage " << percentage
<<endl;

}

};

int main(){

student s1,s2;

s1.setdata();

s2.setdata();

s1.display();


**96** **Lovely Professional University**


_**Notes**_



_**Object Oriented Programming**_


s2.display();

return 0;

}



**Memory Allocation**




- Many ti **m**
particul **a**
determi **n**



es, you are not aware in advance how much me **m**
r information in a defined variable and the size o **f**



ed at run time.



ory you will need to store

required memory can be



**Lovely Professional University** **97**


_**Notes**_



_**Unit 07: More on Classes and Objects**_




- You can allocate memory at ru **n**
a special operator in C++ whic **h**
called new operator.



time within the heap for the variable of a given type **u** sing
returns the address of the space allocated. This oper **a** tor is



time within the heap for the variable of a given type **u**
returns the address of the space allocated. This oper **a**




- If you are not in need of dy **n** amically allocated memory anymore, you can use **d**
operator, which de-allocates m **e** mory previously allocated by new operator.




- If you are not in need of dy **n**
operator, which de-allocates m **e**



elete



#include <iostream>

using namespace std;

class sample

{

public:

sample() {

cout<< "Constructor is called!" <<endl;

}

~sample() {

cout<< "Destructor is called!" <<endl;

}

};

int main( )

{

sample* obj = new sample[4];

delete [] obj; // Delete array of objects

return 0;

}

Output


**98** **Lovely Professional University**


_**Notes**_



_**Object Oriented P**_


**Summary**


- A class repres **e**

together.

- It makes a da **t**



_**rogramming**_



. Classes can represent the



nts a group of similar objects. A class in C++ binds d **a**



ta and associated functions



a type using which objects of this type can be create **d**



real-world obj **e**



ct which have characteristics and associated behavio **r** .



.




- While declari **n**



g a class, four attributes are declared: data members, **m** ember functions, program



g a class, four attributes are declared: data members, **m**



access levels ( **p** rivate, public, and protected,) and class tag name.



**Keywords**

**Class:** Represents

**Global Class** : A **c**
Objects of this cla **s**

**Local Class:** A cla
declared only wit **h**

**Private Members** **:**

**Public Members** :

function.



the real-world objects which have characteristics and **a** ssociated behavior.



the real-world objects which have characteristics and **a**

**c** lass whose definition occurs outside the bodies of **a**

s type can be declared from anywhere in the progra **m** .



ss whose definition occurs inside a function body. Obj



in the function that defines this class type.



**a** ll functions in a program.

.

ects of this class type can be



Class members that are hidden from the outside wor **l**

Class members (data members and member functions



d.



) that can be used by any



**SelfAssessment**



1. What is th **e**



extra feature in classes which was not in the structur **e**



s?



A. Member f **u**

B. Data mem **b**

C. Public acc **e**

D. Static Data



nctions



ers



ss specifier



allowed



2. How man **y**
A. 1

B. Maximum 7

C. Exactly 3

D. As many a **s**



public members are allowed in a class?



7



required



3. Which op **e**



rator is used to define a member function outside the **c** lass?


**Lovely Professional University** **99**


_**Notes**_



_**Unit 07: More on Classes and Objects**_


A. 
B. ( )

C. +

D. ::


4. Nested member function is
A. A function that call itself again and again.

B. A member function may call another member function within itself.

C. Same as Class in the program

D. Accessed using * operator


5. Which of the following is syntax of C++ class member function?


A. class_name,function_name

B. return_type class_name :: member_function

C. datatype_class_name,function_name

D. class_name_function_name


6. Which among the following feature does not come under the concept of OOPS?


A. Platform independent
B. Data binding
C. Data hiding
D. Message passing


7. The combination of abstraction of the data and code is viewed in________.


A. Inheritance
B. Class
C. Object
D. Interfaces


8. Which is private member functions access scope?


A. Member functions which can used outside the class
B. Member functions which can only be used within the class
C. Member functions which are accessible in derived class
D. Member functions which can’t be accessed inside the class


9. Which syntax among the following shows that a member is private in a class?


A. private ::Name(parameters)
B. private: functionName(parameters)
C. private(functionName(parameters))
D. private functionName(parameters)


10. Where does the object is created?


A. Class

B. Constructor

C. Destructors

D. Attributes


**100** **Lovely Professional University**


_**Notes**_



_**Object Oriented Programming**_


11. Which is used to define the member of a class externally?


A. :

B. ::

C. #

D. !!$


12. Choose the correct class declaration from the followings?


A. Class A { int a; };

B. Class B { }

C. Public class A { }

D. Object A { int y; };


13. Choose the right observation from the following?


A. Base class pointer object cannot point to a derived class object

B. A derived class pointer object cannot point to a base class object

C. A derived class cannot have pointer objects

D. A base class cannot have pointer objects


14. A static member function can be called using the ………………… instead of its objects.


A. variable name

B. function name

C. Class name

D. object name


15. Constructors are used to ____________


A. initialize the objects

B. construct the data members

C. both initialize the objects & construct the data members

D. delete the objects


**Answers for SelfAssessment**


1. A 2. D 3. D 4. B 5. B


6. A 7. C 8. B 9. D 10. A


11. B 12. A 13. B 14. C 15. A


**Review Questions**

1. What do you mean by classes and objects in object-oriented programming?

2. Write a program that demonstrate working of member functions and classes.

3. Explain memory allocation of objects with the help of programing example.

4. Differentiate between public, private and protected access specifiers.

5. What is the significance of member functions, explain using an example.


**Lovely Professional University** **101**


_**Notes**_



_**Unit 07: More on Classes and Objects**_



**Further Readings**


- E Balagurusamy; Object-ori **e** nted Programming with C++; Tata Mc Graw-Hill.




- Herbert Schildt; The Compl **e**

- Robert Lafore; Object-orient **e**


**Web Links**



te Reference C++; Tata Mc Graw Hill.



d Programming in Turbo C++; Galgotia



http://msdn.microsoft.com/en **-**



us/library/wcz57btd(v=vs.80).aspx



https://www.codecademy.com **/**



learn/learn-c-plus-plus



**102** **Lovely Professional University**


_**Notes**_



_**Object Oriented Programming**_


**Lovely Professional University** **103**


_**Notes**_



_**Prikshat Kumar Angra, Lovely Professional University**_



_**Unit 08: Handling Functions**_


##### **Unit 08: Handling Functions**

**CONTENTS**

Objectives

Introduction

8.1 C++ Functions

8.2 Function Activities

8.3 Default Arguments

Summary

Keywords

Self Assessment

Answers for Self Assessment

Review Questions

Further Readings

**Objectives**

After studying this unit, you will be able to:


   - Understand functions in OOP

   - Analyze execution of code using call by reference and call by value mechanism

   - Understand default arguments

   - Construct C++ programs using function and default arguments


**Introduction**

A function is a set of statements that are put together to perform a specific task. It can be statements
performing some repeated tasks or statements performing some specialty tasks like printing etc.

Code can be made simpler by using functions to divide it into smaller, more manageable chunks.
Using functions also save us from repeatedly writing the same code, which is another another
benefit. Instead of repeatedly writing the same set of statements, we only need to write one function
and then call it as and when necessary.


**8.1** **C++ Functions**

The function in C++ language is also known as procedure or subroutine in other programming
languages.A function declaration tells the compiler about a function's name, return type, and
parameters. A function definition provides the actual body of the function.Debugging the code
would be easier if you use functions, as errors are easy to be traced. The use of functions reducesthe
size of code. A duplicate set of statements is replaced by function calls.Improve reusability of code,
the same function can be used in any program.Use of function improves readability of code.


**C++ Functions Types**


**104** **Lovely Professional University**


_**Notes**_



_**Object Oriented Programming**_



**Library Functions**




- It is alre **a** dy present inside the header file which we always i **n** clude at the beginning of a
program.




- You just **h**



ave to type the name of a function and use it along **w**



ith the proper syntax.



**User-defined Function**




- User-def **i** ned function is a type of function in which we have t **o** write a body of a function
and call **t** he function whenever its require.



**8.2** **Function**

There are the foll **o**



**Activities**



wing activities a function has.



1. Functio **n** declaration

2. Functio **n** definition

3. Functio **n** call.



**Function Declar**

A function declar **a**

we just specify t **h**
declaration.



**ation**



tion is also called a "Function prototype. “



e name of a function that we are going to use in **o**



ur program like a variable



**Function Declar**

return_data_type **f**



**ation**



unction_name (data_type arguments);



**Function Definition**




- Functio **n** definition means just writing the body of a function.




- A body **o**



f a function consists of statements which are going to



perform a specific task.



**Function Definition**

int sum(int a,int b **)**

{


**Lovely Professional University** **105**


_**Notes**_



_**Unit 08: Handling Functions**_



int c;

c=a+b;

return c;

}


**Function Call**




   - While creating a C++ function, **y** ou give a definition of what the function has to do. **T**    - use
a function, you will have to call or invoke that function.


_**Function Call Types**_


   - Call by value

   - Call by reference


**Call by value**




- This method of passing argu **m**
into the formal parameter of th **e**



ents to a function copies the actual value of an arg **u**



function.



ment




   - By default, C++ uses **call-by-va**


**Lab Exercise:**


#include<iostream>

using namespace std;

int sum(int x,int y)

{

return x+y;

}

int main(){

int a,b;

cout<<"Enter two numbers";

cin>>a>>b;

cout<<"Sum of entered number using ca **l**

return 0;

}


Output



**lue** to pass arguments.



**l** l by value is = "<<sum(a,b);



**106** **Lovely Professional University**


_**Notes**_



_**Object Oriented Programming**_


**Call by reference**



This method
function, the
changes mad **e**



copies the reference of an argument into the fo **r**
reference is used to access the actual argument used



mal parameter. Inside the

in the call. This means that



to the parameter affect the argument.



**Lab Exercise**

#include<ios **t**

using names **p**

int sum(int * **x**

{



**:**

ream>



ace std;



,int *y)



return *x+ ***** y;



}

int main(){

int a,b;

cout<<"Enter

cin>>a>>b;

cout<<"Sum **o**

return 0;

}


**Output**



two numbers";



f a and b is"<<sum(&a,&b);



**Call by Value Vs. Call by reference**


**Lovely Professional University** **107**


_**Notes**_



_**Unit 08: Handling Functions**_



**8.3** **Default Arguments**

Like any other data type, an object may **b** e used as a function argument.




- A copy of the entire object is pass **e** d to the function




  - Only the address of the object is t **r**


**Lab Exercise:**

#include<iostream>

using namespace std;

class sample{

int x=10;

public:

void display(sample s){

cout<<"Value of x accessed by passing o **b**

}

};

main(){

sample s1;

s1.display(s1);

}


Output


**Summary**



ansferred to the function



ject is "<<s.x;




- Each function puts related code to **g**

code.



ether. This makes it easier for programmers to under **s**



tand




- Functions make programming easi **e** r by eliminating code repetition.




- Functions make programming easi **e**

- Functions facilitate code reuse. Yo **u**



erent



can call the same function to perform a task at dif **f**



sections of the program or even ou **t** side the program.




- A function in C++ helps you group

- Functions facilitate code reuse.

- Instead of writing similar code, ag **a**



related code into one.



in and again, you simply group it into a function. Yo **u** can



then call the function from anywhere within the code.




- Functions can be library or user-de **f**

- Library functions are the functions

- To use library functions, you simp **l**

don’t define the function.



ined.



built-in various C++ functions.

y include its library of definition and call the function



. You



**108** **Lovely Professional University**


_**Notes**_



_**Object Oriented Programming**_


 - User-defined functions are the functions you define as a C++ programmer.

 - A function declaration tells the compiler about the function name, return type, and parameter

types.

 - A function definition adds the body of the function.

 - If a function takes parameters, their values should be passed during the function call.


**Keywords**

**Function:** A function is defined as a group of statements or a block of code that carries out specific
tasks.

**Call by value:** In this parameter passing method, values of actual parameters are copied to the
function’s formal parameters and the two types of parameters are stored in different memory
locations. So, any changes made inside functions are not reflected in the actual parameters of the
caller.

**Call by reference:** Both the actual and formal parameters refer to the same locations, so any
changes made inside the function are actually reflected in the actual parameters of the caller.


**Self Assessment**


1. Function call type is


A. Call by value

B. Call by reference

C. Both call by value and class by reference

D. Neither call by value nor call by reference


2. int x and int y is a______
add(intx,int y)


{


int z;


z=x+y;


printf(“result is= %d",z);


}


A. formal Parameter

B. actual Parameter

C. intermediate

D. both A and B


3. Actual parameter is_______

A. parameters that appear in function calls.

B. parameters that appear in function definition.

C. local to the function definition

D. above all


**Lovely Professional University** **109**


_**Notes**_



_**Unit 08: Handling Functions**_


4. Call by value and call by reference is part of ______

A. pointers

B. array

C. functions

D. loops


5. In program we can modify original value in

A. Call by value

B. Call by reference

C. Header file

D. above all


6. OOP C++ programming using ______


A. Library functions

B. User define functions

C. Both Library functions and user define functions

D. None of above


7. By default, how the values are passed in C++?


A. Call by pointer

B. Call by value

C. Call by reference

D. None of the above


8. What will happen when we use void in argument passing?


A. It will not return value to its caller

B. It will return value to its caller

C. All of above

D. none of the above


9. Passing objects to a function


A. Can be done in one way

B. Can be done in more than one way

C. Is not possible

D. Not possible in OOP C++


10. The object


A. Can be passed by reference

B. Can be passed by value

C. Can be passed by reference or value

D. Can’t be passed to function


11. ______ symbol is used to pass the object by reference in OOP C++?


**110** **Lovely Professional University**


_**Notes**_



_**Object Oriented Programming**_


A. @

B. #

C. $

D. &


12. Pass by reference of an object to a function ___________


A. Affects the object in the called function

B. Affects the object and its properties

C. Affects the object in the caller function

D. None of above


13. The name of a function ends with


A. double quotes

B. single quotes

C. parenthesis

D. #@


14. What would be the output of following code snippet?


#include<iostream>


using namespace std;


class sample{


int x=10;


public:


void display(sample s){


cout<<s.x;


}


};


main(){


sample s1;


s1.display(s1);


}


A. 10

B. Error

C. 0

D. None of above


15. What would be the output of the following code snippet?


#include<iostream>


using namespace std;


class sample{


**Lovely Professional University** **111**


_**Notes**_



_**Unit 08: Handling Functions**_



int x=100;


public:


void display(sample s){


cout<<s.x;


}


};


main(){


sample s1;


s1.display();


}


A. Error

B. 10

C. 100

D. None of above


**Answers for SelfAssessment**


1. C 2. A 3. **A**


6. C 7. B 8. **A**


11. C 12. C 13. **C**


**Review Questions**



4. D 5. B


9. 10. B


14. A 15. A



1. What do you mean by functio **n**

2. Write a program that demonstr **a**

3. Write a program that demonstr **a**

4. Why do we need functions in **O**

5. Explain default arguments.


**Further Readings**



? Explain using a program example.



tes the concept of call by value.

tes the concept of call by reference.



OP? Comment.




 - E Balagurusamy; Object-ori **e** nted Programming with C++; Tata Mc Graw-Hill.




 - E Balagurusamy; Object-ori **e**

 - Herbert Schildt; The Compl **e**

 - Robert Lafore; Object-orient **e**


**Web Links**



te Reference C++; Tata Mc Graw Hill.



d Programming in Turbo C++; Galgotia.



http://msdn.microsoft.com/en **-**



us/library/wcz57btd(v=vs.80).aspx



https://www.codecademy.com **/** learn/learn-c-plus-plus


**112** **Lovely Professional University**


_**Notes**_



_**Prikshat Kumar Angra, Lovely Professional University**_

##### **Unit 09: More on Functions**


**CONTENTS**

Objectives

Introduction

9.1 Why We Need Functions in C++

9.2 The Main Function

9.3 Function Types

9.4 Function Activities

9.5 Inline function

9.6 C++ Objects as Function Arguments

9.7 C++ Friend Functions

9.8 Characteristics of Friend Function

9.9 C++ Static Data Members & Functions

9.10 Polymorphism in C++

9.11 Function Overloading

Summary

Keywords

Self Assessment

Answers for Self Assessment

Review Questions

Further Readings

**Objectives**

After studying this unit, you will be able to:

  - Understand the functions

  - Describe the function overloading

  - Explain the inline functions

  - Understand friend function

  - Analyze C++ Static Data Members & Functions

  - Define polymorphism in C++


**Introduction**



_**Unit 09: More on Function**_



A function is a code module that only does one thing. Sorting, searching for a specific item, and
inverting a square matrix are some instances. After a function is built, it is thoroughly tested.
Following that, it is added to the library of functions. A user can use a library function as often as
they like. This concept enhances software robustness while simultaneously shortening the time it
takes to develop code. System-defined and user-defined functions are the two types of functions.

A function is a group of statements that together perform a task. Every C++ program has at least
one function, which is main(), and all the most trivial programs can define additional functions.

A function declaration tells the compiler about a function's name, return type, and parameters. A
function definition provides the actual body of the function.


**Lovely Professional University** **113**


_**Notes**_



_**Object Oriented P**_


**9.1** **Why We**



_**rogramming**_



**Need Functions in C++**




- Debuggi **n**

- Use of f **u**

- Duplicat **e**

- Improve

- Use of f **u**



g of the code would be easier if you use functions, as



errors are easy to be traced.



nctions reduce size of code.



set of statements are replaced by function calls.



reusability of code, same function can be used in any **p** rogram.



reusability of code, same function can be used in any **p**



nction improves readability of code.



**9.2** **The Mai**

An application w **r**
(and only one) m **e**
it is seldom used.

The main method

main()

main(void)

void main()

void main(void)

int main()

int main(void)

int main(int argc, **c**

main(int argc, ch **a**

void main(int arg **c**

As is evident fro **m**
the operating sys **t**
any value to the **o**
void.



**n Function**



itten in C++ may have a number of classes. One of th **e**
thod called main method. Although a private main **m**
For all practical purposes the main method should be **d**



se classes must contain one
ethod is permissible in C++



eclared as public method.



can take various forms as listed below: Notes



har *argv[])



r *argv[])



, char *argv[])



the above forms, return type of the main method sp **e**
em once the program finishes its execution. If your **m**



cifies the value returned to
ain method does not return
type should be specified as



perating system (caller of this method), then return



**Caution:** In
the caller, then it **m**
int.



case you design your main method in such a way t **h**



at it must return a value to



st specify return type to be



ust return an integer type value and therefore you m **u**



**9.3** **Function**

We have two typ **e**
Now, we are firs **t**
are automatically
users it is already
program.



**Types**



s of the functions one is the library function in c++ **a**
going to discuss what are library functions, library **f**
included in the declared and used in the program, bu

present inside of the header file, which we always in **c**



**a** nd user defined functions.

unctions are functions that
t that are not created by the

lude at the beginning of the



**114** **Lovely Professional University**


_**Notes**_



_**Unit 09: More on Function**_


**Library Functions**

  - It is already present inside the header file which we always include at the beginning of a

program.

  - You just have to type the name of a function and use it along with the proper syntax.


**User-defined Function**

User-defined function is a type of function in which we have to write a body of a function and call
the function whenever it’s require.


**9.4** **Function Activities**

Function activities are also divided into the function declaration function definition and function
call

1. Function declaration

2. Function definition

3. Function call


1. **Function Declaration** _:_ Function declaration also called a function prototype. We just specify

the name of a function that we are going to use in our program like a variable declaration.

Syntax:
return_data_type function_name (data_type arguments);


2. **Function Definition:** Function definition function definition means just writing the body of a

function means we are just going to write the body of the function what kind of work we can do
with the function we are just write the logic they are a body of the function consists of the
statements, which are going to be perform a specific task like a sub routine or a sub program, it
is also known as the procedure we are writing the some of the lines there we are writing some
of the code there that is used to perform some of this specific task.

Function definition means just writing the body of a function. A body of a function consists of
statements which are going to perform a specific task. Let’s see definition of function is how
implemented using code.

Syntax:
int sum(int a,int b)

{

int c;

c=a+b;

return c;

}


3. **Function Call:** While creating a C++ function, you give a definition of what the function has to

do. To use a function, you will have to call or invoke that function.

Function call has two methods.

3.1 Call by value

3.2 Call by reference


**Lovely Professional University** **115**


_**Notes**_



_**Object Oriented Programming**_



**ue:** This method of passing arguments to a function **c** opies the actual value of an

**i** nto the formal parameter of the function. By defaul **t**, C++ uses call by value to



**1.** **Call by val**



argument **i**

pass argu **m**



**i** nto the formal parameter of the function. By defaul **t**



ents.



**2.** **Call by reference:** This method copies the reference of an



argument into the formal



parameter **.**



Inside the function, the reference is used to access t **h**

is means that changes made to the parameter affect th **e**



e actual argument used in



the call. T **h**


Example



argument.



#include<iostrea **m**

using namespace **s**




 


td;



int sum(int x,int y)

{

return x+y;

}

int main(){

int a,b;

cout<<"Enter two

cin>>a>>b;

cout<<"Sum of e **n**

return 0;

}


Output



)



numbers";



tered number using call by value is = "<<sum(a,b);



**9.5** **Inline fu**

Now we are talki **n**
is explained in lin
time to the execu **t**
that we are usin **g**
function but it n **o**
location of the fu **n**
going to copy the
faster if it is goin **g**

An inline functio **n**
copies the functio **n**
execution faster. I **n**



**nction**



g about inline functions c++ inline functions and inli **n**
e when it is invoked with us saving the time we are g **o**

ion then there are multiple ways we are calling the **d**
the multiple functions in one single code. Inline fun

t makes again the space inside of the memory. Thi **s**

ction call in the compile time when we are going t **o**
location of the function at the compile time and may
to save the function location into the compile time.



e function is a function that
ing to save the functions or
ifferent functions we know
ction is used to execute the

copies the function to the
compile our program, it is
take the program execution



is a function that is expanded in line when it is inv **o**



ked thus saving time. This
nd may make the program



to the location of the function call in compile-time **a**
line function is request to compiler not a command.



**Advantages of Inline Function**



**116** **Lovely Professional University**


_**Notes**_



_**Unit 09: More on Fun**_


sh/pop variables on the stack when function is called.

**f** it is small) for embedded systems because inline can



1. It also saves the overhead of p **u**

2. Inline function may be useful (i **f**



_**ction**_


yield



less code than the function call **p** reamble and return.


**Disadvantages of Inline Function**



1. Use too many inline function **s**



then the size of the binary executable file will be **l**



arge,



because of the duplication of sa **m**



e code.



2. Too much inlining can also red **u**

3. Inline functions may not be u **s**



ce your instruction cache hit rate.



dded



eful for many embedded systems. Because in emb **e**



systems code size is more impo **r** tant than speed.


Example

#include <iostream>

using namespace std;

inline int display_number(int n){

cout<<"Number is "<< n<<endl;

}

int main() {

display_number(50);

display_number(150);

display_number(200);

return 0;

}


Output



**9.6** **C++ Objects as Function**

We can pass objects to a function in a si **m**


Example

#include <iostream>

using namespace std;

class demo {

public:

int n=100;



**Arguments**



ilar manner as passing regular arguments.



**Lovely Professional University** **117**


_**Notes**_



_**Object Oriented Programming**_


char ch='A';



void disp(demo d){



cout<<d.n<<e **n**

cout<<d.ch<< **e**



dl;



ndl;



}

};

int main() {

cout<<"Passing object to function"<<endl;

demo obj;

obj.disp(obj);

return 0;

}

Output



**9.7** **C++ Frie**

A friend function
and protected m **e**
function, when w
class which is pri **v**
to declare the frie **n**



**nd Functions**



of a class is defined outside that the scope. And it can

mbers of the class. And we're talking about the fr **i**
e declared a friend function in class, it can be access **e**

ate or protected and we are using the friend keywor **d**



d function.



be accessible all the private
end function in the friend
d all of the members of the
inside the body of the class



Syntax


class className {

... .. ...

friend returnTy **p** e functionName(arguments);

... .. ...

}



**9.8** **Characteristics of Friend Function**



1. Friend f **u**

2. It allows

3. It cannot



nction is not in the scope of the class in which it has b **e**



en declared as friend.



scope of the class.



to generate more efficient code.



be called using the object of the class as it is not in the

called similar to a normal function without the help o **f**



4. It can be


Example



any object.



**118** **Lovely Professional University**


_**Notes**_



_**Unit 09: More on Function**_



#include <iostream>

using namespace std;

class rectangle{

int a;

public:

friend void disp(rectangle r);

void get_length(int l);

};

void rectangle::get_length(int l){

a=l;

}

void disp( rectangle r){

cout<<"Entered length of rectangle is"< **<** r.a;

}

main(){

rectangle r;

r.get_length(10);

disp(r);

}


**Output**



**9.9** **C++ Static Data Member**

Inside a class definition, the keyword st **a**
A static member is shared by all objects **o**
the class. Static member is the one of th **e**
class. Let us see the syntax of the static **m**



**s & Functions**



tic declares members that are not bound to class inst **a**

f the class. A static member is shared by all of the obj **e**
member which can be shared with all of the objects i



ember function inside of the class.



nces.

**e** ct of

n my



Syntax

Class class_name{

private:

static data_member;

public:

static return_type function_name()

{

//body

}

};



**Lovely Professional University** **119**


_**Notes**_



_**Object Oriented P**_


Example

#include <iostrea **m**

using namespace **s**

class Demo

{

private:



_**rogramming**_




 


td;



public:



static int a;


static void fun()

{

: " << a << endl;



cout <<"Value of **a**



}

};

int Demo :: a =50 **0** ;

int main()

{



Demo o **b** j;


obj.fun() **;**


return 0;



}


Output


**9.10** **Polymor**

Polymorphism is
one form. For ex **a**
behavior depend **s**
operation of add **i**
strings, then the **o**
illustrates that a
arguments. This
depending on the

Polymorphism pl **a**
share the same e **x**
the same mann **e**
Polymorphism is **e**



below.



**phism in C++**



an important OOP concept. Polymorphism means t **h**

mple, an operation may exhibit different behavior
upon the types of data used in the operation. **F**
tion. For tow numbers, the operation will generate

peration will produce a third string by contention.
single function name can be used to handle diffe **r**
is something similar to a particular word having



context.



e ability to take more than

in different instances. The

**F** or example, consider the

a sum. If the operands are

The diagram given below,

**r** ent number and types of

several different meanings



ys an important role in allowing objects having dif **f**
ternal interface. This means that a general class of op **e**
r even though specific actions associated with e **a**



erent internal structures to



rations may be accessed in
ch operation may differ.



xtensively used in implementing inheritance as show **n**



**120** **Lovely Professional University**


_**Notes**_



_**Unit 09: More on Function**_



Polymorphism can be implemented u **s**
operator and function works differentl **y**
polymorphisms are brought into effect a **t**
binding, static linking or compile time p **o**



ing operator and function overloading, where the

on different arguments producing different results. **T**
compile time itself, hence is known as early binding,



lymorphism.



same

hese
static



**Types of C++ Polymorphism**

1. Compile time Polymorphism

2. Runtime Polymorphism


**9.11** **Function Overloading**



A function may take zero or more argu **m**
a function may take is defined in the fu **n**
and type of argument(s), the compiler
named sum to add two numerical value **s**



ents when called. The number and type of argument **s**
ction itself. If a function call fails to comply by the nu

reports the same as error. Suppose we write a fu **n**
given as arguments. One can write the function as:



**s** that

mber

ction



int sum(int a, int b)

{

return (a + b);

}



**Lovely Professional University** **121**


_**Notes**_



_**Object Oriented Programming**_


Now suppose we want the function to take float type argument then the function definition must
be changed as:

float sumfloat(float a, float b)

{

return (a + b);

}

As a matter of fact the function sum may take so many names as shown below.

int sumint(int a, int b)

{

return (a + b);

}

short sumshort(short a, short b)

{

return (a + b);

}

long sumlong(long a, long b)

{

return (a + b);

}

float sumdouble(double a, double b)

{

return (a + b);

}

This can be very tiring and extremely difficult to remember all the names. Function overloading is a
mechanism that allows a single function name to be used for different functions. The compiler does
the rest of the job. It matches the argument numbers and types to determine which functions is
being called. Thus we may rewrite the above listed functions using function overloading as:

int sum(int a, int b)

{

return (a + b);

}

float sum(float a, float b)

{

return (a + b);

}

short sum(short a, short b)

{

return (a + b);

}

long sum(long a, long b)

{

return (a + b);


**122** **Lovely Professional University**


_**Notes**_



_**Unit 09: More on Fun**_



_**ction**_



}

float sum(double a, double b)

{

return (a + b);

}



Overloaded functions have the same na **m**
differ either by number of arguments **o**
function cannot differ only by the return



**m** e but different number and type of arguments. The **y**

**o** r type of arguments or both. However, two overl **o**

type.



can
aded



Example

#include<iostream>

using namespace std;

class sample{

public:

int chk_num(){

int a=10;

cout<<"Value of a is "<< a<<endl;

}

int chk_num(int a){

if(a%2==0)

cout<<"Number is even" << a <<endl;

else

cout<<"Number is odd" << a <<en **d**

}

float chk_num(float x, float y)

{

cout<<"Sum of floating point number is

}


};

main(){


sample obj;

obj.chk_num();

obj.chk_num(15);

obj.chk_num(15.12,25);


}


**Output**



l;



"<< x+y<<endl;


**Lovely Professional University** **123**


_**Notes**_



_**Object Oriented P**_


**Summary**

An application w **r**
(and only one) m **e**
it is seldom used.
A function may t **a**
a function may ta **k**
and type of argu **m**
output of compil **a**
When a program
have arguments **h**
declaration. Prot **o**
about a function **b**

- by defining it b **e**



_**rogramming**_



**b** out a function is two ways

s before you call it.



itten in C++ may have a number of classes. One of th **e**
thod called main method. Although a private main **m**
For all practical purposes the main method should b **e**
ke zero or more arguments when called. The number

**k** e is defined in the function itself. If a function call fa **i**

ent(s), the compiler reports the same as error. When **a**
tion is a set of machine language instructions, whic **h**
is run, this complied copy of program is put into **m**

**h** aving default values. The default values are give **n**

type of a function is the function without its body. **T**

efore you call it, and you can let the compiler know a **b**
fore you call it or by specifying the function prototyp **e**



se classes must contain one
ethod is permissible in C++
declared as public method.

and type of arguments that
ls to comply by the number
ny program is compiled the

is in executable program.
emory. C++ functions can
in the function prototype



he C++ compiler needs to



**Keywords**



**Function** : The be **s**
program module **s**
C++ as classes a **n**
the function by n **a**

**Function Declarat**
its arguments.

**Function Overloa**
performing diffe **r**
function overload

**Function Prototyp**
number, the typ **e**
prototype enable **s**



t way to develop and maintain a large program is to **d**
of which are more manageable than the original prog **r**
d functions. A function is invoked by a function call.

me and provides information that the called function **n**

**ion** : Statement that declares a function’s name, retur **n**



ivide it into several smaller

am. Modules are written in
The function call mentions



eeds to perform its task.



type, number and type of



**ding:** In C++, it is possible to define several fun **c**
ent actions. The functions must only differ in their
ing is the process of using the same name for two or **m**

**e:** A function prototype declares the return-type of t **h**
s and order of the parameters, the function expec **t**
the compiler to verify that functions are called correc **t**



**Inline Function** : **A** function definition such that each call to the funct **i**
the statements th **a** t define the function.



**Inline Function** : **A**
the statements th **a**



tion with the same name,

argument lists. Otherwise,
ore functions.

e function that declares the
s to receive. The function
ly.

on is, in effect, replaced by



**Self Assessment**



1. Which of t **h**
A. Member f **u**
B. Main()
C. Member f **u**
D. None of a **b**



e following function / types of function cannot have **d**
nction of class



efault parameters?



nction of structure
ove



2. Function c **a**
A. Call by val
B. Call by ref **e**
C. All of Abo **v**
D. None of A **b**



ll type is
ue



rence



e
ove



**124** **Lovely Professional University**


_**Notes**_



_**Unit 09: More on Function**_


3. Which of the following is the default return value of functions in C++?
A. int
B. char
C. float
D. void


4. Choose the correct statement for call by value
A. Copy of variable is passed.
B. Original value not modified.
C. Actual arguments remain safe as they cannot be modified accidentally.
D. All of Above


5. What is an inline function?
A. A function that is expanded at each call during execution
B. A function that is called during compile time
C. A function that is not checked for syntax errors
D. A function that is not checked for semantic analysis


6. An inline function is expanded during ______________
A. compile-time
B. run-time
C. never expanded
D. end of the program


7. What are the two advantage of function objects than the function call?
A. It contains a state
B. It is a type
C. It contains a state & It is a type
D. It contains a prototype


8. Pick out the correct statement.
A. A friend function may be a member of another class
B. A friend function may not be a member of another class
C. A friend function may or may not be a member of another class
D. None of the mentioned


9. Where does keyword ‘friend’ should be placed?
A. function declaration
B. function definition
C. main function
D. block function


10. Which keyword is used to declare the friend function?
A. firend
B. friend
C. classfriend
D. myfriend


11. Which keyword should be used to declare static variables?
A. static
B. stat
C. common
D. const


12. Which is the correct syntax for declaring static data member?
A. static mamberName dataType;
B. dataType static memberName;


**Lovely Professional University** **125**


_**Notes**_



_**Object Oriented Programming**_


C. memberName static dataType;
D. static dataType memberName;


13. Overloaded functions in C++ oops are
A. Functions preceding with virtual keywords.
B. Functions inherited from base class to derived class.
C. Two or more functions having same name but different number of parameters or type.
D. None of above


14. Function overloading is _____________ in C++.
A. Class
B. Object
C. Compile Time Polymorphism
D. None of above


15. What is the output of this program?
#include <iostream>


using namespace std;


int Add(int X, int Y, int Z)


{


return X + Y;


}


double Add(double X, double Y, double Z)


{


return X + Y;


}


int main()


{


cout << Add(5, 6);


cout << Add(5.5, 6.6);


return 0;


}


A. 11 12.1
B. 12.1 11
C. 11 12
D. Compile time error


**Answers for Self Assessment**


1. B 2. C 3. A 4. D 5. A


6. A 7. C 8. C 9. A 10. B


11. A 12. D 13. C 14. C 15. D


**126** **Lovely Professional University**


_**Notes**_



_**Unit 09: More on Fun**_


**Review Questions**

1. What is function prototyping? Why is it necessary? When is it not necessary?

2. What is purpose of inline function?

3. Differentiate between the following:

(a) void main()

(b) int main()



(c) int main(int argn, char argv[])



4. In which cases will declare a member **f**

5. Write a program that uses overloa **d**
Celsius to Kelvin scale.

6. To calculate the area of circle, rectangl **e**

7. Do inline functions improve performa **n**

8. How can inline functions help with th **e**

9. Write a program that demonstrate wo **r**

10. Write a program that demonstrates **w**


**Further Readings**



unction to be friend?



ed member functions for converting temperature



_**ction**_


from



and triangle using function overloading.



ce?



tradeoff of safety vs. speed?



king of function overloading.



orking of inline functions.




- E Balagurusamy; Object Or **i**

- Herbert Schildt; The Comp **l**

- Object-oriented Programmi


**Web Links**

- https://en.wikipedia.org/ **w**

- www.web-source.net

- www.webopedia.com



ented Programming with C++; Tata Mc Graw-Hill.



ete Reference C++; Tata Mc Graw Hill. Robert Lafore;



ng in Turbo C++; Galgotia.



iki/Object-oriented_programming



**Lovely Professional University** **127**


_**Notes**_



_**Unit 10 : Static Members and Polymorphism**_

_**Prikshat Kumar Angra, Lovely Professional University**_

##### **Unit 10 : Static Members and Polymorphism**


**CONTENTS**

Objectives

Introduction

10.1 Static Data Member

10.2 Static Member Function

10.3 Polymorphism

10.4 Types of C++ Polymorphism

10.5 Function Overloading

10.6 Difference between Polymorphism and Inheritance

Summary

Keywords

Self Assessment

Answers for Self-Assessment

Review Questions

Further Readings

**Objectives**

After studying this unit, you will be able to:


   - Understand functions in OOP

   - Analyze execution of code using call by reference and call by value mechanism

   - Understand default arguments

   - Construct C++ programs using function and default arguments


**Introduction**

A function is a code module that only does one thing. Sorting, searching for a specific item, and
inverting a square matrix are some instances. After a function is built, it is thoroughly tested.
Following that, it is added to the library of functions. A user can use a library function as often as
they like. This concept enhances software robustness while simultaneously shortening the time it
takes to develop code. System-defined and user-defined functions are the two types of functions.

A function is a group of statements that together perform a task. Every C++ program has at least
one function, which is main(), and all the most trivial programs can define additional functions.

A function declaration tells the compiler about a function's name, return type, and parameters. A
function definition provides the actual body of the function.


**10.1** **Static Data Member**

Inside a class definition, the keyword static declares members that are not bound to class
instances.A static member is shared by all objects of the class.

A static data member is similar to the static member function because the static data can only be
accessed using the static data member or static member function.

A static data member has certain special characteristics.


**128** **Lovely Professional University**


_**Notes**_



_**Object Oriented Programming**_



1. It is initiali **z** ed to zero when the first object of its class is created.



2. Only one **c** opy of that member is created for the entire class an **d** is shared by all the objects
of that class, no matter how many objects are created.



3. It is visible


**Syntax**

Class class_name **{**

private:

static data_memb **e**

public:

static return_type **f**



only within the class, but its lifetime is the entire pro **g**



ram.



r;



unction_name()



//body


};


**Example:**



{


}



#include <iostrea **m**

using namespace **s**

class Demo

{

public:




 


td;



static int n;

};

int Demo :: n =10 **0** ;

int main()

{



cout<<" **\** nValue of n is: "<<Demo::n;

return 0;



}


Output


**10.2** **Static Member Function**



Like a static mem **b** er variable, we can also have static member function **s** .A member function that is
declared static ha **s** the following properties:

**Lovely Professional University** **129**


_**Notes**_



_**Unit 10 : Static Members and Polymorphism**_



1. A static function can have access **t** - only other static members (function or variable) de **c** lared
in the same class.



2. A static member function can be **c**

Class_name::Function_name();


**Example:**

#include <iostream>

using namespace std;

class Demo

{

private:

static int a;

public:

static void fun()

{

cout<<"Value of a: " << a <<endl;

}

};

int Demo :: a =50;

int main()

{

Demo obj;

obj.fun();

return 0;

}


Output


**10.3** **Polymorphism**



alled using the class name (instead of its object) as fol **l**



ows


Polymorphism is an important OOP co **n**
one form. For example, an operation **m**
behavior depends upon the types of
operation of addition. For tow number
strings, then the operation will produc **e**
illustrates that a single function nam **e**



**n** cept. Polymorphism means the ability to take more

ay exhibit different behavior in different instances **.**
data used in the operation. For example, conside
s, the operation will generate a sum. If the operan **d**

a third string by contention. The diagram given b **e**
can be used to handle different number and typ



than
The
r the

s are

**e** low,

es of



**130** **Lovely Professional University**


_**Notes**_



_**Object Oriented Programming**_



arguments. This
depending on the

Polymorphism pl **a**
share the same e **x**
the same mann **e**
Polymorphism is **e**



is something similar to a particular word having



several different meanings



context.



**a** ys an important role in allowing objects having dif **f**

ternal interface. This means that a general class of op **e**
r even though specific actions associated with e **a**



erent internal structures to



rations may be accessed in

ch operation may differ.



xtensively used in implementing inheritance as show **n**



below.



Polymorphism c **a**
operator and fun **c**
polymorphisms a **r**
binding, static lin **k**



n be implemented using operator and function ov **e**

tion works differently on different arguments produ **c**



e brought into effect at compile time itself, hence is k **n**



ing or compile time polymorphism.



**e** rloading, where the same

ing different results. These
own as early binding, static



**10.4** **Types of C++ Polymorphism**



1. Compile

2. Runtime



time Polymorphism



Polymorphism



**Lovely Professional University** **131**


_**Notes**_



_**Unit 10 : Static Members and Polymorphism**_


**10.5** **Function Overloading**

A function may take zero or more arguments when called. The number and type of arguments that
a function may take is defined in the function itself. If a function call fails to comply by the number
and type of argument(s), the compiler reports the same as error. Suppose we write a function
named sum to add two numerical values given as arguments. One can write the function as:

int sum(int a, int b)

{

return (a + b);

}

Now suppose we want the function to take float type argument then the function definition must
be changed as:

float sumfloat(float a, float b)

{

return (a + b);

}

As a matter of fact the function sum may take so many names as shown below.

int sumint(int a, int b)

{

return (a + b);

}

short sumshort(short a, short b)

{

return (a + b);

}

long sumlong(long a, long b)

{

return (a + b);

}

float sumdouble(double a, double b)

{

return (a + b);

}

This can be very tiring and extremely difficult to remember all the names. Function overloading is a
mechanism that allows a single function name to be used for different functions. The compiler does
the rest of the job. It matches the argument numbers and types to determine which functions is
being called. Thus we may rewrite the above listed functions using function overloading as:

int sum(int a, int b)

{

return (a + b);

}

float sum(float a, float b)

{

return (a + b);


**132** **Lovely Professional University**


_**Notes**_



_**Object Oriented P**_


}

short sum(short a **,**

{

return (a + b);

}

long sum(long a, **l**

{

return (a + b);

}

float sum(double **a**

{

return (a + b);

}

Overloaded funct **i**
differ either by **n**
function cannot d **i**



_**rogramming**_



short b)



ong b)



, double b)



**i** ons have the same name but different number and t **y**

umber of arguments or type of arguments or both.



ffer only by the return type.



pe of arguments. They can
However, two overloaded



**Example:**

#include<iostrea **m**

using namespace **s**

class sample{

public:

int chk_num(){

int a=10;

cout<<"Value of **a**

}

int chk_num(int a **)**

if(a%2==0)

cout<<"Number i **s**

else

cout<<"Number i **s**

}

float chk_num(flo

{

cout<<"Sum of fl **o**

}


};

main(){




 


td;



is "<< a<<endl;


**)** {



even" << a <<endl;


odd" << a <<endl;



at x, float y)



ating point number is "<<x+y<<endl;



**Lovely Professional University** **133**


_**Notes**_



_**Unit 10 : Static Members and Polymorp**_


**lymorphism and Inheritance**



_**hism**_



sample obj;

obj.chk_num();

obj.chk_num(15);

obj.chk_num(15.12,25);


}


Output


**10.6** **Difference between Po**



















|Inheritance|Polymorphism|
|---|---|
|Inheritance is one in which a new class**(**<br>class) is formed that inherits the chara**c**<br>from the current class(base class).<br>derived<br>teristics|Whereas<br>polymorphism<br>is<br>what<br>ca**n**<br>characterized in different ways.<br> <br>be|
|Basically, it is used for lessons.|Whereas functions or techniques are si<br>implemented.<br>mply|
|The principle of reusability is suppo<br>inheritance and decreases code length i**n**<br>oriented programming.<br>rted by<br> object-|Polymorphism enables the object to dete**r**<br>which function type is to be enforced at<br>compile-time<br>(overloading)<br>and<br>ru**n**<br>(overriding).<br>mine<br>both<br>-time|
|Inheritance may be an inheritance**o**<br>mixed, mixed, hierarchical and multilev**e**<br>f pure,<br>l.|Whereas-time polymorphism (overload) a**s**<br>as run-time polymorphism (overriding) c**a**<br>compiled.<br> well<br>n be|
|In pattern building, it is used.|Since it is also used in creating patterns.|


**Summary**


   - Polymorphism is the occurre **n**



ce of two or more distinct variants of a plant in the



ecosystem together in such q **u**

repeated mutation.



antities that the rarest of them cannot be preserv **e**



same

d by




- If there are even a few percen **t**

have been preferred by option.



of a population with a genetically regulated type, i **t** may



of a population with a genetically regulated type, i **t**




- Polymorphism may either be



intermittent, in which a chromosome is in the proc **e**



rollout to an unopposed inha **b**

agencies is retained at a fixed s **t**



itant, or regulated, in which the equilibrium of sel **e**



ss of

ctive



**t** age.



**134** **Lovely Professional University**


_**Notes**_



_**Object Oriented Programming**_


   - In general, due to the repeated creation of the variation, intermittent polymorphism is due

to environmental changes that make the results of an earlier disadvantageous

chromosome advantageous.


**Keywords**

**Function** : The best way to develop and maintain a large program is to divide it into several smaller
program modules of which are more manageable than the original program. Modules are written in
C++ as classes and functions. A function is invoked by a function call. The function call mentions
the function by name and provides information that the called function needs to perform its task.

**Function Declaration** : Statement that declares a function’s name, return type, number and type of
its arguments.

**Function Overloading:** In C++, it is possible to define several function with the same name,
performing different actions. The functions must only differ in their argument lists. Otherwise,
function overloading is the process of using the same name for two or more functions.

**Function Prototype:** A function prototype declares the return-type of the function that declares the
number, the types and order of the parameters, the function expects to receive. The function
prototype enables the compiler to verify that functions are called correctly.


**SelfAssessment**


1. The static member functions __________________

A. Have access to all the members of a class

B. Have access to only constant members of a class

C. Have access to only the static members of a class

D. Have direct access to all other class members also


2. The static member functions ____________________

A. Can be called using class name

B. Can be called using program name

C. Can be called directly

D. Can’t be called outside the function


3. Choose the right observation from the followings.

A. Static member functions can’t be virtual

B. Static member functions can be virtual

C. Static member functions can be declared virtual if it is pure virtual class

D. Static member functions can be used as virtual in Java


4. Which keyword should be used to declare the static member functions?

A. stat

B. const

C. common

D. static


5. Which is the correct syntax for declaring static data member?

A. static mamberNamedataType; .

B. dataType static memberName;


**Lovely Professional University** **135**


_**Notes**_



_**Unit 10 : Static Members and Polymorphism**_


C. memberName static dataType;

D. static dataTypememberName;


6. What would be the output of the following code?
#include <iostream>


using namespace std;


class Demo


{


private:


static int a;


public:


static void fun()


{


cout<< a <<endl;


}


};


int Demo :: a =20;


int main()


{


Demo obj;


obj.fun();


return 0;


}


A. 0

B. 20

C. Error

D. None of above


7. A static member function can be called using the class as

A. Class_name::Function_name();

B. Member ::Function_name();

C. Class_name;

D. Function_name();


8. Overloaded functions in C++ oops are

A. Functions preceding with virtual keywords.

B. Functions inherited from base class to derived class.

C. Two or more functions having same name but different number of parameters or type.


**136** **Lovely Professional University**


_**Notes**_



_**Object Oriented Programming**_


D. None of above


9. Function overloading is _____________ in C++.

A. Class

B. Object

C. Compile Time Polymorphism

D. None of above


10. What is the output of this program?
#include <iostream>


using namespace std;


int Add(int X, int Y, int Z)


{


return X + Y;


}


double Add(double X, double Y, double Z)


{


return X + Y;


}


int main()


{


cout<< Add(5, 6);


cout<< Add(5.5, 6.6);


return 0;


}


A. 11 12.1

B. 12.1 11

C. 11 12

D. Compile-time error


11. Which of the following in Object-Oriented Programming is supported by Function

overloading and default arguments features of C++?


A. Inheritance

B. Encapsulation

C. Polymorphism

D. None of the above


12. When will we use the function overloading?

A. same function name but same number of arguments

B. different function name but different number of arguments

C. same function name but different number of arguments


**Lovely Professional University** **137**


_**Notes**_



_**Unit 10 : Static Members and Polymorp**_


number of arguments



_**hism**_



D. different function name but same



13. Function overloading is also simi **l** ar to which of the following?

A. function overloading

B. destructor overloading

C. operator overloading

D. constructor overloading



14. In which of the following we can **n** ot overload the function?

A. Caller

B. Return function

C. Called function

D. All of above



15. Several functions of the same

parameters, this is called

A. Function overloading

B. Functions reusing

C. Operators overloading

D. None of them

**Answers for Self-Assessment**



name can be defined, as long as they have dif **f**



erent



1. C 2. A 3. **A**


6. B 7. A 8. **C**


11. C 12. C 13. **D**


**Review Questions**



4. D 5. D


9. C 10. D


14. B 15. A



1. Program to demonstrate wor **k**

object-oriented programming **C**

2. To calculate the area of circle, r **e**

3. Do inline functions improve pe **r**

4. How can inline functions help **w**

5. Write a program that demonstr **a**

6. Write a program that demonstr **a**


**Further Readings**



ing static data members and static member functio

++.



ns in



ctangle, and triangle using function overloading.



formance?



ith the tradeoff of safety vs. speed?



testhe working of function overloading.

tes the working of inline functions.




- E Balagurusamy; Object-o **r**

- Herbert Schildt; The Com **p**

- Robert Lafore; Object-orie **n**



iented Programming with C++; Tata Mc Graw-Hill.



lete Reference C++; Tata Mc Graw Hill.



ted Programming in Turbo C++; Galgotia



**138** **Lovely Professional University**


_**Notes**_



_**Object Oriented Programming**_



**Web Lin**

http://m **s**

https://t **e**

https:// **w**



**ks**



dn.microsoft.com/en-us/library/wcz57btd(v=vs.80). **a**



spx



achcomputerscience.com/polymorphism/



ww.codecademy.com/learn/learn-c-plus-plus



.



**Lovely Professional University** **139**


_**Notes**_



_**Unit 10 : Static Members and Polymorphism**_


**140** **Lovely Professional University**


_**Notes**_



_**Prikshat Kumar Angra, Lovely Professional University**_



_**Unit 11: Constructors and Destructors**_


##### **Unit 11: Constructors and Destructors**

**CONTENTS**

Objectives

Introduction

11.1 Constructor and Destructor

11.2 Difference Between Constructor and Destructor in C++

11.3 Copy Constructor

11.4 Dynamic Constructor

11.5 Parameterized Constructors

11.6 Constructors with Default Arguments

11.7 Constructor overloading

11.8 Destructors

Summary

Keywords

Self Assessment

Answers for Self Assessment

Review Questions

Further Readings

**Objectives**

After studying this unit, you will be able to:


   - Recognize the need for constructor anddestructors

   - Describe the copyconstructor

   - Explain the dynamicconstructor

   - Discuss thedestructors

   - Explaintheconstructoranddestructorswithstaticmembers


**Introduction**

When an object is created all the members of the object are allocated memory spaces. Each object
has its individual copy of member variables. However, the data members are not initialized
automatically. If left uninitialized these members contain garbage values. Therefore, it is important
that the data members are initialized to meaningful values at the time of object creation.
Conventional methods of initializing data members have lot of limitations. In this unit you will
learn alternative and more elegant ways initializing data members to initial values.

When a C++ program runs it invariably creates certain objects in the memory and when the
program exits the objects must be destroyed so that the memory could be reclaimed for further use.

C++ provides mechanisms to cater to the above two necessary activities through constructors and
destructors methods.


**Lovely Professional University** **141**


_**Notes**_



_**Object Oriented P**_

**11.1** **Constru**

**Constructor**

Constructors are **s**
calls the Construc **t**
after storage is al **l**
class object.

The default const **r**
nothing more tha **n**



_**rogramming**_
**ctor and Destructor**



ation of an object and does
tial values.



pecial class functions which performs initialization o **f**



every object. The Compiler

**z** e values to object members

hand is used to destroy the



**t** or whenever an object is created. Constructors initiali **z**

ocated to the object. Whereas Destructor on the other



uctor method is called automatically at the time of cr **e**



initializing the data variables of the object to valid in **i**



**Notes:** Const **r**
Constructor does **n**

While writing a c **o**



uctor has the same name as the class. Construc **t**



n mind:



ot have any return type.



or is public in the class.



nstructor function the following points must be kept i



1. The name **o**



f constructor method must be the same as the class n **a**



me in which it is defined.



2. A constru **c**

3. Construct **o**

4. A constru **c**



tor method must be a public method.



r method does not return any value.



tor method may or may not have parameters.



Let us examine a **f** ew classes for illustration purpose. The class abc as **d**
user defined cons **t** ructor method.



Let us examine a **f**
user defined cons **t**



efined below does not have



classabc

{

}

main()

{

}

intx,y;

abcmyabc;

…;



The main functi **o**
defined above. S **i**
method of C++ w **i**

myabc.x=0 and m **y**

Let us now redefi **n**

below:

classabc

Observed that m **y**
We can now crea **t**
below:

main()

{

abcmyabc(100,20 **0** );

———;

}



n above an object named myabc has been created **w**

nce class abc does not have any constructor meth **o**
ll be called which will initialize the member variables



**w** hich belongs to abc class

d, the default constructor
as:



abc.y=0.



e myabc class and incorporate an explicit constructor



method as shown



abc class has now a constructor defined to except tw **o**
e an object of myabc class passing two integer values **f**



parameters of integer type.

or its construction, as listed



);



**142** **Lovely Professional University**


_**Notes**_



_**Unit 11: Constructors and Destructors**_

In the main function myabc object is created value 100 is stored in data variable x and 200 is stored
in data variable y. There is another way of creating an object as shown below.

main()

{

myabc=abc(100,200);

———;

}

Both the syntaxes for creating the class are identical in effect. The choice is left to the programmer.
There are other possibilities as well. Consider the following class differentials:

classabc

{

intx,y; public:

abc();

}

abc::abc()

{

x=100; y=200;

}

In this class constructor has been defined to have no parameter. When an object of this class is
created the programmer does not have to pass any parameter and yet the data variables x,y are
initialized to 100 and 200 respectively.

Finally, look at the class differentials as given below:

classabc


{


intx,y; public:

abc();


abc(int);


abc(int, int);


}


abc::abc()


{


x=100; y=200;

}


abc::abc(int a)


**Lovely Professional University** **143**


_**Notes**_



_**Object Oriented P**_


{


x=a; y=200;

}


abc::abc(int a)


{


x=100;


y=a;


}

Class myabc has
respectively. Wh **e**
these constructor **s**

Types of construc **t**



_**rogramming**_



three constructors having no parameter, one para **m**
n an object to this class is created depending on n **u**
is selected and is automatically executed.



eter and two parameters
mber of parameters one of



or



1. Default **C**

2. Paramet **e**



onstructor



rized Constructor



3. Copy Co


**Destructor**

Destructors are t **y**
and class membe **r**

When should y **o**
destructor functi **o**
own destructor i **n**
cannot be deleted
the destructor fu **n**



nstructor



pically used to de-allocate memory. Also, they are **u**
s when the object gets terminated.



sed to clean up for objects



u define your own destructor function? In many
n. However, if your class created dynamic objects, t **h**



cases you do not need a
en you need to define your

s because dynamic objects



which you will delete the dynamic objects. This **i**
on their own. So, when the object is destroyed, the dy **n**
ction you define.



amic objects are deleted by



**144** **Lovely Professional University**


_**Notes**_



_**Unit 11: Constructors and Destructors**_



A destructor function has the same nam **e**
you must precede the destructor with th **e**

The following code illustrates the use of **a**

#include <iostream> using namespace s **t**


class Calculator

{

public:

int *num1;

int *num2;


Calculator(int ident1, int ident2)

{

num1 = new int;

num2 = new int;

```
*num1 =ident1;

*num2 =ident2;

}
```

~Calculator()

{

delete num1;

delete num2;

}

int add(){

int sum=*num1+*num2;

return sum;

}

};

int main()

{

Calculator myObject(20,20);

int result = myObject.add();

cout<< result;

return 0;

}

The destructor function is automatically
needs the object. If you defined a destru **c**
did not define a destructor function, C **+**
you. However, this default destructor w **i**



as the class, and does not have a returned value. Ho **w**



tilde sign, which is ~ .



ever



destructor against dynamic objects:



d;



called, without you knowing, when the program no l **o**

tor function as in the above code, it will be executed. **I**
+ supplies you one, which the program uses unkno **w**
ll not destroy dynamic objects.



nger
f you



n to



**Notes:** -An object is destroyed as it **g** oes out of scope.


**Lovely Professional University** **145**


_**Notes**_



_**Object Oriented P**_


**Lab Exercise:**

class A

{

// constructor

A()

{

cout<< "Construc **t**

}

// destructor

~A()

{

cout<< "Destruct **o**

}

};

int main()

{

A obj1; // Constr **u**

int x = 1

if(x)

{

A obj2; // Constr **u**

} // Destructor **C**

} // Destructor c **a**


**Output:-**

Constructor calle **d**

Constructor calle **d**

Destructor called

Destructor called


**11.2** **Differe**



_**rogramming**_



**:** Program to see how Constructor and Destructor are **c** alled.


or called";



r called";



ctor Called


ctor Called



alled for obj2



lled for obj1



**nce Between Constructor and Destructo**



**r in C++**


























|Constructors|Destructors|
|---|---|
|The construct**o**<br>the memory to<br>r initializes the class and allots<br>an object.|If the object is no<br>destructors demolis**h**<br>longer required, then<br> the objects.|
|When the obj**e**<br>called automa**t**<br>ct is created, a constructor is<br>ically.|When the progra**m**<br>destructor is called a<br> gets terminated, the<br>utomatically.|
|It receives arg**u**<br>ments.|It does not receive a**n**<br>y argument.|
|A constructor<br>allows an object to initialize|A destructor allow<br>s an object to execute|



**146** **Lovely Professional University**


_**Notes**_





_**Unit 11: Constructors and Destru**_





_**ctors**_



|Col1|some of its value before it is used.|some code at the time of its destruction.|Col4|
|---|---|---|---|
||It can be overloaded.|It cannot be overloaded.|It cannot be overloaded.|
||When it comes to constructors, ther**e**<br>various constructors in a class.<br> can be|When it comes to destructors, there<br>constantly a single destructor in the class.<br>is|When it comes to destructors, there<br>constantly a single destructor in the class.<br>is|
||They are often called in successive or**d**<br>er.|They are often called in reverse order<br>constructor.<br>of|They are often called in reverse order<br>constructor.<br>of|


**11.3** **Copy Constructor**

A copy constructor method allows an o **bj**
implies that the values stored in data **m**
variables of the object being constructe
constructor has a single parameter of ref **e**

abc::abc(abc& a)


{

x=a.x;

y=a.y;

}

Suppose we create an object myabc1 wit **h**

abc myabc1(1,2);

Having created myabc1, we can create
shown below:

myabc2=abc(& myabc1);

The data values of myabc1 will be copi **e**
Another way of activating copy constr
come into play when an object is assigne

abc myabc1(1,2);

abc myabc2;

myabc2=myabc1;

Actually assignment operator(=) has bee **n**

whenever an object is assigned another **o**


**Did you know?**







ect to be initialized with another object of the same cl **a**

embers of an existing object can be copied into the
d, provided the objects belong to the same class. A



ss. It

data
copy



rence type that refers to the class itself as shown belo **w** :



:



two integer parameters as shown below:



another object of abc type, say myabc2 from myab **c** 1, as



another object of abc type, say myabc2 from myab **c**



d into the corresponding data variables of object m **y**
uctor is through assignment operator. Copy constr **u**
d another object of the same type, as shown below:



abc2.

ctors



overloaded in C++ so that copy constructor is invok **e**



d



bject of the same type.



What is the difference between the **c**


(a) If a new object has to be cre **a**
isused.



opy constructor and the assignment operator?



ted before the copying can occur, the copy construct **o**



r



(b) Ifanewobjectdoesnothavetob **e** createdbeforethecopyingcanoccur,theassignment
operator isused.


**11.4** **Dynamic Constructor**




- Dynamic constructor is used to

- Memory is allocated at run tim **e**

- By using this constructor, we c **a**



allocate the memory to the objects at the run time.



with the help of 'new' operator.



n dynamically initialize the objects.



**Lovely Professional University** **147**


_**Notes**_



_**Object Oriented Programming**_


**Example:-**



#include <iostrea **m** .h>



#include <conio. **h**

classdyncons

{

int * p;

public:

dyncons()

{

p=new int;

*p=100;

}

dyncons(int v)

{

p=new int;

*p=v;

}

int dis()

{

return(*p);

}

};

int main()

{

clrscr();

dyncons o, o1(90) **;**

cout<<"The value

cout<<o.dis();

cout<<"\nThe va **l**

return 0;

}


Output:

The value of obje **c**

The value of obje **c**







of object o's p is:";



ue of object 01's p is:"<<o1.dis();



t o's p is:100

t 01's p is:90



**11.5** **Paramet**

If it is necessary
when they are c **r**
constructor funct **i**
called ‘Parameter **i**



**erized Constructors**



**b** jects with different values

passing arguments to the
at can take arguments are
s follows:



to initialize the various data elements of different o **b**

eated. C++ permits us to achieve this objective by
on when the objects are created. The constructors t **h**
zed constructors.’ The definition and declaration are a



**148** **Lovely Professional University**


_**Notes**_



_**Unit 11: Constructors and Destructors**_

classdist

{

int m, cm; public:

dist(int x, int y);

};

dist::dist(int x, int y)

{

m = x; n = y ;

}

main()

{

dist d(4,2);

d. show ();

}


**11.6** **Constructors with Default Arguments**

This method is used to initialize object with user defined parameters at the time of creation.

Consider the following Program that calculates simple interest. It declares a class interest
representing principal, rate and year. The constructor function initializes the objects with principal
and number of years. If rate of interest is not passed as an argument to it the Simple Interest is
calculated taking the default value of rate of interest.

#include <iostream.h>

class interest

{

int principal, rate, year;

float amount;

public:

interest (int p, int n, int r = 10);

voidcal (void);

};

interest::interest (int p, int n, int r = 10)

{

principal = p;

year = n;

rate = r;

};

void interest::cal (void)

{

cout<< “Principal” <<principal;

cout<< “\ Rate” <<rate;

cout<< “\ Year” <<year; amount = (float) (p*n*r)/100;

cout<< “\Amount” <<amount;


**Lovely Professional University** **149**


_**Notes**_



_**Object Oriented P**_

};

main ( )

{

interest i1(1000,2) **;**

interest i2(1000, 2,

il.cal();

i2.cal();

}



_**rogramming**_



15);



Two objects are c **r** eated in main function



interest i **1** (1000,2);

interest i **2** (1000, 2,15);



The data member **s**

time when object
object 12 is create **d**

It is necessary to **d**

constructor::const **r**

and default argu **m**

construct::constru **c**

The default argu **m**
no arguments it **b**
causes ambiguity

The ambiguity is **w**


**Lab Exercise**

//# Program – D **e**

#include<iostrea **m**

using namespace **s**

class constructor{

private:

intx,y;

public:

constructor(){

x=10;

y=90;

cout<<"Sum of x **a**

}

};

int main(){

constructor c;

return 0;



principal and year of object i1 are initialized to 1000 **a**

i1 is created. The data member rate takes the default



nd 2 respectively at the



value 10 whereas when the



, principal, year and rate are initialized to 1000, 2 and



15 respectively.



istinguish between the defaults



uct();



ent constructor



t(int = 0)



ent constructor can be called with one or no argume **n**
ecomes a default constructor. But when both these **f**
for a declaration like construct C1;



ts. When it is invoked with
orms are used in a class, it



hether to invoke construct: : construct ( ) or construc **t** : : construct (int=O)



hether to invoke construct: : construct ( ) or construc **t**



fault constructor







td;



nd y is :"<<x+y;



**150** **Lovely Professional University**


_**Notes**_



_**ctors**_



}


**Output**


**Lab Exercise**

**// Program –Parameterizedconstructor**

#include<iostream>

using namespace std;

class constructor{

private:

intx,y;

public:

constructor(inta,int b){

x=a;

y=b;

cout<<"Sum of x and y is :"<<x+y;

}

};

int main(){

constructor c(15,52);

return 0;

}

**Output**


**Lab Exercise**

**// Program – Copy Constructor**


#include<iostream>

using namespace std;

classcopyconstructor

{

private:

int x, y;



_**Unit 11: Constructors and Destru**_


**.**



**Lovely Professional University** **151**


_**Notes**_



_**Object Oriented P**_

public:

copyconstructor(i **n**

{

x = x1;

y = y1;

}

copyconstructor ( **c**

{

x = sam.x;

y = sam.y;

}


void display()

{

cout<<x<<" "<<y **<**

}

};

int main()

{



_**rogramming**_



t x1, int y1)



onstcopyconstructor&sam)



<endl;



copyconstructor **o** bj1(10, 15);

copyconstructor **o** bj2 = obj1;



cout<<"Construct **o**

obj1.display();

cout<<"Copy con **s**

obj2.display();

return 0;

}

**Output**


**Lab Exercise**

**// Program – Dyna**



r : ";



tructor : ";



**mic Constructor**



#include <iostrea **m**

using namespace **s**

class demo {

int* p;




 


td;



**152** **Lovely Professional University**


_**Notes**_



_**Unit 11: Constructors and Destru**_


uctors that assign the fields in different ways.



_**ctors**_



public:

demo()

{

p = new int;

*p = 500;

}

void display()

{

cout<<"Dynamic constructor"<<endl;

cout<< *p <<endl;

}

};

int main()

{  demoobj = demo();

obj.display();

return 0;

}

demo()

{

p = new int;

*p = 500;

}


demo(int a)

{

p = new int;

*p = a;

}


**Output**


**11.7** **Constructor overloading**


  - A class can have multiple const **r**




- Overloaded constructors have

arguments.



the same name as class name but the different num **b** er of




- A constructor is called dependi **n**



g upon the number and type of arguments passed.



**Lovely Professional University** **153**


_**Notes**_



_**Object Oriented P**_

  - While c **r**

construc **t**

//Program

#include<iostrea **m**

using namespace **s**

class demo{

intx,y;

public:

demo(){

x=10;

cout<<"X is ="<< **x**


}

demo(inta,int b){

x=a;

y=b;

cout<<"Sum of x **a**

}

};

main(){

demo d1,d2(90,59 **)** ;

}


**Output**



_**rogramming**_

eating the object, arguments must be passed to **l**

or needs to be called.



**l** et compiler know, which







td;



<<endl;



nd y is"<<x+y;



;



**11.8** **Destruct**

Constructors crea
members to app **r**
destructor does j **u**
memory.

A destructive met **h**



**ors**



od has the following characteristics:



te an object, allocate memory space to the data me **m**

opriate values; at the time of object creation. Anot **h**

st the opposite when the program creating an obje **c**



bers and initialize the data

er member method called
t exits, thereby freeing the



1. Name of t **h**

2. The destru

3. It does not



e destructor method is the same as the name of the cl **a**



ss preceded by a tilde (~).



ctor method does not take any argument.



return any value.



The following co **d** es snippet shows the class student with the destructor



method;



**154** **Lovely Professional University**


_**Notes**_



_**Unit 11: Constructors and Destructors**_



**Example**

#include <iostream>

using namespace std;

class student

{

public:

student()

{

cout<<"Constructor Invoked"<<endl;

}

~student()

{

cout<<"Destructor Invoked"<<endl;

}

};

int main()

{

student s1;

return 0;

}


**Summary**


  - A constructor is a member fun **c**



tion of a class, having the same name as its class and **w** hich



tion of a class, having the same name as its class and **w**



is called automatically each tim **e** an object of that class it created.




- It is used for initializing the **m**



ember variables with desired initial values. A va **r**



iable



(including structure and array **t**

its declaration.



ype) in C++ may be initialized with a value at the ti **m** e of



ype) in C++ may be initialized with a value at the ti **m**




- The responsibility of initializati **o**



n may be shifted, however, to the compiler by inclu **d**



ing a



member function called constr **u** ctor.




- A class constructor, if defined, **i**



s called whenever a program created an object of that



class.



Constructors are public membe **r** unless otherwise there is a good reason against.




- A constructor may take argum **e**

default constructor.

- A constructor may also have p **a**



nt (s). A constructor may take no argument(s) is kno **w** n as



nt (s). A constructor may take no argument(s) is kno **w**



t the



rameter (s) or argument (s), which can be provided **a**



time of creating an object of tha **t** class.




- C++ classes are derived data t **y**

called whenever an instance of **s**

- If a constructor is called wit **h**



pes and so they have constructor (s). Copy constructor is



pes and so they have constructor (s). Copy construc



error



ame type is assigned to another instance of the same **c** lass.



ame type is assigned to another instance of the same **c**



a smaller number of arguments than required an



occurs. Every time an object is **c** reated its constructor is invoked.




- The functions that is automatic **a**



lly called when an object is no more required is kno **w** n as



lly called when an object is no more required is kno **w**



destructor. It is also a member

intent.



function very much like constructors but with an op **p** osite


**Lovely Professional University** **155**


_**Notes**_



_**Object Oriented Programming**_

**Keywords**

**Constructor** : A member function having the same name as its class and that initializes class objects
with legal initial values.

**Copy Constructor:** A constructor that initializes an object with the data values of another object.

**Default Constructor** : A constructor that takes no arguments.

**Destructor:** A member function having the same name as its class but preceded by ~ sign and that
deinitializes an object before it goes out of scope.


**SelfAssessment**

1. Which of the followings is/are automatically added to every class, if we do not write our
own?
A. Copy Constructor
B. Assignment Operator
C. A constructor without any parameter
D. All of the above


2. What will be output of following program?

#include<iostream>


using namespace std;


class Point {


Point() { cout<< "Constructor called"; }


};


int main()


{


Point t1;


return 0;


}


A. Compiler Error
B. Runtime Error
C. Constructor called
D. None of Above


3. Which of the following gets called when an object is being created?
A. Constructor
B. Virtual Function
C. Destructors
D. Main


4. Can we define a class without creating constructors?
A. True
B. False


5. What will be output of following program?

#include<iostream>


using namespace std;


class demo{


public:


**156** **Lovely Professional University**


_**Notes**_



_**Unit 11: Constructors and Destructors**_

intf_num,s_num;


sum(inta,int b){


cout<<a+b;


}


};


main(){


demo d1;


d1.sum(d1.f_num=10,d1.s_num=20);


return 0;


}


A. 49
B. 50
C. 30
D. 10


6. Which constructor function is designed to copy object of same class type?
A. Copy constructor
B. Create constructor
C. Object constructor
D. Dynamic constructor


7. Allocation of memory to objects at the time of their construction is known as ……………. of
objects.
A. Run time construction
B. Dynamic construction
C. Initial construction
D. Memory allocator


8. If new operator is used, then the constructor function is
A. Parameterized constructor
B. Copy constructor
C. Dynamic constructor
D. Default constructor


9. Which among the following best describes constructor overloading?
A. Defining one constructor in each class of a program
B. Defining more than one constructor in single class
C. Defining more than one constructor in single class with different signature
D. Defining destructor with each constructor


10. Does constructor overloading include different return types for constructors to be

overloaded?
A. Yes, if return types are different, signature becomes different
B. Yes, because return types can differentiate two functions
C. No, return type can’t differentiate two functions
D. No, constructors doesn’t have any return type


11. Which among the following is possible way to overload constructor?
A. Define default constructor, 1 parameter constructor and 2 parameter constructor
B. Define default constructor, zero argument constructor and 1 parameter constructor
C. Define default constructor, and 2 other parameterized constructors with same signature
D. Define 2 default constructors


12. Which is executed automatically when the control reaches the end of the class scope?
A. Constructor
B. Destructor


**Lovely Professional University** **157**


_**Notes**_



_**Object Oriented Programming**_



C. Overloadi **n** g
D. Copy cons **t** ructor



13. The specia **l** character related to destructor is ___
A. +
B. !
C. ?
D. ~



14. A destruct **o**
A. Class
B. Object
C. Construct **o** r
D. Destructor



r is used to destroy the objects that have been created



by a ………………..



r



15. ………… **…**

dependin **g**
A. Dynamic i **n**
B. Run time i **n**
C. Static initi **a**
D. Variable i **n**



….. Provides the flexibility of using different f **o**
upon the situation.



rmat of data at runtime



itialization
itialization
lization
itialization



**Answers for Self Assessment**


1. D 2. A 3. A 4. A 5. **C**


6. A 7. B 8. C 9. C 10. **D**



11. A 1 **2** . B 13. D 14. C 15. **A**



**Review Questions**



1. Write a pr **o** gram to calculate prime number using constructor.



1. Write a pr **o**

2. Is there an **y**

3. Can one c **o**



difference between obj x; and objx();? Explain.



nstructor of a class call another constructor of the sa **m** e class to initialize the this



nstructor of a class call another constructor of the sa **m**



object? Jus **t** ify your answers with an example.



4. Should m **y**

5. Explain co **n**



constructors use “initialization lists” or “assignment”



? Discuss.



structor and different types of constructor with suita **b** le example.



structor and different types of constructor with suita **b**



6. Write a pr **o** gram that demonstrate working of copy constructor.



7. What abo **u**



t returning a local variable by value? Does the local **e**



xist as a separate object, or



does it get optimized away?



**Further**


- E Ba **l**

- Her **b**

- Obje **c**



**Readings**



agurusamy; Object Oriented Programming with C++;



Tata McGraw-Hill.



ert Schildt; The Complete Reference C++; Tata McGra **w**



Hill. Robert Lafore;



t-oriented Programming in Turbo C++; Galgotia.



**Web Lin**


- http **s**

- ww **w**



**ks**



://en.wikipedia.org/wiki/Object-oriented_program **m** ing



://en.wikipedia.org/wiki/Object-oriented_program **m**



.web-source.net



**158** **Lovely Professional University**


_**Notes**_




- www.webopedia.com



_**Unit 11: Constructors and Destructors**_


**Lovely Professional University** **159**


_**Unit 12: More on Constructors and Destru**_

_**nal University**_



_**ctors**_



_**Notes**_



_**Prikshat Kumar Angra, Lovely Professio**_


##### **Unit 12: More on Constructors and Destructors**



**CONTENTS**

Objectives

Introduction

12.1 Default Arguments

12.2 Constructors with Default Argu **m**

12.3 Dynamic initialization of objects

12.4 Destructor

Summary

Keywords

Self Assessment

Answers for Self Assessment

Review Questions

Further Readings

**Objectives**



ents



in C++



After studying this unit, you will be abl **e** to:




- Understand constructors with defa **u** lt arguments in C++.

- Analyze default arguments

- Discuss thedestructors




 - Understand dynamic initializing o **f** objects


**Introduction**



When an object is created all the mem **b**
has its individual copy of member v **a**
automatically. If left uninitialized these **m**
that the data members are initialize **d**
Conventional methods of initializing d **a**
learn alternative and more elegant ways

When a C++ program runs it invaria **b**
program exits the objects must be destro **y**



ers of the object are allocated memory spaces. Each **o**

riables. However, the data members are not initi **a**

**m** embers contain garbage values. Therefore, it is imp **o**

to meaningful values at the time of object cre **a**

ta members have lot of limitations. In this unit yo **u**
initializing data members to initial values.

ly creates certain objects in the memory and whe **n**



bject
lized
rtant

tion.
will



the
use.

and



ed so that the memory could be reclaimed for furthe **r**



C++ provides mechanisms to cater to t **h**
destructors methods.


**12.1** **Default Arguments**

A default argument is a value provided
the compiler if the caller of the functio **n**
value.



e above two necessary activities through constructor **s**



in a function declaration that is automatically assign **e**
doesn’t provide a value for the argument with a d **e**



d by
fault



**Example**


#include<iostream>

using namespace std;


**160** **Lovely Professional University**


_**Notes**_
_**Object Oriented Programming**_



int sum(int a,int b **,** int c=0,int d=0)

{



return(a+b+c **+** d);



}

int main(){

cout<<sum(10,20)

cout<<sum(35,65, **2**

return 0;

}

Output



<<endl;



5)<<endl;



_**Default argument**_
_**whereas default ar**_



_**s are different from constant arguments as constant a**_



_**rguments can’t be changed**_



_**guments can be overwritten if required.**_



**12.2** **Constru**

Default argument


**Example**



**ctors with Default Arguments**



s of the constructor are those which are provided in th



e constructor declaration.



#include <iostrea **m** 
#include <string **>**



using namespace **s**

class demo{

int a,b,c;

public:

demo(int x,int y, i **n**

a=x;

b=y;

c=z;

}



td;



t z=0){



void display_su **m**

};

void demo::displ **a**

cout<<"Sum is "< **<**

}

int main() {

demo d(20,85);

demo d1(35,85,96 **)** ;

d.display_sum();



();



y_sum(){



a+b+c <<endl;



;



**Lovely Professional University** **161**


_**Unit 12: More on Constructors and Destru**_


**f objects in C++**


d during runtime then it is called dynamic initializati **o**



_**ctors**_



_**Notes**_



d1.display_sum();

return 0;

}

Output


**12.3** **Dynamic initialization o**




- When the initial values are provid **e**

- It's possible to do so by using const **r**

- When there are several construct **o**

handy.

- The memory is allocated at runt **i**



n.



s de


uctors and passing parameters to them.



rs of the same class with different inputs, this co **m** es in



rs of the same class with different inputs, this co **m**



me using a new operator and similarly, memory i



allocated at runtime using the dele **t** e operator.


**Example**


#include <iostream>

using namespace std;

class demo {

int* ptr;

public:

demo()


{

ptr = new int **;**

*ptr = 100;



}

void display()


{

cout << "Value in pointer: " << *****



ptr

ndl;



<< **e**



}

};

int main()

{

demo* obj1 = new demo();

obj1->display();

delete obj1;


**162** **Lovely Professional University**


_**Notes**_
_**Object Oriented Programming**_

return 0;



}

Output


**12.4** **Destructor**




- Destructor i **s**

- It can be def **i**



a member function which destructs or deletes an obj **e**

ned only once in a class. Like constructors, it is invok **e**



ct.



d automatically.



The following co **d**

#include <iostrea **m**

using namespace **s**

class Calculator

{

public:

int *num1;

int *num2;

Calculator(int ide **n**

{

num1 = new int;

num2 = new int;

```
*num1 =ident1;
*num2 =ident2;
```

}

~Calculator()

{

delete num1;

delete num2;

}

int add(){

int sum=*num1+* **n**

return sum;

}

};

int main()

{

Calculator myObj **e**

int result = myOb **j**



e illustrates the use of a destructor against dynamic o **b** jects:



e illustrates the use of a destructor against dynamic o **b**




 


td;



t1, int ident2)



um2;



ct(20,20);



ect.add();



**Lovely Professional University** **163**


_**Unit 12: More on Constructors and Destructors**_



_**Notes**_



cout << result;

return 0;

}



The destructor function is automatically
needs the object. If you defined a destru **c**
did not define a destructor function, C **+**
you. However, this default destructor w **i**



called, without you knowing, when the program no l **o**
tor function as in the above code, it will be executed. **I**
+ supplies you one, which the program uses unkno **w**
ll not destroy dynamic objects.



nger
f you



n to



_**Notes**_ **:** An object is destroyed as it goes out of scope.


Program to see how Constructo **r** and Destructor are called.



class A

{

// constructor

A()

{

cout << "Constructor called";

}

// destructor

~A()

{

cout << "Destructor called";

}

};

int main()

{

A obj1; // Constructor Called

int x = 1

if(x)

{

A obj2; // Constructor Called

} // Destructor Called for obj2

} // Destructor called for obj1
Output:
Constructor called

Constructor called

Destructor called

Destructor called

**Difference between Constructor and**



**Destructor in C++**



|Constructors|Destructors|
|---|---|
|The constructor initializes the class a**n**<br>d allots|If the object is no longer required,<br>then|


**164** **Lovely Professional University**




_**Notes**_



















|Object Oriented Programming|Col2|
|---|---|
|the memory to an object.|destructors demolish the objects.|
|When the object is created, a constructor is<br>called automatically.|When<br>the<br>program<br>gets<br>terminated,<br>the<br>destructor is called automatically.|
|It receives arguments.|It does not receive any argument.|
|A constructor allows an object to initialize some<br>of its value before it is used.|A destructor allows an object to execute some<br>code at the time of its destruction.|
|It can be overloaded.|It cannot be overloaded.|
|When it comes to constructors, there can be<br>various constructors in a class.|When it comes to destructors, there is constantly<br>a single destructor in the class.|
|They are often called in successive order.|They are often called in reverse order of<br>constructor.|


**Summary**


 - A constructor is a member function of a class, having the same name as its class and which is

called automatically each time an object of that class it created.

 - It is used for initializing the member variables with desired initial values. A variable

(including structure and array type) in C++ may be initialized with a value at the time of its

declaration.

 - A constructor may take argument (s). A constructor may taking no argument(s) is known as

default constructor.

 - A constructor may also have parameter (s) or argument (s), which can be provided at the time

of creating an object of that class.

 - C++ classes are derived data types and so they have constructor (s). Copy constructor is called

whenever an instance of same type is assigned to another instance of the same class.

 - If a constructor is called with less number of arguments than required an error occurs. Every

time an object is created its constructor is invoked.


**Keywords**

**Constructor** : A member function having the same name as its class and that initializes class objects
with legal initial values.

**Default Constructor** : A constructor that takes no arguments.

**Destructor:** A member function having the same name as its class but preceded by ~ sign and that
reinitializes an object before it goes out of scope.


**SelfAssessment**


1. What are default arguments?

A. Arguments which are not mandatory to be passed

B. Arguments with default value that aren’t mandatory to be passed

C. Arguments which are not passed to functions

D. Arguments which always take same data value


**Lovely Professional University** **165**


_**Unit 12: More on Constructors and Destructors**_

2. The Constructors with all the default arguments are similar as default constructors. State

true or false.

A. True

B. False

C. May be

D. Can't say


3. Choose the right observation from the following?

A. The constructors overloading can be done by using different names

B. The constructors overloading can be done by using different return types

C. The constructors can be overloaded by using only one argument

D. The constructors must have same name as that of class.


4. How destructor overloading is done?

A. By changing the number of parameters

B. By changing the type of parameters

C. No chance for destructor overloading

D. None of above


5. A constructor that accepts __________ parameters is called the default constructor.

A. 1

B. 2

C. 3

D. 0


6. What would be the output of following code

#include <iostream>

using namespace std;

class C{

private:

C(){


cout<<"This is a constructor";

}


};

int main() {


C obj;

return 0;

}


A. This is a constructor


**166** **Lovely Professional University**



_**Notes**_


_**Notes**_
_**Object Oriented Programming**_

B. 0

C. 1

D. Compile time error


7. Which constructor function is designed to copy objects of the same class type?

A. Create constructor

B. Object constructor

C. Dynamic constructor

D. Copy constructor


8. Which is executed automatically when the control reaches the end of the class scope?

A. Constructor

B. Destructor

C. Overloading

D. Copy constructor


9. The special character related to destructor is ___

A. +

B. !

C. ?

D. ~


10. A destructor is used to destroy the objects that have been created by a ………………..

A. Class

B. Object

C. Constructor

D. Destructor


11. ……………….. Provides the flexibility of using different format of data at runtime

depending upon the situation.

A. Dynamic initialization

B. Run time initialization

C. Static initialization

D. Variable initialization


12. Destructors __________ for automatic objects if the program terminates with a call to

function exit or function abort

A. Are inherited

B. Are created

C. Are called

D. Are not called


**Lovely Professional University** **167**


_**Unit 12: More on Constructors and Destru**_

m following for the destructors concept?



_**ctors**_



_**Notes**_



13. Choose the right observation fr **o**

A. Destructors can be overloaded

B. Destructors can have only one **p**

C. Destructors are always called a **f**

D. There can be only one destruct **o**


14. What is actual syntax of destru **c**

A. !Classname( )

B. @Classname( )

C. $Classname( )

D. ~Classname( )



arameter at maximum



ter object goes out of scope



r in a class


tor in c++?



15. Can a class have virtual destru **c** tor?

A. Yes

B. No

C. Sometimes

D. Can’t say


**Answers forSelfAssessment**


1. B 2. A 3. **D**


6. D 7. D 8. **B**


11. A 12. D 13. **D**


**Review Questions**


1. What do you mean by constructor?



4. C 5. D


9. D 10. C


14. D 15. A



2. What are used of destructor in pro **g**

3. Differentiate between constructor **a**

4. Write a program that demonstrate **s**

5. What is destructor? Explain using **p**


**Further Readings**



ram?



nd destructors.



working of default arguments.



rogram.




- E Balagurusamy; Object Ori **e** nted Programming with C++; Tata Mc Graw-Hill.




- E Balagurusamy; Object Ori **e**

- Herbert Schildt; The Compl **e**

- Object-oriented Programmi **n**


**Web Links**


- https://en.wikipedia.org/ **w**

- www.web-source.net

- www.webopedia.com



te Reference C++; Tata Mc Graw Hill. Robert Lafore;



g in Turbo C++; Galgotia.



iki/Object-oriented_programming



**168** **Lovely Professional University**


_**Prikshat Kumar Angra, Lovely Professional University**_ _**Unit 13: Inheritance**_



_**Notes**_


##### **Unit 13: Inheritance**



**CONTENTS**

Objectives

Introduction

13.1 Defining Derived Class

13.2 Modes of Inheritance

13.3 Types of Inheritance in C++

13.4 Making a Private Member Inher **i**

Summary

Keywords

Self Assessment

Answers for Self Assessment

Review Questions

Further Readings

**Objectives**

After studying this unit, you will be abl **e**


 - Recognize the inheritance



**i** table



to:




- Describe the different types of inhe **r** itance




 - Analyze and Explain making priva **t**


**Introduction**

The ability to reuse code is a key eleme **n**
C++. The C++ classes can be reused in a
has been written and tested. The prope **r**
classes.

INHERITANCE is the process of creati **n**
the defined class "is" also an object of th **e**
A" relationship. The previous class is kn **o**
the 'DERIVED' class or sub-class.



**t** e member inheritable



t of OOP. The concept of reusability is highly suppor **t**
variety of ways. Other programmers can use a class o **n**

ties Notes of existing classes can be reused to creat **e**



ed in

**n** ce it

new



g a new class from an existing one. Because every obj **e**



inherited class type, this is sometimes referred to as



ct of
a "IS


n as



wn as the 'BASE' class, whereas the new class is kno **w**



**Notes**


- The capability of a class to derive

Inheritance.



properties and characteristics from another class is **c** alled



properties and characteristics from another class is **c**




 - Inheritance is a process in which **o**

parent object automatically


**13.1** **Defining Derived Class**

A derived class is specified by defini **n**
owndetails. The general syntax of defini **n**

class derivedclassname :access_specifier **b**



ne object acquires all the properties and behaviours



of its



g its relationship with the base class in addition **t**



g a derived class is as follows:




- its



aseclassname



**Lovely Professional University** **169**


_**Notes**_
_**Object Oriented Programming**_


{

……



…… // members

}

The colon (:) indi **c**
access_specifier **o**
protected. By de **f**
features. For exa **m**

class xyz //base **c**

{

//members of xy **z**

};



of derivedclass



ates that the derivedclassname class is derived from t **h**
r the visibility mode is optional and, if present, **m**
ault it is private. Visibility mode describes the acc



e baseclassname class. The



ple,

lass



**m** ay be public, private or

essibility status of derived



class ABC: public

{

//members of A **B**

};

class ABC : XYZ **/**

{

//members of A **B**

};



xyz //public derivation



C



/private derivation (by default)



C



In inheritance, so **m**
derived class and
the functionality **o**



**m** e of the base class data elements and member fun **c**

some are not. We can add our own data and membe **r**
f the base class.



tions are inherited into the

**r** functions and thus extend



**13.2** **Modes o**

Inheritance Mode **s**


1. Public Mod **e**

2. Private Mod **e**

3. Protected M **o**


**Public Mode**

If we derive a su **b**
become public in
in derived class.



**f Inheritance**

:


de



**b** class from a public base class. Then the public m **e**

the derived class and protected members of the base



mber of the base class will
class will become protected



**Private Mode**


**170** **Lovely Professional University**


_**Unit 13: Inheritance**_



_**Notes**_



If we derive a sub class from a Private b **a**
of the base class will become Private in **d**



se class. Then both public member and protected me **m**
erived class.



bers



**Protected Mode**



If we derive a sub class from a prote **c**
members of the base class will become p **r**



ted base class. Then both public member and prot



otected in derived class.



ected



Did you know?

**What are the advantages of inheritance?**



Inheritance offers the following advanta **g**

Development model closer to real life o **bj**



es:



ect model with hierarchical relationships



**Reusability —** facility to use public met **h**

**Extensibility —** extending the base class

**Data hiding** **—** base class can decide to
derived class.



ods of base class without rewriting the same



logic as per business logic of the derived class



keep some data private so that it cannot be altered **b** y the



keep some data private so that it cannot be altered **b**



**13.3** **Types of Inheritance in C**


**Single Inheritance**

When a class inherits from a single base **c**



**++**



lass, it is referred to as single inheritance.



Following program shows working of si **n** gle inheritance.


Example


#include <iostream>

using namespace std;

class base

{

public:

int x;

void getdata()

{

cout<< "Enter the value of x = "; cin>> x;

}


**Lovely Professional University** **171**


_**Notes**_
_**Object Oriented Programming**_


};



class derive : pub **l**

{

private:

int y;

public:

void readdata()

{

cout<< "Enter the

}

void product()

{

cout<< "Product **=**

}

};

int main()

{

derive a;

a.getdata();

a.readdata();

a.product();

return 0;

}

Output



ic base



value of y = "; cin>> y;



" << x * y;



**Multiple Inheri**

When a class inhe



**tance**



rits from a two base classes, it is referred to as multipl **e**



inheritance.



Following progra **m**


Example



shows working of multiple inheritance.



**172** **Lovely Professional University**


_**Unit 13: Inheri**_



_**tance**_



_**Notes**_



#include<iostream>

using namespace std;

class A

{

public:

int x;

void get_data()

{

cout<< "enter value of x: ";

cin>> x;

} };

class B

{ public:

int y;

void get_data1()

{

cout<< "enter value of y: "; cin>

}   };

class C : public A, public B

{

public:

void sum()

{

cout<< "Sum = " << x + y;

}

};

int main()

{

C obj;

obj.get_data();

obj.get_data1();

obj.sum();

return 0;

} //end of program

Output


**Multilevel Inheritance**




- y;


**Lovely Professional University** **173**


_**Notes**_
_**Object Oriented Programming**_



If a class is derive **d** from another derived class then it is called multilev **e**



l inheritance.



Class A

{

//body

}

Class B : public A

{

//body

}

Class C : public B

{

//body

}



Following progra **m** shows working of multilevel inheritance.


Example



#include<iostrea **m**

using namespace **s**

class A{

public:

int marks;

void get_data() **{**







td;



cout<<"Enter Ma **r** ks";

cin>>marks;

}

};



class B:public **A**

{

public:


**174** **Lovely Professional University**


_**Unit 13: Inheritance**_



_**Notes**_



int show_data(){

cout<<"Entered Marks: " <<marks;

}

};

class C:public B{

};

main(){

C obj;

obj.get_data();

obj.show_data();

}

Output


**Hierarchical Inheritance**



Hierarchical inheritance is a kind of i **n**
single parent or base class. Especially t **h**
common with the base class.



heritance where more than one class is inherited fr **o**

ose features which are common in the parent class i **s**




**o** m a

also



Following program shows working of h **i** erarchical inheritance.


Example


#include<iostream>

using namespace std;

class A

{

public:

int x,y;


**Lovely Professional University** **175**


_**Notes**_
_**Object Oriented Programming**_


void get_data()

{

cout<< "Enter value of x: ";

cin>> x;

cout<<"Enter value of y: ";

cin>>y;

}

};

class B:public A

{

public:

void show_sum()

{

cout<< "Sum of x and y is : "<<x+y<<endl;

}

};

class C : public A

{

public:

void show_product()

{

cout<< "Product of x and y is : "<<x*y;

}

};

int main()

{   B obj1;

C obj2;

obj1.get_data();

obj1.show_sum();

obj2.get_data();

obj2.show_product();

return 0;

}

Output


**176** **Lovely Professional University**


_**Unit 13: Inheri**_



_**tance**_



_**Notes**_



**Hybrid Inheritance**



There could be situations where we ne **e**
program. Basically Hybrid Inheritance i **s**

Here is one implementation of hybrid
more types of inheritance. It is also kno **w**



d to apply two or more types of inheritance to des
the combination of one or more types of the inheritan **c**

inheritance. Hybrid inheritance is combination of t **w**



ign a



e.



n as multipath inheritance.




- or



Following program shows working of h **y** brid inheritance.


Example


#include <iostream>

using namespace std;

class A

{

public:

int x;

};

class B : public A

{

public:

B()

{

x = 500;

}

};

class C


**Lovely Professional University** **177**


_**Notes**_
_**Object Oriented Programming**_


{

public:

int y;

C()

{



y = 10 **0** ;



}

};

class D : public B, public C

{

public:



void su **m**

{

cout<< " **S**

}



()



um= " << x + y;



};

int main()

{

D obj1;

obj1.su **m** ();

return 0;

}

Output



**13.4** **Making**

The members of
determined by vi **s**

**1. Private:** When **a**
class become pri **v**
class can be acce
member of base c **l**

**2. Public:** On the **o**
class become ‘pu **b**
derived class.



**a Private Member Inheritable**



base class which are inherited by the derived cla **s**
ibility modes. Visibility modes are:

base class is privately inherited by a derived class, ‘ **p**
ate members of the derived class and therefore the
ssed by its own objects using the dot operator. Th **e**



s and their accessibility is



ublic members’ of the base
publicmembers of the base



ass that is accessible to the objects of thederived class.



result is that we have no



ther hand, when the base class is publicly inherited, **‘**
lic members’ of derived class and therefore they are a **c**



public members’ ofthe base

cessibleto the objects of the



**3. Protected:** C++
inheritance. A m **e**
and any class im **m**
classes.



provides a third visibility modifier, protected, whic **h**
mber declared as protected is accessible by the mem **b**



ediately derived from it. It cannot be accessed by



serve a little purposein the

er functionswithin its class
functionsoutside these two



**178** **Lovely Professional University**


_**Unit 13: Inheritance**_


Private derivation means that the base class has been inherited privately. Public members and
protected members of the base class are private within the derived class.Private members of the
base class stay private within the base class.

Syntax

class base_class_name

{

----
----
}

class derived_class_name : private base_class_name

{

---
---
}


// Program

#include<iostream>

using namespace std;

class emp{

private:

int id;

char name[10];

int salary;

void get_data(){

cout<<"Enter Id,Name and Salary of employee"<<endl;

cin>>id>>name>>salary;


}

public:

void disp(){

get_data();

cout<<"Details are"<<endl;

cout<<"Emp ID  "<< id<<endl<<"Emp Name "<<name <<endl<<"Emp Salary "<<salary;

}

};

main(){

emp obj;

obj.disp();

}

Output


**Lovely Professional University** **179**



_**Notes**_


_**Notes**_
_**Object Oriented Programming**_


**Summary**



Inheritance is the **c**

It supports reus **a**
Inheritance has **m**
multilevel inherit **a**

A subclass can **d**
responsible for i **n**
public and protec **t**

When a class inhe

A class may cont **a**
in such a situatio **n**
enclosing class.

Single Inheritanc **e**

Multilevel Inheri **t**
derived class B w **h**
called ‘Multilevel

Multiple Inherita **n**
as Multiple Inher **i**

Hybrid Inheritan **c**


**Keywords**

**Abstract Class** : **A**
created.

**Base class:** A clas **s**
relationship of tw **o**

**Derived class:** A c **l**

**Inheritance:** Capa **b**

**Inheritance Graph**

**Visibility Mode:**
availability of a **m**



apability of one class to inherit properties from anoth



er class.



bility of code and is able to simulate the transitiv **e**

any forms: Single inheritance, multiple inheritan **c**
nce and hybrid inheritance.

erive itself publicly, privately or protected. The **d**
voking the base class constructor, the derived class



nature of real lifeobjects.
e, hierarchical inheritance,



ed members of the base class.



**d** erived class constructoris

can directly accessonly the



rits from more than one base class, this is called multi **p** le inheritance.



rits from more than one base class, this is called multi **p**

in objects of another class inside it. This situation is **c**



alled nesting of objects and



, the contained objects areconstructed first before co **n**



structing the objects of the



: Where a class inherits from a single base class, it is k **n**

ance: When the inheritance is such that the class. A

ich is turn serves as a base class for the derived class **C**
Inheritance.

ce: A class inherit the attributes of two or more classe **s**
tance.’

e: The combination of one or more types of the inherit **a**



own as singleinheritance.



serves as a base classfor a



. This typeof inheritance is



. This mechanism is known



nce.



class serving only a base class for other classes a **n** d no objects of which are



class serving only a base class for other classes a **n**



from which another class inherits. (Also called sup **e**



r class) Containership: The
ithin the other class.



classes such that the objects of a class are enclosed w



**l** ass inheriting properties from another class. (also call **e**



d sub class).



ility of one class to inherit properties from another cl **a**



ss.



**:** The chain depicting relationship between a base class and derived class.



The public, private or protected specifier that **c**
ember in a class.



ontrols the visibility and



**SelfAssessment**



1. Inherita **n**

A. Class Re **-**

B. Creating

C. Extendi **b**



ce allow in C++ program?

usability

a hierarchy of classes



ility



**180** **Lovely Professional University**


_**Unit 13: Inheritance**_


D. All of above


2. Functions that can be inherited from base class in C++ program.

A. Constructor

B. Destructor

C. Static function

D. None of above


3. A class can inherit properties of another class which is known as …………….. Inheritance.

A. Single

B. Multiple

C. Multilevel

D. Hierarchical


4. What is the syntax of inheritance of class?

A. Class name

B. Class name: access specifer

C. Class name : access specifer class name

D. None of above


5. Members which are not intended to be inherited are declared as________

A. Public members

B. Protected members

C. Private Members

D. Private or protected members


6. While inheriting a class, if no access mode is specified, then which among the following is

true in C++?

A. It gets inherited publicly by default

B. It gets inherited protected by default

C. It gets inherited privately by default

D. It is not possible.


7. How can you make the private members inheritable?

A. By making their visibility mode as public only

B. By making their visibility mode as protected only

C. By making their visibility mode as private in derived class

D. Can be done both by making the visibility mode public or protected


8. What is meant by multiple inheritance?

A. Deriving a base class from derived class

B. Deriving a derived class from base class

C. Deriving a deriving class from more than one base class


**Lovely Professional University** **181**



_**Notes**_


_**Notes**_
_**Object Oriented Programming**_


D. None of above


9. Which symbol is used to create multiple inheritance?

A. Dot

B. Comma

C. Dollar

D. None of the above


10. Which among the following best define multilevel inheritance?

A. A class derived from another derived class

B. Classes being derived from another derived class

**C.** Continuing single level inheritance

**D.** Class which have more than one parent


11. All the classes must have all the members declared private to implement multilevel

inheritance.

A. True

B. False

C. Sometimes true, sometimes false

D. Always false


12. Which among the following is best to defined hierarchical inheritance?

A. More than one classes being derived from one class

B. More than two classes being derived from single base class

C. At most two classes being derived from single base class

D. At most 1 class derived from another class


13. How many classes must be there to implement hierarchical inheritance?

A. Exactly 3

B. At least 3

C. At most 3

D. At least 1


14. Which type of inheritance must be used so that the resultant is hybrid?

A. Multiple

B. Hierarchical

C. Multilevel

D. None of the above


15. What is the minimum number of classes to be there in a program implemented hybrid

inheritance?

A. 2

B. 3


**182** **Lovely Professional University**


_**Unit 13: Inheritance**_



_**Notes**_



C. 4

D. No limit


**Answers for SelfAssessment**


1. D 2. D 3. A


6. C 7. D 8. C


11. B 12. A 13. B


**Review Questions**


1. What do you mean by inherita **n**

example.



4. C 5. C


9. B 10. B


14. D 15. D


ce? Explain different types of inheritance with su **i**



table



2. Consider a situation where three k **i**

an example.

3. What is the difference between pro **t**

4. Scrutinize the major use of multile **v**

5. Discuss a situation in which the p **r**

public derivation.

6. Write a C++ program to read a **n**



nds of inheritance are involved. Explain this situatio **n**



gers.



ected and private members?



with


ed to



el inheritance.



ivate derivation will be more appropriate as compar



d display information about employees and man **a**



Employee is a class that contains e **m**

class and a list of employees worki **n**



ployee number, name, address and department. Ma **n** ager



ployee number, name, address and department. Ma **n**



g under a manager.



7. Differentiate between public and p **r**

8. Explain how a sub-class may inher **i**

9. What is the purpose of virtual base

10. Write a C++ program that demons **t**


**Further Readings**



ivate inheritances with suitable examples.



t from multiple classes.



classes?



rate working of hybrid inheritance.




- E Balagurusamy; Object-ori **e** nted Programming with C++; Tata Mc Graw-Hill.




- E Balagurusamy; Object-ori **e**

- Herbert Schildt; The Compl **e**

- Robert Lafore; Object-orient **e**


**Web Links**


- http://msdn.microsoft.com **/**

- http://www.learncpp.com **/**



te Reference C++; Tata Mc Graw Hill.



d Programming in Turbo C++; Galgotia.



en-us/library/wcz57btd(v=vs.80).aspx



cpp-tutorial/117-multiple-inheritance/



**Lovely Professional University** **183**


_**Prikshat Kumar Angra, Lovely Professional University**_

##### **Unit 14: File Handling**


**CONTENTS**

Objectives

Introduction

14.1 Classes for File Stream Operations

14.2 Creating A File

14.3 Opening a File

14.4 Opening and Closing File

14.5 Detection end-of-file

Summary

Keywords

Self Assessment

Answers for Self Assessment

Review Questions

Further Readings

**Objectives**

After studying this unit, you will be able to:


 - Demonstrate the opening a file

 - Understand C++ Stream classes

 - Explain the processing and closing a file

 - Discuss the detection of end of file


**Introduction**



_**Unit 14: File Handling**_



_**Notes**_



Many real-life problems handle large volumes of data and, in such situations, we need to use some
devices such as floppy disk or hard disk to store the data. The data is stored in these devices using
the concept of files. A file is a collection of related data stored in a particular area on the disk.
Programs can be designed to perform the read and write operations on these files.

A program typically involves either or both of the following kinds of data communication:


 - Data transfer between control unit and the program.

 - Data transfer between the program and a disk file.

This is illustrated in figure.


**184** **Lovely Professional University**


_**Notes**_
_**Object Oriented Programming**_



We have already
unit and the pro **g**
retrieving the dat **a**

C++'s I/O syste **m**
activities. As an i **n**
stream is the one
receives data fro **m**
from the file, whe **r**



discussed the technique of handling data communi **c**
ram. In this chapter, we will discuss various metho **d**



ows how this works.



from files.



ation between the console
s available for storing and



deals with file operations that are quite similar t **o**
terface between the applications and the files, it em **p**
that provides data to the programme, while the ou
the programme. To put it another way, the input **s**
eas the output stream writes data to the file. Figure s **h**



console input and output
loys file streams. The input
tput stream is the one that

tream pulls (or reads) data



The input operati
the input file. S **i**
programme and t **h**



on entails establishing an input stream and connecti **n**

milarly, setting up an output stream with the a **p**



g it to the programme and



e output file is part of the output procedure.



propriate linkages to the



_**Notes**_


- Stream class **e**



files and i/o devices. These



s in C++ are used to input and output operations on



classes have



specific features and to handle input and output of th **e**



program.




- The **iostream**



**.h** library holds all the stream classes in the C++ prog **r** amming language.



**.h** library holds all the stream classes in the C++ prog **r**



**Lovely Professional University** **185**


_**Unit 14: File Handling**_



_**Notes**_



**14.1** **Classes for File Stream O**

The file handling techniques are define **d**
and (stream) are a few examples. As
fstreambase and the matching tostrea **m**
declared in (stream, and as a result, ever **y**



**perations**



by a set of classes in C++'s I/O system. Ifstream, ofst **r**

illustrated in Figure, these classes are generated
class. These classes, designed to manage disc file **s**



programme that uses files must include this file.



eam,
from

, are



Details of file stream classes listed in foll **o** wing table.



_**Did you know?**_

What is Stream in C++?


- A stream is nothing but a flow of d **a**

- In the object-oriented program **m**



ta.



ing, the streams are controlled using the classes. The



ing, the streams are controlled using the classes.



operations with the files mainly co **n** sist of two types. They are read and write.




- C++ provides various classes, to p **e**

- Each stream is associated with a

definitions for dealing with that pa **r**

- The stream that supplies data to t **h**



rform these operations.



particular class, which contains member function **s**

ticular kind of data flow.



and



e program in known as an input stream. It reads th **e** data



e program in known as an input stream. It reads th **e**



from the file and hands it over to t **h** e program.




 - The stream that receives data fro **m**

received data to the file.

**Benefits of Stream Classes**



the program is known as an output stream. It writ **e**



s the




- The ios class: The ios class is res **p**

other stream classes.

- The istream class: This class is res **p**



onsible for providing all input and output facilities **t** - all



onsible for providing all input and output facilities **t**



onsible for handling input stream. It provides num **b** er of



onsible for handling input stream. It provides num **b**



function for handling chars, string **s**

**Classes for File Stream Operation**


 - Files are dealt mainly by using thr **e**

**ofstream:** This Stream class signifies the
information to files

**ifstream:** This Stream class signifies th **e**
from files

**fstream:** This Stream class can be used f **o**



and objects such as get, getline, read, ignore, putback



etc.



e classes fstream, ifstream, ofstream.

output file stream and is applied to create files for w **r**



iting



input file stream and is applied for reading infor **m** ation



input file stream and is applied for reading infor **m**



r both read and write from/to files.



**186** **Lovely Professional University**


_**Notes**_
_**Object Oriented Programming**_



**File Stream Classes**



**14.2** **Creating**

We create a file **b**
reading, writing, **a**



**A File**



y specifying new path of the file and mode of o **p**
ppending and truncating.



eration. Operations can be



Syntax

FilePointer.open( **"** Path",ios::mode);


Example



#include<iostrea **m**

#include <fstrea **m**

using namespace **s**

int main()

{

fstreamst;

st.open("test.txt",i **o**

if(!st)

{

cout<<"File creati **o**

}

else

{











td;



s::out);



n failed";



cout<<"New file **c**

st.close();

}

return 0;



reated";


**Lovely Professional University** **187**


_**Unit 14: File Handling**_



_**Notes**_



}

Output


**14.3** **Opening a File**



The example programs listed above are **i**
in many ways. These methods are descri **b**

ifstreamfilename(“filename <with path>



ndeed very simple. A data file can be opened in a pro



ed below.



gram



”); Or ofstream filename(“filename <with path>”);



This is the form of opening an input fil **e** stream and attaching the file “filename with path” i **n**
single step. This statement accomplishes a number of actions in one go:



This is the form of opening an input fil **e**
single step. This statement accomplishes

1. creates an input or output file stream

2. Looks for the specified file in the file s **y**

3. Attaches the file to the stream if the s **p**

The pointer is set to the initial location i **f**
name can be used to access the creat **e** d
searched in that directory; otherwise, th **e**
found, a new one is generated in case i **t**
while opening a file for output, it is
everything in the file previously.It is
mistakenly overwrite a file. If the file is **n**
to make sure we aren't reading a file th **a**
an error in the application.

ifstream filename;

filename.open(“file name <with path>”) **;**

In this approach the input stream - filen **a**
just created. Once the stream has been
member function of the class ifstream
snippet which defines a function to read

#include <fstream.h>

void read(ifstream&ifstr)

{

char ch;

while(!ifstr.eof())

{

ifstr.get(ch);

cout<<ch;

}

cout<<endl<< “————” <<endl; Note **s**

}

void main()

{

ifstream filename(“data1.dat”);



one



stem



ecified file is found otherwise returns a NULL value.



**f** the file was successfully joined to the stream. The o **b**

d file stream. If a path is supplied, the requested **f**

file is only searched in the current directory. If the fil **e**

's being used for output. If the requested file is ide **n**
truncated before being opened, resulting in the l **o**

important to guarantee that the application doe **s**
ot discovered, a NULL value is given, which we can **c**
t isn't there. If we try to read a file that isn't there, we'



ject's
ile is

isn't
tified
ss of

not
heck
ll get



**a** me - is created but no specific file is attached to thes **t**

created a file can be attached to the stream usingo **p**
or ofstream as is exemplified by the followingpro
an input file.



ream

**p** en()

gram



// file streams can be passed to functions



**188** **Lovely Professional University**


_**Notes**_
_**Object Oriented Programming**_


read(filename);

filename.close();



filename.open(“d **a**

read(filename);

filename.close();

}

ifstreamfilename( **c**

The ifstream func **t**
the mode in whi **c**
each of which p **r**
opening modes a **r**
opening modes.

The ifstream func **t**
the mode in whi **c**
each of which p **r**
opening modes a **r**
opening modes.



ta2.dat”);


har *fname, int open_mode);



ion Object() { [native code] } accepts two parameters **i**
h the input file should be read. C++ has a variety o **f**
ovides distinct forms of reading control over the o **p**

e represented by an enumerated type called ios. Belo **w**



n this form: a filename and
input file opening modes,



ened file. In C++, the file



is a list of the various file



ion Object() { [native code] } accepts two parameters **i**
h the input file should be read. C++ has a variety o **f**
ovides distinct forms of reading control over the o **p**

e represented by an enumerated type called ios. Belo **w**



n this form: a filename and
input file opening modes,



ened file. In C++, the file



is a list of the various file



**14.4** **Opening**

If we want to use
use:



**and Closing File**



a disk file, we need to decide the following things ab **o**



ut the file and its intended



1. Suitable na **m**

2. Data type a **n**

3. Purpose

4. Opening M **e**



e for the file



d structure



thod



The filename is a **s**
contain two parts **,**



tring of characters that make up a valid filename for **t**
a primary, name and an optional period with extensi **o**



he operating system. It may



n. Examples:



Input.data

Test.doc

INVENT.ORY

student

salary



**Lovely Professional University** **189**


_**Unit 14: File Handling**_



_**Notes**_



OUTPUT



As stated earlier, for opening a file, **w**
filename. A file stream can be defined **u**
contained in the header file fttream. **T**
whether we want to read data from the **f**

As stated earlier, for opening a file, **w**
filename. A file stream can be defined
contained in the header file fstream. **T**
whether we want to read data from the **fi**



e must first create a file stream and then link it t **o**

sing the classes ifstream, ofstream, and factream th **a**
he class to be used depends upon the purpose, t **h**
ile or write data to it. A file can be opened in two way **s** :

e must first create a file stream and then link it t **o**
using the classes ifstream, ofstream, and fstream th **a**

he class to be used depends upon the purpose, t **h**

le or write data to it. A file can be opened in two way **s** :




**o** the

t are
at is,



:



:



the
t are
at is,



1. Using the constructor function of t **h**

2. Using the member function open()



e class.



of the class.



The first method is useful when we us **e** only one file in the stream. The second method is
when we want to manage multiple files **u** sing one stream.



The first method is useful when we us **e**
when we want to manage multiple files **u**

**Opening File Using Constructor**

We know that a constructor is used to i **n**
is used to initialize the file stream object.



used



itialize an object while it is being created. Here, a file **n**
This involves the following steps:


nage the stream using the appropriate class. That is t **o**



ame



1. Create a file stream object to m **a**



say,



the class ofstream is used to cr

input stream.



eate the output stream and the class ifstream to crea **t** e the



eate the output stream and the class ifstream to crea **t**



2. Initialize the file object with the desired filename.



For example, the following statement op **e**

ofstreamoutfile("results"); // output onl **y**

This creates outfile as an ofstream obje **c**
valid C++ name such as o_file, myfil **e**
attaches it to the output stream outfile. **T**



ns a file named "results" for output:



t that manages the output stream. This object can b **e**
or Pout. This statement also opens the file result **s**
his is illustrated in Figure.



any
and



Similarly, the following statement decla **r**
for reading (input).

ifstreaminfile("data"); // input only

The program may contain statements lik **e** :

outfile « "TOTAL.;

outfile « sum;

infile » number;

infile>> string;



es infile as an ifstream object and attaches it to the fil **e**



data



:



**190** **Lovely Professional University**


_**Notes**_
_**Object Oriented Programming**_



Lab Exer **c** ise



#include <iostrea **m** 


#include <fstrea **m**

using namespace **s**

int main()

{

ofstream of("dem **o**

of<< "Writing to f **i**

of.close ();

return 0;

}


_**Notes**_







td;



.txt");



**i** le using fstream constructor!" <<endl;



The con **s** tructors of stream classes (ifstream, ofstream, or fstre **a** m) are used to initialize file
stream objects wi **t** h the filenames passed to them.



**Opening File Using open()**



As stated earlier,
object. For examp **l**
a single stream o **b**



the function open() can be used to open multiple fil **e**



s that use the same stream

such cases, we may create
follows:



e, we may want to process a set of files sequentially. I **n**
ject and use it to open each file in turn. This is done as



_**Notes**_


- If the



s, then you need to create a



situation requires simultaneous processing of two fil **e**



separate stream for each file.



Lab Exer **c** ise



#include <iostrea **m** 


#include <fstrea **m** 

**Lovely Professional University** **191**


_**Unit 14: File Handling**_



_**Notes**_



using namespace std;

int main()

{

string text;

ifstreamReadFile("a.txt");

while (getline (ReadFile, text)) {

cout<< text;

}

ReadFile.close();

return 0;

}


**14.5** **Detection end-of-file**



Detection of the end-of-file condition is necessary for preventing any further attempt to rea **d** data
from the file. This was illustrated in Pro **g** ram by using the statement.

while(fin)



An ifstream object, such as fin, returns a
the end-of-file condition. Thus, the w **h**
reaching the end-of-file condition. Reme **m**
(We will discuss other error conditions l **a**



value of 0 if any error occurs in the file operation incl **u**
ile loop terminates when fin returns a value of ze **r**

**m** ber, this loop may terminate due to other failures as

ter.)

nd-of-file condition. Note that we have used the foll **o**



ding

- on
well.



There is another approach to detect the **e**
statement in Program:

if(finl.eof() !. 0) (exit(1);)

eof I is a member function of ion class. I **t**
is encountered. And a zero, otherwise. **T**
reaching the end of the file.



wing



returns a non-zero value if the end-of-file (EOF) con **d**



ition



on



herefore, the above statement terminates the progra **m**



Lab Exercise


**192** **Lovely Professional University**


_**Notes**_
_**Object Oriented Programming**_



**Lab Exercise**



#include <iostrea **m** 


#include <fstrea **m**

using namespace **s**

int main () {

ifstream is("demo **.**

char c;

while (is.get(c))

cout<< c;

if (is.eof())

cout<< "EoF reac **h**

else

cout<< "error rea **d**

is.close();

return 0;

}

Output







td;



txt");



ed";



ing";



**Lovely Professional University** **193**


_**Unit 14: File Han**_


emonstrate process of reading from file in C++.

monstrate process of writing in file.



_**dling**_



_**Notes**_



_**Task**_


Write a program using C++ to **d**

Write a program using C++tod **e**


**Summary**




- The C++ I/O system contains clas **s**



es such as ifstream, ofstream and fatream to deal wi **t** h file



es such as ifstream, ofstream and fatream to deal wi **t**



handling. These classes are derive **d**

iostream.



from fstreambase class and are declared in a head **e**



r file




- A file can be opened in two ways **b**



y using the constructor function of the class and usi **n**



member function open() of the clas **s**

the desired filename as a paramete **r**



. While opening the file using constructor, we need t **o**



g the

pass



to the constructor.




- The open() function can be used t **o**



open multiple files that use the same stream objec **t** . The



open multiple files that use the same stream objec **t**



second argument of the open() fu **n**

file is opened.



ction called file mode, specifies the purpose for which the



ction called file mode, specifies the purpose for whic




- If we do not specify the second ar **g**



ument of the open() function, the default values spe **c** ified



ument of the open() function, the default values spe **c**



in the prototype of these class me **m**

values are as follows:



ber functions are used while opening the file. The d **e** fault



ber functions are used while opening the file. The d **e**




- ios :: in — for ifstream functions, **m**

- ios :: out — for ofstream functions,

- When a file is opened for writing o **n**

If a file by that name already exist **s**

clean file.

- To open an existing file for updati **n**

an append mode.

- The (stream class does not provi **d**



eaning-open for reading only.



e the

e file



meaning-open for writing only.



ly, a new file is created only if there is no file of that **n**



ame.

as a



, then its contents are deleted and the file is presente **d**



g without losing its original contents, we need to ope **n**



it in



e a mode by default and therefore we must provi **d**



mode explicitly when using an o **b**

modes using bitwise OR operator **w**


**Keywords**

**ofstream:** This Stream class signifies the
information to files

**ifstream:** This Stream class signifies th **e**
from files

**fstream:** This Stream class can be used f **o**

**File:** A file is a collection of related data s



ject of (stream class. We can specify more than o **n**

hile opening a file.



output file stream and is applied to create files for w **r**



iting



input file stream and is applied for reading infor **m** ation



input file stream and is applied for reading infor **m**



r both read and write from/to files.

tored in a particular area on the disk.



**eof():** It returns non-zero when the end o **f** file has been reached, otherwise it returns zero.


**194** **Lovely Professional University**


_**Notes**_
_**Object Oriented Programming**_


**SelfAssessment**


1. C++ uses <iostream.h> directive because

A. C++ is an object oriented language

B. C++ is a markup language

C. C++ does not have any input/output facility

D. All of the above


2. The unformatted input functions are handled by

A. ostream class

B. instream class

C. istream class

D. bufStream class


3. The istream class defines the

A. Cin objects

B. Stream extraction operator for formatted input

C. Cout objects

D. Both Cin and Cout objects


4. iostream is a subclass of

A. istream

B. instream

C. ostream

D. Both istream and ostream


5. The class fstream is used for

A. High level stream processing

B. Low level stream processing

C. File stream Processing

D. All above


6. Which stream class is to only write on a file?

A. ofstream

B. ifstream

C. fstream

D. iostream


7. Which is correct syntax?

A. Myfile:open(“example.bin”,ios::out);

B. Myfile.open(“example.bin”,ios::out);

C. Myfile::open(“example.bin”,ios::out);

D. Myfile.open(“example.bin”,ios:out);


**Lovely Professional University** **195**


_**Unit 14: File Handling**_


8. Which operator is used to insert the data into a file?

A. @

B. 
C. <<

D. None of above


9. Which of the following is the default mode of the opening using the ofstream class?

A. ios::in

B. ios::trunk

C. ios::out

D. ios::app


10. Which of the following is the default mode of the opening using the fstream class?

A. ios::in| ios::out

B. ios::trunk

C. ios::out

D. ios::in


11. “ios::app” causes all output to that file to be appended to the end. This value can be used

only with file capable of output.

A. True

B. False


12. The close() function is used to close a file,closed by disconnecting with its streaming.

A. True

B. False


13. Which among following is correct syntax of closing a file?

A. myfile@close();

B. myfile.close();

C. myfile:close();

D. myfile$close();


14. Detection of end of file not possible in C++.

A. True

B. False


15. Which of these is the correct statement about eof() ?

A. Returns true if a file opens for reading has reached the next character.

B. Returns true if a file opens for reading has reached the next word.

C. Returns true if a file opens for reading has reached the end.

D. Returns true if a file opens for reading has reached the middle.


**196** **Lovely Professional University**



_**Notes**_


_**Notes**_
_**Object Oriented Programming**_



**Answers for SelfAssessment**


1. C 2. C 3. D 4. D 5. C


6. A 7. B 8. C 9. C 10. A


11. True 12 **.** True 13. B 14. True 15. C



**Review Questions**



1. What do yo **u**

2. What are th **e**

3. What are th **e**

4. What is a fil **e**

5. Describe the

6. Write a C++

7. What are th **e**

8. How can w **e**

9. Write full pr

10. Explain file **o**



mean by C++ streams?



uses of files in computer system and how data can be

steps involved in using a file in a C++ program.

mode? Describe the various file mode options availa **b**

various approaches by which we can detect end of fil **e**

program to demonstrate working of detection of end **o**

advantages of files?



write using C++.



le.



condition successfully.



f file in C++.



open a file? Explain with suitable example.



ocess with suitable C++ program for create a new file.



pening process in C++.



**Further**


- E Bal **a**

- Herb **e**

- Robe **r**



**Readings**


gurusamy; Object-oriented Programming with C++; **T**



Galgotia.



ata Mc Graw-Hill.



rt Schildt; The Complete Reference C++; Tata Mc Gra **w** Hill.



rt Schildt; The Complete Reference C++; Tata Mc Gra **w**



t Lafore; Object-oriented Programming in Turbo C++ **;**



**Web Lin**


- https **:**

prog **r**

- https **:**

- https **:**



**ks**



//study.com/academy/lesson/practical-application **-**

amming-working-with-files.html

//www.codecademy.com/learn/learn-c-plus-plus

//www.guru99.com/cpp-file-read-write-open.html



for-c-plus-plus


**Lovely Professional University** **197**


**LOVELY PROFESSIONAL UNIVERSITY**

Jalandhar-Delhi G.T. Road (NH-1)
Phagwara, Punjab (India)-144411
For Enquiry: +91-1824-521360
Fax.: +91-1824-506111
Email: odl@lpu.co.in


