#include <cs50.h>
#include <stdio.h>

int main(void)

//n = get_long("Number: ")
//if n <= 0: print "INVALID" and exit

//sum = 0
//This will combine the amounts from step 1 and 2 from Luhn's algorithm

//alt = false 
//false won't double. true, double.

//m = CC (n)umber

//while m > 0:
//      d = m % 0
//          ^Gives last digit
//      if alt:
//          t = d * 2
//          if t >= 10: t -= 9
//              ^This solves the summing of digits >10
//          sum += t
//      else:
//          sum += d
//      alt = not alt
//      m = m / 10
//          ^This moves us down to the next digit
//valid = (sum % 10 == 0)

//Hans Peter Luhn's Algorithm

//Multiple every other digit by 2, starting with the second to last digit
//Add the product of those digits together (So 12 becomes 1 and 2)

//Find the sum of the digits that weren't multiplied by 2, starting from the last digit
//Add that sum together with the sum of the numbers from step 1

//If the total's last digit is 0, the number is valid

//You can get the first digit by % 10, which would give the remainder.
//So for 4111111111111111, you would get 1.

//American Express:
//15 digits, starts with 34 or 37
//378282246310005

//MasterCard:
//16 digits, starts with 51, 52, 53, 54, or 55
//2221000000000009

//Visa:
//13 or 16 digits, starts with 4
//4111111111111111
