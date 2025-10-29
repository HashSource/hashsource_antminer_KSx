unsigned __int8 *__fastcall core::slice::ascii::<impl [u8]>::trim_ascii(unsigned __int8 *result, int a2)
{
  unsigned __int8 *v2; // r12
  int v3; // r2
  unsigned int v4; // r6
  bool v5; // cf
  int v6; // r12
  int v7; // r1
  unsigned int v8; // r6

  v2 = result;
  if ( a2 )
  {
    v3 = -a2;
    while ( 1 )
    {
      v4 = *result - 9;
      if ( v4 > 0x17 || ((1 << v4) & 0x80001B) == 0 )
        break;
      v5 = __CFADD__(v3++, 1);
      ++result;
      if ( v5 )
        return &v2[a2];
    }
    v6 = (int)&v2[a2 - 1];
    v7 = 0;
    do
    {
      v8 = *(unsigned __int8 *)(v6 + v7) - 9;
      if ( v8 > 0x17 )
        break;
      if ( ((1 << v8) & 0x80001B) == 0 )
        break;
    }
    while ( v3 + 1 != v7-- );
  }
  return result;
}
