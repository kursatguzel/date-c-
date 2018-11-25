#include "tarih.h"

int Tarih::getGun()
{
    return gun;
}
int Tarih::getAy()
{
    return ay;
}
int Tarih::getYil()
{
    return yil;
}

void Tarih::setYil(int a)
{
    yil=a;
}

bool Tarih::artikyil()
{
    if(yil%400==0)
    {
        return true;
    }
    else if(yil%100==0)
    {
        return false;
    }
    else if(yil%4==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Tarih::setGun(int c)
{
    if(c<1)
    {
        gun=1;
    }
    else
    {
        if(c<=28)
        {
            gun=c;
        }
        else
        {
            if(ay==1||ay==3||ay==5||ay==7||ay==8||ay==10||ay==12)
            {
                if(c<=31)
                {
                    gun=c;
                }
                else
                {
                    gun=31;
                }
            }
            else
            {
                if(ay!=2)
                {
                    if(c<=30)
                    {
                        gun=c;
                    }
                    else
                    {
                        gun=30;
                    }
                }
                else
                {
                    if(artikyil()==true)
                    {
                        if(c<=29)
                        {
                            gun=c;
                        }
                        else
                        {
                            gun=29;
                        }
                    }
                    else
                    {
                        if(c<=28)
                        {
                            gun=c;
                        }
                        else
                        {
                            gun=28;
                        }
                    }

                }
            }
        }
    }
}

void Tarih::setAy(int b)
{
    if(b>0&&b<=12)
    {
        ay=b;
    }
    else
    {
        if(b<=0)
        {
            ay=1;
        }
        else
        {
            int bolum, kalan;
            bolum=b/12;
            kalan=b%12;
            setYil(yil+bolum);
            ay=kalan+1;
        }
    }
}
