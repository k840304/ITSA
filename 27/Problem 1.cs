using System;

namespace ConsoleApp2
{
    class Program
    {
        static void Main(string[] args)
        {
            int cases = int.Parse(Console.ReadLine());
            int n, num;
            int[] water = new int[100];
            int[] dp = new int[10000];
            string[] input;
            while (cases > 0)
            {
                input = Console.ReadLine().Split(' ');
                num = int.Parse(input[0]);
                for(int i = 0; i < num; i++)
                {
                    water[i] = int.Parse(input[i + 1]);
                }
                n = int.Parse(input[num + 1]);

                dp[0] = 0;
                for (int i = 1; i <= n; i++)
                {
                    dp[i] = 10001;
                }
                
                for(int i = 0; i < num; i++)
                {
                    for(int j = water[i]; j <= n; j++)
                    {
                        if(dp[j - water[i]] + 1 < dp[j])
                        {
                            dp[j] = dp[j - water[i]] + 1;
                        }
                    }
                }

                if(dp[n] == 10001)
                    Console.WriteLine("0");
                else
                    Console.WriteLine(dp[n]);

                cases--;
            }
        }
    }
}
