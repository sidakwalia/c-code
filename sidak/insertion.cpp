
{
	int i, j, n, temp, a[30];
	cout << "Enter no of elements:";
	cin >> n;
	cout << "enter the elements:";
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

  for (i=1;i<n-1;i++)
  	temp=a[i];
  j=i-1;


	while (temp < [j] && j >= 0 )
	{
		a[j + 1] = a[j];
		j = j - 1;
	}
	a[j + 1] = temp;
}
cout << "Sorted list:";
for (i = 0; i < n; i++)
{
	cout << a[i] << " ";
}
return 0 ;
}

