using System;
using System.Collections.Generic;

namespace ConsoleApp1
{
    public class Program
    {
        static void Main()
        {
            int N = int.Parse(Console.ReadLine());
            int score = 1;
            int plus_num = 6;
            int distance = 1;


            while (score < N)
            {
                score += plus_num;
                plus_num += 6;
                distance++;
            }

            Console.WriteLine(distance);
        }
    }
}
