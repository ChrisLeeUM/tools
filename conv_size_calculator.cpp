#include<iostream>
using namespace std;

int main()
{
    int raw_size = 0, kernel_size = 0, step = 0, padding = 0;
    int res = 0;
    while(true)
    {
        if (raw_size == 0)
        {
            cout<<"Please input raw_size, kernel_size, step, padding\n";
            cin>>raw_size>>kernel_size>>step;
        }
        res = (raw_size - kernel_size + 2 * padding) / step + 1;
        cout<<res<<endl;
        cout<<"Need Repeat Calculation?\n Press n to start a new calculation, Press q to quit, press y to continue\n";
        cin.clear();
        cin.ignore(1024, '\n');
        char flag = 0;
        cin>>flag;
        if (flag == 'q')
        {
            break;
        }
        else
        {
            if (flag != 'n')
            {
                raw_size = res;
            }
            else
            {
                raw_size = 0; kernel_size = 0; step = 0; padding = 0; res = 0;
            }
        }
    }
    return 0;
}
