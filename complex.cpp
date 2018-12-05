#include "complex.h"
#include <iostream>

using namespace std;

complex::complex()
{

}
complex::complex(int a,int b)
{
re=a;
im=b;
}

complex::add(double fr,double fi,double& nr,double& ni)
{
    nr=fr+nr;
    ni=fi+ni;
}


complex::sub(double fr,double fi,double& nr,double& ni)
{
    nr=fr-nr;
    ni=fi-ni;
}


complex::mul(double fr,double fi,double& nr,double& ni)
{   int n;
    n=(fr*nr)+(fi*ni*(-1));
    ni=(fr*ni)+(fi*nr);
    nr=n;
}


complex::div(double fr,double fi,double& nr,double& ni)
{
    double nur,nui,de;
    if(ni<0)
    {
        nur=(fr*nr)+(fi*ni*(-1));
    }
    else
        {
            nur=(fr*nr)+(fi*ni*(1));
        }
 nui=(fr*-ni)+(fi*nr);

 de=nr*nr+ni*ni;

 nr=nur/de;
 ni=nui/de;

}

