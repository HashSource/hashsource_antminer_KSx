bool __fastcall sub_1D5C50(int *a1)
{
  _DWORD *addr; // r0
  unsigned int **v3; // r11
  int v4; // r9
  unsigned int *v5; // r9
  unsigned int *v6; // r8
  _BOOL4 v8; // r2
  int v9; // r3
  int v10; // r4
  int v11; // r5
  int v12; // r6
  int v13; // r7
  int v14; // r7
  unsigned int v15; // r1
  unsigned int *v16; // r0
  bool v17; // zf
  unsigned int v18; // r1
  _BOOL4 v20; // [sp+0h] [bp-2Ch]
  _BYTE v21[4]; // [sp+8h] [bp-24h] BYREF
  int v22; // [sp+Ch] [bp-20h]
  int v23; // [sp+10h] [bp-1Ch]
  int v24; // [sp+14h] [bp-18h]
  int v25; // [sp+18h] [bp-14h]
  int v26; // [sp+1Ch] [bp-10h]
  int v27; // [sp+20h] [bp-Ch]
  int v28; // [sp+24h] [bp-8h]

  if ( !byte_307BF8 )
    return 0;
  addr = (_DWORD *)_tls_get_addr(&dword_2E5440);
  v3 = (unsigned int **)(addr + 1);
  if ( *addr || (v4 = 0, (v3 = sub_1C7CDC(0)) != 0) )
  {
    v5 = *v3;
    *v3 = 0;
    if ( v5 )
    {
      v6 = v5 + 2;
      while ( !__ldrex(v6) )
      {
        if ( !__strex(1u, v6) )
        {
          __dmb(0xBu);
          goto LABEL_9;
        }
      }
      __clrex();
      std::sys::unix::locks::futex_mutex::Mutex::lock_contended(v5 + 2);
LABEL_9:
      v8 = 0;
      if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0 )
        v8 = !std::panicking::panic_count::is_zero_slow_path();
      v20 = v8;
      v9 = a1[1];
      v10 = a1[2];
      v11 = a1[3];
      v12 = a1[4];
      v13 = a1[5];
      v23 = *a1;
      v24 = v9;
      v25 = v10;
      v26 = v11;
      v27 = v12;
      v28 = v13;
      sub_1D71D0(v21, v5 + 4);
      if ( v21[0] == 3 )
      {
        v14 = v22;
        (**(void (__fastcall ***)(_DWORD))(v22 + 4))(*(_DWORD *)v22);
        if ( *(_DWORD *)(*(_DWORD *)(v14 + 4) + 4) )
          _rust_dealloc(*(void **)v14);
        _rust_dealloc((void *)v14);
      }
      if ( !v20
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0
        && !std::panicking::panic_count::is_zero_slow_path() )
      {
        *((_BYTE *)v5 + 12) = 1;
      }
      __dmb(0xBu);
      do
        v15 = __ldrex(v6);
      while ( __strex(0, v6) );
      if ( v15 == 2 )
        syscall(240, v5 + 2, 129, 1);
      v16 = *v3;
      v17 = *v3 == 0;
      *v3 = v5;
      if ( !v17 )
      {
        __dmb(0xBu);
        do
          v18 = __ldrex(v16);
        while ( __strex(v18 - 1, v16) );
        if ( v18 == 1 )
        {
          __dmb(0xBu);
          sub_1B67D4((int)v16);
        }
      }
    }
    return v5 != 0;
  }
  return v4;
}
