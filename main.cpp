#include <iostream>
#include <knapsack_2_1>
using namespace std;

int max(int a, int b) { return (a > b) ? a : b; }
int knapSack(int W, int wt[], int val[], int n)
{
	if (n == 0 || W == 0) // Base Case
		return 0;

	be included
		
		if (wt[n - 1] > W)
			return knapSack(W, wt, val, n - 1);

		else
			return max(val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1), knapSack(W, wt,
				val, n - 1));
}
