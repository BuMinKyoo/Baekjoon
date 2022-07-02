using System;

namespace ConsoleApp1
{
    public class Program
    {
        static void Main()
        {
            int T, H, W, N;
            int room_num;
            int room_floor;

            T = int.Parse(Console.ReadLine());

            while (T > 0)
            {
                room_num = 1;
                room_floor = 1;

                string inputN = Console.ReadLine();
                string[] inpuN_split = inputN.Split(' ');

                H = int.Parse(inpuN_split[0]);
                W = int.Parse(inpuN_split[1]);
                N = int.Parse(inpuN_split[2]);

                while (H < N)
                {
                    N -= H;
                    room_num++;
                }

                room_floor = N;

                if(room_num < 10)
                {
                    Console.WriteLine($"{room_floor}0{room_num}");
                }
                else
                {
                    Console.WriteLine($"{room_floor}{room_num}");
                }

                T--;
            }
        }
    }
}
