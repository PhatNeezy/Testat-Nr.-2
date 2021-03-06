//Erstellt von 1802005 und 4666453

#include "stdafx.h"
#include "MyVector.h"
#include <iostream>


int main()
{
	std::cout << "Initialize a vector called test_vector1" << std::endl;
	MyVector<int> test_vector1;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << std::endl << "Add the values 5 and 6 to the vector" << std::endl;
	test_vector1.push_back(5);
	test_vector1.push_back(6);
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << std::endl << "Check the size and the capacity" << std::endl;
	std::cout << "Vector-size: " << test_vector1.size() << std::endl;
	std::cout << "Vector-capacity: " << test_vector1.capacity() << std::endl;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << std::endl << "Check the at-function and the []-operator" << std::endl;
	std::cout << "Position 0 (at-function): " << test_vector1.at(0) << std::endl;
	std::cout << "Position 1 (at-function): " << test_vector1.at(1) << std::endl;
	std::cout << "Non-exist position 2 (at-function): " << test_vector1.at(2) << std::endl << std::endl;
	std::cout << "Position 0 ([]-operator): " << test_vector1[0] << std::endl;
	std::cout << "Position 1 ([]-operator): " << test_vector1[1] << std::endl;
	std::cout << "Non-exist position 2 ([]-operator): " << test_vector1[2] << std::endl;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << std::endl << "Add the values 7, 8 and 9 with the more effective function" << std::endl;
	test_vector1.push_back_eff(7);
	test_vector1.push_back_eff(8);
	test_vector1.push_back_eff(9);
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << std::endl << "Check the size and the capacity" << std::endl;
	std::cout << "Vector-size: " << test_vector1.size() << std::endl;
	std::cout << "Vector-capacity: " << test_vector1.capacity() << std::endl;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << "Initialize a second vector called test_vector2, but directly with a capacity of 4" << std::endl;
	MyVector<int> test_vector2(4);
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << std::endl << "Check the size and the capacity" << std::endl;
	std::cout << "Vector-size: " << test_vector2.size() << std::endl;
	std::cout << "Vector-capacity: " << test_vector2.capacity() << std::endl;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << std::endl << "Add the values 10, 11 and 12 with the more effective function" << std::endl;
	test_vector2.push_back_eff(10);
	test_vector2.push_back_eff(11);
	test_vector2.push_back_eff(12);
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << std::endl << "Check the size and the capacity" << std::endl;
	std::cout << "Vector-size: " << test_vector2.size() << std::endl;
	std::cout << "Vector-capacity: " << test_vector2.capacity() << std::endl;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << std::endl << "Add the values 13 and 14 to the vector" << std::endl;
	test_vector2.push_back(13);
	test_vector2.push_back(14);
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << std::endl << "Check the size and the capacity" << std::endl;
	std::cout << "Vector-size: " << test_vector2.size() << std::endl;
	std::cout << "Vector-capacity: " << test_vector2.capacity() << std::endl;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << std::endl << "Add the values 15 and 16 with the more effective function" << std::endl;
	test_vector2.push_back_eff(15);
	test_vector2.push_back_eff(16);
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << std::endl << "Check the size and the capacity" << std::endl;
	std::cout << "Vector-size: " << test_vector2.size() << std::endl;
	std::cout << "Vector-capacity: " << test_vector2.capacity() << std::endl;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << std::endl << "Check the content of the test_vector2" << std::endl;
	std::cout << "Position 0: " << test_vector2.at(0) << std::endl;
	std::cout << "Position 1: " << test_vector2.at(1) << std::endl;
	std::cout << "Position 2: " << test_vector2.at(2) << std::endl;
	std::cout << "Position 3: " << test_vector2.at(3) << std::endl;
	std::cout << "Position 4: " << test_vector2.at(4) << std::endl;
	std::cout << "Position 5: " << test_vector2.at(5) << std::endl;
	std::cout << "Position 6: " << test_vector2.at(6) << std::endl;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << std::endl << "Check content of the test_vector1" << std::endl;
	std::cout << "Position 0: " << test_vector1.at(0) << std::endl;
	std::cout << "Position 1: " << test_vector1.at(1) << std::endl;
	std::cout << "Position 2: " << test_vector1.at(2) << std::endl;
	std::cout << "Position 3: " << test_vector1.at(3) << std::endl;
	std::cout << "Position 4: " << test_vector1.at(4) << std::endl;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << std::endl << "Check the = operator (test_vector1 = test_vector2)" << std::endl;
	test_vector1 = test_vector2;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << std::endl << "Check the content of the test_vector2" << std::endl;
	std::cout << "Vector-size: " << test_vector2.size() << std::endl;
	std::cout << "Vector-capacity: " << test_vector2.capacity() << std::endl;
	std::cout << "Position 0: " << test_vector2.at(0) << std::endl;
	std::cout << "Position 1: " << test_vector2.at(1) << std::endl;
	std::cout << "Position 2: " << test_vector2.at(2) << std::endl;
	std::cout << "Position 3: " << test_vector2.at(3) << std::endl;
	std::cout << "Position 4: " << test_vector2.at(4) << std::endl;
	std::cout << "Position 5: " << test_vector2.at(5) << std::endl;
	std::cout << "Position 6: " << test_vector2.at(6) << std::endl;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << std::endl << "Check content of the test_vector1" << std::endl;
	std::cout << "Vector-size: " << test_vector1.size() << std::endl;
	std::cout << "Vector-capacity: " << test_vector1.capacity() << std::endl;
	std::cout << "Position 0: " << test_vector1.at(0) << std::endl;
	std::cout << "Position 1: " << test_vector1.at(1) << std::endl;
	std::cout << "Position 2: " << test_vector1.at(2) << std::endl;
	std::cout << "Position 3: " << test_vector1.at(3) << std::endl;
	std::cout << "Position 4: " << test_vector1.at(4) << std::endl;
	std::cout << "Position 5: " << test_vector1.at(5) << std::endl;
	std::cout << "Position 6: " << test_vector1.at(6) << std::endl;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << std::endl << "Check the pop_back funktion twice" << std::endl;
	test_vector1.pop_back();
	test_vector1.pop_back();
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << "Vector-size: " << test_vector1.size() << std::endl;
	std::cout << "Vector-capacity: " << test_vector1.capacity() << std::endl;
	std::cout << "Position 0: " << test_vector1.at(0) << std::endl;
	std::cout << "Position 1: " << test_vector1.at(1) << std::endl;
	std::cout << "Position 2: " << test_vector1.at(2) << std::endl;
	std::cout << "Position 3: " << test_vector1.at(3) << std::endl;
	std::cout << "Position 4: " << test_vector1.at(4) << std::endl;
	std::cout << "Position 5: " << test_vector1.at(5) << std::endl;
	std::cout << "Position 6: " << test_vector1.at(6) << std::endl;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << std::endl << "Check the more effective pop_back funktion twice" << std::endl;
	test_vector1.pop_back_eff();
	test_vector1.pop_back_eff();
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << "Vector-size: " << test_vector1.size() << std::endl;
	std::cout << "Vector-capacity: " << test_vector1.capacity() << std::endl;
	std::cout << "Position 0: " << test_vector1.at(0) << std::endl;
	std::cout << "Position 1: " << test_vector1.at(1) << std::endl;
	std::cout << "Position 2: " << test_vector1.at(2) << std::endl;
	std::cout << "Position 3: " << test_vector1.at(3) << std::endl;
	std::cout << "Position 4: " << test_vector1.at(4) << std::endl;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << "Try to op back 4 times" << std::endl;
	test_vector1.pop_back();
	test_vector1.pop_back();
	test_vector1.pop_back();
	test_vector1.pop_back();
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << "Vector-size: " << test_vector1.size() << std::endl;
	std::cout << "Vector-capacity: " << test_vector1.capacity() << std::endl;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << std::endl << "Add the values 17 and 18 with the more effective function" << std::endl;
	test_vector1.push_back_eff(15);
	test_vector1.push_back_eff(16);
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << "Vector-size: " << test_vector1.size() << std::endl;
	std::cout << "Vector-capacity: " << test_vector1.capacity() << std::endl;
	std::cout << "Position 0: " << test_vector1.at(0) << std::endl;
	std::cout << "Position 1: " << test_vector1.at(1) << std::endl;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << std::endl << "Check the content of the test_vector2" << std::endl;
	std::cout << "Vector-size: " << test_vector2.size() << std::endl;
	std::cout << "Vector-capacity: " << test_vector2.capacity() << std::endl;
	std::cout << "Position 0: " << test_vector2.at(0) << std::endl;
	std::cout << "Position 1: " << test_vector2.at(1) << std::endl;
	std::cout << "Position 2: " << test_vector2.at(2) << std::endl;
	std::cout << "Position 3: " << test_vector2.at(3) << std::endl;
	std::cout << "Position 4: " << test_vector2.at(4) << std::endl;
	std::cout << "Position 5: " << test_vector2.at(5) << std::endl;
	std::cout << "Position 6: " << test_vector2.at(6) << std::endl;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << std::endl << "Check the = operator (test_vector2 = test_vector1)" << std::endl;
	test_vector2 = test_vector1;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << std::endl << "Check the content of the test_vector2" << std::endl;
	std::cout << "Vector-size: " << test_vector2.size() << std::endl;
	std::cout << "Vector-capacity: " << test_vector2.capacity() << std::endl;
	std::cout << "Position 0: " << test_vector2.at(0) << std::endl;
	std::cout << "Position 1: " << test_vector2.at(1) << std::endl;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << "Clear the vector" << std::endl;
	test_vector2.clear();
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << "Vector-size: " << test_vector2.size() << std::endl;
	std::cout << "Vector-capacity: " << test_vector2.capacity() << std::endl;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();

	std::cout << "END OF THE TEST, THANK YOU !!!" << std::endl;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Press enter to continue" << std::endl;
	std::cin.get();



	return 0;
}

