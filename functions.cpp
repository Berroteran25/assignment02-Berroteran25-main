#include "functions.h"
#include <vector>
#include <string>
#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

static const string LOWER = "abcdefghijklmnopqrstuvwxyz";
static const string UPPER = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
static const string ALNUM = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

static bool isAlphaNum(char c) 
{
    return ALNUM.find(c) != string::npos;
}

static char toLowerChar(char c)
{
    size_t pos = UPPER.find(c);
    if (pos != string::npos) {
        return LOWER[pos];
    }
    return c;
}

static char toUpperChar(char c)
{
    size_t pos = LOWER.find(c);
    if (pos != string::npos) {
        return UPPER[pos];
    }
    return c;
}

static string normalizeWord(const string& token)
{
    string out;
    for (char c : token) {
        if (isAlphaNum(c)) out.push_back(toLowerChar(c));
    }
    return out;
}

int min(const vector<int>& vec) 
{
    if (vec.empty()) 
    {
        return numeric_limits<int>::min();
    }
    int best = vec[0];
    for (size_t i = 1; i < vec.size(); ++i) 
    {
        if (vec[i] < best) 
        {
            best = vec[i];
        }
    }
    return best;
    
}
string convertDigits(int digit) 
{
    switch (digit) 
    {
        case 0: return "zero";
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
        default: return "invalid";
    }
}
double calculator(double operand1, double operand2, char operation)
{
    switch (operation) 
    {
        case '+': return operand1 + operand2;
        case '-': return operand1 - operand2;
        case '*': return operand1 * operand2;
        case '/': 
            if (operand2 != 0) 
            {
                return operand1 / operand2;
            } 
            else 
            {
                throw std::invalid_argument("Division by zero");
            }
        default: 
            throw std::invalid_argument("Invalid operation");
    }
}

int countWords(const string& s) 
{
    if (s.empty()) 
    {
        return 0;
    }
    int words = 1;
    for (char c : s) 
    {
        if (c == ' ') 
        {
            ++words;
        } 
    }
    return words;
}

bool isPalindrome(const string& s) 
{
    if (s.empty()) 
    {
        return true;
    }
    size_t i = 0;
    size_t j = s.size() - 1;
    while (i < j) 
    {
        char a = toLowerChar(s[i]);
        char b = toLowerChar(s[j]);

        if (a != b)
        {
            return false;
        }
        ++i;
        --j;
    }
    return true;
}

void reverseList(vector<int>& vec) 
{
    size_t i = 0;
    size_t j = vec.size() - 1;
    if (vec.empty()) return;
    while (i < j) 
    {
        int tmp = vec[i];
        vec[i] = vec[j];
        vec[j] = tmp;
        ++i;
        --j;    
    }
}
void capitalizeSentences(string& sentence) 
{
    if (sentence.empty()) return;
    sentence[0] = toUpperChar(sentence[0]);
    for (size_t i = 1; i < sentence.size(); ++i) 
    {
        if (sentence[i-1] == ' ') 
        {
            sentence[i] = toUpperChar(sentence[i]);
        }
    }
}

vector<string> splitString(const string& s, char delimiter) 
{
    vector<string> tokens;
    string current;
    if (s.empty()) 
    {
        return tokens;
    }

    for (char c : s) 
    {
        if (c == delimiter) 
        {
            tokens.push_back(current);
            current.clear();
        } 
        else 
        {
            current.push_back(c);
        }
    }
    tokens.push_back(current);
    return tokens;
}

vector<string> uniqueWords (const string& s) 
{
    vector<string> out;
    if (s.empty()) 
    {
        return out;
    }
    vector<string> tokens = splitString(s, ' ');
    for (const string& token : tokens) 
    {
        string norm = normalizeWord(token);
        if (norm.empty()) continue;
        bool found = false;
        for (const string& u : out) 
        {
            if (u == norm) 
            {
                found = true;
                break;
            }
        }
        if (!found) 
        { 
            out.push_back(norm);
        }
    }
    return out;
}

int mode (const vector<int>& vec) 
{
    vector<int> values;
    vector<int> counts;
    for (int x: vec)
    {
        bool found = false;
        for (size_t i = 0; i < values.size(); ++i) 
        {
            if (values[i] == x) 
            {
                counts[i]++;
                found = true;
                break;
            }
        }
        if (!found) 
        {
            values.push_back(x);
            counts.push_back(1);
        }
    }
    int bestVal = values[0];
    int bestCount = counts[0];
    for (size_t i = 1; i < values.size(); ++i)
    {
        if (counts[i] > bestCount || (counts[i] == bestCount && values[i] < bestVal)) 
        {
            bestCount = counts[i];
            bestVal = values[i];
        }
    }
    return bestVal;
}

int playCraps(const vector<int>& rolls)
{
    for (int r : rolls)
    {
        if (r<1 || r>6) return -1;
    }
    if (rolls.size() < 2) return 2;
    int initial_sum = rolls[0] + rolls[1];
    if (initial_sum == 7 || initial_sum == 11) return 0;
    if (initial_sum == 2 || initial_sum == 3 || initial_sum == 12) return 1;
    int point = initial_sum;
    
    for (size_t i = 2; i+1 < rolls.size(); i+=2)
    {
        int sum = rolls[i] + rolls[i+1];
        if (sum == point) return 0;
        if (sum == 7) return 1;
    }
    return 2;
}

void printPoly(const vector<double>& coeffs) 
{
    cout << "P(x) = ";
    bool printed = false;
    int degree = static_cast<int>(coeffs.size()) - 1;
    for (size_t i = 0; i < coeffs.size(); ++i)
    {
        double c = coeffs[i];
        int power = degree - static_cast<int>(i);
        if (c == 0.0) continue;
        if (printed) cout << "+";
        cout << "()" << c << ")";
        if (power >= 2) 
        {
            cout << "x^" << power;
        }
        else if (power == 1) 
        {
            cout << "x";
        }
        printed = true;
    }
    if (!printed) 
    {
        cout << "0";
    }
}

double evalPoly(const vector<double>& coeffs, double x)
{
    double sum = 0.0;
    int degree = static_cast<int>(coeffs.size()) - 1;
    for (size_t i = 0; i < coeffs.size(); ++i)
    {
        int power = degree - static_cast<int>(i);
        sum += coeffs[i] * pow(x, power);
    }
    return sum;
}
// UNCOMMENT TEST CASES AS YOU IMPLEMENT FUNCTIONS

