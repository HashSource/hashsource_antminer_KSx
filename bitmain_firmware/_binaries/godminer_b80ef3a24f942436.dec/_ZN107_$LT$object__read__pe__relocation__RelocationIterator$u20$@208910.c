int __fastcall <object::read::pe::relocation::RelocationIterator as core::iter::traits::iterator::Iterator>::next(
        int result,
        unsigned __int16 **a2)
{
  unsigned __int16 *v2; // r12
  unsigned __int16 *v3; // r3
  unsigned int v4; // r2
  unsigned int v5; // t1
  unsigned __int16 *v6; // r1

  v2 = *a2;
  v3 = a2[1];
  while ( v3 != v2 )
  {
    v5 = *v3++;
    v4 = v5;
    a2[1] = v3;
    if ( v5 )
    {
      v6 = a2[2];
      *(_WORD *)(result + 8) = v4 >> 12;
      *(_DWORD *)(result + 4) = (char *)v6 + (v4 & 0xFFF);
      *(_DWORD *)result = 1;
      return result;
    }
  }
  *(_DWORD *)result = 0;
  return result;
}
