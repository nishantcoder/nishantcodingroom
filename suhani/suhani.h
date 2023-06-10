int hcf(int a, int b)
{
    if (b != 0)
        return hcf(b, a % b);
    else
        return a;
}

int add(int a, int b)
{
    return (a + b);
}

int sub(int a, int b)
{
    return (a - b);
}

int sqrt(int a)
{
    return (a * a);
}

int mod(int a, int b)
{
    return (a % b);
}
