void __fastcall sub_1ADC54(int a1)
{
  (**(void (__fastcall ***)(_DWORD))(a1 + 4))(*(_DWORD *)a1);
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) )
    _rust_dealloc(*(void **)a1);
}
