using LinqConsoleApp;

List<Person> people = new List<Person>();

#region Uzupełnienie kolekcji

Person person = new Person();
person.Name = "Ewa";
person.Age = 32;
person.Surname = "Kowalska";

people.Add(person);


person = new Person();
person.Name = "Jan";
person.Age = 12;
person.Surname = "Nowak";

people.Add(person);

person = new Person();
person.Name = "Karol";
person.Age = 52;
person.Surname = "Krawczyk";

people.Add(person);

person = new Person();
person.Name = "Paweł";
person.Age = 35;
person.Surname = "Nowakowski";

people.Add(person);

person = new Person();
person.Name = "Paweł";
person.Age = 5;
person.Surname = "Nowak";

person = new Person();
person.Name = "Karol"; 
person.Age = 23;
person.Surname = "Nowak";

#endregion

Console.WriteLine("Glowa kolekcja: ");

//for (int i = 0; i < people.Count; i++)
//{
//    Console.WriteLine($"Imie: {people[i].Name} Nazwisko: {people[i].Surname} Wiek: {people[i].Age}  ");
//}

foreach (Person p in people)
{
    Console.WriteLine($"Imie: {p.Name} Nazwisko: {p.Surname} Wiek: {p.Age}  ");
}

var sortedPeopleByAge = people.OrderBy(p => p.Age);
Console.WriteLine("Kolekcja po sortowana po wieku:");

foreach (Person p in sortedPeopleByAge)
{
    Console.WriteLine($"Imie: {p.Name} Nazwisko: {p.Surname} Wiek: {p.Age}  ");
}

sortedPeopleByAge = people.OrderByDescending(p => p.Age);
Console.WriteLine("Kolekcja po sortowana po wieku malejaco:");

foreach (Person p in sortedPeopleByAge)
{
    Console.WriteLine($"Imie: {p.Name} Nazwisko: {p.Surname} Wiek: {p.Age}  ");
}

Console.WriteLine();
int maxAge = people.Max(p => p.Age);
Console.WriteLine($"Najstarsza osoba ma  {maxAge} lat.");
Console.WriteLine();

double averageAge = people.Average(p => p.Age);
Console.WriteLine($"Sredni wiek to  {averageAge} lat.");
Console.WriteLine();

Console.Clear();

List<Person> sortedPeople = people.OrderBy(p => p.Surname).ThenByDescending(p => p.Age).ToList();

Console.WriteLine( "Kolekcja posortowana: ");
foreach(Person p in sortedPeople)
{
    Console.WriteLine($"Imie: {p.Name} Nazwisko: {p.Surname} Wiek: {p.Age}");
}
sortedPeople = people.OrderBy(p => new Random().Next()).ToList();

if (people.All(people => people.Age >= 18))
{
    Console.WriteLine("Wszystkie osoby sa pelnoletnie");
}

Person firstPerson = people.FirstOrDefault(p => p.Name.Length == 3);

if (firstPerson.Equals(default(Person)) == false)
{
    Console.WriteLine("osoba z imieniem wiekszym niz trzy litery");
    Console.WriteLine($"{firstPerson.Name}");
}