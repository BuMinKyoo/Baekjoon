using System;

namespace ConsoleApp2
{
    public class Program
    {
        static void Main(string[] args)
        {
            string str = Console.ReadLine();
            string[] str_split = str.Split(' ');

            int num1 = int.Parse(str_split[0]);
            int num2 = int.Parse(str_split[1]);

            int divisor = num1 > num2 ? num2 : num1;
            while (true)
            {
                if (num1 % divisor == 0 && num2 % divisor == 0)
                    break;
                divisor--;
            }

            int multiple = num1 > num2 ? num1 : num2;
            int num1_mul = num1;
            int num2_mul = num2;
            while (true)
            {
                if (num1 > num2)
                    num2 += num2_mul;
                else if (num1 < num2)
                    num1 += num1_mul;
                else
                {
                    multiple = num1;
                    break;
                }
            }

            Console.WriteLine($"{divisor}\n{multiple}");
        }
    }
}
