# assignment-1
Assignment 1 done by Ch Daniyal Basharat.
https://github.com/c-daniyal-basharat/assignment-1
It contains 3 cpp files and two header files. 
In main.cpp header files of two classes are added there are objects formed and functions from the class are formed.
In two header files there are protype of the functions. 
In complex and link list .cpp file required fucttions are created.


In main.cpp we have included the two classes ("complex and link list") and created two objects(in case in which operator overloading is not used) one of complex class and one of link list class. we are calling following functions to obtain the explained below 
uses by using suitable objects:

Function from link list:

	iend(double ,double );//insert at the end
        delpos(int);//delete at position
        valpos(double &,double &,int );//value at a position
        iafpos(double ,double ,int );//insert after a position
        plt();//print the list1

Function from complex:
        complex();
        complex(int ,int);
        add(double ,double ,double& ,double& );//addition
        sub(double ,double ,double& ,double& );//subtraction
        mul(double ,double ,double& ,double& );//multiplication
        div(double ,double ,double& ,double& );//division

In header files there are functions prototypes declared.

From complex.h:

	complex();
        complex(int ,int);
        add(double ,double ,double& ,double& );//addition function in which two variables are being passed by reference so that complex number after performing opertion can returned.
        sub(double ,double ,double& ,double& );//subtraction function in which two variables are being passed by reference so that complex number after performing opertion can returned.
        mul(double ,double ,double& ,double& );//multiplication function in which two variables are being passed by reference so that complex number after performing opertion can returned.
        div(double ,double ,double& ,double& );//division function in which two variables are being passed by reference so that complex number after performing opertion can returned.
        
From Link list.h:

	linklist();

        iend(double ,double );//insert at the end
        delpos(int);//delete at position
        valpos(double &,double &,int );//value at a position
        iafpos(double ,double ,int );//insert after a position
        plt();//print the list

In cpp files of complex and link list there are bodies of the functions.

In complex.cpp:

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
	
In linklist.cpp:

	 linklist::linklist()
   {
       head=NULL;
   }

   linklist::  iend(double r,double i)//insert at the end
   {
       if (head==NULL)
   {
       node *temp=new node;
	 	temp->re=r;
		temp->im=i;

			temp-> next =head;
	head=temp;

   }

   else
      {

      node *n=new node;
 	node *temp=head;
	while(temp ->next != NULL)
	{temp= temp->next;
	}
	temp->next =n;
	n->re=r;
	n->im=i;
	n->next=NULL;
   }
   }

   linklist::delpos(int p)//delete at a position
 	{
		node *pre=head;
		node *cur=head;
   if(p>1)
   {       for(int i=1;i<p-1;i++)
		{
			pre=pre->next;

		}

		for(int i=1;i<=p-1;i++)
		{
			cur=cur->next;

		}


		pre->next=cur->next;
		delete cur;
   }
      else 
   {
       cur=cur->next;
       head=cur;
       delete pre;
   }
	}

   linklist::iafpos(double r,double i,int p)//insert after a position
   {
		node *pre=head;
		node *cur=head;
        node *n=new node;
		for(int i=1;i<p;i++)
		{
			pre=pre->next;

		}

		for(int i=1;i<=p;i++)
		{
			cur=cur->next;

		}
   n->re =r;
   n->im=i;
   n->next=cur;
   pre->next=n;

   }

   linklist::valpos(double &a,double &b,int p)//value at position
   {
       node * pre=head;
       for (int i=0;i<p-1;i++)
       {
           pre=pre->next;
       }
       a=pre->re;
       b=pre->im;

   }

   linklist::plt()//print the list
   {
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->re;
		if (temp->im>0)
        {
            cout<<"+";

        }   cout<<temp->im<<"j"<<"  ";
		temp=temp->next;
	}
   }
  
