int __fastcall sub_9491C(int a1)
{
  _DWORD *v1; // lr
  int v2; // r5
  _DWORD *v3; // r4
  int result; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  _BYTE *v9; // lr
  int v10; // r0
  int v11; // r2
  int v12; // r1
  unsigned int v13; // r4
  unsigned int v14; // r3
  int v15; // r4
  int v16; // r2
  int v17; // t1
  unsigned int v18; // r3
  bool v19; // cc
  _BOOL4 v20; // r3
  int v21; // r1
  int v22; // r2
  int v23; // r3

  v1 = (_DWORD *)(a1 + 24);
  v2 = *(_DWORD *)(a1 + 40);
  v3 = (_DWORD *)(a1 + 8);
  result = *(_DWORD *)(a1 + 24);
  v6 = v1[1];
  v7 = v1[2];
  v8 = v1[3];
  *v3 = result;
  v3[1] = v6;
  v3[2] = v7;
  v3[3] = v8;
  if ( v2 )
  {
    result = *(_DWORD *)(a1 + 40);
    v21 = *(_DWORD *)(a1 + 44);
    v22 = *(_DWORD *)(a1 + 48);
    v23 = *(_DWORD *)(a1 + 52);
    *v1 = result;
    v1[1] = v21;
    v1[2] = v22;
    v1[3] = v23;
    *(_DWORD *)(a1 + 40) = 0;
  }
  else
  {
    v9 = *(_BYTE **)(a1 + 4);
    if ( *(_BYTE *)(a1 + 36) || *v9 )
    {
      v10 = *(_DWORD *)(a1 + 72);
      v11 = *(_DWORD *)(a1 + 68) + 1;
      *(_DWORD *)(a1 + 68) = v11;
      result = v10 + 1;
      *(_DWORD *)(a1 + 72) = result;
      v12 = (unsigned __int8)*v9;
      v13 = (unsigned __int8)(v12 - 32);
      if ( v13 > 0x1A )
        v14 = 0;
      else
        v14 = 67112961;
      if ( v13 <= 0x1A )
        v14 = ((v14 >> v13) & 1) != 0;
      v15 = *(_DWORD *)(a1 + 64);
      if ( (unsigned int)(v12 - 9) <= 1 )
        v14 |= 1u;
      if ( v14 )
      {
        do
        {
          ++result;
          if ( v12 == 10 )
          {
            ++v15;
            *(_DWORD *)(a1 + 68) = 1;
          }
          else
          {
            v14 = *(_DWORD *)(a1 + 68);
          }
          v16 = 0;
          if ( v12 == 10 )
            *(_DWORD *)(a1 + 64) = v15;
          else
            ++v14;
          *(_DWORD *)(a1 + 72) = result;
          if ( v12 != 10 )
            *(_DWORD *)(a1 + 68) = v14;
          v17 = (unsigned __int8)*++v9;
          v12 = v17;
          v18 = (unsigned __int8)(v17 - 32);
          v19 = v18 > 0x1A;
          v20 = ((0x4001001u >> v18) & 1) == 0;
          if ( !v19 )
            v16 = !v20;
          v14 = v12 - 9;
          if ( (unsigned int)(v12 - 9) <= 1 )
            v16 |= 1u;
        }
        while ( v16 );
        v11 = *(_DWORD *)(a1 + 68);
      }
      *(_BYTE *)(a1 + 36) = v12;
      *(_DWORD *)(a1 + 24) = v15;
      *(_DWORD *)(a1 + 28) = v11;
      *(_DWORD *)(a1 + 32) = result;
      if ( *v9 )
        ++v9;
      *(_DWORD *)(a1 + 4) = v9;
    }
  }
  return result;
}
