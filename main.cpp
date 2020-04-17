#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"

using namespace std;

int main()
    {
        LinkedList l;
        try{
            while(true)
                l.pushBack(5);
        }
        catch(const bad_alloc& e)
        {
            cout<<e.what();
        }
    }