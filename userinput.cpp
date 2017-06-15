User Input

//To enable the user to input a value, use cin in combination with the extraction operator (>>). The variable containing the extracted data follows the operator.
//The following example shows how to accept user input and store it in the num variable:


//Example

int num;
cin >> num;

Accepting User Input

//The following program prompts the user to input a number and stores it in the variable a:
#include <iostream>
using namespace std;

int main()
{
   int a;
   cout << "Please enter a number \n";
   cin >> a;

   return 0;
}

//When the program runs, it displays the message "Please enter a number", and then waits for the user to enter a number and press Enter, or Return.
//The entered number is stored in the variable a.

//let's create a program that accepts the input of two numbers and prints their sum.

#include<iostream>
using namespace std;
int main()
{

    int a,b;
    int sum;
    cout<<"enter 1st number";
    cin>>a;
    cout<<"enter 2nd number";
    cin>>b;
    sum=a+b;
    cout<<"sum is"<<sum;
    return 0;
}
