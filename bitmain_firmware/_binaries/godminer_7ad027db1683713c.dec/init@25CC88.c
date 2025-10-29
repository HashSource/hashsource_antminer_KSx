int __fastcall init(int a1, int a2, int a3)
{
  int result; // r0
  int (**v7)(); // r5
  int v8; // r6
  int i; // r4
  int (__fastcall *v10)(int, int, int); // t1

  result = init_proc();
  v7 = &std::sys::unix::args::imp::ARGV_INIT_ARRAY;
  v8 = ((char *)&off_2C8ED8 - (char *)&std::sys::unix::args::imp::ARGV_INIT_ARRAY) >> 2;
  if ( v8 )
  {
    for ( i = 0; i != v8; ++i )
    {
      v10 = (int (__fastcall *)(int, int, int))*v7++;
      result = v10(a1, a2, a3);
    }
  }
  return result;
}
