void __fastcall sub_1AF9A4(_DWORD *a1)
{
  void *v2; // r0
  bool v3; // zf

  v2 = (void *)a1[1];
  v3 = v2 == 0;
  if ( v2 )
    v3 = *a1 == 0;
  if ( !v3 )
    _rust_dealloc(v2);
}
