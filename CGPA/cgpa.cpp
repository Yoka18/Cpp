#include <bits/stdc++.h>
using namespace std;

double CgpaCalc(double marks[], int n)
{
    double grade[n];

    double cgpa, sum = 0;

    for (int i = 0; i < n; i++)
    {
        grade[i] = (marks[i] / 10);
    }

    for (int i = 0; i < n; i++)
    {
        sum += grade[i];
    }

    cgpa = sum / n;

    return cgpa;
}


int main()
{
    int n;
    cout << "Please type your semester count: " << "\n";
    cin >> n;
    double marks[n];
    for (int i = 0; i < n; i++)
    {
        printf("Please type your semester %d grade: \n", i + 1);
        cin >> marks[i];
        if (i > n)
        {
            break;
        }
    }

    double cgpa = CgpaCalc(marks, n);

    cout << "CGPA = ";
    printf("%.1f\n", cgpa);
    cout << "CGPA Percentage = ";
    printf("%.2f", cgpa * 9.5);
}