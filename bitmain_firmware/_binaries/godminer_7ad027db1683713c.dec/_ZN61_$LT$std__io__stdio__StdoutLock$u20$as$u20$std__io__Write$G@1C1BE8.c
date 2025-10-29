int __fastcall <std::io::stdio::StdoutLock as std::io::Write>::write_all_vectored(
        _DWORD *a1,
        _DWORD *a2,
        int a3,
        unsigned int a4)
{
  int v4; // r0
  _DWORD *v5; // r9
  unsigned int v6; // r6
  int v7; // r11
  unsigned int v8; // r3
  unsigned int v9; // r0
  struct iovec *v10; // r8
  int v11; // r7
  size_t v12; // r4
  size_t v13; // r2
  bool v14; // zf
  struct iovec *v15; // r3
  struct iovec *v16; // r0
  size_t v17; // r1
  size_t *p_iov_len; // r0
  unsigned int v19; // r2
  unsigned int iov_len; // t1
  char *iov_base; // r7
  int result; // r0
  char **v23; // r0
  char **v24; // r1
  char v26; // [sp+8h] [bp-24h] BYREF
  size_t v27; // [sp+Ch] [bp-20h]
  _DWORD var18[8]; // [sp+14h] [bp-18h] BYREF

  v4 = *a2;
  v5 = (_DWORD *)(*a2 + 12);
  if ( *v5 )
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)var18, (int)&off_2C92E8, (int)&off_2C9B34);
  v6 = a4;
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
      v9 = ((v6 - 1) & 0x1FFFFFFF) + 1;
      break;
    }
  }
  if ( v9 > v6 )
LABEL_29:
    core::slice::index::slice_start_index_len_fail(v9, v6, (int)&off_2C9BF0);
  v6 -= v9;
  if ( v6 )
  {
    v10 = (struct iovec *)(a3 + 8 * v9);
    while ( 1 )
    {
      sub_1BD1F0((int)&v26, v7, v10, v6);
      if ( v26 != 4 )
        __asm { ADD             PC, R0, R1 }
      if ( !v27 )
        break;
      v11 = 8 * v6;
      v9 = 0;
      v12 = 0;
      while ( 1 )
      {
        v13 = v10[v9].iov_len + v12;
        if ( v13 > v27 )
          break;
        v11 -= 8;
        ++v9;
        v12 = v13;
        if ( !v11 )
        {
          v12 = v13;
          v9 = ((v6 - 1) & 0x1FFFFFFF) + 1;
          break;
        }
      }
      v14 = v6 == v9;
      if ( v6 < v9 )
        goto LABEL_29;
      v6 -= v9;
      v15 = &v10[v9];
      if ( v14 )
      {
        v10 += v9;
        if ( v27 != v12 )
        {
          v23 = &off_2C9C00;
          v24 = &off_2C9C08;
          goto LABEL_31;
        }
      }
      else
      {
        v16 = &v10[v9];
        v17 = v27 - v12;
        iov_len = v16->iov_len;
        p_iov_len = &v16->iov_len;
        v19 = iov_len;
        if ( iov_len < v27 - v12 )
        {
          v23 = &off_2CA830;
          v24 = &off_2CA838;
LABEL_31:
          var18[2] = v23;
          var18[3] = 1;
          var18[0] = 0;
          var18[5] = 0;
          var18[4] = aRustc9eb3afe9e;
          core::panicking::panic_fmt((int)var18, (int)v24);
        }
        iov_base = (char *)v15->iov_base;
        v10 = v15;
        *p_iov_len = v19 - v17;
        v15->iov_base = &iov_base[v17];
      }
      if ( !v6 )
        goto LABEL_26;
    }
    *a1 = 2;
    a1[1] = &off_2C9C28;
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
