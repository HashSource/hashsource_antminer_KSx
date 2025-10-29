unsigned int *__fastcall object::read::pe::section::<impl object::read::coff::section::SectionTable>::section_containing(
        _DWORD *a1,
        unsigned int a2)
{
  unsigned int *v2; // r12
  int v3; // r0
  unsigned int v5; // r2
  unsigned int *v6; // r3

  v2 = (unsigned int *)(*a1 + 12);
  v3 = 40 * a1[1];
  do
  {
    if ( !v3 )
      return 0;
    v5 = *v2;
    v6 = v2;
    v3 -= 40;
    v2 += 10;
  }
  while ( a2 < v5 || a2 - v5 >= *(v6 - 1) );
  return v2 - 13;
}
