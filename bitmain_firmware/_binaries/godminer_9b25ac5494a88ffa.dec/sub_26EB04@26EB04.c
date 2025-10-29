unsigned int __fastcall sub_26EB04(int a1, int a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // r0
  int v6; // r4
  unsigned int result; // r0
  __int64 v8; // r2
  __int64 v9; // r6

  LODWORD(v5) = a1 ^ (a2 >> 31);
  v6 = HIDWORD(a3);
  HIDWORD(v5) = a2 ^ (a2 >> 31);
  result = sub_26E854(v5 - (a2 >> 31), (v5 - __PAIR64__(a2 >> 31, a2 >> 31)) >> 32, abs64(a3));
  v9 = -v8;
  if ( a2 >= 0 )
    v9 = v8;
  *a4 = v9;
  if ( (v6 ^ a2) < 0 )
    return -result;
  return result;
}
