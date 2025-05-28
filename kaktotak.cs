using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace ConsoleApp19
{
    internal class Program
    {
        public static void PrintList(List<int> list)
        {
                Console.WriteLine(string.Join(", ", list));
        }
        static void Main(string[] args)
        {
            List<int> list = new List<int>();
            object _lock = new object();
            Random random = new Random();
            bool Running = true;
            for (int i = 0; i < 10; i++)
            {
                list.Add(random.Next(1, 100));
            }
            PrintList(list);

            Thread sortingThread = new Thread(() =>
            {
                while (Running)
                {
                    for (int i = 0; i < list.Count - 1; i++)
                    {
                        int big_i = i;
                        lock (_lock)
                        {
                            for (int x = i + 1; x < list.Count; x++)
                            {
                                if (list[x] < list[big_i])
                                    big_i = x;
                            }
                            (list[i], list[big_i]) = (list[big_i], list[i]);
                        }
                        var copy = new List<int>(list);
                        copy.Sort();

                        if (list.SequenceEqual(copy))
                        {
                            Console.WriteLine("Список уже отсортирован, остановка сортировки.");
                            Running = false;
                            break;
                        }
                        Thread.Sleep(100);

                    }
                    Running = false;

                }
            });
            Thread observerThread = new Thread(() =>
            {
                while (Running)
                {
                    lock (_lock)
                    {
                        PrintList(list);
                    }
                    Thread.Sleep(110);
                }
            });
            sortingThread.Start();
            observerThread.Start();

        }
    }
}
