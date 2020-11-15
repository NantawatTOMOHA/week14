#include <iostream>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <stack>
using namespace std;
struct kk
{
    vector<string> food;
};
void cal(unsigned int);
int main()
{ 
    cout << "=====MENU=====" << endl;
    cout <<  "-salad" << endl;
    cout << "-Burger" << endl;
    cout << "-Pizza" << endl;
    cout << "==============" << endl;
    cout << "Limited to 3 customers"<<endl;
    cout << "imited to one customer per 3 orders." << endl;
    cout << endl;
    
    unsigned int n;
    cout << "How many guest ?"<<endl;
    cin >> n;
    if (n > 0 && n <4)
        cal(n);
    else cout << "Exceeding the number of guests"<<endl;
    
   
}

void cal(unsigned int x) {
    string name[3], c;
    kk data[3];
    int b = 1;
    unsigned int a[3] = {0,0,0};
    for (int i = 0; i < x; i++)
    {
        cout << endl;
        cout << "ENTER NAME :: ";
        cin >> name[i];
        cout << "ENTER number of order :: ";
        cin >> a[i];
        if (a[i] >= 4 || a[i] == 0) { cout << "Exceeding the number of order" << endl; b = 0;  break; }
        cout << "ENTER MENU :: ";
          
        for (int j = 0; j < a[i]; j++)
        {
            cin >> c;
            data[i].food.push_back(c);
            data[i].food.push_back("-");
        }
    }
    if (b==1) {
        for (int i = 0; i < x; i++)
        {
            cout << endl;
            cout << "Name :: " << name[i] << endl;
            cout << "LIST MENU :: ";
            for (int j = 0; j < data[i].food.size() - 1; j++)
                cout << data[i].food[j];
            cout << endl;
        }
    }
}