unsigned __int8 *__fastcall sub_10C7C(unsigned __int8 *a1)
{
  const unsigned __int16 **v2; // r6
  unsigned __int8 *v3; // r0
  unsigned __int8 *v4; // r5
  unsigned __int8 *v5; // r0
  int v6; // t1

  v2 = _ctype_b_loc();
  v3 = a1;
  do
    v4 = v3++;
  while ( ((*v2)[*v4] & 0x2000) != 0 );
  v5 = (unsigned __int8 *)_rawmemchr(v4, 0);
  while ( v4 < v5 )
  {
    v6 = *--v5;
    if ( ((*v2)[v6] & 0x2000) != 0 )
      *v5 = 0;
  }
  return v4;
}
