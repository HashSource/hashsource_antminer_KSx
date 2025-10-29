bool __fastcall sub_1CE968(int a1)
{
  int v2; // r3
  unsigned int v3; // r4
  _BOOL4 result; // r0
  unsigned __int8 *v5; // r12
  int v6; // r1
  unsigned __int8 *v7; // r2
  unsigned __int8 *v8; // r1
  int v9; // r2

  v2 = a1 + 8;
  v3 = *(unsigned __int8 *)(a1 + 8);
  result = 0;
  if ( !*(_BYTE *)(v2 + 22) && v3 >= 5 )
  {
    v5 = *(unsigned __int8 **)a1;
    result = 0;
    v6 = *(_DWORD *)(a1 + 4);
    if ( !*(_BYTE *)(a1 + 28) && v3 != 6 )
      __asm { ADD             PC, R4, R3 }
    if ( v6 )
    {
      v7 = &v5[v6];
      v8 = v5 + 1;
      if ( v5 + 1 == v7 )
      {
        v9 = 46;
        v8 = v5;
      }
      else
      {
        v9 = 47;
        if ( *v5 != 46 )
          return result;
      }
      return *v8 == v9;
    }
  }
  return result;
}
