# include <stdio.h>
int main( )
{
 float x, power ;
 int y, i ;
 printf ( "\nEnter two numbers: " ) ;
 scanf ( "%f %d", &x, &y ) ;
 power = i = 1 ;
 while ( i <= y )
 {
 power = power * x ;
 i++ ;
 }
 printf ( "%f to the power %d is %f\n", x, y, power ) ;
 return 0 ;
}





//Loop Iteration,Counter i,Calculation: power = power * x,New Value of power
//Start,(Initial),power is initialized to 1,1.0
//1st Pass,1,power = 1.0×2.0, 2.0
//2nd Pass,2,power = 2.0×2.0, 4.0
//3rd Pass,3,power = 4.0×2.0, 8.0
//4th Pass,4,power = 8.0×2.0, 16.0
//End,5 (Loop stops),,16.0


