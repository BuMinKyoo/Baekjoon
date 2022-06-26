using System;

namespace ConsoleApp1
{
    public class Program
    {
        static void Main(string[] args)
        {
            int max = 0;
            int count = 9;
            int number = 0;
            while(count > 0)
            {
                int num = int.Parse(Console.ReadLine());
                if(num > max)
                {
                    max = num;
                    number = 10 - count;
                }
                count--;
            }

            Console.WriteLine($"{max}");
            Console.WriteLine($"{number}");
        }
    }
}
