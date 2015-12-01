#include <iostream>
#include "person.h"
#include <vector>
#include "wrapper.h"
#include"test.h"
using namespace std;
int main () {
    wrapper p (new person("Anees Attarwala", 15));
	p.refcount();cout<<endl;
	wrapper p2(new person("Saniya Saifee", 20));
	{	wrapper p4 (new person("AA",1000));
		p4.refcount();cout<<endl;
		p=p4;
    	p.refcount();cout<<endl;
	}
	wrapper p3(p2);
	p3.refcount();cout<<endl;
	p.refcount();cout<<endl;

		
}
