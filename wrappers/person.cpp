/*
 *  wrapper1.cpp
 *  wrappers
 *
 *  Created by Anees Attarwala on 11/22/15.
 *  Copyright 2015 __MyCompanyName__. All rights reserved.
 *
 */

#include "person.h"
#include <iostream>
#include<string>
using namespace std;
person::person(string _name,int _id)
{
    name = _name;	
	id=_id;
}	
void person::print()
{
	cout<<name<<" "<<id;
}
person::~person()
{
	cout<<"person deleted"<<endl;
}
