int __fastcall sub_1AF244(int *a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r6
  bool v5; // zf
  int v6; // r0
  int v7; // r2
  int v8; // r0
  int v9; // r1
  int result; // r0
  int v11; // r0
  int v12; // r1
  bool v13; // zf
  _DWORD v14[9]; // [sp+0h] [bp-30h] BYREF
  _BYTE v15[4]; // [sp+24h] [bp-Ch] BYREF
  int v16; // [sp+28h] [bp-8h]
  int v17; // [sp+2Ch] [bp-4h]

  v2 = a1[5];
  if ( v2 )
  {
    v3 = 104 * v2;
    v4 = a1[4] + 8;
    do
    {
      v5 = *(_DWORD *)v4 == 0;
      if ( *(_DWORD *)v4 )
        v5 = *(_DWORD *)(v4 + 4) == 0;
      if ( !v5 )
        _rust_dealloc(*(void **)(v4 + 8));
      v3 -= 104;
      v4 += 104;
    }
    while ( v3 );
  }
  if ( a1[3] )
    _rust_dealloc((void *)a1[4]);
  v6 = a1[1];
  if ( v6 )
  {
    v7 = *a1;
    v14[6] = a1[1];
    v14[2] = v6;
    v8 = 0;
    v9 = a1[2];
    v14[5] = v7;
    v14[0] = 0;
    v14[1] = v7;
  }
  else
  {
    v8 = 2;
    v9 = 0;
    v14[0] = 2;
  }
  v14[4] = v8;
  v14[8] = v9;
  sub_1B4278(v15, v14);
  for ( result = v16; v16; result = v16 )
  {
    v11 = result + 104 * v17;
    v12 = *(_DWORD *)(v11 + 96);
    v13 = v12 == 0;
    if ( v12 )
    {
      v11 += 88;
      v13 = *(_DWORD *)(v11 + 12) == 0;
    }
    if ( !v13 )
      _rust_dealloc(*(void **)(v11 + 16));
    sub_1B4278(v15, v14);
  }
  return result;
}
