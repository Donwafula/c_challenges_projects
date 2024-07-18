Project Task: Text-Based Calculator
Objective:
Design and implement a text-based calculator in C that can perform basic and extended arithmetic operations. The calculator should handle various types of input, validate user input, and continuously prompt the user for operations until they choose to exit.

Requirements:

Basic Arithmetic Operations:

Implement addition, subtraction, multiplication, and division.
Extended Operations:

Implement modulus and exponentiation operations.
Input/Output:

Use scanf to read user input for operations and operands.
Use printf to display prompts, results, and error messages.
Control Flow:

Use a while loop to continuously prompt the user for operations until they decide to quit.
Implement input validation using if-else statements and switch statements.
Use break and continue to manage the loop control flow.
Error Handling:

Ensure division by zero is handled gracefully with appropriate error messages.
Validate the user's choice of operation and handle invalid inputs.
Operators:

Utilize arithmetic and logical operators effectively.
Conditional Expressions:

Use conditional expressions where appropriate to make the code concise and efficient.
Instructions:

Prompting for Operations:

Display a menu or prompt that lists the available operations: addition (+), subtraction (-), multiplication (*), division (/), modulus (%), exponentiation (^), and an option to quit (q).
Reading Inputs:

Read the user’s choice of operation.
If the user chooses to quit, exit the program.
Read two operands from the user.
Performing Calculations:

Based on the user’s choice of operation, perform the corresponding calculation.
Ensure division and modulus operations handle zero appropriately.
Displaying Results:

Display the result of the calculation.
If an error occurs (e.g., division by zero, invalid operation), display an appropriate error message.
Looping:

Repeat the process until the user decides to quit.
Documentation:

Include comments in your code to explain the logic and flow.
Ensure your code is readable and well-structured.
Example Output:

yaml
Copy code
Enter an operation (+, -, *, /, %, ^) or q to quit: +
Enter two operands: 10 5
Result: 15.00

Enter an operation (+, -, *, /, %, ^) or q to quit: /
Enter two operands: 10 0
Error: Division by zero!

Enter an operation (+, -, *, /, %, ^) or q to quit: q
Exiting the calculator. Goodbye!

Submission Guidelines:

Submit the source code file (calculator.c).
Ensure the code compiles and runs without errors.
Include a README file with instructions on how to compile and run your program, and any assumptions or design decisions made.
Evaluation Criteria:

Correctness:

The program performs the required operations correctly and handles errors appropriately.
Code Quality: The code is well-organized, readable, and adequately commented.
Input Handling: The program correctly handles and validates user input.
Functionality: All specified features are implemented and work as expected.
Documentation: The README file is clear and provides necessary instructions.

BONUS (Optional):
Implement additional mathematical functions (e.g., square root, logarithm).
Add the ability to handle multiple operations in a single input (e.g., 3 + 5 * 2).
Implement a user-friendly interface with a more sophisticated menu system.


COMPILATION COMMAND:
$ gcc *.c -lm -o simple_calculator

RUN COMMAND:
$: ./simple_calculator
