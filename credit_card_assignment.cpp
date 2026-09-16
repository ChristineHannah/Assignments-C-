// This is a credit card program
#include <iostream>
#include <string>

using namespace std;

// Function prototypes
bool isValid(long long number);
int sumOfDoubleEvenPlace(long long number);
int getDigit(int number);
int sumOfOddPlace(long long number);
bool prefixMatched(long long number, int d);
int getSize(long long d);
long long getPrefix(long long number, int k);

int main()
{
    long long cardNumber;

    // Ask user to enter their credit card number
    cout << "Enter a credit card number as a long integer: ";
    cin >> cardNumber;

    // Check if valid or invalid and print the answer
    if (isValid(cardNumber))
    {
        cout << cardNumber << " is valid" << endl;
    }
    else
    {
        cout << cardNumber << " is invalid" << endl;
    }

    return 0;
}

// Check if the card number passes all validity rules
bool isValid(long long number)
{
    // 1. Check if length is between 13 and 16 digits
    int size = getSize(number);
    if (size < 13 || size > 16)
    {
        return false;
    }

    // 2. Check if prefix starts with 4 (Visa), 5 (MasterCard), 37 (American Express), or 6 (Discover)
    bool hasValidPrefix = prefixMatched(number, 4) ||
                          prefixMatched(number, 5) ||
                          prefixMatched(number, 37) ||
                          prefixMatched(number, 6);

    if (!hasValidPrefix)
    {
        return false;
    }

    // 3. Perform the Luhn mod 10 check
    int totalSum = sumOfDoubleEvenPlace(number) + sumOfOddPlace(number);

    // If total sum is divisible by 10, then card is valid
    return (totalSum % 10 == 0);
}

// Step 1 & 2: Double every second digit from right to left and sum them up
int sumOfDoubleEvenPlace(long long number)
{
    int sum = 0;

    // We drop the first digit from right because we only want even positions
    number = number / 10;

    while (number > 0)
    {
        int lastDigit = number % 10;
        sum += getDigit(lastDigit * 2);

        // Skip to the next even-placed digit
        number = number / 100;
    }

    return sum;
}

// Return the number if single digit, otherwise sum the 2 digits
int getDigit(int number)
{
    if (number < 10)
    {
        return number;
    }
    else
    {
        // Example: if double gives 14 -> 1 + 4 = 5
        return (number / 10) + (number % 10);
    }
}

// Step 3: Add all digits in odd places from right to left
int sumOfOddPlace(long long number)
{
    int sum = 0;

    while (number > 0)
    {
        int lastDigit = number % 10;
        sum += lastDigit;

        // Skip to the next odd-placed digit
        number = number / 100;
    }

    return sum;
}

// Check if prefix 'd' matches the start of the card number
bool prefixMatched(long long number, int d)
{
    int sizeOfD = getSize(d);

    // Get the prefix of the card number with same length as 'd'
    long long firstDigits = getPrefix(number, sizeOfD);

    return (firstDigits == d);
}

// Return the total number of digits in 'd'
int getSize(long long d)
{
    int count = 0;

    if (d == 0)
        return 1;

    while (d > 0)
    {
        count++;
        d = d / 10; // remove last digit
    }

    return count;
}

// Return the first k digits of number
long long getPrefix(long long number, int k)
{
    int totalDigits = getSize(number);

    // If number has fewer digits than k, return number itself
    if (totalDigits < k)
    {
        return number;
    }

    // Divide by 10 until we only have k digits left
    int digitsToRemove = totalDigits - k;
    for (int i = 0; i < digitsToRemove; i++)
    {
        number = number / 10;
    }

    return number;
}