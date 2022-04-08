#include<iostream>
using namespace std;
int main()
{
int x = 100+100;
int sum1 = 100 + 50;        // 150 (100 + 50)
int sum2 = sum1 + 250;      // 400 (150 + 250)
int sum3 = sum2 + sum2;     // 800 (400 + 400)

cout << x << endl;
cout << sum1 << endl;
cout << sum2 << endl;
cout << sum3 << endl;

int xx = 5;
int yy = 3;
cout << (xx > yy) << " True"; // returns 1 (true) because 5 is greater than 3

return 0;
}

/*
+	Addition	Adds together two values	        x + y
-	Subtraction	Subtracts one value from another	x - y
*	Multiplication	Multiplies two values	        x * y
/	Division	Divides one value by another	    x / y
%	Modulus	Returns the division remainder	        x % y
++	Increment	Increases the value of a variable by 1	++x	
--	Decrement	Decreases the value of a variable by 1	--x
*/