#ifndef ROBOT_H
#define ROBOT_H

#include<iostream>
#include<cstdlib>
#include<cmath>
#include <time.h>
using namespace std;

class robot
{
    public:
        char name;
        int hp,atk,dex;

        void sett (char n, int h, int a, int d)
        {
            name = n;
            hp = h;
            atk = a;
            dex = d;
        }

};
void fight (robot, robot);

#endif // ROBOT_H
