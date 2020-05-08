#include <iostream>

using namespace std;

/*
int main()
{
    int i;
    double d;
    string s;
    
    cin >> i;
    cin >> d;
    getline(cin, s);
    
    cout << "i is " << i << endl;
    cout << "d is " << d << endl;
    cout << "s is " << s << endl;
    
    if (i < 2)
    {
        cout << "i is less than 2" << endl;
    }
    else
    {
        cout << " i is greater than 2" << endl;
    }
    
    
    return(0);
}
*/

int main(){
    
    int* x;
    
    *x = 4;
    
    int* x = 4;
    
    
    cout << *x << endl;
    
    return 0;
}
