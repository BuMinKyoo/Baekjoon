using System;

namespace ConsoleApp2
{
    public class Program
    {
        static void Main(string[] args)
        {
            int T = int.Parse(Console.ReadLine());

            while (T > 0)
            {
                int[] nums = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };

                int k = int.Parse(Console.ReadLine());
                int n = int.Parse(Console.ReadLine());
                int index = n - 1;

                while (k > 0)
                {
                    for(int i = 0; i < n; i++)
                    {
                        if (i == 0)
                            continue;
                        nums[i] = nums[i - 1] + nums[i];
                        index = i;
                    }
                    k--;
                }
                Console.WriteLine(nums[index]);
                T--;
            }
        }
    }
}
