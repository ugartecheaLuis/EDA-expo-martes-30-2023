#ifndef __PRECIO_H__ 
#define __PRECIO_H__

typedef struct{
    int met;
    int val;
    int len;
}precio;

int buscar(precio *, int );
int costo(int , precio *);
#endif