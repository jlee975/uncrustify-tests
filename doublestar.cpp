int main()
{
	int  b = 3;
	int* p = &b;

	// Should be b * *p
	int a = b * *p;
}
