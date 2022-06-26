using System;

namespace ConsoleApp1
{
    public class Program
    {
        static void Main(string[] args)
        {
            int number = int.Parse(Console.ReadLine());

            for(int i = 0; i < number; i++)
            {
                for (int j = number - i; j <= number; j++)
                {
                    Console.Write("*");
                }
                Console.Write("\n");
            }
        }
    }
}
