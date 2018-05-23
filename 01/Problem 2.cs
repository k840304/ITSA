using System;

namespace ConsoleApp2
{
    class Program
    {
        static void Main(string[] args)
        {
            int[,] matrix = new int[30, 30];
            string[] input = Console.ReadLine().Split(',');
            int n = int.Parse(input[0]);
            int clockwise = int.Parse(input[1]);

            genMatrix(matrix, n, clockwise);
            showMatrix(matrix, n);
        }

        static void genMatrix(int[,] matrix, int n, int clockwise)
        {
            int num = 1;
            if(clockwise == 1)
            {
                for (int i = 0; i <= n / 2; i++)
                {
                    for (int j = i; j <= n - i - 1; j++)
                    {
                        matrix[i, j] = num++;
                    }
                    for (int j = i + 1; j < n - i - 1; j++)
                    {
                        matrix[j, n - i - 1] = num++;
                    }
                    for (int j = n - i - 1; j > i; j--)
                    {
                        matrix[n - i - 1, j] = num++;
                    }
                    for (int j = n - i - 1; j > i; j--)
                    {
                        matrix[j, i] = num++;
                    }
                }
            }
            else
            {
                for(int i = 0; i <= n / 2; i++)
                {
                    for (int j = i; j <= n - i - 1; j++)
                    {
                        matrix[j, i] = num++;
                    }
                    for (int j = i + 1; j < n - i - 1; j++)
                    {
                        matrix[n - i - 1, j] = num++;
                    }
                    for (int j = n - i - 1; j > i; j--)
                    {
                        matrix[j, n - i - 1] = num++;
                    }
                    for (int j = n - i - 1; j > i; j--)
                    {
                        matrix[i, j] = num++;
                    }
                }
            }
        }

        static void showMatrix(int[,] matrix, int num)
        {
            for(int i = 0; i < num; i++)
            {
                Console.Write(matrix[i, 0].ToString("000"));
                for (int j = 1; j < num; j++)
                {
                    Console.Write("," + matrix[i, j].ToString("000"));
                }
                Console.WriteLine();
            }
        }
    }
}
