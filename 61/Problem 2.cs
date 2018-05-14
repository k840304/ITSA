using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int cases;
            int[] item = new int[] { 0, 17, 25 };
            int[] coin = new int[] { 50, 10, 5, 1 };
            int[] qty = new int[4];
            cases = int.Parse(Console.ReadLine());
            while(cases > 0)
            {
                string[] data = Console.ReadLine().Split(',');
                int money = int.Parse(data[0]);
                int mitem = item[int.Parse(data[1])];
                int mqty = int.Parse(data[2]);
                money = money - mitem * mqty;
                Array.Clear(qty, 0, qty.Length);
                for(int i = 0; i <= 3 && money != 0; i++)
                {
                    int div = (money / coin[i]);
                    if (div > 0)
                    {
                        money -= coin[i] * div;
                        qty[i] += div;
                    }
                }
                bool flag = false;
                for(int i = 3; i >= 0; i--)
                {
                    if(qty[i] != 0 && !flag)
                    {
                        Console.Write("Coin " + coin[i] + ":" + qty[i]);
                        flag = true;
                    }
                    else if(qty[i] != 0 && flag)
                    {
                        Console.Write(",Coin " + coin[i] + ":" + qty[i]);
                    }
                }
                Console.WriteLine();
                cases--;
            }
        }
    }
}
