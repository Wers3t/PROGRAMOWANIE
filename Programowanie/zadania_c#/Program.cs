using LinqTasksConsoleApp;

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

var tasksName = (tasks.name).ToList();
// select name
// tasks


