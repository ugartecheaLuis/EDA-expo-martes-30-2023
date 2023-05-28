#include <stdio.h>
#include <stdlib.h>
#include "precio.h"

int buscar(precio *arr, int m){
    int t=0;
    for(int i=0; i<arr->len;i++){
        if(m==arr[i].met){
            return (t = arr[i].val);
        }else{
            return -1;
        }
    }
}

int costo(int m, precio *arr){
    int t=buscar(arr,m);
    if(t!= -1){
        return t;
    }else{
        arr[m-1].met=m;
        arr[m-1].val=(arr[0].val + costo(m-1,arr));
        arr->len++;
    }
    return arr[m-1].val;
}