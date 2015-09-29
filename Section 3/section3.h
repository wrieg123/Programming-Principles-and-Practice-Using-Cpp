// Written by Jtaim
// 19 Sept 2015
// Header file used for Programming: Principles and Practice Using C++ Second Edition
// section 3

#ifndef SECTION3_H     // begin header guard
#define SECTION3_H

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }
inline void simple_error(string s)	// write ``error: s and exit program
{
	cerr << "error: " << s << '\n';
	keep_window_open();		// for some Windows environments
	exit(1);
}

#endif              // close header guard