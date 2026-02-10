#pragma once

#include <string>
#include <vector>
using std::vector;
using std::string;
// The prototype (declaration) of the first function is given. 
// You need to declare the rest of the functions.
// All necessary information is provided in the assignment description.
int min(const vector<int>& vec);
string convertDigits(int digit);
double calculator(double a, char op, double b);
int countWords(const string& s);
bool isPalindrome(const string& s);
void reverseList(vector<int>& vec);
void capitalizeSentence(string& sentence);
vector<string> splitString(const string& s, char delimiter);
vector<string> uniqueWords (const string& s);
int mode (const vector<int>& vec);
int playCraps(const vector<int>& dice);
void printPoly(const vector<double>& poly);
double evalPoly(const vector<double>& poly, double x);