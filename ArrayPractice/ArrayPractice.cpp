#include <iostream>
#include <cstdlib>
#include <ctime>

// Print every other number starting from start and going up to end.
// Example: start = 0, end = 10 -> 0, 2, 4, 6, 8, 10
// Example: start = 1, end = 10 -> 1, 3, 5, 7, 9
// Do this twice:
// 1. once using a for loop
// 2. once using a while loop
// Also print the sum of the numbers printed for each loop.
static void LoopCounting(int start, int end)
{

}


// This function will take an array of integers and its size as parameters.
// It will check if the numbers in the array are even or odd and print "Even" or "Odd" accordingly. 
// For example, if the array is {1, 2, 3, 4}, it will print "Odd", "Even", "Odd", "Even".
// Im passing in the int size as a parameter because in C++, when you pass an array to a function, 
// it decays to a pointer and you lose the size information. There is no number.Length(). Don't worry about this for now.
static void EvenOddBatchChecker(int number[], int size)
{

}


// Create an array of 5 integers and ask the user to input values for each element. Store the values in the array and then 
// print them out all on one line separated by commas. For example, if the user inputs 1, 2, 3, 4, 5, it should print "1, 2, 3, 4, 5".
// Then print them again in reverse order. For example, if the user inputs 1, 2, 3, 4, 5, it should print "5, 4, 3, 2, 1".
// Then print the sum of the numbers in the array. For example, if the user inputs 1, 2, 3, 4, 5, it should print "15" (1 + 2 + 3 + 4 + 5 = 15).
// Then print the largest and smallest numbers in the array. For example, if the user inputs 1, 2, 3, 4, 5, it should print "Largest: 5, Smallest: 1".
// Do not use extra arrays. Use the same array for everything.
static void ArrayInput()
{
	
}


// This function will fill the array with random integers between min and max (inclusive).
// Then print the array.
// Then generate 3 random numbers between min and max and check whether each one exists in the array.
// Print "Found" or "Not Found" for each search.
// Then randomly select 3 positions from the array and print the values at those positions.
// srand(time(0)) is already called at the beginning of your main function to seed the random number generator.
// Use rand() to generate random numbers in the desired range.
static void ArrayRandomizer(int arr[], int size, int min, int max)
{

}

// This function will count from start to end and print every number.
// If start < end, count UP (example: 2 → 6 prints 2 3 4 5 6)
// If start > end, count DOWN (example: 6 → 2 prints 6 5 4 3 2)
// If start == end, just print that number once.
static void CountUpOrDown(int start, int end)
{

}

// This function contains some errors. Your task is to find and fix them. The code should compile and run without errors after you fix it.
// You should also explain what the errors were and how you fixed them in comments.
// Above each fix, write a comment explaining:
// 1. what was wrong
// 2. why it was wrong
// 3. how you fixed it
// There are 4 main logic mistakes. Ask me for verification or hints.
static void FixCode()
{
    int arr[5];

    for (int i = 0; i <= 5; i++)
    {
        std::cin >> arr[i];
    }

    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        sum += arr[i];
    }

    std::cout << "Average: " << sum / 5 << std::endl;

    int choice;
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        std::cout << "Add";
    case 2:
        std::cout << "Subtract";
    default:
        std::cout << "Exit";
    }
}


int main()
{
    srand(time(0));
	std::cout << "<========LOOP COUNTING========>" << std::endl;
	LoopCounting(2, 10);
	std::cout << "\n\n<========EVEN ODD BATCH CHECKER========>" << std::endl;
	// You should get the output Odd, Odd, Even, Odd, Even, Even for the following array.
	int numbers[] = { 1, 5, 4, 3, 2, 10 };
	EvenOddBatchChecker(numbers,6);
	std::cout << "\n\n<========ARRAY INPUT========>" << std::endl;
	ArrayInput();
    std::cout << "\n\n<========ARRAY RANDOMIZER========>" << std::endl;
    int arr[10];
    ArrayRandomizer(arr,10,1,10);
    std::cout << "\n\n<========COUNT UP OR DOWN========>" << std::endl;
    CountUpOrDown(6,2);
    std::cout << "\n\n<========FIX CODE========>" << std::endl;
    FixCode();
}