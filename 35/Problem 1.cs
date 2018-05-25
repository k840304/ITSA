using System;

namespace ConsoleApp2
{
    class Program
    {
        static void Main(string[] args)
        {
            while(true)
            {
                string input = Console.ReadLine();
                if (input == null) break;
                string[] numbers = input.Split(' ');
                Console.WriteLine(int.Parse(numbers[0]) + int.Parse(numbers[1]));
            }
        }
    }
}
