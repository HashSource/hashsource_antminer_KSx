int __fastcall object::elf::hash(unsigned __int8 *a1, int a2)
{
  unsigned int v3; // r2
  int v4; // t1

  if ( !a2 )
    return 0;
  v3 = 0;
  do
  {
    v4 = *a1++;
    --a2;
    v3 = ((v4 + 16 * v3) >> 24) & 0xF0 ^ (v4 + 16 * v3);
  }
  while ( a2 );
  return v3 & 0xFFFFFFF;
}
