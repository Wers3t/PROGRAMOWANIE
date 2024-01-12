#include <iostream>

using namespace std;

void task1()
{
    const int SIZE_OF_ARRAY = 5;
    int numbers[SIZE_OF_ARRAY];


    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        cout << "Podaj liczbe\n";
        cin >> numbers[i];
    }
   
    for (int i = SIZE_OF_ARRAY - 1; i >= 0; i--)
    {
        cout << "Podana liczba " << numbers[i] << "\n";
    }
}

void task2()
{   

    const int UPPER_range = 100;
    const int LOWER_range = 5;
    const int SIZE_OF_ARRAY = 10;
    int numbers[SIZE_OF_ARRAY];

    srand(time(NULL));

    for (int i = 0; i <SIZE_OF_ARRAY; i++)
    {
        numbers[i] = rand() % (UPPER_range - LOWER_range + 1) + LOWER_range;
    }

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        cout << numbers[i] << "," << endl;
    }

    int max = numbers[0];
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
        if (numbers[i] > max)
            max = numbers[i];
    
    int min = numbers[0];
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
        if (numbers[i] < min)
            min = numbers[i];

    cout << "Highest: " << max << endl;
    cout << "Lowest: " << min << endl;
}

void task3()
{
    const int UPPER_range = 100;
    const int LOWER_range = 5;
    const int SIZE_OF_ARRAY = 10;
    int numbers[SIZE_OF_ARRAY];

    srand(time(NULL));

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        numbers[i] = rand() % (UPPER_range - LOWER_range + 1) + LOWER_range;
    }

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        cout << numbers[i] << "," << endl;
    }
        


    int sum = 0;
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        sum = sum + numbers[i];
    }
    double average = sum * 1.0 / SIZE_OF_ARRAY;
    cout << " AVERAGE:" << average << endl;
 }
void task4() 
{
    const int UPPER_range = 8;
    const int LOWER_range = 5;
    const int SIZE_OF_ARRAY = 5;
    int numbers[SIZE_OF_ARRAY];

    srand(time(NULL));

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        numbers[i] = rand() % (UPPER_range - LOWER_range + 1) + LOWER_range;
    }

    for (int numberFromRange = LOWER_range; numberFromRange <= UPPER_range; numberFromRange++) // Added int before numberFromRange
    {
        int numberOfOccurrences = 0; 
        for (int j = 0; j < SIZE_OF_ARRAY; j++)
        {
            if (numbers[j] == numberFromRange)
                numberOfOccurrences++; 
        }
        cout << "Liczba " << numberFromRange << " wystapila " << numberOfOccurrences << " razy" << endl; // Corrected the output message
    }
    cout << endl;
    cout << "Wersja 2:" << endl;
    cout << endl;
    int numberOfOccurences[UPPER_range - LOWER_range + 1];
    for (int i = 0; i < UPPER_range - LOWER_range + 1; i++)
    {
        numberOfOccurences[i] = 0;
    }
    for (int  j = 0; j < SIZE_OF_ARRAY; j++)
    {
        numberOfOccurences[numbers[j] - LOWER_range]++;
    }

    for (int i = 0; i < UPPER_range - LOWER_range + 1; i++)
    {
        if (numberOfOccurences[i] != 0)
        {
            cout << "liczba " << i + LOWER_range << " wystapila " << numberOfOccurences[i] << " razy" << endl;
        }
    }
}

void task5()
{
    const int UPPER_RANGE = 8;
    const int LOWER_RANGE = 5;
    const int SIZE_OF_ARRAY = 5;
    int numbers[SIZE_OF_ARRAY];

    //wersja 2
    bool primeNumbers[UPPER_RANGE + 1];
    for (int i = 2; i < UPPER_RANGE + 1; i++)
    {
        primeNumbers[i] = true;
    }

    for (int i = 2; i < UPPER_RANGE + 1; i++)
    {
        if (primeNumbers[i])
        {
            for (int j = i + i; j < UPPER_RANGE + 1; j = j + i)
            {
                primeNumbers[j] = false;
            }
            for (int i = 2; i < UPPER_RANGE + 1; i++)
            {
            }
            if (primeNumbers[i])
                cout << i << ", ";
            cout << "gotowe\n";
        }

    }
}

int main()
{
    //task1();
    //task2();
    //task3();
    task4();

    task5();
}

