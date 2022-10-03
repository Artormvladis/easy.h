#include <iostream>
#include "easy.h"
using namespace std;
int itc_sqrt(int a1){
    int a2;
    a2=0;
    while (a2*a2<a1){
        a2++;
    }
    if (a2*a2==a1){
        return a2;
    }
    return -1;
}
int itc_skv(int a1){
    int a2;
    a2=a1*a1;
    if (a1>0){
        return a2;
    }
    return -1;
}
int itc_spr(int a1, int a2){
    int a3;
    if (a1>0 && a2>0) {
        a3=a1*a2;
        return a3;
    }
    return -1;
}
int  itc_str(int a1, int a2, int a3){
    int a4, a5;
    a4=(a1+a2+a3)/2;
    if (a1>0 && a2>0 && a3>0){
        a5=itc_sqrt(a4+(a4-a1)+(a4-a2)+(a4-a3));
        return a5;
    }
    return -1;
}
double itc_scir(int a1){
    int a2;
    a2=a1*a1;
    if (a1>0){
        return (a2*3.14);
    }
    return -1;
}
