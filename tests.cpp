#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

#include "functions.h"
#include <iostream>
#include <sstream>




TEST_CASE("testing the min() function", "[5 point]")
{

    {
    INFO("This test checks the min() function with an empty vector as an argument");
    std::vector<int> empty_vec;
    CHECK(min(empty_vec) == std::numeric_limits<int>::min());
    }

    {
    INFO("This test checks the min() function with a size-1 vector as an argument");
    CHECK(min({4}) == 4);
    }

    {
    INFO("This test checks the max() function with a size-2 vector as an argument");
    CHECK(min({4,-2}) == -2);
    CHECK(min({-2,4}) == -2);
    }
}


// UNCOMMENT TEST CASES AS YOU IMPLEMENT FUNCTIONS



// TEST_CASE("testing the convertDigits() function", "[5 point]")
// {
//     {
//     INFO("This test checks convertDigits() function for valid inputs");
//     CHECK(convertDigits(0) == "zero");
//     CHECK(convertDigits(1) == "one");
//     CHECK(convertDigits(2) == "two");
//     CHECK(convertDigits(3) == "three");
//     CHECK(convertDigits(4) == "four");
//     CHECK(convertDigits(5) == "five");
//     CHECK(convertDigits(6) == "six");
//     CHECK(convertDigits(7) == "seven");
//     CHECK(convertDigits(8) == "eight");
//     CHECK(convertDigits(9) == "nine");
//     }

//     {
//     INFO("This test checks convertDigits() function for invalid inputs");
//     CHECK(convertDigits(-1) == "error");
//     CHECK(convertDigits(10) == "error");
//     }
// }

// TEST_CASE("testing the  calculator() function", "[5 point]") {
//     {
//         INFO("This test checks calculator() function for '+' operator");
//         CHECK_THAT(calculator(35.6, '+', 24.1), Catch::Matchers::WithinAbs(59.7, 0.01));
//     }
//     {
//         INFO("This test checks  calculator() function for '-' operator");
//         CHECK_THAT(calculator(35.6, '-', 24.1), Catch::Matchers::WithinAbs(11.5, 0.01));
//     }
//     {
//         INFO("This test checks  calculator() function for '*' operator");
//         CHECK_THAT(calculator(35.6, '*', 24.1), Catch::Matchers::WithinAbs(857.96, 0.01));
//     }
//     {
//         INFO("This test checks  calculator() function for '/' operator");
//         CHECK_THAT(calculator(35.6, '/', 24.1), Catch::Matchers::WithinAbs(1.48, 0.01));
//     }
// }

// TEST_CASE("testing the  countWords() function", "[5 point]") {
//     {
//         INFO("This test checks countWords() function for an empty string");
//         CHECK(countWords("") == 0);
//     }
//     {
//         INFO("This test checks countWords() function for a single word");
//         CHECK(countWords("hello") == 1);
//     }
//     {
//         INFO("This test checks countWords() function for multiple words");
//         CHECK(countWords("hello hello") == 2);
//         CHECK(countWords("hello world") == 2);
//         CHECK(countWords("hello, world hello") == 3);
//     }
// }

// TEST_CASE("testing the  isPalindrome() function", "[5 point]") {
//     {
//         INFO("This test checks isPalindrome() function for an empty string");
//         CHECK(isPalindrome(""));
//     }
//     {
//         INFO("This test checks isPalindrome() function for a single character string");
//         CHECK(isPalindrome("A"));
//     }
//     {
//         INFO("This test checks isPalindrome() function for a 2-character string");
//         CHECK(isPalindrome("Aa"));
//         CHECK(!isPalindrome("Ab"));
//     }
//      {
//         INFO("This test checks isPalindrome() function for a 3-character string");
//         CHECK(isPalindrome("Bob"));
//         CHECK(!isPalindrome("rob"));
//     }
// }

// TEST_CASE("testing the  reverseList() function", "[5 point]") {
//     {
//         INFO("This test checks reverseList() function for a single element vector.");
//         std::vector<int> vec = {5};
//         reverseList(vec);
//         CHECK(vec.size() == 1);
//         CHECK(vec[0] == 5);
//     }
//     {
//         INFO("This test checks reverseList() function for a two-element vector.");
//         std::vector<int> vec = {5,6};
//         reverseList(vec);
//         CHECK(vec.size() == 2);
//         CHECK(vec[0] == 6);
//         CHECK(vec[1] == 5);
//     }
//     {
//         INFO("This test checks reverseList() function for a 6-element vector.");
//         std::vector<int> vec = {0,1,2,3,4,5};
//         reverseList(vec);
//         CHECK(vec.size() == 6);
//         CHECK(vec[0] == 5);
//         CHECK(vec[1] == 4);
//         CHECK(vec[2] == 3);
//         CHECK(vec[3] == 2);
//         CHECK(vec[4] == 1);
//         CHECK(vec[5] == 0);

//     }
//     {
//         INFO("This test checks reverseList() function for a 7-element vector.");
//         std::vector<int> vec = {0,1,2,3,4,5,6};
//         reverseList(vec);
//         CHECK(vec.size() == 7);
//         CHECK(vec[0] == 6);
//         CHECK(vec[1] == 5);
//         CHECK(vec[2] == 4);
//         CHECK(vec[3] == 3);
//         CHECK(vec[4] == 2);
//         CHECK(vec[5] == 1);
//         CHECK(vec[6] == 0);
//     }
// }

// TEST_CASE("testing the  capitalizeSentence() function", "[5 point]") {
//     {
//         INFO("This test checks capitalizeSentence() function for a single word sentence.");
//         std::string sentence = "Hello!";
//         capitalizeSentence(sentence);
//         CHECK(sentence == "Hello!");
//         sentence = "hello!";
//         capitalizeSentence(sentence);
//         CHECK(sentence == "Hello!");
//     }
//     {
//         INFO("This test checks capitalizeSentence() function for a multiple word sentence.");
//         std::string sentence = "this is a test sentence.";
//         capitalizeSentence(sentence);
//         CHECK(sentence == "This Is A Test Sentence.");
//     }
// }

// TEST_CASE("testing the  splitString() function", "[10 point]") {
//     {
//         INFO("This test checks splitString() function for an empty string");
//         CHECK(splitString("", ',').empty());
//     }
//     {
//         INFO("This test checks splitString() function with no delimiter in the string");
//         std::vector<std::string> vec = splitString("hello", ',');
//         CHECK(vec.size() == 1);
//         CHECK(vec[0] == "hello");
//     }
//     {
//         INFO("This test checks splitString() function with comma as a delimiter");
//         std::vector<std::string> vec = splitString("apple,banana,orange", ',');
//         CHECK(vec.size() == 3);
//         CHECK(vec[0] == "apple");
//         CHECK(vec[1] == "banana");
//         CHECK(vec[2] == "orange");
//     }
//     {
//         INFO("This test checks splitString() function with pipe as a delimiter");
//         std::vector<std::string> vec = splitString("apple|banana|orange", '|');
//         CHECK(vec.size() == 3);
//         CHECK(vec[0] == "apple");
//         CHECK(vec[1] == "banana");
//         CHECK(vec[2] == "orange");
//     }
//     {
//         INFO("This test checks splitString() function with comma as a delimiter and a leading comma");
//         std::vector<std::string> vec = splitString(",apple,banana,orange", ',');
//         CHECK(vec.size() == 4);
//         CHECK(vec[0].empty());
//         CHECK(vec[1] == "apple");
//         CHECK(vec[2] == "banana");
//         CHECK(vec[3] == "orange");
//     }
//     {
//         INFO("This test checks splitString() function with a delimiter mismatch");
//         std::vector<std::string> vec = splitString("apple,banana,orange", '|');
//         CHECK(vec.size() == 1);
//         CHECK(vec[0] == "apple,banana,orange");
//     }
// }

// TEST_CASE("testing the  uniqueWords() function", "[15 point]") {
//     {
//         INFO("This test checks uniqueWords() function for an empty string.");
//         std::vector<std::string> vec = uniqueWords("");
//         CHECK(vec.empty());
//     }
//     {
//         INFO("This test checks uniqueWords() function for a single word string.");
//         std::vector<std::string> vec = uniqueWords("This!");
//         CHECK(vec.size() == 1);
//         CHECK(vec[0] == "this");
//     }
//     {
//         INFO("This test checks uniqueWords() function for a multiple word string with unique words only.");
//         std::vector<std::string> vec = uniqueWords("This is a test.");
//         CHECK(vec.size() == 4);
//         CHECK(vec[0] == "this");
//         CHECK(vec[1] == "is");
//         CHECK(vec[2] == "a");
//         CHECK(vec[3] == "test");
//     }
//     {
//         INFO("This test checks uniqueWords() function for a multiple word string with repeating words.");
//         std::vector<std::string> vec = uniqueWords("This is a test; this test is only a test.");
//         CHECK(vec.size() == 5);
//         CHECK(vec[0] == "this");
//         CHECK(vec[1] == "is");
//         CHECK(vec[2] == "a");
//         CHECK(vec[3] == "test");
//         CHECK(vec[4] == "only");
//     }
// }

// TEST_CASE("testing the  mode() function", "[10 point]") {
//     {
//         INFO("This test checks mode() function for a single element vector.");
//         CHECK(mode({1}) == 1);
//     }
//     {
//         INFO("This test checks mode() function for a multiple element vector with a single mode.");
//         CHECK(mode({1,2,3,4,2,3,4,3,4,4}) == 4);
//     }
//     {
//         INFO("This test checks mode() function for a multiple element vector with multiple modes.");
//         CHECK(mode({1,2,3,4,2,3,4,3,4,4,2,2}) == 2);
//     }
// }


// TEST_CASE("testing the  playCraps() function", "[10 point]") {
//     {
//         INFO("This test checks playCraps() function for a vector of size less than 2.");
//         CHECK(playCraps({2}) == 2);
//     }
//     {
//         INFO("This test checks playCraps() function for a vector with invalid inputs.");
//         CHECK(playCraps({2,7,4,2}) == -1);
//         CHECK(playCraps({-1,3,4,2}) == -1);
//         CHECK(playCraps({-1,2,4,7}) == -1);
//     }
//     {
//         INFO("This test checks playCraps() function for a player win at the first roll.");
//         CHECK(playCraps({2,5,4,2}) == 0);
//         CHECK(playCraps({5,6,4,2}) == 0);
//     }
//     {
//         INFO("This test checks playCraps() function for a house win at the first roll.");
//         CHECK(playCraps({1,1,4,2}) == 1);
//         CHECK(playCraps({2,1,4,2}) == 1);
//         CHECK(playCraps({6,6,4,2}) == 1);
//     }
//     {
//         INFO("This test checks playCraps() function for an insufficient size vector for the second roll.");
//         CHECK(playCraps({2,2,3}) == 2);
//         CHECK(playCraps({2,3,5}) == 2);
//         CHECK(playCraps({3,3,3}) == 2);
//         CHECK(playCraps({5,3,5}) == 2);
//         CHECK(playCraps({5,4,3}) == 2);
//         CHECK(playCraps({6,4,5}) == 2);
//     }
//     {
//         INFO("This test checks playCraps() function for a player win at the second roll.");
//         CHECK(playCraps({2,2,3,1}) == 0);
//         CHECK(playCraps({2,3,4,1}) == 0);
//         CHECK(playCraps({3,3,2,4}) == 0);
//         CHECK(playCraps({5,3,4,4}) == 0);
//         CHECK(playCraps({5,4,3,6}) == 0);
//         CHECK(playCraps({6,4,4,6}) == 0);
//     }
//     {
//         INFO("This test checks playCraps() function for a house win at the second roll.");
//         CHECK(playCraps({2,2,3,4}) == 1);
//         CHECK(playCraps({2,3,3,4}) == 1);
//         CHECK(playCraps({3,3,3,4}) == 1);
//         CHECK(playCraps({5,3,4,3}) == 1);
//         CHECK(playCraps({5,4,3,4}) == 1);
//         CHECK(playCraps({6,4,4,3}) == 1);
//     }
//     {
//         INFO("This test checks playCraps() function for an insufficient size vector for the third roll.");
//         CHECK(playCraps({2,2,3,5,1}) == 2);
//         CHECK(playCraps({2,3,3,5,1}) == 2);
//         CHECK(playCraps({3,3,3,5,1}) == 2);
//         CHECK(playCraps({5,3,4,5,1}) == 2);
//         CHECK(playCraps({5,4,3,2,1}) == 2);
//         CHECK(playCraps({6,4,4,1,1}) == 2);
//     }
//     {
//         INFO("This test checks playCraps() function for a player win at the third roll.");
//         CHECK(playCraps({2,2,3,5,3,1}) == 0);
//         CHECK(playCraps({2,3,3,5,4,1}) == 0);
//         CHECK(playCraps({3,3,3,5,4,2}) == 0);
//         CHECK(playCraps({5,3,4,5,4,4}) == 0);
//         CHECK(playCraps({5,4,3,2,4,5}) == 0);
//         CHECK(playCraps({6,4,4,1,5,5}) == 0);
//     }
//     {
//         INFO("This test checks playCraps() function for a house win at the third roll.");
//         CHECK(playCraps({2,2,3,5,3,4}) == 1);
//         CHECK(playCraps({2,3,3,5,4,3}) == 1);
//         CHECK(playCraps({3,3,3,5,4,3}) == 1);
//         CHECK(playCraps({5,3,4,5,4,3}) == 1);
//         CHECK(playCraps({5,4,3,2,4,3}) == 1);
//         CHECK(playCraps({6,4,4,1,5,2}) == 1);
//     }
// }

// TEST_CASE("testing the  printPoly() function", "[10 point]") {
//     {
//         INFO("This test checks printPoly() function for a 0-th order polynomial. Your print out is on the left of the equality sign and the expected result is on the right.");
//         // Redirect cout to our stringstream buffer
//         std::streambuf* coutBuf = std::cout.rdbuf();
//         std::stringstream out;
//         std::cout.rdbuf(out.rdbuf());
//         printPoly({4});
//         // Restore the original buffer so further cout calls are normal
//         std::cout.rdbuf(coutBuf);
//         CHECK(out.str() == "P(x) = (4)");
//     }
//     {
//         INFO("This test checks printPoly() function for a first order polynomial. Your print out is on the left of the equality sign and the expected result is on the right.");
//         // Redirect cout to our stringstream buffer
//         std::streambuf* coutBuf = std::cout.rdbuf();
//         std::stringstream out;
//         std::cout.rdbuf(out.rdbuf());
//         printPoly({1.1, 4.2});
//         // Restore the original buffer so further cout calls are normal
//         std::cout.rdbuf(coutBuf);
//         CHECK(out.str() == "P(x) = (1.1)*x + (4.2)");
//     }
//     {
//         INFO("This test checks printPoly() function for a second order polynomial. Your print out is on the left of the equality sign and the expected result is on the right.");
//         // Redirect cout to our stringstream buffer
//         std::streambuf* coutBuf = std::cout.rdbuf();
//         std::stringstream out;
//         std::cout.rdbuf(out.rdbuf());
//         printPoly({3.5, 1.1, 4.2});
//         // Restore the original buffer so further cout calls are normal
//         std::cout.rdbuf(coutBuf);
//         CHECK(out.str() == "P(x) = (3.5)*x^2 + (1.1)*x + (4.2)");
//     }
//     {
//         INFO("This test checks printPoly() function for a fourth order polynomial with some zero coefficients. Your print out is on the left of the equality sign and the expected result is on the right.");
//         // Redirect cout to our stringstream buffer
//         std::streambuf* coutBuf = std::cout.rdbuf();
//         std::stringstream out;
//         std::cout.rdbuf(out.rdbuf());
//         printPoly({2.3, 0.0, 1.2, -9.3, 8.4});
//         // Restore the original buffer so further cout calls are normal
//         std::cout.rdbuf(coutBuf);
//         CHECK(out.str() == "P(x) = (2.3)*x^4 + (1.2)*x^2 + (-9.3)*x + (8.4)");
//     }
// }

// TEST_CASE("testing the  evalPoly() function", "[10 point]") {
//     {
//         INFO("This test checks evalPoly() function for a 0-th order polynomial.");
//         CHECK_THAT(evalPoly({4}, 2), Catch::Matchers::WithinAbs(4, 0.01));
//     }
//     {
//         INFO("This test checks evalPoly() function for a first order polynomial.");
//         CHECK_THAT(evalPoly({1.1, 4.2}, 2), Catch::Matchers::WithinAbs(6.4, 0.01));
//     }
//     {
//         INFO("This test checks evalPoly() function for a second order polynomial.");
//         CHECK_THAT(evalPoly({3.5, 1.1, 4.2}, 2), Catch::Matchers::WithinAbs(20.4, 0.01));
//     }
//     {
//         INFO("This test checks evalPoly() function for a fourth order polynomial.");
//         CHECK_THAT(evalPoly({2.3, 0.0, 1.2, -9.3, 8.4}, 2), Catch::Matchers::WithinAbs(31.4, 0.01));
//     }
// }
