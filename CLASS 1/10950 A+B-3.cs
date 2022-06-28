using System;

namespace ConsoleApp1
{
    public class Program
    {
        static void Main(string[] args)
        {
            int T = int.Parse(Console.ReadLine());

            int A;
            int B;

            for(int i = 0; i < T; i++)
            {
                string input = Console.ReadLine();
                string[] input_split = input.Split(" ");
                A = int.Parse(input_split[0]);
                B = int.Parse(input_split[1]);

                Console.WriteLine(A+B);
            }
        }
    }
}
