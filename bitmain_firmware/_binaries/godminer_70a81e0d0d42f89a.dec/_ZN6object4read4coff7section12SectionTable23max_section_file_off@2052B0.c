unsigned int __fastcall object::read::coff::section::SectionTable::max_section_file_offset(_DWORD *a1)
{
  int v1; // r1
  unsigned int *v2; // r2
  int v3; // r0
  unsigned int v4; // r1
  int v5; // r6
  unsigned int result; // r0
  unsigned int v7; // lr
  unsigned int v8; // r5
  unsigned int v9; // r4
  unsigned __int64 v10; // kr00_8

  v1 = a1[1];
  if ( !v1 )
    return 0;
  v2 = (unsigned int *)(*a1 + 16);
  v3 = 5 * v1;
  v4 = 0;
  v5 = 8 * v3;
  result = 0;
  do
  {
    v7 = *v2;
    v8 = result;
    v9 = v2[1];
    v2 += 10;
    v10 = v7 + (unsigned __int64)v9;
    if ( HIDWORD(v10) > v4 )
      v8 = v7 + v9;
    if ( (unsigned int)v10 > result )
      result = v7 + v9;
    if ( HIDWORD(v10) != v4 )
      result = v8;
    if ( HIDWORD(v10) > v4 )
      v4 = (v7 + (unsigned __int64)v9) >> 32;
    v5 -= 40;
  }
  while ( v5 );
  return result;
}
