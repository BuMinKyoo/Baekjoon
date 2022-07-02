using System;

namespace ConsoleApp1
{
    public class Program
    {
        static void Main()
        {
            string input_xywh = Console.ReadLine();
            string[] input_xywh_split = input_xywh.Split(" ");

            int x, y, w, h;
            int xw_distans, yh_distans;

            x = int.Parse(input_xywh_split[0]);
            y = int.Parse(input_xywh_split[1]);
            w = int.Parse(input_xywh_split[2]);
            h = int.Parse(input_xywh_split[3]);

            if((float)w/2 >= x)
            {
                xw_distans = x;
            }
            else
            {
                xw_distans = w - x;
            }

            if ((float)h / 2 >= y)
            {
                yh_distans = y;
            }
            else
            {
                yh_distans = h - y;
            }

            Console.WriteLine(xw_distans > yh_distans ? yh_distans : xw_distans);
        }
    }
}
