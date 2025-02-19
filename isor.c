#include<stdio.h>
#include<stdlib.h>
struct colgate *m,*p, *f,*r,*t,*n;
void isort()
{
  p=f;
  m=f;
    for (t=f;t;t=t->next){
      for (n=f;n;n=n->next){
        if( n->data < t->data){
           if (t==f){
            p->next=n->next;
            n->next=t;
            f=n;
            n=p;
           }
          else if (n==r){
            p->next=NULL;
            n->next=t;
            r=p;
            m->next=n;
          }
          else if (t==f && n==r){
            p->next=NULL;
            n->next=t;
            f=n;
            r=p;
          }
          else (t!=f && t!=r){
             p->next=n->next;
             n->next=t;
             m->next=n;
          }
        }
        p=n;
        m=t;
      }
    }
}





