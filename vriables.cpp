
Variables

//Creating a variable reserves a memory location, or a space in memory for storing values. The compiler requires that you provide a data type for each variable you declare.
//C++ offer a rich assortment of built-in as well as user defined data types.

//Integer, a built-in type, represents a whole number value. Define integer using the keyword int.
//C++ requires that you specify the type and the identifier for each variable defined.
//An identifier is a name for a variable, function, class, module, or any other user-defined item. An identifier starts with a letter (A-Z or a-z) or an underscore (_), followed by additional letters, underscores, and digits (0 to 9).
//For example, define a variable called myVariable that can hold integer values as follows:

#include<iostream>
using namespace std
int main()
{
    int a=10;
    cout<<a;
    return 0;
}

//The C++ programming language is case-sensitive, so myVariable and myvariable are two different identifiers.

//Define all variables with a name and a data type before using them in a program.
//In cases in which you have multiple variables of the same type, it's possible to define them in one declaration, separating them with commas.


//A variable can be assigned a value, and can be used to perform operations.
//For example, we can create an additional variable called sum, and add two variables together.int a = 30;
//int b = 15;
//int sum = a + b;
// Now sum equals 45
/Use the + operator to add two numbers.

#include <iostream>
using namespace std;

int main()
{
   int a = 30;
   int b = 12;
   int sum = a + b;

   cout << sum;

    return 0;
}

//Outputs 42
