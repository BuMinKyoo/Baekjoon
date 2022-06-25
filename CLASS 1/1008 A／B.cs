using System;

namespace ConsoleApp1
{
    public class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            string[] inputInput = input.Split(' ');
            double A = double.Parse(inputInput[0]);
            double B = int.Parse(inputInput[1]);
            Console.WriteLine(A / B);
        }
    }
}
