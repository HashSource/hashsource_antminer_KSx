_QWORD *__fastcall ethash_get_expected_difficulty(_QWORD *result, unsigned int a2)
{
  unsigned int v2; // r12
  _QWORD *v3; // r3
  int v4; // r3
  unsigned int v5; // r2

  v2 = a2 >> 3;
  *result = -1;
  result[1] = -1;
  result[2] = -1;
  result[3] = -1;
  if ( a2 >> 3 )
  {
    v3 = (_QWORD *)((char *)result - 1);
    do
    {
      *((_BYTE *)v3 + 1) = 0;
      v3 = (_QWORD *)((char *)v3 + 1);
    }
    while ( (_QWORD *)((char *)result + v2 - 1) != v3 );
  }
  if ( (a2 & 7) != 0 )
  {
    v4 = 0;
    do
    {
      ++v4;
      if ( a2 <= 7 )
        v5 = *(unsigned __int8 *)result;
      else
        v5 = *((unsigned __int8 *)result + v2);
      if ( a2 <= 7 )
        *(_BYTE *)result = v5 >> 1;
      else
        *((_BYTE *)result + v2) = v5 >> 1;
    }
    while ( v4 != (a2 & 7) );
  }
  return result;
}
