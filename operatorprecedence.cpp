Operator Precedence

//Operator precedence determines the grouping of terms in an expression, which affects how an expression is evaluated.
//Certain operators take higher precedence over others; for example, the multiplication operator has higher precedence over the addition operator.

int x = 5+2*2;
cout << x;
// Outputs 9
The program evaluates 2*2 first, and then adds the result to 5.


As in mathematics, using parentheses alters operator precedence.


int x = (5 + 2) *2;
cout << x;

// Outputs 14


//Parentheses force the operations to have higher precedence.
//If there are parenthetical expressions nested within one another, the expression within the innermost parentheses is evaluated first.


//If none of the expressions are in parentheses,
//multiplicative (multiplication, division, modulus) operators will be evaluated before additive (addition, subtraction) operators
