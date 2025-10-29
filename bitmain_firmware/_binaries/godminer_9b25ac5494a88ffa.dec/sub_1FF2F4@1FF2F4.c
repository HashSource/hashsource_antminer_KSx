void __fastcall sub_1FF2F4(int a1)
{
  (**(void (__fastcall ***)(_DWORD))(a1 + 104))(*(_DWORD *)(a1 + 100));
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 104) + 4) )
    _rust_dealloc(*(void **)(a1 + 100));
}
