/*
 * math.c
 *
 *  Created on: Sept 9, 2018
 *  Last Edited: Sept 10, 2018
 *  Author: Nate Hoffman
 */

#include "math.h"

/*
 * Math function
 * Takes two numbers and an operator select. If performing bitwise inverse, you still
 * need to give a value for num2 even though it does not affect the calculation. If
 * performing divide or modulus and num2 equals 0 (meaning division by 0) 0 will be
 * returned instead.
 *
 * Operations:
 * + Add (num1 + num2)
 * - Subtract (num1 - num2)
 * * Multiply (num1 * num2)
 * / Divide (num1 / num2) for this operation, no decimal places are kept, if num2 equals 0, 0 is returned
 * % Modulus (num1 % num2) for this operation, if num2 equals 0, 0 is returned
 * < Left Shift (num1 << num2)
 * > Right Shift (num1 >> num2)
 * & Bitwise AND (num1 & num2)
 * | Bitwise OR (num1 | num2)
 * ^ Bitwise XOR (num1 ^ num2)
 * ~ Bitwise Inverse (~num1) for this operation, num1 and num2 are still needed
 * If an invalid operation is selected, 0 is returned
 */
int math(int num1, int num2, char Operator) {
    // Select between the various valid operations
    switch (Operator) {
        case '+':
            // Addition
            return num1 + num2;
        case '-':
            // Subtraction
            return num1 - num2;
        case '*':
            // Multiplication
            return num1 * num2;
        case '/':
            // Division (note, no decimal places are kept, if num2 equals 0, 0 is returned)
            if (num2 == 0) {
                return 0;
            } else {
                return num1 / num2;
            }
        case '%':
            // Modulus (note, if num2 equals 0, 0 is returned)
            if (num2 == 0) {
                return 0;
            } else {
                return num1 % num2;
            }
        case '<':
            // Bitshift left
            return num1 << num2;
        case '>':
            // Bitshift right
            return num1 >> num2;
        case '&':
            // Bitwise AND
            return num1 & num2;
        case '|':
            // Bitwise OR
            return num1 | num2;
        case '^':
            // Bitwise XOR
            return num1 ^ num2;
        case '~':
            // Bitwise inverse
            return ~num1;
        default:
            // Invalid operation is selected, returning 0
            return 0;
    }
}
