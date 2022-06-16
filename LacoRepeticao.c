main()
{
    int i;
    for (i = 1; i <= 100; i = i + 1)
        if (i == 30)
            break;
        else if (i % 2 == 1)
            continue;
        else
            printf("%2d\n", i);
    printf("Termino do laco\n");
}