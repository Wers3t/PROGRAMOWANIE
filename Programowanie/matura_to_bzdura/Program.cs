string filePath = "./liczby_przyklad.txt";
string[] lines = File.ReadAllLines(filePath);

int[] firstLine = new int[3000];
int[] secondLine = new int[20];

firstLine = lines[0].Split(" ").Select(l => int.Parse(l)).ToArray();
secondLine = lines[1].Split(" ").Select(l => int.Parse(l)).ToArray();

//zadanie 4.1
int firstEx = 0;
foreach (int firstNumber in firstLine)
{
    foreach (int secondNumber in secondLine)
    {
        if (secondNumber % firstNumber == 0)
        {
            firstEx++;
            break;
        }
    }
}

Console.WriteLine(firstEx);

//zadanie 4.2

int secondEx = firstLine.ToList().OrderByDescending(x => x).ToArray()[101];
Console.WriteLine(secondEx);

//zadanie 4.3
var availableBlocks = firstLine.GroupBy(x => x).ToDictionary(g => g.Key, g => g.Count());

List<int> result = new List<int>();

// czynniki peirwsze
Dictionary<int, int> RozlozNaCzynniki(int n)
{
    Dictionary<int, int> factors = new Dictionary<int, int>();
    for (int d = 2; d * d <= n; d++)
    {
        while (n % d == 0)
        {
            if (factors.ContainsKey(d))
                factors[d]++;
            else
                factors[d] = 1;
            n /= d;
        }
    }
    if (n > 1)
    {
        if (factors.ContainsKey(n))
            factors[n]++;
        else
            factors[n] = 1;
    }
    return factors;
}

foreach (var number in secondLine)
{
    var neededFactors = RozlozNaCzynniki(number);
    bool canBuild = true;
    foreach (var kv in neededFactors)
    {
        int factor = kv.Key;
        int countNeeded = kv.Value;
        if (!availableBlocks.ContainsKey(factor) || availableBlocks[factor] < countNeeded)
        {
            canBuild = false;
            break;
        }
    }
    if (canBuild)
        result.Add(number);
}

Console.WriteLine(string.Join(" ", result));