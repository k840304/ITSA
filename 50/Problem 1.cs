using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            string answer = Console.ReadLine();
            while (true)
            {
                string guess = Console.ReadLine();
                if (guess == "0000") break;
                int a = 0;
                int b = 0;
                for (int i = 0; i < 4; i++)
                {
                    int position = answer.IndexOf(guess[i]);
                    if (position != -1)
                    {
                        if(position == i)
                        {
                            a++;
                        }
                        else
                        {
                            b++;
                        }
                    }
                }
                Console.WriteLine(a + "A" + b + "B");
            }
        }
    }
}
