void __fastcall sub_1AE6F0(int a1)
{
  int v2; // r1
  _DWORD *v3; // r0
  int v4; // r7
  _DWORD *v5; // r6

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD **)(a1 + 4);
  v4 = 336 * v2;
  while ( v4 )
  {
    v4 -= 336;
    v5 = v3 + 84;
    sub_1AE250(v3);
    v3 = v5;
  }
  if ( *(_DWORD *)a1 )
    _rust_dealloc(*(void **)(a1 + 4));
}
