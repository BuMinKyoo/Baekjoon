using System;

namespace ConsoleApp1
{
    public class Program
    {
        static void Main()
        {
            string input1 = Console.ReadLine();
            string[] input1_split = input1.Split(' ');

            int N = int.Parse(input1_split[0]);
            int M = int.Parse(input1_split[1]);
            
            string input2 = Console.ReadLine();
            string[] input2_split = input2.Split(' ');
            int[] input2_nums = new int[100];

            for(int index = 0; index < N; index++)
            {
                input2_nums[index] = int.Parse(input2_split[index]);
            }

            int sum, close_sum = 0;
            int num1, num2, num3;
            int i = 0, j = 0, k = 0;
            while(i <= N - 3)
            {
                num1 = input2_nums[i];
                j = i + 1;
                while(j <= N - 2)
                {
                    num2 = input2_nums[j];
                    k = j + 1;
                    while (k <= N - 1)
                    {
                        num3 = input2_nums[k];
                        sum = num1 + num2 + num3;
                        if (sum <= M && sum > close_sum)
                        {
                            close_sum = sum;
                        }
                        k++;
                    }
                    j++;
                }
                i++;
            }

            Console.WriteLine(close_sum);
        }
    }
}
