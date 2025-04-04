using System;

Console.WriteLine("How many cubes you want to throw? (3-10)");
string input = Console.ReadLine();
int amountOfThrows = int.Parse(input);

while (amountOfThrows < 3 || amountOfThrows > 10)
{
    Console.WriteLine("Number need to be in <3,10> range.");
    amountOfThrows = int.Parse(Console.ReadLine());
}

int[] GetThrowResults()
{
    Random random = new Random();
    int size = amountOfThrows;
    int[] howManyThrows = new int[6];  

    for (int i = 0; i < amountOfThrows; i++) 
    {
        int diceResult = random.Next(1, 7);  
        howManyThrows[diceResult - 1] += 1;  

        Console.WriteLine($"Cube {i + 1}: {diceResult}");
    }
    return howManyThrows;
}

int calcScore(int[] throwList)
{
    int score = 0;
    for (int i = 0; i < 6; i++)  
    {
        if (throwList[i] > 1)  
            score += throwList[i] * (i + 1);
    }
    return score;
}

do
{
    Console.WriteLine($"Number of points obtained: {calcScore(GetThrowResults())} ");
    Console.WriteLine("Wanna play one more? (yes/no)");
    string ifWantToPlay = Console.ReadLine();

    if (ifWantToPlay == "yes")
    {
    }
    else if (ifWantToPlay == "no")
    {
        return; 
    }
    else
    {
        Console.WriteLine("Type yes or no");
    }

} while (true);
