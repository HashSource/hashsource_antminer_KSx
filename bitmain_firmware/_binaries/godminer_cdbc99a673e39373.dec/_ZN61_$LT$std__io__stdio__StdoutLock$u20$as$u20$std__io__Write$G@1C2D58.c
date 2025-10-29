int __fastcall <std::io::stdio::StdoutLock as std::io::Write>::write_all_vectored(
        _DWORD *a1,
        _DWORD *a2,
        int a3,
        unsigned int a4)
{
  int v4; // r0
  int *v5; // r9
  int v7; // r11
  int v8; // r3
  unsigned int v9; // r0
  unsigned int v10; // r6
  struct iovec *v11; // r8
  int v12; // r7
  unsigned int v13; // r0
  size_t v14; // r4
  size_t v15; // r2
  bool v16; // zf
  struct iovec *v17; // r3
  struct iovec *v18; // r0
  size_t v19; // r1
  size_t *p_iov_len; // r0
  unsigned int v21; // r2
  unsigned int iov_len; // t1
  char *iov_base; // r7
  int result; // r0
  char **v25; // r0
  char **v26; // r1
  char v28; // [sp+8h] [bp-24h] BYREF
  size_t v29; // [sp+Ch] [bp-20h]
  _DWORD var18[8]; // [sp+14h] [bp-18h] BYREF

  v4 = *a2;
  v5 = (int *)(*a2 + 12);
  if ( *v5 )
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)var18, (int)&off_2CA2E8, (int)&off_2CAB34);
  *(_DWORD *)(v4 + 12) = -1;
  if ( !a4 )
    goto LABEL_26;
  v7 = v4 + 16;
  v8 = 8 * a4;
  v9 = 0;
  while ( !*(_DWORD *)(a3 + 4 + 8 * v9) )
  {
    v8 -= 8;
    ++v9;
    if ( !v8 )
    {
      v9 = ((a4 - 1) & 0x1FFFFFFF) + 1;
      break;
    }
  }
  if ( v9 > a4 )
LABEL_29:
    core::slice::index::slice_start_index_len_fail();
  v10 = a4 - v9;
  if ( v10 )
  {
    v11 = (struct iovec *)(a3 + 8 * v9);
    while ( 1 )
    {
      sub_1BE360((int)&v28, v7, v11, v10);
      if ( v28 != 4 )
        __asm { ADD             PC, R0, R1 }
      if ( !v29 )
        break;
      v12 = 8 * v10;
      v13 = 0;
      v14 = 0;
      while ( 1 )
      {
        v15 = v11[v13].iov_len + v14;
        if ( v15 > v29 )
          break;
        v12 -= 8;
        ++v13;
        v14 = v15;
        if ( !v12 )
        {
          v14 = v15;
          v13 = ((v10 - 1) & 0x1FFFFFFF) + 1;
          break;
        }
      }
      v16 = v10 == v13;
      if ( v10 < v13 )
        goto LABEL_29;
      v10 -= v13;
      v17 = &v11[v13];
      if ( v16 )
      {
        v11 += v13;
        if ( v29 != v14 )
        {
          v25 = &off_2CAC00;
          v26 = &off_2CAC08;
          goto LABEL_31;
        }
      }
      else
      {
        v18 = &v11[v13];
        v19 = v29 - v14;
        iov_len = v18->iov_len;
        p_iov_len = &v18->iov_len;
        v21 = iov_len;
        if ( iov_len < v29 - v14 )
        {
          v25 = &off_2CB830;
          v26 = &off_2CB838;
LABEL_31:
          var18[2] = v25;
          var18[3] = 1;
          var18[0] = 0;
          var18[5] = 0;
          var18[4] = aRustc9eb3afe9e;
          core::panicking::panic_fmt((int)var18, (int)v26);
        }
        iov_base = (char *)v17->iov_base;
        v11 = v17;
        *p_iov_len = v21 - v19;
        v17->iov_base = &iov_base[v19];
      }
      if ( !v10 )
        goto LABEL_26;
    }
    *a1 = 2;
    a1[1] = &off_2CAC28;
  }
  else
  {
LABEL_26:
    *(_BYTE *)a1 = 4;
  }
  result = *v5 + 1;
  *v5 = result;
  return result;
}
