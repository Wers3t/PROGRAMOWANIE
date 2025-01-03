﻿using LinqTasksConsoleApp;
using System;
using System.ComponentModel.Design;
using System.Reflection.Metadata.Ecma335;
using System.Xml.Linq;

var tasks = new List<TaskItem>
{
    new TaskItem(1, "Buy groceries", true),
    new TaskItem(2, "Clean the house", false),
    new TaskItem(3, "Pay bills", true),
    new TaskItem(4, "Study LINQ", false),
    new TaskItem(5, "Exercise", true)
};

//zadanei 1
Console.WriteLine("Zadanie 1");
var complitedTasks = tasks.Where(t => t.IsCompleted == true).ToList();

foreach (var task in complitedTasks)
{
    Console.WriteLine(task);
}

//zadanie 2
Console.WriteLine("Zadanie 2");

var FirstnotComplitedTasks = tasks.First(t => t.IsCompleted == false);
Console.WriteLine(FirstnotComplitedTasks);

//zadanie 3
Console.WriteLine("Zadanie 3");

var sortedList = tasks.OrderBy(t => t.Name);

foreach (var task in sortedList)
{
    Console.WriteLine(task);
}

//zadanie 4
Console.WriteLine("Zadanie 4");

var ComplitedTasks = tasks.Where(t => t.IsCompleted == true).ToList();

var countedCompited = ComplitedTasks.Count();

Console.WriteLine(countedCompited);

//zadanie 5
Console.WriteLine("Zadanie 5");

var tasksName = tasks.Select(t => t.Name).ToList();

foreach (var task in tasksName)
{
    Console.WriteLine(task);
}
//zadanie 6
// Zadanie 6: Znalezienie nazw zakończonych zadań posortowanych według długości nazwy
Console.WriteLine("Zadanie 6");

var sortedByCount = tasks.Where(t => t.IsCompleted).OrderBy(t => t.Name.Length).Select(t => t.Name);
foreach (var task in sortedByCount)
{
    Console.WriteLine(task);
}

//zadanie 7
//Zadanie 7: Zadania pogrupowane według stanu zakończenia, a następnie posortowane w grupach według nazwy
Console.WriteLine("Zadanie 7");

var groupByCompleted = tasks.OrderBy(t => t.IsCompleted).ThenBy(t => t.Name);
foreach (var task in groupByCompleted)
{
    Console.WriteLine(task);
}

//zadanie 8
//Zadanie 8: Najkrótsza nazwa zadania niezakończonego
Console.WriteLine("Zadanie 8");

var shortestNameNotComplited = tasks.Where(t => t.IsCompleted == false).OrderBy(t => t.Name.Length).Select(t => t.Name).First();
if (shortestNameNotComplited != null)
{
    Console.WriteLine(shortestNameNotComplited);
}

//zadanie 9
//Zadanie 9: Ilość liter w nazwach wszystkich zakończonych zadań
Console.WriteLine("Zadanie 9");

var countedLettersInComplited = tasks.Where(t => t.IsCompleted).Select(t => t.Name.Length);
foreach (var task in countedLettersInComplited)
{
    Console.WriteLine(task);
}

//zadanie 10
//Zadanie 10: Lista zadań z indeksami (zakończone zadania z numeracją)
Console.WriteLine("Zadanie 10");

int index = 0;
var intextedCompletedTask = tasks.Where(t => t.IsCompleted).Select(t =>
{
    index +=1;
    return (t.Name, index);

}).ToList();

intextedCompletedTask.ForEach(t => Console.WriteLine(t));

//zadanie 11

//Zadanie 11: Zadania z najdłuższą nazwą w każdej grupie zakończonych i niezakończonych

Console.WriteLine("Zadanie 11");


var longestNameInCompletedTask = tasks.GroupBy(t => t.IsCompleted);

foreach (var group in longestNameInCompletedTask)
{
    Console.WriteLine($"Zakonczona: {group.Key}");
    var shortestName = group.OrderBy(t=> t.Name.Length).First().Name;
    Console.WriteLine($"Najkrotsza nazwa w grupie: {shortestName}");  
    
    var longestName= group.OrderByDescending(t=> t.Name.Length).First().Name;
    Console.WriteLine($"Najdluzsza nazwa w grupie: {longestName}");
}

//Zadanie 12: Zlicz, ile zadań w każdej grupie zakończonych i niezakończonych zawiera słowo „the” w nazwie
//zadanie 12
Console.WriteLine("Zadanie 12");