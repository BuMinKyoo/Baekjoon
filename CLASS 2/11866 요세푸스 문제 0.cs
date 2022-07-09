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
            int[] nums = new int[1000];
            Console.Write("<");

            int num = 0;
            int index = 0;
            int print_count = 0;
            while (true)
            {
                int count = K;
                while (count > 0)
                {
                    num++;
                    if (num > N)
                        num = 1;

                    while (true)
                    {
                        bool flage = true;
                        for (int j = 0; j < index; j++)
                        {
                            if (num == nums[j])
                            {
                                num++;
                                if (num > N)
                                    num = 1;
                                flage = false;
                                break;
                            }
                        }

                        if (flage == true)
                            break;
                    }
                    count--;
                }
                nums[index++] = num;
                print_count++;
                Console.Write(num);
                if (print_count != N)
                    Console.Write(", ");
                if (print_count == N)
                {
                    Console.Write(">");
                    break;
                }
            }
        }
    }
}
