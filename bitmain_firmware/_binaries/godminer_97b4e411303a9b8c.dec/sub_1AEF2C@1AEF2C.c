void __fastcall sub_1AEF2C(int a1)
{
  if ( *(_DWORD *)a1 )
  {
    (**(void (***)(void))(a1 + 4))();
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) )
      _rust_dealloc(*(void **)a1);
  }
}
