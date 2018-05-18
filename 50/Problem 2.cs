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
                string number = Console.ReadLine();
                int v = (number[0] - '0') + (number[2] - '0') + (number[4] - '0') + (number[6] - '0') + (number[8] - '0') + (number[10] - '0');
                v = v + 3 * ((number[1] - '0') + (number[3] - '0') + (number[5] - '0') + (number[7] - '0') + (number[9] - '0') + (number[11] - '0'));
                v = 26 - (v % 26);
                v = v - 1;
                if((char)('A' + v) == number[12])
                {
                    Console.WriteLine("valid");
                }
                else
                {
                    Console.WriteLine("invalid");
                }
                cases--;
            }
        }
    }
}
