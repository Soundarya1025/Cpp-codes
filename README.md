# repo1

This is my first repository

//Code1:To display hello world//
#include <iostream>

int main()
{
  std::cout << "Hello World!";
}


//code 2:To display factors of a number//
#include <iostream>
using namespace std;

int main()
{
    int n, i;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factors of " << n << " are: " << endl;  
    for(i = 1; i <= n; ++i)
    {
        if(n % i == 0)
            cout << i << endl;
    }

    return 0;
}

//Code3:To display prime numbers between two numbers
#include <iostream>
using namespace std;

int main()
{
    int low, high, i, flag;

    cout << "Enter two numbers(intervals): ";
    cin >> low >> high;

    cout << "Prime numbers between " << low << " and " << high << " are: ";

    while (low < high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << low << " ";

        ++low;
    }

    return 0;
}

