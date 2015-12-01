/*
 *  wrapper1.h
 *  wrappers
 *
 *  Created by Anees Attarwala on 11/22/15.
 *  Copyright 2015 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef _person
#define _person
#include<string>
using namespace std;
class person{

	string name;
	int id;
public:
	person():name("a"),id(0){};
	person(string _name, int _id);
	void print();
	~person();
};
#endif