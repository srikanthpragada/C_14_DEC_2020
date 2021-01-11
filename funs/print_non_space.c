
void print_nonspace(char st[20])
{
 int i;
   for(i = 0; st[i] != '\0' ; i ++)
       if (!isspace(st[i]))
           putch(st[i]);
}

void main()
{
    print_nonspace("Ab  x y   z");
}
