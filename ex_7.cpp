#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <numeric>
#include <cmath>

std::vector<int> vecstr_to_vecint(std::vector<std::string> vs)
{
  std::vector<int> ret;
  for (std::vector<std::string>::iterator it=vs.begin();it!=vs.end();++it)
  {
    std::istringstream iss(*it);
    int temp;
    iss>> temp;
    ret.push_back(temp);
  }
  return ret;
}

int* calc_array(std::vector<int> vec, int size)
{
  int* array = new int[size];
  
  for(int i = 1, n= 0;i<=size;i++, n++)
  {
    array[n]=round(((vec[i]+40)/1.8)-40);
  }
  return array;
}

void printArray(int arr[], int x)
{
  for(int i = 0; i < x; i++)
  {
    std::cout << arr[i] << ' ';
  }
  std::cout << std::endl;
}
int main() {
    std::string input, temp;
    std::vector<std::string> tokens;
    getline(std::cin, input);
    std::istringstream iss(input);
    while(iss>>temp)
      tokens.push_back(temp);
    
    std::vector<int> input_int = vecstr_to_vecint(tokens);
    
    int size = input_int[0];
    int* ptr = calc_array(input_int,size);
    printArray(ptr, size);
}
