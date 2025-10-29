unsigned int __fastcall map_next_(_DWORD *a1, unsigned int *a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r3
  unsigned int v5; // r2
  unsigned int v6; // lr
  int v7; // r12
  unsigned int v8; // r3

  v2 = a2[1];
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 8);
    a2[1] = v3;
    if ( v3 )
      return v3 + 12;
  }
  v5 = *a2 + 1;
  v6 = a1[1];
  v7 = 4 * v5;
  while ( 1 )
  {
    if ( v5 >= v6 )
    {
      *a2 = v5;
      return 0;
    }
    v8 = *(_DWORD *)(*a1 + v7);
    v7 += 4;
    a2[1] = v8;
    if ( v8 )
      break;
    ++v5;
  }
  *a2 = v5;
  return v8 + 12;
}
