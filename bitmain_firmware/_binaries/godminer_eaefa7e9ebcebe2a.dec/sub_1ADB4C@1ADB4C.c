void __fastcall sub_1ADB4C(int a1)
{
  int v1; // r1
  bool v2; // zf

  v1 = *(unsigned __int8 *)(a1 + 12);
  v2 = v1 == 2;
  if ( v1 != 2 )
    v2 = *(_DWORD *)a1 == 0;
  if ( !v2 )
    _rust_dealloc(*(void **)(a1 + 4));
}
