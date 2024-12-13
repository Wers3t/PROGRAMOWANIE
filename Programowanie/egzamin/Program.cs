using System.Drawing;
using System.Security.Cryptography.X509Certificates;
using static System.Formats.Asn1.AsnWriter;

Console.WriteLine("Ile kostek chcesz rzucic? (3-10)");
string input = Console.ReadLine();
int amount = int.Parse(input);

while (amount < 3 || amount > 10)
{
    Console.WriteLine("Liczba musi być z zakresu <3,10>");
    amount = int.Parse(Console.ReadLine());
}

Random random = new Random();

int size = 6; 
int[] hm = new int[size];

for (int i = 1; i <= amount; i++)
{
    int throws = random.Next(1, 7);
    hm[throws-1] += 1;

    Console.WriteLine($"Kostka {i}: {throws} ");
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
Console.WriteLine($"Liczba uzyskanych punktow: {calcScore(hm)} ");









