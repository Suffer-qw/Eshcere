using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace ConsoleApp4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string txt = "gg 123-456-7890";
            string mails = "|VByBlAjJ@mail.rubtbiv3I!l$S`pr=2@mail.ru06czqfu.SiiU'h3/JX&v/WK2YCBB7I9A7gUd/7c?o5$msSecm'B|fHndwE5+7_w@mail.ru";
            string txt2 = "123456789";
            string chek = @"\d{3}-\d{3}-\d{4}";
            string Road = "user/dowanload/NameFile.txt";
            string FileChek = @"[/]";
            string[] words = Regex.Split(mails, @"[|]");
            /*
            Console.WriteLine(words[words.Length - 2]);
            Console.WriteLine(words[words.Length-1]);
            */
            /*
            string gg = "@mail.ru";
            List<string> lines = new List<string>();
            foreach (string word in words)
            {
                int q = 0;
                string z = "";
                for(int i  = 0; i < word.Length; i++) 
                {
                    if (word[i] == gg[q])
                        q++;
                    if(q == 8)
                    {
                        z += word[i];
                        lines.Add(z);
                        break;
                    }
                    z += word[i];

                }
                //Console.WriteLine(word);
            }
            foreach (string word in lines)
            {
                Console.WriteLine(word);
            }
            */
            //\|(\w+)@mail\.ru
            //(\w+)@mail.ru
            MatchCollection mcg = Regex.Matches(mails, @"[a-zA-Z\d]+@mail\.ru");
            foreach (Match m in mcg)
            {
                Console.WriteLine(m.Value);
            }
            /*
            Match gg = Regex.Match(txt, chek);
            Console.WriteLine(Regex.Match(txt, chek).Value);
            */
        }
    }
}
