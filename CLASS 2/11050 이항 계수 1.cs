using System;

namespace ConsoleApp2
{
    public class Program
    {
        static void Main(string[] args)
        {
            string str = Console.ReadLine();
            string[] str_split = str.Split(' ');

            int N = int.Parse(str_split[0]);
            int K = int.Parse(str_split[1]);

            int numerator = 1;
            for (int i = 0; i < K; i++)
            {
                numerator *= N;
                N--;
            }

            int denominator = 1;
            while (K > 0)
            {
                denominator *= K;
                K--;
            }

            Console.WriteLine(numerator/denominator);
        }
    }
}
