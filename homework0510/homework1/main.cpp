#include <iostream>
#include "class.h"

int main(){
    circle ksc1(0,0,1);
    circle ksc2(2,0,1);
    calculate cal;
    cal.section(ksc1, ksc2);
    return 0;
}