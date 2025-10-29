int __fastcall sub_1B16F0(int a1)
{
  int result; // r0
  int v3; // r6
  int v4; // r6
  int v5; // t1
  _BYTE v6[4]; // [sp+4h] [bp-Ch] BYREF
  int v7; // [sp+8h] [bp-8h]
  int v8; // [sp+Ch] [bp-4h]

  sub_1B7934(v6, a1);
  for ( result = v7; v7; result = v7 )
  {
    v3 = result + 12 * v8;
    if ( *(_DWORD *)(v3 + 4) )
      _rust_dealloc(*(void **)(v3 + 8));
    v5 = *(_DWORD *)(v3 + 136);
    v4 = v3 + 136;
    if ( v5 )
      _rust_dealloc(*(void **)(v4 + 4));
    sub_1B7934(v6, a1);
  }
  return result;
}
