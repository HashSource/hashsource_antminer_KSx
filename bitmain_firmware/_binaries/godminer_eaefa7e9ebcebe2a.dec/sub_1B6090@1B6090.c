void __fastcall sub_1B6090(int a1)
{
  unsigned int *v2; // r0
  unsigned int v3; // r1

  <std::sys::unix::fs::Dir as core::ops::drop::Drop>::drop(a1 + 8);
  if ( *(_DWORD *)(a1 + 12) )
    _rust_dealloc(*(void **)(a1 + 16));
  if ( a1 != -1 )
  {
    v2 = (unsigned int *)(a1 + 4);
    __dmb(0xBu);
    do
      v3 = __ldrex(v2);
    while ( __strex(v3 - 1, v2) );
    if ( v3 == 1 )
    {
      __dmb(0xBu);
      _rust_dealloc((void *)a1);
    }
  }
}
