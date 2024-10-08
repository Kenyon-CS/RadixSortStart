#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to get the digit at a specific position                                        
int getDigit(int number, int position) {
  // You write  
  return 0;
}

// Function to generate random numbers of maximum length D                                 
vector<int> generateRandomNumbers(int N, int D) {
  // Your Code
}
// Function to perform radix sort using queues                                             
void radixSort(vector<int>& numbers, int D) {
  // Your code here!
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator         

    int D, N;
    cout << "Enter the maximum number of digits (D): ";
    cin >> D;
    cout << "Enter the number of values to sort (N): ";
    cin >> N;

    // Generate N random numbers with maximum length D digits                              
    vector<int> numbers = generateRandomNumbers(N, D);

    cout << "Generated numbers: ";
    displayNumbers(numbers);

    // Perform radix sort                                                                  
    radixSort(numbers, D);

    // Display sorted numbers                                                              
    cout << "Sorted numbers: ";
    displayNumbers(numbers);

    return 0;
}
