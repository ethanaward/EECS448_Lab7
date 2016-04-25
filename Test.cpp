#include "Test.h"

Test::Test() {

}

Test::~Test() {

}

bool Test::test1() {
	LinkedList<int> list;
	std::cout << "Given size: " << list.size() << " Expected size: 0\n";
	return(list.size()==0);
}

bool Test::test2() {
	LinkedList<int> list;
	list.addBack(5);
	list.addFront(7);
	std::cout << "Given size: " << list.size() << " Expected size: 2\n";
	return(list.size()==2);
}

bool Test::test3() {
	LinkedList<int> list;
	std::cout << "Given value: " << list.isEmpty() << " Expected value: 1\n";
	return(list.isEmpty());
}

bool Test::test4() {
	LinkedList<int> list;
	list.addFront(10);
	list.addFront(9);
	list.addFront(5);
	std::cout << "Given value: " << list.isEmpty() << " Expected value: 0\n";
	return(!list.isEmpty());
}

bool Test::test5() {
	LinkedList<int> list;
	list.addFront(5);
	std::vector<int> vect = list.toVector();
	std::vector<int> real;
	real.push_back(5);
	return(vect==real);
}

bool Test::test6() {
	LinkedList<int> list;
	list.addBack(6);
	std::vector<int> vect = list.toVector();
	std::vector<int> real;
	real.push_back(6);
	return(vect==real);
}

bool Test::test7() {
	LinkedList<int> list;
	list.addFront(9);
	list.addFront(6);
	list.addFront(7);
	std::vector<int> vect = list.toVector();
	std::vector<int> real;
	real.push_back(7);
	real.push_back(6);
	real.push_back(9);
	return(vect == real);
}

bool Test::test8() {
	LinkedList<int> list;
	list.addBack(6);
	list.addFront(9);
	list.addBack(7);
	std::vector<int> vect = list.toVector();
	std::cout << "Received vector: ";
	for(int i = 0; i < vect.size(); i++) {
		std::cout << vect[i] << " ";
	}
	std::cout << "\n";
	std::vector<int> real;
	real.push_back(9);
	real.push_back(6);
	real.push_back(7);
	std::cout << "Correct vector: ";
	for(int i = 0; i < real.size(); i++) {
		std::cout << real[i] << " ";
	}
	std::cout << "\n";
	return(vect == real);
}

bool Test::test9() {
	LinkedList<int> list;
	return(!list.removeFront());
}

bool Test::test10() {
	LinkedList<int> list;
	return(!list.removeBack());
}

bool Test::test11() {
	LinkedList<int> list;
	list.addFront(6);
	list.addFront(9);
	list.addFront(7);
	list.removeFront();
	std::vector<int> vect = list.toVector();
	std::cout << "Received vector: ";
	for(int i = 0; i < vect.size(); i++) {
		std::cout << vect[i] << " ";
	}
	std::cout << "\n";
	std::vector<int> real;
	real.push_back(9);
	real.push_back(6);
	std::cout << "Correct vector: ";
	for(int i = 0; i < real.size(); i++) {
		std::cout << real[i] << " ";
	}
	std::cout << "\n";
	return(vect == real);
}

bool Test::test12() {
	LinkedList<int> list;
	list.addFront(6);
	list.addFront(9);
	list.addFront(7);
	list.removeBack();
	std::vector<int> vect = list.toVector();
	std::cout << "Received vector: ";
	for(int i = 0; i < vect.size(); i++) {
		std::cout << vect[i] << " ";
	}
	std::cout << "\n";
	std::vector<int> real;
	real.push_back(7);
	real.push_back(9);
	std::cout << "Correct vector: ";
	for(int i = 0; i < real.size(); i++) {
		std::cout << real[i] << " ";
	}
	std::cout << "\n";
	return(vect == real);
}

bool Test::test13() {
	LinkedList<int> list;
	list.addFront(5);
	list.addFront(6);
	return(!list.search(7));
}

bool Test::test14() {
	LinkedList<int> list;
	list.addFront(5);
	list.addFront(6);
	return(list.search(6));
}
