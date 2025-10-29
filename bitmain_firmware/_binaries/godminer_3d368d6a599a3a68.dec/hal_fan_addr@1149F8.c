int __fastcall hal_fan_addr(int a1)
{
  int v1; // r3
  _DWORD *v2; // r2
  int v3; // r1

  v1 = 0;
  v2 = &unk_297A8C;
  if ( !a1 )
    return dword_297974[3 * v1 + 65];
  while ( ++v1 != 8 )
  {
    v3 = *(v2 - 3);
    v2 += 3;
    if ( v3 == a1 )
      return dword_297974[3 * v1 + 65];
  }
  return -2;
}
