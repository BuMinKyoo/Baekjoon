using System;

namespace ConsoleApp1
{
    public class Program
    {
        static void Main()
        {
            string Garbage = Console.ReadLine();
            string str = Console.ReadLine();
            int sum = 0;
            foreach(char s in str)
            {
                sum += s - 48;
            }
            Console.WriteLine(sum);
        }
    }
}
