using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int cases = Convert.ToInt32(Console.ReadLine());
            while (cases-- > 0)
            {
                int n = Convert.ToInt32(Console.ReadLine());
                double summerSum = 0;
                double nonSummerSum = 0;
                int temp;
                if (n >= 701)
                {
                    temp = n - 700;
                    summerSum += temp * 5.63;
                    nonSummerSum += temp * 4.50;
                    n -= temp;
                }
                if (n >= 501)
                {
                    temp = n - 500;
                    summerSum += temp * 4.97;
                    nonSummerSum += temp * 4.01;
                    n -= temp;
                }
                if (n >= 331)
                {
                    temp = n - 330;
                    summerSum += temp * 4.39;
                    nonSummerSum += temp * 3.61;
                    n -= temp;
                }
                if (n >= 121)
                {
                    temp = n - 120;
                    summerSum += temp * 3.02;
                    nonSummerSum += temp * 2.68;
                    n -= temp;
                }
                summerSum += n * 2.10;
                nonSummerSum += n * 2.10;

                Console.WriteLine("Summer months:" + Math.Round(summerSum, 2));
                Console.WriteLine("Non-Summer months:" + Math.Round(nonSummerSum, 2));
            }
        }
    }
}
