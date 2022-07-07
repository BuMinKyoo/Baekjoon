using System;

namespace ConsoleApp2
{
    public class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                string str = Console.ReadLine();
                if (str[0] == '0')
                    break;

                int str_Lengrh = str.Length;

                bool flag = true;

                for (int i = 0; i < str.Length / 2; i++)
                {
                    if(str[i] != str[str_Lengrh - 1])
                    {
                        flag = false;
                    }
                    str_Lengrh--;
                }

                if(flag == true)
                {
                    Console.WriteLine("yes");
                }
                else
                {
                    Console.WriteLine("no");
                }
            }
        }
    }
}
