using System;

namespace ConsoleApp1
{
    public class Program
    {
        static void Main()
        {
            string ascending = "1 2 3 4 5 6 7 8";
            string descending = "8 7 6 5 4 3 2 1";
            string input = Console.ReadLine();

            if( input == ascending)
            {
                Console.WriteLine("ascending");
            }
            else if( input == descending )
            {
                Console.WriteLine("descending");
            }
            else
            {
                Console.WriteLine("mixed");
            }
        }
    }
}
