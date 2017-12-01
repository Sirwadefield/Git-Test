#include <iostream>
using namespace std;


int sum(int parameter);

int main(){
  int num;
  cout << "Enter a number(Q to quit) : ";
  while(cin >> num)
    {
        cout << "The summation of "<< num << " is " << sum(num) << endl;
        cout << "Enter a number(Q to quit): ";
    }
  return 0;
}

int sum(int parameter)
{
  int sum = 0;
  for(int i = 1; i <= parameter; i++)
    sum += i;
  return sum;
}


