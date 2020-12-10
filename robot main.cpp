#include "robot.h"

int main (void){
    robot a[2];
    unsigned seed;
    seed = (unsigned)time(NULL);
    srand(seed);
    int na[2],hpr[2],atkr[2],dexr[2],i;
    for (i=0;i<2;i++)
    {
        na[i] = (char)(i+65);
        hpr[i] = rand()%5+5;
        atkr[i] = rand()%4+1;
        dexr[i] = rand()%9+1;
        a[i].sett(na[i], hpr[i],atkr[i],dexr[i]);
    }

    fight(a[0],a[1]);
}
