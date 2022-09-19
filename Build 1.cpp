#include "easy.h"
using namespace std;
bool itc_iseven(int a1){
    if (a1%2==0){
        return 1;
    }
    return 0;
}
int itc_max(int a1, int a2) {
    if (a1>a2){
        return a1;
    }
    return a2;
}
int itc_min(int a1, int a2) {
    if (a1>a2){
        return a2;
    }
    return a1;
}
double itc_fmax(double a1, double a2){
    if (a1>a2){
        return a1;
    }
    return a2;
}
double itc_fmin(double a1, double a2){
    if (a1>a2){
        return a2;
    }
    return a1;
}
