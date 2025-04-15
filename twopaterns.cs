using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace twopatern
{
    public interface IShopObserver
    {
        void Update(Product tmp);
    }

    public class Product
    {
        public string Name;
        public int Count;
        public int Cost;
        public static List<IShopObserver> observers = new List<IShopObserver>();

        public Product(string name, int count, int cost)
        {
            this.Name = name;
            this.Count = count;
            this.Cost = cost;
            observ();
        }

        public void View()
        {
            Console.WriteLine($" -----------\n name {this.Name}\n rjkbxtcndj {this.Count}\n cost {this.Cost}\n -----------");
        }

        public void UpCount(int Count)
        {
            this.Count += Count;
            observ();
        }

        public void observ()
        {
            
            observers.ForEach(o => o.Update(this));
            
        }

    }

    public class User : IShopObserver
    {
        public void Update(Product tmp)
        {
            if (tmp.Count == 0)
            {
                Console.WriteLine($"new towar");
                tmp.View();
            }
        }
    }

    public class Admin : IShopObserver
    {
        public void Update(Product tmp)
        {
            if (tmp.Count == 0 || tmp.Count < 10)
            {
                Console.WriteLine($"мало товаров нао пополнить");
                tmp.View();
            }
        }
    }

    public class ProductBasket
    {
        private static ProductBasket _instance;

        public List<Product> Products;

        private ProductBasket()
        {
            Products = new List<Product>();
            Console.WriteLine("basket open");
        }

        public static ProductBasket GetInstance()
        {
            if (_instance == null)
                _instance = new ProductBasket();
            return _instance;
        }

        public void Addproduct(Product num)
        {
            Products.Add(num);
        }

        public void View() 
        {
            Console.WriteLine("\n****Base Data ****\n");
            Products.ForEach(x => x.View());
            Console.WriteLine("\n****************\n");
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            User user = new User();

            Admin admin = new Admin();

            ProductBasket prodbasket = ProductBasket.GetInstance();

            Product milk = new Product(
                "milk",
                0,
                100);

            Product.observers.Add(user);
            Product.observers.Add(admin);

            Product cola = new Product(
                "cola",
                0,
                100);

            prodbasket.Addproduct(milk);

            prodbasket.Addproduct(cola);

            ProductBasket prodbasketTwo = ProductBasket.GetInstance();

            Product Lemon = new Product(
                "Lemon",
                0,
                20);

            prodbasketTwo.Addproduct(Lemon);

            prodbasket.View();

            Lemon.UpCount(5);

            prodbasketTwo.View();
        }
    }
}
