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

                int lenA = input[0].Length;
                int lenB = input[1].Length;
                if (lenA > lenB)
                {
                    for(int i = 0; i < lenA - lenB; i++)
                    {
                        input[1] = "0" + input[1];
                    }
                }
                else
                {
                    for (int i = 0; i < lenB - lenA; i++)
                    {
                        input[0] = "0" + input[0];
                    }
                }
                
                string answer = "";
                int len = input[0].Length - 1;
                int carry = 0;
                while (true)
                {
                    string tempA = "";
                    string tempB = "";
                    for(int i = 1; i <= 8 && len >= 0; i++)
                    {
                        tempA = input[0][len] + tempA;
                        tempB = input[1][len] + tempB;
                        len--;
                    }
                    int sum = int.Parse(tempA) + int.Parse(tempB) + carry;
                    carry = sum / 100000000;
                    answer = (sum % 100000000).ToString("00000000") + answer;
                    if (len < 0) break;
                }
                if (carry != 0) answer = carry + answer;
                Console.WriteLine(answer.TrimStart('0'));
                cases--;
            }
        }
    }
}
