int __fastcall sub_1ADC88(int *a1)
{
  int v1; // r2
  int v2; // r3
  int v3; // r1
  int v4; // r0
  int result; // r0
  int v6; // r6
  void *v7; // r0
  bool v8; // zf
  _DWORD v9[9]; // [sp+0h] [bp-30h] BYREF
  _BYTE v10[4]; // [sp+24h] [bp-Ch] BYREF
  int v11; // [sp+28h] [bp-8h]
  int v12; // [sp+2Ch] [bp-4h]

  v1 = a1[1];
  if ( v1 )
  {
    v2 = *a1;
    v3 = a1[2];
    v4 = 0;
    v9[6] = v1;
    v9[2] = v1;
    v9[5] = v2;
    v9[0] = 0;
    v9[1] = v2;
  }
  else
  {
    v4 = 2;
    v3 = 0;
    v9[0] = 2;
  }
  v9[4] = v4;
  v9[8] = v3;
  sub_1B3BF8(v10, v9);
  for ( result = v11; v11; result = v11 )
  {
    v6 = result + 12 * v12;
    if ( *(_DWORD *)(v6 + 4) )
      _rust_dealloc(*(void **)(v6 + 8));
    v7 = *(void **)(v6 + 140);
    v8 = v7 == 0;
    if ( v7 )
      v8 = *(_DWORD *)(v6 + 136) == 0;
    if ( !v8 )
      _rust_dealloc(v7);
    sub_1B3BF8(v10, v9);
  }
  return result;
}
