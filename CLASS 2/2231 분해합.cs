using System;
using System.Collections.Generic;

namespace ConsoleApp1
{
    public class Program
    {
        static void Main()
        {
            int N, dcp_num = 1;
            int dcp_sum = 0;

            N = int.Parse(Console.ReadLine());

            while (dcp_num <= 1000000)
            {
                dcp_sum = 0;

                dcp_sum += dcp_num;
                int[] arr = digitArr(dcp_num);

                foreach (int i in arr)
                {
                    dcp_sum += i;
                }

                if(dcp_sum == N)
                {
                    Console.WriteLine(dcp_num);
                    break;
                }
                else if(dcp_num == N)
                {
                    Console.WriteLine(0);
                    break;
                }

                dcp_num++;
            }
        }

        public static int[] digitArr(int n)
        {
            if (n == 0) return new int[1] { 0 };

            var digits = new List<int>();

            for (; n != 0; n /= 10)
                digits.Add(n % 10);

            var arr = digits.ToArray();
            Array.Reverse(arr);
            return arr;
        }
    }
}
