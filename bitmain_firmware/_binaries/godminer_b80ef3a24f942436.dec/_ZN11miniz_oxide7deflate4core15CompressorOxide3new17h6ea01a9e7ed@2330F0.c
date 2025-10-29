unsigned int __fastcall miniz_oxide::deflate::core::CompressorOxide::new(int a1, int a2)
{
  void *v4; // r0
  void *v5; // r5
  void *v6; // r0
  void *v7; // r11
  void *v8; // r0
  void *v9; // r8
  unsigned int v10; // r0
  unsigned int v11; // r1
  unsigned int result; // r0

  v4 = (void *)_rust_alloc((size_t)&elf_hash_chain[697]);
  if ( !v4 )
    alloc::alloc::handle_alloc_error();
  v5 = v4;
  memset(v4, 0, (size_t)&elf_hash_chain[697]);
  v6 = (void *)_rust_alloc(0x10E0u);
  if ( !v6 )
    alloc::alloc::handle_alloc_error();
  v7 = v6;
  memset(v6, 0, 0x10E0u);
  v8 = (void *)_rust_alloc((size_t)&stru_280F8.st_size + 2);
  if ( !v8 )
    alloc::alloc::handle_alloc_error();
  v9 = v8;
  memset(v8, 0, (size_t)&stru_280F8.st_size + 2);
  *(_DWORD *)(a1 + 65620) = 0;
  *(_DWORD *)(a1 + 65624) = 0;
  *(_DWORD *)(a1 + 65628) = 0;
  *(_DWORD *)(a1 + 65632) = 0;
  memset((void *)a1, 0, 0x10000u);
  v10 = a2 & 0xFFF;
  *(_DWORD *)(a1 + 65544) = 0;
  *(_DWORD *)(a1 + 65548) = 8;
  *(_DWORD *)(a1 + 65552) = a2;
  *(_DWORD *)(a1 + 65556) = 0;
  *(_DWORD *)(a1 + 0x10000) = 1;
  *(_DWORD *)(a1 + 65540) = 0;
  *(_DWORD *)(a1 + 65560) = 0;
  v11 = ((43691 * (v10 + 2)) >> 17) + 1;
  *(_DWORD *)(a1 + 65564) = 0;
  *(_DWORD *)(a1 + 65568) = 0;
  result = ((43691 * ((v10 >> 2) + 2)) >> 17) + 1;
  *(_DWORD *)(a1 + 65572) = 0;
  *(_DWORD *)(a1 + 65576) = 1;
  *(_DWORD *)(a1 + 65580) = 0;
  *(_DWORD *)(a1 + 65584) = 0;
  *(_DWORD *)(a1 + 65588) = 0;
  *(_DWORD *)(a1 + 65592) = 0;
  *(_DWORD *)(a1 + 65608) = v7;
  *(_BYTE *)(a1 + 65607) = 0;
  *(_BYTE *)(a1 + 65606) = (a2 & 0x4000) != 0;
  *(_WORD *)(a1 + 65604) = 0;
  *(_DWORD *)(a1 + 65600) = 0;
  *(_DWORD *)(a1 + 65596) = v5;
  *(_DWORD *)(a1 + 65636) = v9;
  *(_DWORD *)(a1 + 65612) = v11;
  *(_DWORD *)(a1 + 65616) = result;
  return result;
}
