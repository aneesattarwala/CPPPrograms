/*
 *  wrapper.h
 *  wrappers
 *
 *  Created by Anees Attarwala on 11/22/15.
 *  Copyright 2015 __MyCompanyName__. All rights reserved.
 *
 */
#ifndef _wrapper
#define _wrapper
#include "person.h"
#include "rct.h"
class wrapper{
	person* p;
	rct* rc;
public:
	wrapper (person* _p);
	person& operator* ();
	person* operator->();
	wrapper (const wrapper& _p);
	wrapper& operator=(const wrapper& _p);
	~wrapper();
	
	
};
#endif