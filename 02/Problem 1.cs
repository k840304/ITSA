using System;

namespace ConsoleApp2
{
    class Program
    {
        static void Main(string[] args)
        {
            int[,] points = new int[20, 2];
            int cases = int.Parse(Console.ReadLine());
            while(cases > 0)
            {
                string[] input = Console.ReadLine().Split(' ');
                int m = int.Parse(input[0]);
                for(int i = 0; i < m; i++){
                    points[i, 0] = int.Parse(input[i * 2 + 1]);
                    points[i, 1] = int.Parse(input[i * 2 + 1 + 1]);
                }
                int max = 0;
                for (int i = 0; i < m - 1; i++)
                {
                    for(int j = i + 1; j < m; j++)
                    {
                        int d = (points[i, 0] - points[j, 0]) * (points[i, 0] - points[j, 0]) + (points[i, 1] - points[j, 1]) * (points[i, 1] - points[j, 1]);
                        if (max < d)
                        {
                            max = d;
                        }
                    }
                }
                Console.WriteLine(max);
                cases--;
            }
        }
    }
}
