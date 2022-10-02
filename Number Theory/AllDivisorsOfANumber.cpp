void printDivisors(int n)
{
	int i = 1;
	for(i=1; i*i < n; i++)          //Broken into to loops to get answer sorted in O(1) auxilliary space  
	{                               //If we don't want in sorted way simply merge them
		if(n % i == 0)
		{
			cout<<i<<" ";
		}
	}

	for(; i >= 1; i--)
	{
		if(n % i == 0)
		{
			cout<<(n / i)<<" ";
		}
	}
}
