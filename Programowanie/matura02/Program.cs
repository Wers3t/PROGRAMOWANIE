StreamReader streamReader = new StreamReader("przyklad.txt");

string strNumberFromFile;
List<string> strNumbers = new List<string>();

while ((strNumberFromFile = streamReader.ReadLine()) != null)
{
    strNumbers.Add(strNumberFromFile);
}

streamReader.Close();

//Zadanie 4.1
var reverseDovidedBy17 = strNumbers
    .Where(s => int.Parse(string.Join("", s.Reverse())) % 17 == 0)
    .Select(s => string.Join("", s.Reverse()));

Console.WriteLine("Zdanie 4.1:");
foreach (var strNumber in reverseDovidedBy17)
    Console.WriteLine(strNumber);

//zadanie 4.2
int max = 0;

foreach (string n in strNumbers)
{
    int number = Math.Abs(int.Parse(n));
    int reverseNumber = int.Parse(n.Reverse().ToArray());
    int diff = number - reverseNumber;

    if (diff > max)
    {
        max = number;
    }
}
Console.WriteLine("Zadanie 4.2");
Console.WriteLine(max);



