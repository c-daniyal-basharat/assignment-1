#ifndef LINKLIST_H
#define LINKLIST_H

struct node
{
    double re,im;
    node *next;
};
class linklist
{
        public:
        linklist();

        iend(double ,double );//insert at the end
        delpos(int);//delete at position
        valpos(double &,double &,int );//value at a position
        iafpos(double ,double ,int );//insert after a position
        plt();//print the list

        private:
        node *head;
};

#endif // LINKLIST_H
