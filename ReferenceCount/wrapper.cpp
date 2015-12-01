/*
 *  wrapper.cpp
 *  wrappers
 *
 *  Created by Anees Attarwala on 11/22/15.
 *  Copyright 2015 __MyCompanyName__. All rights reserved.
 *
 */
#include "person.h"
#include "wrapper.h"
#include<iostream>
#include "rct.h"
using namespace std;
wrapper::wrapper (person* _p)
{
	p=_p;
	rc=new rct;
	rc->addref();
}

person& wrapper::operator* ()
{
	return *p;
}	
	
person* wrapper::operator->()
{
	return p;
}
wrapper::~wrapper()
{
	if (rc->release()==0)
	{
		delete p;
	    delete rc;
	}
}

wrapper::wrapper (const wrapper& w)
{	
	//p = new person;
	p=w.p;
	rc=w.rc;
	rc->addref();
	

}	
wrapper& wrapper::operator = (const wrapper& w)
{
	if(this==&w)
		return *this;
	if (rc->release()==0){
	    delete p;
		delete  rc;	}
	//p=new person;
    p=w.p;
	rc=w.rc;
	rc->addref();
	return *this;
}	
	
