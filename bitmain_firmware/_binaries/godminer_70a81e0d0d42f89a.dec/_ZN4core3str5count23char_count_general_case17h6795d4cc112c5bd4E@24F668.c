int __fastcall core::str::count::char_count_general_case(char *a1, int a2)
{
  int result; // r0
  int v4; // t1

  if ( !a2 )
    return 0;
  result = 0;
  do
  {
    v4 = *a1++;
    if ( v4 > -65 )
      ++result;
    --a2;
  }
  while ( a2 );
  return result;
}
