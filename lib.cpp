#include "lib.h"

bool conversione(char &a){
    if(a>=65 && a<=90){
        a+=32;
        return true;
    } else if (a>=97 && a<=122) {
        a-=32;
        return true;
    }
    return false;
}
