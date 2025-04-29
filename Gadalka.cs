using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp3
{

    public class Gadalka
    {
        public string[] beginnings = new string[]
{
    "Сегодня",
    "Завтра",
    "Через неделю",
    "В ближайшую полнолуние",
    "Когда взойдет красная луна",
    "Ровно в полночь",
    "На следующем перекрестке",
    "Когда ты меньше всего ожидаешь",
    "В день твоего рождения",
    "Когда встретишь черного кота",
    "Под знаком Водолея",
    "Когда ветер сменит направление",
    "В час великого решения",
    "Когда загадаешь желание",
    "В сумерках"
};

        public string[] actions = new string[]
        {
    "ты найдешь",
    "ты потеряешь",
    "тебя ждет",
    "ты откроешь",
    "ты поймешь",
    "ты встретишь",
    "ты избежишь",
    "ты притянешь",
    "ты разгадаешь",
    "ты изменишь",
    "ты обретешь",
    "ты отпустишь",
    "ты преодолеешь",
    "ты создашь",
    "ты почувствуешь",
    "ты услышишь",
    "ты увидишь",
    "ты прикоснешься к",
    "ты раскроешь",
    "ты станешь частью"
        };

        public string[] endings = new string[]
        {
    "счастье",
    "тайну",
    "приключение",
    "неожиданный поворот",
    "древний артефакт",
    "забытое знание",
    "вторую половинку",
    "скрытую силу",
    "долгожданную победу",
    "мистический знак",
    "испытание",
    "дар судьбы",
    "ключ от всех дверей",
    "проклятие",
    "благословение луны",
    "следы прошлой жизни",
    "зеркальное отражение",
    "голос из ниоткуда",
    "путеводную звезду",
    "тень неизвестного",
    "магический кристалл",
    "книгу судеб",
    "загадочное послание",
    "судьбоносную встречу",
    "дверь в другой мир"
        };

        public string idk;
        public void Prediction()
        {
            Random randoOne = new Random();
            Random randoTwo = new Random();
            Random randoThree = new Random();

            idk = beginnings[randoOne.Next(beginnings.Length)] + " " + actions[randoTwo.Next(actions.Length)] + " " +  endings[randoThree.Next(endings.Length)];
        }

        public void ViewPrediction()
        {
            if (idk != null)
                Console.WriteLine(idk + "\n");
            else
                Console.WriteLine("вы не создали предсказакние");
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            Gadalka Gd = new Gadalka();
            for (int i = 0; i < 100; i++)
            {
                Gd.Prediction();
                Gd.ViewPrediction();
            }
        }
    }
}
