#include <iostream>

using namespace std;

class length
{
    private:
        int feet; 
        float inches;

    public:
        void setlength(int ft, float in)
        {
            feet = ft;
            inches = in; 
        }

        void getlength()
        {
            cout << "\nEnter feet: ";
            cin >> feet;
            cout << "\nEnter Inches: ";
            cin >> inches;
        }

        void showlength()
        {
            cout << feet << " feet and " << inches << " inches.";
        }

};


int main()
{
    length len1;

    len1.setlength(11, 6.25);
    len1.showlength();

    length len2;

    len2.getlength();
    len2.showlength();

}
