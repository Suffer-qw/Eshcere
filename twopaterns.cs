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
        public List<IShopObserver> observers = new List<IShopObserver>();
        public Product(string name, int count, int cost)
        {
            this.Name = name;
            this.Count = count;
            this.Cost = cost;
        }

        public void View()
        {
            Console.WriteLine($" -----------\n name {this.Name}\n  rjkbxtcndj {this.Count}\n cost {this.Cost}\n -----------");
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

        public void View() => Products.ForEach(x => x.View());
    }
    internal class Program
    {
        static void Main(string[] args)
        {
        }
    }
}
