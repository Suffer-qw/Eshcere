using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.Threading;
namespace ConsoleApp19
{
    internal class Program
    {
        static void Main(string[] args)
        {
            List<string> filePaths = new List<string>
            {
                @"C:\Users\GOLDNOVA\Documents\fileZero.txt",
                @"C:\Users\GOLDNOVA\Documents\file1.txt",
                @"D:\docs\file3.txt",
                @"C:\Users\GOLDNOVA\Documents\fileZero.txt",
            };
            string searchWord = "gg";

            List<Thread> threads = new List<Thread>();

            foreach (var fileOpen in filePaths)
            {
                Thread thread = new Thread(() =>
                {
                    try
                    {
                        string content = File.ReadAllText(fileOpen);
                        bool containsWord = content.Contains(searchWord);
                        if (containsWord)
                        {
                            Console.WriteLine($"Файл: {fileOpen}");
                            Console.WriteLine($"Содержит слово '{searchWord}'");
                        }
                    }
                    catch (Exception ex)
                    {
                            Console.WriteLine($"Ошибка при обработке файла {fileOpen}: {ex.Message}");
                    }
                });

                threads.Add(thread);
                thread.Start();
            }

            foreach (var thread in threads)
            {
                thread.Join();
            }

            Console.WriteLine("\nПоиск завершен!");
        }

    }
}
