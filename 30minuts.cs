using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        var employees = new[]
        {
            new { Name = "Ivan", Department = "IT", Salary = 100000 },
            new { Name = "Petr", Department = "HR", Salary = 80000 },
            new { Name = "Alexey", Department = "IT", Salary = 120000 },
            new { Name = "Mary", Department = "HR", Salary = 75000 },
            new { Name = "Darya", Department = "IT", Salary = 95000 },
            new { Name = "Sergey", Department = "Finance", Salary = 110000 }
        };
        var gg = employees.OrderByDescending(x => x.Salary).Take(3);
        foreach (var employee in gg)
        {
            Console.WriteLine(employee);
        }
        Console.WriteLine("Туц иук \n");
        var ggtwo = employees
            .GroupBy(x => x.Department)
            .Select(g => new {
                Department = g.Key,
                AverageSalary = g.Average(x => x.Salary) 
            })
            .OrderByDescending(x => x.AverageSalary)
            .ToList();

        foreach (var employee in ggtwo)
        {
            Console.WriteLine(employee);
        }
    }
}
