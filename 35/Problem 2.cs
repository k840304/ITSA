using System;

namespace ConsoleApp2
{
    class Program
    {
        static void Main(string[] args)
        {
            while(true)
            {
                string str_n =Console.ReadLine();
                if (str_n == null) break;
                int n = int.Parse(str_n);
                int k = int.Parse(Console.ReadLine());
                Console.WriteLine(n % (k + 1));
            }
        }
    }
}
