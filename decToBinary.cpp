#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <math.h>
using namespace std;

string decToBinary(int n, int o)
{
    string prefix, result;
    int binaryNum[32];
    int i = 0;
    while (n > 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
      //  cout << binaryNum[j];
        result.append(to_string(binaryNum[j]));
    }
   // cout << endl;
    for (int j = 1; j <= (o - result.length()); j++)
        prefix.append("0");
    result = prefix + result;
    return result;
}

int main()
{
    string binary;
    vector<int> array;
    array={23,44,56,34,45,56};
    int b=count(array.begin(),array.end(),44);
    cout<<"Vector "<<array[array.size()-1]<<" Count "<<b<<endl;
    for(int i=0;i<array.size();i++) cout<<array[i]<<" ";
    int a = 3, i;
    int n = pow(2, 2 * a);
    //cout << "Factorial " << a << " = " << n << endl;
    for (i = 0; i < n; i++)
    {
        binary = decToBinary(i, 2 * a);
        //cout << "String" << binary << endl;
    }
}