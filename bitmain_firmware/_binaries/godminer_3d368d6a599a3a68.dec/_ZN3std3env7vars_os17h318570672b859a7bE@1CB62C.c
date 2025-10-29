int __fastcall std::env::vars_os(unsigned int *a1)
{
  unsigned int v2; // r2
  int v3; // r10
  const char *v4; // r7
  unsigned int v5; // r4
  const char **v6; // r9
  int v7; // r1
  int v8; // r0
  int *v9; // r0
  int v10; // r3
  int v11; // r4
  signed int v12; // r5
  int v13; // r6
  signed int v14; // r7
  const char *v15; // t1
  size_t v16; // r0
  unsigned int v17; // r4
  _BYTE *v18; // r0
  int v19; // r1
  int v20; // r5
  int v21; // r6
  int v22; // r11
  void *v23; // r0
  int v24; // r1
  int v25; // r5
  signed int v26; // r4
  int v27; // r8
  unsigned int v28; // r1
  unsigned int v29; // r1
  int result; // r0
  unsigned int *v31; // [sp+4h] [bp-30h]
  int v32; // [sp+8h] [bp-2Ch]
  unsigned int v33; // [sp+Ch] [bp-28h] BYREF
  int v34; // [sp+10h] [bp-24h]
  int v35; // [sp+14h] [bp-20h]
  int v36; // [sp+18h] [bp-1Ch]
  int v37; // [sp+1Ch] [bp-18h]
  int v38; // [sp+20h] [bp-14h]
  signed int v39; // [sp+24h] [bp-10h]
  int v40; // [sp+28h] [bp-Ch]
  signed int v41; // [sp+2Ch] [bp-8h]

  if ( (unsigned int)dword_307C9C <= 0x3FFFFFFF && (dword_307C9C & 0x3FFFFFFE) != 0x3FFFFFFE )
  {
    v2 = __ldrex((unsigned int *)&dword_307C9C);
    if ( v2 == dword_307C9C )
    {
      if ( !__strex(dword_307C9C + 1, (unsigned int *)&dword_307C9C) )
      {
        __dmb(0xBu);
        goto LABEL_6;
      }
    }
    else
    {
      __clrex();
    }
  }
  std::sys::unix::locks::futex_rwlock::RwLock::read_contended((unsigned int *)&dword_307C9C);
LABEL_6:
  v3 = 0;
  v35 = 0;
  v32 = 4;
  v34 = 4;
  v33 = 0;
  if ( environ )
  {
    v4 = (const char *)*environ;
    v5 = 0;
    if ( *environ )
    {
      v6 = (const char **)(environ + 4);
      v3 = 0;
      v31 = a1;
      v32 = 4;
      do
      {
        v16 = core::ffi::c_str::CStr::from_ptr::strlen_rt(v4);
        v17 = v16;
        if ( v16 )
        {
          v18 = memchr(v4 + 1, 61, v16 - 1);
          if ( v18 )
          {
            v20 = v18 - (v4 + 1);
            v21 = v18 - v4;
            if ( v18 - v4 > v17 )
              core::slice::index::slice_end_index_len_fail();
            if ( v20 == -1 )
            {
              v22 = 1;
            }
            else
            {
              if ( v21 <= -1 )
                alloc::raw_vec::capacity_overflow(v18, v19);
              v22 = _rust_alloc(v18 - v4);
              if ( !v22 )
                alloc::alloc::handle_alloc_error();
            }
            v23 = memcpy((void *)v22, v4, v20 + 1);
            v25 = v20 + 2;
            v38 = v21;
            v37 = v22;
            v36 = v21;
            if ( v21 >= v17 )
              core::slice::index::slice_start_index_len_fail();
            v26 = v17 - v25;
            v27 = 1;
            if ( v26 )
            {
              if ( v26 <= -1 )
                alloc::raw_vec::capacity_overflow(v23, v24);
              v27 = _rust_alloc(v26);
              if ( !v27 )
                alloc::alloc::handle_alloc_error();
            }
            memcpy((void *)v27, &v4[v25], v26);
            v41 = v26;
            v40 = v27;
            v39 = v26;
            v38 = v21;
            v37 = v22;
            v36 = v21;
            if ( v3 == v33 )
            {
              sub_1B6F34(&v33, v3);
              v7 = v34;
              v3 = v35;
            }
            else
            {
              v7 = v32;
            }
            v8 = 3 * v3;
            v32 = v7;
            ++v3;
            v9 = (int *)(v7 + 8 * v8);
            v10 = v37;
            v11 = v38;
            v12 = v39;
            v13 = v40;
            v14 = v41;
            *v9 = v36;
            v9[1] = v10;
            v9[2] = v11;
            v9[3] = v12;
            v9[4] = v13;
            v9[5] = v14;
            v35 = v3;
          }
        }
        v15 = *v6++;
        v4 = v15;
      }
      while ( v15 );
      v5 = v33;
      a1 = v31;
    }
  }
  else
  {
    v5 = 0;
  }
  __dmb(0xBu);
  do
  {
    v28 = __ldrex((unsigned int *)&dword_307C9C);
    v29 = v28 - 1;
  }
  while ( __strex(v29, (unsigned int *)&dword_307C9C) );
  if ( (v29 & 0xBFFFFFFF) == 0x80000000 )
    std::sys::unix::locks::futex_rwlock::RwLock::wake_writer_or_readers((unsigned int *)&dword_307C9C, v29);
  *a1 = v5;
  a1[1] = v32;
  result = v32 + 24 * v3;
  a1[2] = result;
  a1[3] = v32;
  return result;
}
