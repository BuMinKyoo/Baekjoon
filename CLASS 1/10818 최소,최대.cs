using System;

namespace ConsoleApp1
{
    public class Program
    {
        static void Main()
        {
            int N = int.Parse(Console.ReadLine());
            string str = Console.ReadLine();
            string[] str_split = str.Split(" ");

            int min = 1000000;
            int max = -1000000;
            int num;
            for(int i = 0; i < N; i++)
            {
                num = int.Parse(str_split[i]);
                if(num > max)
                {
                    max = num;
                }
                if(num < min)
                {
                    min = num;
                }
            }
            Console.WriteLine($"{min} {max}");
        }
    }
}
