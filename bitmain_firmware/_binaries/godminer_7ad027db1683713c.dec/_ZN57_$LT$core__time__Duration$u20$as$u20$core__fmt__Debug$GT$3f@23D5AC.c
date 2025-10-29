int __fastcall <core::time::Duration as core::fmt::Debug>::fmt(int *a1, int a2)
{
  int v2; // r12
  const char *v3; // lr
  unsigned __int64 v4; // r2
  int v5; // r0
  unsigned int v7; // [sp+0h] [bp-18h]

  v2 = *a1;
  HIDWORD(v4) = a1[1];
  v3 = aLibraryCoreSrc;
  LODWORD(v4) = a1[2];
  v5 = *(_DWORD *)(a2 + 24) & 1;
  if ( v5 )
    v3 = (const char *)&unk_29EABB;
  if ( v2 | HIDWORD(v4) )
  {
    v7 = v4;
    LODWORD(v4) = v2;
    return sub_23D70C(a2, v4, v7, 0x5F5E100u, (int)v3, v5, aS_4, 1u);
  }
  else if ( (unsigned int)v4 <= 0xF423F )
  {
    if ( (unsigned int)v4 >> 3 <= 0x7C )
      return sub_23D70C(a2, (unsigned int)v4, 0, 1u, (int)v3, v5, aNs, 2u);
    else
      return sub_23D70C(a2, (unsigned int)v4 / 0x3E8, (unsigned int)v4 % 0x3E8, 0x64u, (int)v3, v5, byte_29F98C, 3u);
  }
  else
  {
    return sub_23D70C(
             a2,
             (unsigned int)v4 / 0xF4240,
             (unsigned int)v4 % 0xF4240,
             (unsigned int)&elf_hash_chain[4398],
             (int)v3,
             v5,
             aMs,
             2u);
  }
}
