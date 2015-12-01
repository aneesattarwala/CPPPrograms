/*
 *  test.h
 *  wrappers
 *
 *  Created by Anees Attarwala on 11/22/15.
 *  Copyright 2015 __MyCompanyName__. All rights reserved.
 *
 */
#ifndef _test
#define _test
#include <iostream>

class test{
	int *p;
public:
	test(int _a){p = new int;*p=_a;};
	test& operator=(const test& t);
    void printt(){std::cout<<*p;}
	~test(){std::cout<<"out";delete p;}
};	
#endif

	
