using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp10
{
    internal class Program
    {
        static void Main(string[] args)
        {
            List<string> encodedMessages = new List<string>
            {
                "sr",
                "svool",
                "r slkv mlylwb wvxlwvh gsrh nvhhztv",
                "qzezxirkg",
                "gsv vrtsgs hbnkslmb",
                " ",
                " aaa ",
                "       ",
                "",
                "thelastrandomsentence"
            };

            List<string> decodedMessages = new List<string>
            {
               "hi",
               "hello",
               "i hope nobody decodes this message",
               "javacript",  // Опечатка в оригинале? Должно быть "javascript"?
               "the eighth symphony",
               " ",
               " zzz ",
               "       ",
               "",
               "gsvozhgizmwlnhvmgvmxv"
            };

            string chek = "";
            for (int i = 0; i < encodedMessages.Count; i++)
            {
                chek = "";
                for (int j = 0; j < encodedMessages[i].Length; j++)
                {
                    if (encodedMessages[i][j] != ' ')
                    {
                        chek += ((char)(97 + 26 - (encodedMessages[i][j] - 96)));
                    }
                    else
                        chek += " ";
                }
                Console.WriteLine($"{decodedMessages[i]} == {chek}");
                if (decodedMessages[i] == chek)
                    Console.WriteLine("true");
            }

            /*
            for (int i = 97; i < 123; i++)
            {
                c = ((char)(97 + 26 - (i - 96)));
                Console.WriteLine(c);
            }
            */
            
        }
    }
}
