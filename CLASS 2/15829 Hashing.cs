using System;

namespace ConsoleApp2
{
    public class Program
    {
        static void Main(string[] args)
        {
            int garbige = int.Parse(Console.ReadLine());
            string str = Console.ReadLine();

            int num;
            long sum = 0;
            long thirty_one = 1;
            for (int i = 0; i < str.Length; i++)
            {
                num = str[i] - 96;
                sum += num * thirty_one;
                thirty_one *= 31;
                thirty_one %= 1234567891;
            }

            Console.WriteLine(sum % 1234567891);
        }
    }
}
