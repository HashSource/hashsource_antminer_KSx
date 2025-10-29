void __fastcall sub_1B0148(int a1)
{
  int v2; // r5
  _BYTE v3[4]; // [sp+0h] [bp-8h] BYREF
  int v4; // [sp+4h] [bp-4h]

  if ( !*(_BYTE *)(a1 + 12) )
  {
    sub_1CFBF0(v3, a1);
    if ( v3[0] == 3 )
    {
      v2 = v4;
      (**(void (__fastcall ***)(_DWORD))(v4 + 4))(*(_DWORD *)v4);
      if ( *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4) )
        _rust_dealloc(*(void **)v2);
      _rust_dealloc((void *)v2);
    }
  }
  if ( *(_DWORD *)a1 )
    _rust_dealloc(*(void **)(a1 + 4));
}
