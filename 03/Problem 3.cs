using System;

namespace ConsoleApp2
{
    class Program
    {
        static void Main(string[] args)
        {
            int cases = int.Parse(Console.ReadLine());
            while(cases > 0)
            {
                string[] input = Console.ReadLine().Split(' ');
                ulong n = ulong.Parse(input[0]) - 1;
                ulong m = ulong.Parse(input[1]);
                ulong sum = (m * (m + 0x1) * (0x2 * m + 0x1) / 0x6) - (n * (n + 0x1) * (0x2 * n + 0x1) / 0x6);
                Console.WriteLine(sum);
                cases--;
            }
        }
    }
}
