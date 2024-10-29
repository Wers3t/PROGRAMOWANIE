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






