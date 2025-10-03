Aim: To study file handling in C++

#Program a: This program is a simple demonstration of exception handling in C++ where two numbers are taken as input and division is performed, but before executing the operation, it checks whether the denominator is zero. If the denominator is zero, an exception is thrown and caught using a try-catch block, which prevents the program from crashing and instead displays a clear error message to the user. If the denominator is not zero, the program proceeds with the division and outputs the result. Thus, the program highlights the concept of writing robust code by safely handling runtime errors like division by zero.

Algorithm:

    Step-1: Start
    Step-2: Declare three float variables: n1, n2, and ans.
    Step-3: Prompt the user to enter two numbers.
    Step-4: Read the input values into n1 and n2.
    Step-5: Enter the try block:
    Step-6: Check if n2 == 0.
    Step-7: If true, throw an exception (throw n2).
    Step-8: If false, perform division (ans = n1 / n2) and display the result.
    Step-9: If an exception is thrown, control passes to the catch block:
    Step-10: Catch the float exception and print an error message stating division by zero is not allowed.
    Step-11: End.

#Program b: This program is a C++ exception handling example designed to safely perform division of two numbers entered by the user. It first takes two floating-point inputs (n1 and n2) and checks if the denominator (n2) is zero inside a try block. If n2 is zero, the program throws an exception and the control is passed to the catch block, which prints an error message instead of letting the program crash. If the denominator is non-zero, the division is carried out, and the result is displayed. In the given example, when the user enters 19 and 2, the output is 9.5. This illustrates how exception handling improves the robustness of the program by managing runtime errors like division by zero in a safe and user-friendly manner.

Algorithm:

    Step-1: Start
    Step-2: Declare three floating-point variables: n1, n2, and ans.
    Step-3: Display a message asking the user to enter two numbers.
    Step-4: Read input values into n1 and n2.
    Step-5: Enter the try block:
    Step-6: If n2 == 0, then throw an exception with n2.
    Step-7: Otherwise, compute ans = n1 / n2 and display the result.
    Step-8: If an exception is thrown, control shifts to the catch block:
    Step-9: Print an error message showing that division by zero is not allowed.
    Step-10: End.

