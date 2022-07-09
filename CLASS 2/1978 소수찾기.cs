using System;

namespace ConsoleApp2
{
    public class Program
    {
        static void Main(string[] args)
        {
            int N = int.Parse(Console.ReadLine());
            string str = Console.ReadLine();
            string[] str_split = str.Split(' ');

            int index = 0;
            int score = 0;
            while (N > 0)
            {
                int num = int.Parse(str_split[index++]);

                int divide = 2;

                if (num == 2)
                    score++;
                else if (num > 2)
                {
                    while(true)
                    {
                        if (num == divide)
                        {
                            score++;
                            break;
                        }
                            
                        else if (num % divide == 0)
                            break;
                        divide++;
                    }
                }
                N--;
            }

            Console.WriteLine(score);
        }
    }
}
