// created by ebrahim zeinali 

#include <iostream>

using namespace std;

int SumDigits(int inputNum, int& sum)
{
   if( inputNum != 0)
   {
       sum = sum + inputNum%10;
       inputNum = inputNum /10;
       SumDigits(inputNum,sum);

   }
   else
   {
       return inputNum;
   }
}





int main()
{
    int number = 0;
    int Sum = 0;
    cout << "please input number:   " << endl;
    cin >> number;


    int n =  SumDigits(number, Sum);

    cout <<"sum of digits is: " << Sum << endl;






}
