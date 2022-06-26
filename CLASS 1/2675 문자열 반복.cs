using System;

namespace ConsoleApp1
{
    public class Program
    {
        static void Main(string[] args)
        {
            int repeatcase = int.Parse(Console.ReadLine());

            while (repeatcase > 0)
            {
                string input = Console.ReadLine();
                string[] input_split = input.Split(" ");
                int repeate = int.Parse(input_split[0]);
                string str = input_split[1];

                for (int i = 0; i < str.Length; i++)
                {
                    for (int j = 0; j < repeate; j++)
                    {
                        Console.Write(str[i]);
                    }
                }
                Console.Write("\n");
                repeatcase--;
            }
        }
    }
}
