int __fastcall sub_123B84(int a1, int a2, int a3)
{
  int v4; // r5
  int v7; // r0
  int v9; // [sp+4h] [bp-8h] BYREF

  v4 = *(_DWORD *)(a1 + 12);
  v7 = *(_DWORD *)(a1 + 20);
  if ( *(_DWORD *)(*(_DWORD *)v4 + 32) )
  {
    get_raw_clib_object(v7, &v9);
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 32))(v9);
    v7 = *(_DWORD *)(a1 + 20);
  }
  return replace_raw_clib_object(*(_DWORD *)(v7 + 20), a2, a3);
}
