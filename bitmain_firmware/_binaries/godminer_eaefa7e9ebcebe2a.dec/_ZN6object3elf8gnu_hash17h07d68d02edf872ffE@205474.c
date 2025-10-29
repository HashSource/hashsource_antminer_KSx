int __fastcall object::elf::gnu_hash(unsigned __int8 *a1, int a2)
{
  int result; // r0
  int v4; // t1

  if ( !a2 )
    return 5381;
  result = 5381;
  do
  {
    v4 = *a1++;
    --a2;
    result = 33 * result + v4;
  }
  while ( a2 );
  return result;
}
