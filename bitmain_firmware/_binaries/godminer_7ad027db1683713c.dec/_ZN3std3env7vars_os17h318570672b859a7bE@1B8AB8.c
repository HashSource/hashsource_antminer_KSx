unsigned int __fastcall std::env::vars_os(unsigned int *a1)
{
  unsigned int v2; // r2
  int v3; // r10
  const char *v4; // r7
  unsigned int v5; // r4
  const char **v6; // r9
  unsigned int v7; // r1
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
  int v19; // r5
  int v20; // r6
  int v21; // r11
  int v22; // r5
  signed int v23; // r4
  int v24; // r8
  unsigned int v25; // r1
  unsigned int v26; // r1
  unsigned int result; // r0
  unsigned int *v28; // [sp+4h] [bp-30h]
  unsigned int v29; // [sp+8h] [bp-2Ch]
  unsigned int v30; // [sp+Ch] [bp-28h] BYREF
  int v31; // [sp+10h] [bp-24h]
  int v32; // [sp+14h] [bp-20h]
  int v33; // [sp+18h] [bp-1Ch]
  int v34; // [sp+1Ch] [bp-18h]
  int v35; // [sp+20h] [bp-14h]
  signed int v36; // [sp+24h] [bp-10h]
  int v37; // [sp+28h] [bp-Ch]
  signed int v38; // [sp+2Ch] [bp-8h]

  if ( (unsigned int)dword_2E966C <= 0x3FFFFFFF && (dword_2E966C & 0x3FFFFFFE) != 0x3FFFFFFE )
  {
    v2 = __ldrex((unsigned int *)&dword_2E966C);
    if ( v2 == dword_2E966C )
    {
      if ( !__strex(dword_2E966C + 1, (unsigned int *)&dword_2E966C) )
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
  std::sys::unix::locks::futex_rwlock::RwLock::read_contended((unsigned int *)&dword_2E966C);
LABEL_6:
  v3 = 0;
  v32 = 0;
  v29 = 4;
  v31 = 4;
  v30 = 0;
  if ( environ )
  {
    v4 = (const char *)*environ;
    v5 = 0;
    if ( *environ )
    {
      v6 = (const char **)(environ + 4);
      v3 = 0;
      v28 = a1;
      v29 = 4;
      do
      {
        v16 = core::ffi::c_str::CStr::from_ptr::strlen_rt(v4);
        v17 = v16;
        if ( v16 )
        {
          v18 = memchr(v4 + 1, 61, v16 - 1);
          if ( v18 )
          {
            v19 = v18 - (v4 + 1);
            v20 = v18 - v4;
            if ( v18 - v4 > v17 )
              core::slice::index::slice_end_index_len_fail(v18 - v4, v17, (int)&off_2CA8D8);
            if ( v19 == -1 )
            {
              v21 = 1;
            }
            else
            {
              if ( v20 <= -1 )
                alloc::raw_vec::capacity_overflow();
              v21 = _rust_alloc(v18 - v4);
              if ( !v21 )
                alloc::alloc::handle_alloc_error();
            }
            memcpy((void *)v21, v4, v19 + 1);
            v22 = v19 + 2;
            v35 = v20;
            v34 = v21;
            v33 = v20;
            if ( v20 >= v17 )
              core::slice::index::slice_start_index_len_fail(v22, v17, (int)&off_2CA8E8);
            v23 = v17 - v22;
            v24 = 1;
            if ( v23 )
            {
              if ( v23 <= -1 )
                alloc::raw_vec::capacity_overflow();
              v24 = _rust_alloc(v23);
              if ( !v24 )
                alloc::alloc::handle_alloc_error();
            }
            memcpy((void *)v24, &v4[v22], v23);
            v38 = v23;
            v37 = v24;
            v36 = v23;
            v35 = v20;
            v34 = v21;
            v33 = v20;
            if ( v3 == v30 )
            {
              sub_1A43C0(&v30, v3);
              v7 = v31;
              v3 = v32;
            }
            else
            {
              v7 = v29;
            }
            v8 = 3 * v3;
            v29 = v7;
            ++v3;
            v9 = (int *)(v7 + 8 * v8);
            v10 = v34;
            v11 = v35;
            v12 = v36;
            v13 = v37;
            v14 = v38;
            *v9 = v33;
            v9[1] = v10;
            v9[2] = v11;
            v9[3] = v12;
            v9[4] = v13;
            v9[5] = v14;
            v32 = v3;
          }
        }
        v15 = *v6++;
        v4 = v15;
      }
      while ( v15 );
      v5 = v30;
      a1 = v28;
    }
  }
  else
  {
    v5 = 0;
  }
  __dmb(0xBu);
  do
  {
    v25 = __ldrex((unsigned int *)&dword_2E966C);
    v26 = v25 - 1;
  }
  while ( __strex(v26, (unsigned int *)&dword_2E966C) );
  if ( (v26 & 0xBFFFFFFF) == 0x80000000 )
    std::sys::unix::locks::futex_rwlock::RwLock::wake_writer_or_readers((unsigned int *)&dword_2E966C, v26);
  *a1 = v5;
  a1[1] = v29;
  result = v29 + 24 * v3;
  a1[2] = result;
  a1[3] = v29;
  return result;
}
