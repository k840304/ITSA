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
                string a = input[0];
                string b = input[1];
                int times = 0;
                for(int i = 0; i < b.Length - a.Length + 1; i++)
                {
                    string temp = "";
                    for(int j = 0; j < a.Length; j++)
                    {
                        temp += b[i + j];
                    }
                    if (temp == a) times++;
                }
                Console.WriteLine(times);
                cases--;
            }
        }
    }
}
