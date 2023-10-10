#include <stdio.h>
#include <limits.h>

int main()
{
    long long int eye, mouth, body, min, katryoshka;
    scanf("%lld %lld %lld", &eye, &mouth, &body);

    if (eye <= mouth && eye <= body)
    {
        min = eye;
    }
    else if (mouth <= eye && mouth <= body)
    {
        min = mouth;
    }
    else
    {
        min = body;
    }

    katryoshka = min;
    eye = eye - min;
    mouth = mouth - min;
    body = body - min;

    if ((eye / 2) <= body)
    {
        katryoshka += (eye / 2);
    }
    else
    {
        katryoshka += body;
    }

    printf("%lld", katryoshka);
    return 0;
}

/*
    long long int eye, mouth, body;
    scanf("%lld %lld %lld", &eye, &mouth, &body);

    long long int katryoshka = 0;

    for (long long i = 1; i <= LLONG_MAX; i++)
    {
        if (eye >= 1 && mouth >= 1 && body >= 1)
        {
            eye--;
            mouth--;
            body--;
            katryoshka++;
        }
        else if (eye >= 2 && body >= 1)
        {
            if (body <= (eye / 2))
            {
                katryoshka += body;
            }
            else if (body >= (eye / 2))
            {
                katryoshka += eye;
            }
        }
        else
        {
            break;
        }
    }
*/