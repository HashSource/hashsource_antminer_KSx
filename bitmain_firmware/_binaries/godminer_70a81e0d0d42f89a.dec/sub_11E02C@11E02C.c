int __fastcall sub_11E02C(unsigned int a1, int a2)
{
  _BYTE *v2; // r2
  unsigned int v3; // lr
  int v4; // r3
  int v5; // r12
  int result; // r0

  if ( a1 > 0xF )
    return sub_11DF94(a1);
  v2 = (char *)&unk_30D0FC + 68 * a1;
  v3 = (unsigned __int8)*v2;
  if ( !*v2 )
    return -2147482112;
  if ( (unsigned __int8)v2[4] != a2 )
  {
    v4 = 1;
    while ( 1 )
    {
      result = v4;
      if ( v3 <= (unsigned __int8)v4++ )
        break;
      v5 = (unsigned __int8)v2[12];
      v2 += 8;
      if ( v5 == a2 )
        return result;
    }
    return -2147482112;
  }
  return 0;
}
