using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("사각형의 너비를 입력하세요 >>");
            string width = Console.ReadLine();
            Console.WriteLine("사각형의 높이를 입력하세요 >>");
            string height = Console.ReadLine();

            int wid = int.Parse(width);
            int hei = int.Parse(height);
            int area = wid * hei;

            Console.WriteLine("사각형의 넓이는 : {0}", area) ;
        }
    }
}
