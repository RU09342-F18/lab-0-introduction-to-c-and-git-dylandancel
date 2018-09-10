#include <stdio.h>
/*
 *
 *  Created on 9/9/2018
 * 	Last Edited: Sept 10,2018
 *      Author: Dylan Dancel
 */

/*
 * + Add (num1 + num2)
 * - Subtract (num1 - num2)
 * * Multiply (num1 * num2)
 * / Divide (num1 / num2)
 * % Modulus (num1 % num2)
 * < Left Shift (num1 << num2)
 * > Right Shift (num1 >> num2)
 * & Bitwise AND (num1 & num2)
 * | Bitwise OR (num1 | num2)
 * ^ Bitwise XOR (num1 ^ num2)
 * ~ Bitwise Inverse (~num1) for this operation, num1 and num2 are still needed
*/

//Part of your documentation should be listing the valid inputs and outputs for the functions you create.
int math(int num1, int num2, char Operator) //math function with arguments for 2 integers and an operator
{
    int output; //establishing an output variable for post operation

    
    switch(Operator) //switch statement which checks the operator to perform operations
    {
        
        case '+':
        output = num1 + num2; //case in which when '+' is selected performs addition
        break;
        
        case '-':
        output = num1 - num2; //case in which when '-' is selected performs subtraction
        break;
        
         case '*':
        output = num1 * num2; //case in which when '*' is selected performs multiplication
        break;
        
        case '/':
        output = num1 / num2; //case in which when '/' is selected performs division
        break;
        
        case '%':
        output = num1 / num2; //case in which when '%' is selected performs modulus
        break;
        
        case '<':
        output = num1 << num2; //case in which  '<' is selected performs left shift
        break;
        
        case '>':
        output = num1 >> num2; //case in which '>' is selected performs right shift
        break;
        
        case '&':
        output = num1 & num2; //case in which '&' is selected performs logical AND
        break;
        
        case '|':
        output = num1 | num2; //case in which '|' is selected performs logical OR'
        break;
        
        case '^':
        output = num1 ^ num2; //case in which '^' is selected performs logical XOR
        break;
        
        case '~':
        output = ~num1; //case in which '~' is selected performs logical inversion
        break;
    
        default:
        printf("Invalid character");
        break;
        
        
    }
}


int main()
{

int A = 0b00000001; //num1 for math function
int B = 0b00001001; //num2 for math function



printf("Addition = %d\n",math(A,B,'+')); //calls the math function to perform addition

printf("Divison = %d\n",math(A,B,'/')); //calls the math function to perform division

printf("Subtraction = %d \n" ,math(A,B,'-')); //calls the math function to perform subtraction

printf("Multiplication = %d\n",math(A,B,'*')); //calls the math function to perform multiplication

printf("Modulus = %d\n",math(A,B,'%')); //calls the math function to perform modulus

printf("Left Shift = %d\n",math(A,B,'<')); //calls the math function to perform left shift

printf("Right Shift = %d\n",math(A,B,'>')); //calls the math function to perform right shift

printf("Bitwise AND = %d\n",math(A,B,'&')); //calls the math function to perform bitwise AND

printf("Bitwise OR = %d\n",math(A,B,'|')); //calls the math function to perform bitwise OR

printf("Bitwise XOR = %d\n",math(A,B,'^')); //calls the math function to perform bit XOR

printf("Bitwise Inversion = %d\n",math(A,B,'~')); //calls the math function to perform bitwise Inversion



    return 0;
}
