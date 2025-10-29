_DWORD *__fastcall sub_91754(_DWORD *result, int a2)
{
  _DWORD *v2; // r4
  int v3; // r3

  v2 = result;
  --result[9];
  if ( a2 == 10 )
  {
    v3 = result[6];
    result[7] = result[8];
    result[6] = v3 - 1;
  }
  else
  {
    result = (_DWORD *)utf8_check_first((unsigned __int8)a2);
    if ( result )
      --v2[7];
  }
  --v2[4];
  return result;
}
