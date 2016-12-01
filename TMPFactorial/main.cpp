//
//  main.cpp
//  TMPFactorial
//
//  Created by 岡 和磨 on 12/1/16.
//  Copyright © 2016 岡 和磨. All rights reserved.
//

#include <iostream>

template <int N>
struct Factorial
{
	enum { value = N * Factorial<N - 1>::value };
};

template <>
struct Factorial<0>
{
	enum { value = 1 };
};

int main(int argc, const char * argv[]) {
	// insert code here...
	std::cout << "Hello, World!\n";
	std::cout << Factorial<10>::value << std::endl;
    return 0;
}
