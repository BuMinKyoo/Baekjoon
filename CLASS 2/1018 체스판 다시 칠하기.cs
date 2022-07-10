using System;

namespace ConsoleApp2
{
    public class Program
    {
        static void Main(string[] args)
        {
            string str = Console.ReadLine();
            string[] str_split = str.Split(' ');

            int line = int.Parse(str_split[0]);
            int index = int.Parse(str_split[1]);

            char[,] board = new char[51,51];
            for (int j = 0; j < line; j++)
            {
                string input_board = Console.ReadLine();
                for (int i = 0; i < index; i++)
                {
                    board[j, i] = input_board[i];
                }
            }

            int modify_count1 = 0;
            int modify_count2 = 0;
            int min_modify_count = 64;
            bool flage = true;
            for (int y = 0; y < line - 7; y++)
            {
                for (int x = 0; x < index - 7; x++)
                {
                    for (int j = 0; j < 8; j++)
                    {
                        if (flage == true)
                            flage = false;
                        else
                            flage = true;

                        for (int i = 0; i < 8; i++)
                        {
                            if (flage == true)
                                flage = false;
                            else
                                flage = true;

                            if (flage == true && board[j + y , i + x] == 'B')
                                modify_count1++;
                            else if (flage == false && board[j + y , i + x] == 'W')
                                modify_count1++;

                            if (flage == true && board[j + y, i + x] == 'W')
                                modify_count2++;
                            else if (flage == false && board[j + y, i + x] == 'B')
                                modify_count2++;
                        }
                    }

                    if (min_modify_count > modify_count1)
                        min_modify_count = modify_count1;
                    if (min_modify_count > modify_count2)
                        min_modify_count = modify_count2;

                    modify_count1 = 0;
                    modify_count2 = 0;
                }
            }

            Console.WriteLine(min_modify_count);
        }
    }
}
