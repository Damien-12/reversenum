#include <iostream>
using namespace std;

int main()
{
    int num, rev_num = 0;
    
    cout << "Enter a num: ";
    cin >> num;

    while(num != 0)
    {
    	int digit = num % 10;
        rev_num = rev_num * 10 + digit;
        num /= 10;
	}

    cout << "Reversed number is: " << rev_num << endl;
    return 0;
}

