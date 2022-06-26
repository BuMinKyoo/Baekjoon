using System;

namespace ConsoleApp1
{
    public class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            string[] inputInput = input.Split(' ');
            int A = int.Parse(inputInput[0]);
            int B = int.Parse(inputInput[1]);

            if(A > B)
            {
                Console.WriteLine(">");
            }
            else if (A < B)
            {
                Console.WriteLine("<");
            }
            else if (A == B)
            {
                Console.WriteLine("==");
            }
        }
    }
}
