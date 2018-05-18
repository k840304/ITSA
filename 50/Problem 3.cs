using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int cases = int.Parse(Console.ReadLine());
            while (cases > 0)
            {
                int n = int.Parse(Console.ReadLine());
                double area = 0.0;
                for(int i = 1; i <= n; i++)
                {
                    area += ((1.0 / n) * i) * ((1.0 / n) * i) * (1.0 / n);
                }
                Console.WriteLine(String.Format("{0:0.0000}", area));
                cases--;
            }
        }

    }
}
