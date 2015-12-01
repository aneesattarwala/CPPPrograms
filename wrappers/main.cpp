#include <iostream>
#include "person.h"
#include <vector>
#include "wrapper.h"
#include"test.h"
using namespace std;
int main () {
    wrapper p (new person("Anees Attarwala", 15));
	p->print();cout<<endl;	
	wrapper p2(new person("Saniya Saifee", 20));
	p2->print();cout<<endl;
	//wrapper p3(p);
	//p3->print();cout<<endl;
	
	wrapper p4 (new person("AA",1000));
	p4 = p2;
   
	p4->print();cout<<endl;
	p2->print();
	
}
/**** testing... not required****/
//p=p2;	
//test t1(10);
//	test t2(1000);
//	t1.printt();
//	cout<<endl;
//	t2=t1;
//	t2.printt();