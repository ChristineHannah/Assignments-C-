//# Credit Card Validation Program

//This document explains my C++ program that checks if a credit card number is valid or invalid using the Luhn Algorithm (Mod 10 check).


//  1. OOP Concepts Used

Even though our assignment gave us a function template to follow, here are the Object-Oriented Programming (OOP) concepts used in this code:

//Abstraction: Functions like `isValid()` hide all the complicated math steps from `main()`. In `main()`, we just call `isValid(cardNumber)` without needing to worry about how the calculations are happening behind the scenes.
// Encapsulation / Modular Design: Instead of writing one huge `main()` function, the code is broken down into smaller helper functions like `getDigit()`, `sumOfOddPlace()`, and `getSize()`. Each function does one small task and returns its answer.
// Data Types: I used `long long` instead of regular `int` because credit card numbers have 13 to 16 digits, which is too big for a normal 4-byte `int`.


// 2. Algorithm & Main Steps

//The algorithm checks two things: card issuer rules (length & starting numbers) and the Luhn check math.

// Steps in the Program

// 1. Check Card Length:
   //* Count total digits using `getSize(number)`.
   // * The length must be between 13 and 16 digits long.

//2. Check Card Prefix (Vendor):
  // * Get the starting digits using `getPrefix()`.
   //* Check if it matches known numbers: `4` (Visa), `5` (MasterCard), `37` (American Express), or `6` (Discover).

//3. Luhn Algorithm Steps:
  // * Step A (Even places from right): Double every second digit from right to left using `sumOfDoubleEvenPlace()`. If doubling gives a 2-digit number (like 14), `getDigit()` adds those two digits together ($1 + 4 = 5$).
   //* Step B (Odd places from right): Add up all the digits in the odd positions from right to left using `sumOfOddPlace()`.
   //* Step C (Total Check): Add the result of Step A and Step B. If the final sum ends in 0 (meaning `totalSum % 10 == 0`), the card number is valid!



// 3. Possible Error Points & Edge Cases

//Here are some errors or bugs that could happen when running this code:

//1. Entering spaces or dashes: If the user types `4388 5760 1840 2626` instead of `4388576018402626`, `cin >>` will stop reading at the first space and cause the program to give the wrong output.
//2. Numbers starting with 0: If a card number starts with 0, C++ `long long` drops the leading zero, which makes `getSize()` return a smaller length than expected.
//3. Number too large: If a user enters a number with more than 18 or 19 digits, it will overflow `long long` and turn into a wrong negative number.
//4. Typing letters instead of numbers: If a user accidentally types letters like `4388abc`, `cin` will fail and the card will just show up as invalid
