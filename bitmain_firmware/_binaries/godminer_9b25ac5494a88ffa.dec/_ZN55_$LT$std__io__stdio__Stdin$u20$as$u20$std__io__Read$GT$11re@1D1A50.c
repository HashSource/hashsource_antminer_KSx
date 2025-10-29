int __fastcall <std::io::stdio::Stdin as std::io::Read>::read_to_end(int a1, int *a2, size_t *a3)
{
  int v3; // r4
  _BOOL4 v7; // r8
  int v8; // r10
  size_t v9; // r5
  size_t v10; // r6
  int v11; // r11
  bool v12; // zf
  unsigned int v13; // r1
  int v14; // r0
  int result; // r0
  unsigned int v16; // r1
  unsigned int v17; // [sp+0h] [bp-Ch] BYREF
  int v18; // [sp+4h] [bp-8h]

  v3 = *a2;
  while ( !__ldrex((unsigned int *)v3) )
  {
    if ( !__strex(1u, (unsigned int *)v3) )
    {
      __dmb(0xBu);
      goto LABEL_5;
    }
  }
  __clrex();
  std::sys::unix::locks::futex_mutex::Mutex::lock_contended((unsigned int *)v3);
LABEL_5:
  v7 = 0;
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0 )
    v7 = !std::panicking::panic_count::is_zero_slow_path();
  v8 = *(_DWORD *)(v3 + 16);
  v9 = a3[2];
  v10 = *(_DWORD *)(v3 + 20) - v8;
  v11 = *(_DWORD *)(v3 + 8);
  if ( *a3 - v9 < v10 )
  {
    sub_79740(a3, a3[2], *(_DWORD *)(v3 + 20) - v8);
    v9 = a3[2];
  }
  memcpy((void *)(a3[1] + v9), (const void *)(v11 + v8), v10);
  a3[2] = v9 + v10;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 20) = 0;
  sub_1D56A8(&v17, a3);
  v12 = (unsigned __int8)v17 == 0;
  if ( !(_BYTE)v17 )
    v12 = v18 == 9;
  if ( v12 )
  {
    v14 = 0;
LABEL_16:
    *(_BYTE *)a1 = 4;
    *(_DWORD *)(a1 + 4) = v14 + v10;
    if ( v7 )
      goto LABEL_18;
    goto LABEL_17;
  }
  v13 = v17;
  v14 = v18;
  if ( (unsigned __int8)v17 == 4 )
    goto LABEL_16;
  *(_DWORD *)(a1 + 4) = v18;
  *(_BYTE *)(a1 + 3) = HIBYTE(v13);
  *(_BYTE *)a1 = v13;
  *(_WORD *)(a1 + 1) = v13 >> 8;
  if ( v7 )
    goto LABEL_18;
LABEL_17:
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0
    && !std::panicking::panic_count::is_zero_slow_path() )
  {
    *(_BYTE *)(v3 + 4) = 1;
  }
LABEL_18:
  result = 0;
  __dmb(0xBu);
  do
    v16 = __ldrex((unsigned int *)v3);
  while ( __strex(0, (unsigned int *)v3) );
  if ( v16 == 2 )
    return syscall(240, v3, 129, 1);
  return result;
}
