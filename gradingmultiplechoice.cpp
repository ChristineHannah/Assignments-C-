// A program that grdes multiple choice and produces a result
#include <iostream>

using namespace std;

int main()
{
    // Number of students and total questions
    const int NUM_STUDENTS = 8;
    const int NUM_QUESTIONS = 10;

    // 2D array storing each student's answers (8 rows, 10 columns)
    char studentAnswers[NUM_STUDENTS][NUM_QUESTIONS] = {
        {'A', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}, // Student 0
        {'D', 'B', 'A', 'B', 'C', 'A', 'E', 'E', 'A', 'D'}, // Student 1
        {'E', 'D', 'D', 'A', 'C', 'B', 'E', 'E', 'A', 'D'}, // Student 2
        {'C', 'B', 'A', 'E', 'D', 'C', 'E', 'E', 'A', 'D'}, // Student 3
        {'A', 'B', 'D', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}, // Student 4
        {'B', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}, // Student 5
        {'B', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}, // Student 6
        {'E', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}  // Student 7
    };

    // 1D array storing the correct answers
    char answerKey[NUM_QUESTIONS] = {'D', 'B', 'D', 'C', 'C', 'D', 'A', 'E', 'A', 'D'};

    // Loop through each student to grade their test
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        int correctCount = 0; // Reset score count for the current student

        // Loop through each question for the current student
        for (int j = 0; j < NUM_QUESTIONS; j++)
        {
            // Check if the student's answer matches the answer key
            if (studentAnswers[i][j] == answerKey[j])
            {
                correctCount++;
            }
        }

        // Print the score for the current student
        cout << "Student " << i << "'s correct count is " << correctCount << endl;
    }

    return 0;
}