#ifndef MAIN_CPP
#define MAIN_CPP

#include <iostream>
#include "Test.h"
#include "Node.h"
#include "LinkedList.h"

int main() {

Test* tester = new Test();

std::cout << "Test 1: size works on empty list: " << tester->test1() << "\n";
std::cout << "Test 2: size works on populated list: " << tester->test2() << "\n";
std::cout << "Test 3: isEmpty works on empty list: " << tester->test3() << "\n";
std::cout << "Test 4: isEmpty works on populated list: " << tester->test4() << "\n";
std::cout << "Test 5: addFront works on empty list: " << tester->test5() << "\n";
std::cout << "Test 6: addBack works on empty list: " << tester->test6() << "\n";
std::cout << "Test 7: addFront works on populated list: " << tester->test7() << "\n";
std::cout << "Test 8: addBack works on populated list: " << tester->test8() << "\n";
std::cout << "Test 9: removeFront works on empty list: " << tester->test9() << "\n";
std::cout << "Test 10: removeBack works on empty list: " << tester->test10() << "\n";
std::cout << "Test 11: removeFront works on populated list: " << tester->test11() << "\n";
std::cout << "Test 12: removeBack works on populated list: " << tester->test12() << "\n";
std::cout << "Test 13: search works on list without value: " << tester->test13() << "\n";
std::cout << "Test 14: search works on list with value: " << tester->test14() << "\n";

return 0;
};

#endif
