#include <iostream>

using namespace std;

int main()
{
    float a = 0.0f;

    if(a == 0.0f)
    {
        cout<<"equal";
    }

    if(a = 0.0f)
    {
        cout<<"bad equal";
    }

    return 0;
}