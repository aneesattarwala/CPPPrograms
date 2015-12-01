/*
 *  rc.h
 *  wrappers
 *
 *  Created by Anees Attarwala on 11/22/15.
 *  Copyright 2015 __MyCompanyName__. All rights reserved.
 *
// */

#ifndef _rc
#define _rc
#include <iostream>
using namespace std;
class rct{
	int count;
public:
	rct():count(0){};
	void addref(){count++;}
	int currentcount(){
		return count;}
	int release(){ --count;}
};

#endif
