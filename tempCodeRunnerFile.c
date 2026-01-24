    int a = 0;
    int b = 1;
    for (int i = 0; i < m-1; i++)
    {

        b = a + b;
        a = b - a ;
       
    }return a;