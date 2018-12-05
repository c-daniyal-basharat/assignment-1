#include <iostream>
#include "linklist.h"
#include "complex.h"
using namespace std;

int main()
{
    double fr,fi,sr,si;

    linklist l;
    complex m;
    cout<<"adding complex number to the link list in end"<<endl;
 l.iend(-4,5);
 l.iend(-3,-3);
 l.iend(-4,3);
 l.plt();
 cout<<endl;


    cout<<"adding first two complex number and storing them to the link list in end"<<endl;
 l.valpos(fr,fi,1);
 l.valpos(sr,si,2);
 m.add(fr,fi,sr,si);
 l.iend(sr,si);
 l.plt();
 cout<<endl;


    cout<<"subtracting first from three and storing the complex number to the link list in end"<<endl;
 l.valpos(fr,fi,1);
 l.valpos(sr,si,3);
 m.sub(fr,fi,sr,si);
 l.iend(sr,si);
 l.plt();
 cout<<endl;


    cout<<"multipling 2 by 3 and storing the complex number to the link list in end"<<endl;
 l.valpos(fr,fi,2);
 l.valpos(sr,si,3);
 m.mul(fr,fi,sr,si);
 l.iend(sr,si);
 l.plt();
 cout<<endl;



 cout<<"dividing 1 by 3 and storing the complex number to the link list in end"<<endl;
 l.valpos(fr,fi,1);
 l.valpos(sr,si,3);
 m.div(fr,fi,sr,si);
 l.iend(sr,si);
 l.plt();
 cout<<endl;

    cout<<"deleting the complex number at the fourth position and storing the complex number to the link list in end"<<endl;
 l.valpos(fr,fi,4);
 l.delpos(4);
 l.iend(fr,fi);
 l.plt();
 cout<<endl;


}
