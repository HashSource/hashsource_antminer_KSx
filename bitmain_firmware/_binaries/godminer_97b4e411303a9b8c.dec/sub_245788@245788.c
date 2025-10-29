unsigned int __fastcall sub_245788(int *a1)
{
  int v1; // r2
  unsigned int v2; // r1
  int v3; // r3
  unsigned int v4; // r1

  v1 = *a1;
  v2 = ((unsigned int)a1[1] >> ((4 * *(_BYTE *)a1) & 0x1C)) & 0xF;
  v3 = 87;
  if ( v2 < 0xA )
    v3 = 48;
  v4 = v3 + v2;
  if ( v1 )
    *a1 = v1 - 1;
  else
    *((_BYTE *)a1 + 8) = 1;
  return v4;
}
