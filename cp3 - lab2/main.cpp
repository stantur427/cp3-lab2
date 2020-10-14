#include <iostream>

using namespace std;

class fish
{
public:
    virtual int swim() = 0;
};

class herring: public fish
{
    int swim()
    {
        cout << "Herring likes to swim" << endl;
        return 0;
    }
};

class tuna: public fish
{
    int swim()
    {
        cout << "Tuna likes to swim" << endl;
        return 0;
    }
};

class salmon: public fish
{
    int swim()
    {
        cout << "Salmon likes to swim" << endl;
        return 0;
    }
};

class carp:public fish
{
    int swim()
    {
        cout << "Carp likes to swim but he hates Christmas" << endl;
        return 0;
    }
};

 int MakeFishSwim(fish& inputfish)
{
    inputfish.swim();
    return 0;
}


int main()
{
    herring in_tomato_sauce;
    tuna canned;
    salmon grilled;
    carp fried;
    MakeFishSwim(in_tomato_sauce);
    MakeFishSwim(canned);
    MakeFishSwim(grilled);
    MakeFishSwim(fried);
    return 0;
}
