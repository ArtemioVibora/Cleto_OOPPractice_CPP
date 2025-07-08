#include <iostream>

using namespace std;

//I am assuming this is military time so 1 pm should be 13:00
class Times
{
  private:
    int hours;
    int minutes;
    int seconds;
    // static int numberOfObject;
  public:
    Times(int h, int min, int sec) : hours(h), minutes(min), seconds(sec) {
      // ++numberOfObjects;
    }
    Times() : hours(0), minutes(0), seconds(0) {
      // ++numberOfObjects
    }
    
    void enterTime()
    {
      cout << "Enter the numbers of hours: ";
      while(!(cin >> hours) || hours > 24 || hours < 0)
      {
        cin.clear();
        cin.ignore(80, '\n');
        cout << "Error!" << endl;
        cout << "Enter the numbers of hours: ";
      }
      cout << "Enter the number of minutes: ";
      while(!(cin >> minutes) || minutes > 60 || minutes < 0)
      {
        cin.clear();
        cin.ignore(80, '\n');
        cout << "Error!" << endl;
        cout << "Enter the numbers of minutes: ";
      }
      cout << "Enter the number of seconds: ";
      while(!(cin >> seconds) || seconds > 60 || seconds < 0)
      {
        cin.clear();
        cin.ignore(80, '\n');
        cout << "Error!" << endl;
        cout << "Enter the numbers of seconds: ";
      }
    }
    
    Times addTime(Times t1, Times t2)
    {
      Times temp;
      
      temp.hours = t1.hours + t2.hours;
      temp.minutes = t1.minutes +t2.minutes;
      temp.seconds = t1.seconds + t2.seconds;

      if (temp.minutes >= 60)
      {
        temp.minutes = temp.minutes - 60;
        ++temp.hours;
      }

      if (temp.seconds >= 60)
      {
        temp.seconds = temp.seconds - 60;
        ++temp.minutes;
      }
      
      return temp;
    }
    
    void displayTime()
    {
      cout << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds." << endl;
    }
};

int main()
{
  Times t1(5, 33, 28), t2, t3;
  t2.enterTime();
  t3 = t3.addTime(t1, t2);

  t1.displayTime();
  t2.displayTime();
  t3.displayTime();
}
