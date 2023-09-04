#include <iostream>
#include <cmath>
//#include <iomanip>

using namespace std;

class TC{
   private:
       double F,C;
   public:
    double fc;

    double fHeit()
    {
     cout<<"\nEnter the Fahrenheit:";
     cin>>F;
     //cout<<"\nEnter the Celsius:";
    fc=(5/9)*(F-32);
    return fc;
    }
    double celsius()
    {
        cout<<"\nEnter the Celsius value:";
        cin>>C;
        fc=(5/9)*(C-32);
        return fc;
    }

};

int main()
{
    TC a;
    double b;
    char c;

    cout<<"\nWHICH DO YOU WANT TO CONVERT(CELSIUS(C) OR FAHRENHEIT(F))=";
    c=cin.get();

    if(c=='f' || c=='F')
    {
       b=a.fHeit();
       cout<<"\nTHE Fahrenheit="<<b;

    }
    else if (c=='c' || c=='C')
    {
        b=a.celsius();
        cout<<"\nTHE Celsius="<<b;
    }

    else cout<<"\nWRONG KEY";


}
