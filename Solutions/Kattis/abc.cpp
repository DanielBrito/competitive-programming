// https://open.kattis.com/problems/abc

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void printResult(char letter);

vector<int> numbers;

int main(){

    int n1, n2, n3; // Store the integers
    char c1, c2, c3; // Store de uppercase letters

    cin >> n1 >> n2 >> n3;
    cin >> c1 >> c2 >> c3;

    // Using vector to avoid a bunch of if/else:
    numbers.push_back(n1);
    numbers.push_back(n2);
    numbers.push_back(n3);

    // Sorting the vector because
    sort(numbers.begin(), numbers.end());

    // A = numbers[0] < B = numbers[1] < C = numbers[2]:
    printResult(c1);
    printResult(c2);
    printResult(c3);

    cout << "\n";

    return 0;
}

// Generic function to print the number based on the letter:
void printResult(char letter){

    if(letter=='A') cout << numbers[0];
    if(letter=='B') cout << numbers[1];
    if(letter=='C') cout << numbers[2];

    cout << " ";
}