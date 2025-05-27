#include <iostream>

using namespace std;

class counter
{
    private:
        int count;
    public:
        counter() { count = 0; }
        void inc_count()
        {
            count = count + 1;
        }

        int getCount()
        {
            return count; 
        }

};

int main()
{
    counter c;

    c.inc_count();
    cout << c.getCount();

}
