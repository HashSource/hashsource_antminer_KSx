_BYTE *__fastcall sub_1C6FFC(char *a1)
{
  char v1; // r1
  int v2; // r2
  int v3; // r4
  _BYTE *result; // r0

  if ( a1 )
  {
    v1 = *a1;
    v2 = (unsigned __int8)a1[1];
    *a1 = 0;
    v3 = -(v1 & 1) & v2;
  }
  else
  {
    LOBYTE(v3) = 0;
  }
  result = (_BYTE *)_tls_get_addr(&dword_2E4488);
  result[1] = v3;
  *result = 1;
  return result;
}
