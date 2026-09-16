// Student Test Grading Program

//This document explains my C++ program that grades multiple-choice answers for a group of students using 2D and 1D arrays.


//1. OOP Concepts Used

//Even though this program is written in a simple procedural style using basic functions and arrays, here are the Object-Oriented Programming (OOP) concepts and structural ideas applied in this solution:

// Abstraction: The code uses constant variables (`NUM_STUDENTS` and `NUM_QUESTIONS`) at the top to hide "magic numbers" from the rest of the code. This makes the loops easier to read and abstract away fixed sizes.
//Encapsulation (Data Grouping): Instead of creating 8 separate variables for 8 students or 80 separate variables for all answers, we bundle all student data together into a single 2D array structure (`studentAnswers[8][10]`).
//Modular Logic: The outer loop deals with each student as an individual object or unit, while the inner loop processes their specific list of answers one by one.

//2. Algorithm & Main Steps

The algorithm compares each student's chosen answer against the master answer key using nested loops.

//Steps in the Program

//1. Store Data in Arrays:
   //Create a 2D `char` array `studentAnswers` where rows represent the students ($0$ to $7$) and columns represent their answers to questions ($0$ to $9$).
   //Create a 1D `char` array `answerKey` holding the 10 correct answers in order.

//2. Outer Loop (Iterate Through Students):
   //Start a `for` loop running from `i = 0` to `NUM_STUDENTS - 1`.
   //Reset `correctCount = 0` at the start of each student's turn so scores don't mix up.

//3. Inner Loop (Grade Each Question):
   //Start a second `for` loop running from `j = 0` to `NUM_QUESTIONS - 1`.
   //Compare `studentAnswers[i][j]` (student $i$'s answer to question $j$) with `answerKey[j]` (the correct answer for question $j$).
   If they match (`==`), increment `correctCount` by 1.

//4. Display Result:
   //Print out the current student's ID (`i`) and their total score (`correctCount`) before moving to the next student.


//3. Possible Error Points & Edge Cases

//Here are some potential mistakes, bugs, or edge cases to watch out for:

//1. Array Index Out of Bounds: If the loop conditions use `<=` instead of `<` (like `i <= NUM_STUDENTS`), the program will try to access `studentAnswers[8][10]`, which does not exist and can crash the program or give garbage values.
//2. Forgetting to Reset `correctCount`: If `int correctCount = 0;` is placed outside the main loop, student scores will keep adding up continuously (Student 1's score gets added on top of Student 0's score).
//3. Case Sensitivity: The program compares characters directly (e.g., `'A' == 'a'` evaluates to `false`). If a student's answer was entered in lowercase `'a'`, it won't match the key `'A'`.
