//
// Created by br4pz on 9/22/25.
//

#ifndef EJERCICIO1_4_1_4_TADTIMER_H
#define EJERCICIO1_4_1_4_TADTIMER_H

#include <iostream>
#include <sys/time.h>
using namespace std;

typedef unsigned long long Long;

Long timeInMillis()
{
    struct timeval i;
    gettimeofday(&i, NULL);
    return (i.tv_sec*1000000+i.tv_usec)/1000;
}

struct Timer
{
    long ini;
    long fin;
};

Timer timer() {
    return {0,0};
}

void timerStart(Timer& t) {
    t.ini=timeInMillis();
}
void timerStop(Timer& t) {
    t.fin=timeInMillis();
}

Long timerElapsedTime(Timer t) {
    return t.fin-t.ini;
}


#endif //EJERCICIO1_4_1_4_TADTIMER_H