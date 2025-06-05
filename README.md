# C-SpecialNumbers

## Overview

### C-SpecialNumbers
is a C-based program designed to classify integers based on various mathematical properties. It determines whether numbers are Armstrong, Palindromic, Prime, or Strong numbers using both iterative and recursive methods. This project serves as an educational tool to demonstrate different programming approaches to number classification.

## Features
	•	Number Classifications:
	  •	Armstrong Numbers: Numbers that are equal to the sum of their own digits each raised to the power of the number of digits.
	  •	Palindromic Numbers: Numbers that read the same backward as forward.
	  •	Prime Numbers: Numbers greater than 1 that have no positive divisors other than 1 and themselves.
	  •	Strong Numbers: Numbers where the sum of the factorial of digits is equal to the number itself.
	•	Implementation Approaches:
	  •	Iterative Methods: Efficient loops for quick computation.
	  •	Recursive Methods: Elegant solutions that demonstrate the power of recursion.

## File Structure
	•	main.c: Entry point of the program; handles user input and displays results.
	•	basicClassification.c: Contains iterative implementations for number classifications.
	•	advancedClassificationLoop.c: Advanced iterative methods for complex classifications.
	•	advancedClassificationRecursion.c: Recursive implementations for number classifications.
	•	NumClass.h: Header file declaring functions and shared resources.
	•	makefile: Facilitates compilation of the program.

## Compilation and Execution

### Prerequisites
	•	GCC compiler installed on your system.

### Steps
	1.	Clone the Repository:

```bash
git clone https://github.com/Avichai-Mizrachi/C-SpecialNumbers.git
cd C-SpecialNumbers
```

	2.	Compile the Program:

```bash
make
```

	3.	Run the Program:

```bash
./main
```


## Usage

Upon running the program, you’ll be prompted to enter a range of numbers. 
The program will then analyze each number within this range and display its classifications based on the implemented methods.

## Example

```bash
Enter a range of numbers:
1 100
Number 1 is:
- Palindromic
- Strong
Number 2 is:
- Prime
...
```

### Contributing

Contributions are welcome! If you have suggestions for improvements or additional features, feel free to fork the repository and submit a pull request.

## Author

Avichai Mizrachi
