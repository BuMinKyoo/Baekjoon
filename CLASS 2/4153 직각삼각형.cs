using System;

namespace ConsoleApp1
{
    public class Program
    {
        static void Main()
        {
            int num1, num2, num3;

            while(true)
            {
                string input_num = Console.ReadLine();
                string[] input_num_split = input_num.Split(" ");

                num1 = int.Parse(input_num_split[0]);
                num2 = int.Parse(input_num_split[1]);
                num3 = int.Parse(input_num_split[2]);
                if(num1 == 0 && num2 == 0 && num3 == 0)
                {
                    break;
                }

                if ((num1 * num1) + (num2 * num2) == (num3 * num3) || (num1 * num1) + (num3 * num3) == (num2 * num2) || (num2 * num2) + (num3 * num3) == (num1 * num1))
                {
                    Console.WriteLine("right");
                }
                else
                {
                    Console.WriteLine("wrong");
                }
            }
        }
    }
}
