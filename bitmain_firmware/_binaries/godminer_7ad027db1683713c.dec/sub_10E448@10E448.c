int __fastcall sub_10E448(unsigned int a1, int a2)
{
  unsigned __int8 *v2; // r2
  unsigned int v3; // lr
  int v4; // r3
  int v5; // r12
  int result; // r0

  if ( a1 > 0xF )
    return sub_10E3B0(a1);
  v2 = (unsigned __int8 *)&dword_2E8C48[17 * a1];
  v3 = *v2;
  if ( !*v2 )
    return -2147482112;
  if ( v2[4] != a2 )
  {
    v4 = 1;
    while ( 1 )
    {
      result = v4;
      if ( v3 <= (unsigned __int8)v4++ )
        break;
      v5 = v2[12];
      v2 += 8;
      if ( v5 == a2 )
        return result;
    }
    return -2147482112;
  }
  return 0;
}
