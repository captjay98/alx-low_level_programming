int password ;
	char characters;
	int i;

	srand(time(NULL));
	for (i = 0; i <= 20; i++)
	{
	
	characters = rand() % 11;
	password = password + characters;
	printf("%d -%c \n",i, password);

	if (password == ' ')
	continue;
	
	}
	
	return (0);