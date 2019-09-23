extern int shared;

int global_vaaa;

int main()
{
	int a = 100;
	swap(&a, &shared);
}
