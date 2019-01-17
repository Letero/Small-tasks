#include <iostream>

class Base
{
  public:
    Base(int a) : size(a)
    {
        try
        {
            if (a == 5)
            {
                throw 5;
            }
        }
        catch (int a)
        {
            std::cout << a;
        }
    }

  private:
    int size;
};

int main(int argc, char *argv[])
{
    Base newObj(5);
    return 0;
}