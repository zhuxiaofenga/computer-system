__attribute__ ((weakref)) void foo();

int main()
{
	if (foo) foo();
	return 0;
}
