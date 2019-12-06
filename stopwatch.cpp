#include <iostream>
#include <unistd.h>
#include <stdlib.h>
int main()
{
    int hr, mi, sec, input;
    hr = 0;
    mi = 0;
    sec = 0;
    std::string zero_hr = "";
    std::string zero_mi = "";
    std::string zero_sec = "";
    std::cout<<"input 1 to start\n";
    std::cin>>input;
    if (input==1)
    {
        system("CLS");
    }
    while (input==1)
    {
        if (hr < 10)
        {
            zero_hr = "0";
        }
        else
            zero_hr = "";
        if (mi < 10)
        {
            zero_mi = "0";
        }
        else
            zero_mi = "";
        if (sec < 10)
        {
            zero_sec = "0";
        }
        else
            zero_sec = "";
        std::cout<<zero_hr<<hr<<":"<<zero_mi<<mi<<":"<<zero_sec<<sec<<'\r';
        sec++;
        if (sec>=60)
        {
            mi++;
            sec=0;
        }
        if (mi>=60)
        {
            hr++;
            mi=0;
        }
        if (hr>=24)
        {
            hr=0;
            mi=0;
            sec=0;
        }
        sleep(1);
    }
}
