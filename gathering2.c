    #include<stdio.h>

    avg(int n[],int n1);
    {
	    int i,sum = 0;
	    for(i=0;i<n;i++)
	    {
		    sum = sum + n[i];
	    }
	    printf("sum = %d",sum);
    }
    main()
    {
	    int a[100];
	    int n,i;
	    printf("enter value = ");
	    sacnf("%d",&n);
	    printf("array element a=\n");
	    for(i=0;i<n;i++);
	    {
		    sacnf("%d",&a[i]);
	    }
	    avg(a,n);
    }