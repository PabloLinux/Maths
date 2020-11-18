#include <iostream>
using namespace std;

int main()
{
    int n1, n2, hcf, temp, lcm;
//You can add more numbers
    cout << "Enter 2 numers for lcm: ";
    cin >> n1 >> n2;

    hcf = n1;
    temp = n2;
    
    while(hcf != temp)
    {
        if(hcf > temp)
            hcf -= temp;
        else
            temp -= hcf;
    }

    lcm = (n1 * n2) / hcf;

    cout << "LCM = " << lcm;
    return 0;
}
