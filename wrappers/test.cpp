/*
 *  test.cpp
 *  wrappers
 *
 *  Created by Anees Attarwala on 11/22/15.
 *  Copyright 2015 __MyCompanyName__. All rights reserved.
 *
 */

#include "test.h"
#include <iostream>
 test& test::operator=(const test& t)
{
	if(this==&t)
		return *this;
	delete p;
	p=new int;
	*p=*t.p;
	return *this;
}	
  