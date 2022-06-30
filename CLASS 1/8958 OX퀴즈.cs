using System;

namespace ConsoleApp1
{
    public class Program
    {
        static void Main()
        {
            int testcaseN = int.Parse(Console.ReadLine());
            int sum = 0;
            int num;

            while (testcaseN > 0)
            {
                num = 1;

                string str = Console.ReadLine();
                foreach (char str2 in str)
                {
                    if (str2 == 'O')
                    {
                        sum += num;
                        num++;
                    }
                    else
                    {
                        num = 1;
                    }
                }
                Console.WriteLine(sum);
                sum = 0;

                testcaseN--;
            }
        }
    }
}
