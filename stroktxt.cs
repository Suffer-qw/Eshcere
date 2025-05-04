using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp5
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string test = "test.txt";
            string two = "two.txt";
            string merged = "merged.txt";
            string[] lines = File.ReadAllLines(test) ;
            string[] linesTwo = File.ReadAllLines(two);
            string[] alll = lines.Concat(linesTwo).ToArray();
            
            foreach (string line in alll)
            {
                Console.WriteLine(line);
            }
            int z = 0;
            for (int i = 0; i < alll.Length; i++)
            {
                string words = alll[i];
                for (int j = 0; j < words.Length; j++)
                {
                    if (words[j] == ' ' || words[j] == '\n')
                        z++;

                }
            }
            Console.WriteLine(z);

            File.WriteAllLines(merged, alll);
        }
    }
}
