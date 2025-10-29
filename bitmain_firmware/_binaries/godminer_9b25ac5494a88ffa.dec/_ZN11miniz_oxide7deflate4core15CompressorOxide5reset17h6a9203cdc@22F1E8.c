void *__fastcall miniz_oxide::deflate::core::CompressorOxide::reset(char *a1)
{
  char *v1; // r4
  void *v2; // r0
  void *result; // r0

  v1 = a1;
  memset(a1, 0, 0x10000u);
  *((_DWORD *)v1 + 0x4000) = 1;
  v1 += 0x10000;
  *((_DWORD *)v1 + 10) = 1;
  v2 = (void *)*((_DWORD *)v1 + 15);
  *((_DWORD *)v1 + 3) = 8;
  v1[71] = 0;
  *((_WORD *)v1 + 34) = 0;
  *((_DWORD *)v1 + 1) = 0;
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 16) = 0;
  *((_DWORD *)v1 + 5) = 0;
  *((_DWORD *)v1 + 6) = 0;
  *((_DWORD *)v1 + 7) = 0;
  *((_DWORD *)v1 + 8) = 0;
  *((_DWORD *)v1 + 9) = 0;
  *((_DWORD *)v1 + 11) = 0;
  *((_DWORD *)v1 + 12) = 0;
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 14) = 0;
  memset(v2, 0, (size_t)&elf_hash_chain[697]);
  memset(*((void **)v1 + 18), 0, 0x10E0u);
  result = memset(*((void **)v1 + 25), 0, 0x28102u);
  *((_DWORD *)v1 + 21) = 0;
  *((_DWORD *)v1 + 22) = 0;
  *((_DWORD *)v1 + 23) = 0;
  *((_DWORD *)v1 + 24) = 0;
  return result;
}
