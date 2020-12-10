#include "robot.h"

void fight (robot a, robot b)
{
    cout << a.name << "  " << a.hp << "  " << a.atk << "  " << a.dex << endl;
    cout << b.name << "  " << b.hp << "  " << b.atk << "  " << b.dex << endl;
    int n;
    if (a.dex >= b.dex)
    {
        n=1;
    }
    else
    {
        n=2;
    }
    while (n<=2)
    {
        if (n=1)
        {
            b.hp = b.hp - a.atk;
            n=2;
            if (b.hp<=0){
                //n=3;
                break;
            }
        }
        if (n=2)
        {
            a.hp = a.hp - b.atk;
            n=1;
            if (a.hp<=0)
            {
                //n=3;
                break;
            }
        }

    }
    cout << a.hp << "  " << b.hp << endl;
    if (a.hp>=0)
    {
        cout << a.name << " is winner!" << endl;
    }
    else
    {
        cout << b.name << " is winner!" << endl;
    }


}
