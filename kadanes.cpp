#include<iostream>
using namespace std;

int kadane(int arr[], int n)
{
  int max_so_far = arr[0];
  int max_ending_here = arr[0];

  for (int i = 1; i < n; i++)
  {
      if(arr[i] < (max_ending_here + arr[i]))
      {
       max_ending_here = max_ending_here + arr[i];
      }
      else
      {
          max_ending_here = arr[i];
      }
      if(max_so_far < max_ending_here)
      {
       max_so_far = max_ending_here;
      }
  }
  return max_so_far;
}

int main()
{
  int arr[] = {-2, -3, -4, -1, -2, -1, -5, -3};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << "Maximum sum contiguous subarray is " << kadane(arr,n);
  return 0;
}
