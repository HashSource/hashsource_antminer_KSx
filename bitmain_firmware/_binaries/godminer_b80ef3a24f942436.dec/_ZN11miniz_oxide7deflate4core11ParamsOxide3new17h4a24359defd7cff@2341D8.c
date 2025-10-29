unsigned int __fastcall miniz_oxide::deflate::core::ParamsOxide::new(int a1, unsigned int a2)
{
  void *v4; // r0
  void *v5; // r5

  v4 = (void *)_rust_alloc((size_t)&elf_hash_chain[697]);
  if ( !v4 )
    alloc::alloc::handle_alloc_error();
  v5 = v4;
  memset(v4, 0, (size_t)&elf_hash_chain[697]);
  *(_BYTE *)(a1 + 54) = (a2 & 0x4000) != 0;
  *(_BYTE *)(a1 + 55) = 0;
  *(_WORD *)(a1 + 52) = 0;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = v5;
  *(_DWORD *)(a1 + 48) = 0;
  return (a2 >> 14) & 1;
}
