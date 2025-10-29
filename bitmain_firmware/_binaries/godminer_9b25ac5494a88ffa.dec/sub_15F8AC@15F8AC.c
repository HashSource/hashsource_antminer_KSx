int __fastcall sub_15F8AC(_DWORD *a1, int *a2, char *s2)
{
  int v3; // r3
  int v4; // r5
  char *v5; // r12
  int v6; // t1
  int v7; // r6
  int v8; // r3
  int v10; // r4

  v3 = (unsigned __int8)*s2;
  if ( *s2 )
  {
    v5 = s2;
    v4 = 5381;
    do
    {
      v4 = (33 * v4) ^ v3;
      v6 = (unsigned __int8)*++v5;
      v3 = v6;
    }
    while ( v6 );
  }
  else
  {
    v4 = 5381;
  }
  v7 = *a2;
  if ( !*a2 )
    return v7;
  v8 = (v7 - 1) & v4;
  v10 = *(_DWORD *)(*a1 + 4 * v8);
  v7 = *a1 + 4 * v8;
  if ( v10 )
  {
    while ( *(_DWORD *)v10 != v4 || strcmp((const char *)(v10 + 12), s2) )
    {
      v7 = v10 + 8;
      v10 = *(_DWORD *)(v10 + 8);
      if ( !v10 )
        return v10;
    }
    return v7;
  }
  return v10;
}
