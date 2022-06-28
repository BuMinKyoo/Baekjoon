using System;

namespace ConsoleApp1
{
    public class Program
    {
        static void Main(string[] args)
        {
            int A;
            int B;

            while(true)
            {
                string input = Console.ReadLine();
                if(input == "0 0")
                {
                    break;
                }
                string[] input_split = input.Split(" ");
                A = int.Parse(input_split[0]);
                B = int.Parse(input_split[1]);

                Console.WriteLine(A+B);
            }
        }
    }
}
