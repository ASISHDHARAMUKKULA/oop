Assignment operator

//The simple assignment operator (=) assigns the right side to the left side.

//C++ provides shorthand operators that have the capability of performing an operation and an assignment at the same time.

int x = 10;
x += 4; // equivalent to x = x + 4
x -= 5; // equivalent to x = x - 5


Increment operator

//The increment operator is used to increase an integer's value by one, and is a commonly used C++ operator.

x++; //equivalent to x = x + 1


Increment operator  Forms

//The increment operator has two forms, prefix and postfix.++x; //prefix
x++; //postfix
//Prefix increments the value, and then proceeds with the expression.
//Postfix evaluates the expression and then performs the incrementing.

//Prefix example: x = 5;
y = ++x;
// x is 6, y is 6
//Postfix example: x = 5;
y = x++;
// x is 6, y is 5
//The prefix example increments the value of x, and then assigns it to y.
//The postfix example assigns the value of x to y, and then increments it.

Decrement operator

//The decrement operator (--) works in much the same way as the increment operator, but instead of increasing the value, it decreases it by one.

x-- //postfix
--x //prefix


