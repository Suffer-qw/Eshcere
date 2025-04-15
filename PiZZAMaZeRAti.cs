using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PiZZAMaZeRAti
{
    public class Pizza
    {
        public string Dough;
        public string Sauce;

        public List<string> Topping;

        public Pizza() => Topping = new List<string>();

        public void Who()
        {
            Console.WriteLine($"" +
                $"Dough: {this.Dough}\n" +
                $"Sauce: {this.Sauce}\n" +
                $"Topping: {string.Join(",", this.Topping)}");
        }
    }

    public class PizzaBulder
    {
        public Pizza _pizza = new Pizza();

        public PizzaBulder Dough(string dou)
        {
            _pizza.Dough = dou;
            return this;
        }
        public PizzaBulder Sauce(string sau)
        {
            _pizza.Sauce = sau;
            return this;
        }
        public PizzaBulder Topping(string top)
        {
            _pizza.Topping.Add(top);
            return this;
        }

        public Pizza Buld()
        {
            return _pizza;
        }
    }

    internal class Program
    {
        static void Main(string[] args)
        {

            Pizza MargheritaPizzaBuilder = new PizzaBulder()
                .Sauce("сочные томаты")
                .Dough("нежное тонкое")
                .Topping("базилик")
                .Topping("мацарела")
                .Buld();

            Pizza PepperoniPizza = new PizzaBulder()
                .Sauce("нежный томатный соус")
                .Dough("нормисное")
                .Topping("пряные колбаски пепперони с легкой перчинкой")
                .Topping("сыр моцарелла со сливочным вкусом")
                .Buld();

            PepperoniPizza.Who();
            Console.WriteLine($"\n");
            MargheritaPizzaBuilder.Who();

        }
    }
}
