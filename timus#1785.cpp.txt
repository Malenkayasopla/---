#include <iostream>

using namespace std;

int main()
{
    int e; // объявление нескольких переменных.
    cout<<"введите сколько человеков на вас напало: ";
    cin >>e; // пользователь присваивает переменной e какое-либо значение.
    if (1<=e && e<=4){cout<<"few";}
    if (5<=e && e<=9){cout<<"several";}
    if (10<=e && e<=19){cout<<"pack";}
    if (20<=e && e<=49){cout<<"lots";}
    if (50<=e && e<=99){cout<<"horde";}
    if (100<=e && e<=199){cout<<"throng";}
    if (250<=e && e<=499){cout<<"swarm";}
    if (500<=e && e<=999){cout<<"zounds";}
    if (1000<=e && e<=1999){cout<<"legion";}
    return 0;
}
