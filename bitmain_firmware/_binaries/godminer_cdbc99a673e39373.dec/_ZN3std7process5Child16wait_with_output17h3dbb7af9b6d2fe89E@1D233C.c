int __fastcall std::process::Child::wait_with_output(int a1, _DWORD *a2)
{
  int v3; // r0
  _DWORD *v4; // r5
  int v5; // r1
  int v6; // r6
  int v7; // r4
  int v8; // r11
  unsigned int v9; // r5
  int v10; // r7
  unsigned int v11; // r8
  char *v12; // r7
  size_t v13; // r2
  unsigned int v14; // r0
  unsigned int v15; // r9
  unsigned int v16; // r9
  ssize_t v17; // r0
  int v18; // r7
  char v19; // r0
  size_t v20; // r12
  void *v21; // r2
  int v22; // r3
  int v23; // r4
  int v24; // r1
  void *v25; // r6
  char v26; // r3
  bool v27; // zf
  int v28; // r6
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int result; // r0
  int v33; // [sp+8h] [bp-54h]
  _DWORD *v34; // [sp+Ch] [bp-50h]
  int v35; // [sp+10h] [bp-4Ch] BYREF
  void *v36; // [sp+14h] [bp-48h]
  int v37; // [sp+18h] [bp-44h]
  size_t v38; // [sp+20h] [bp-3Ch] BYREF
  void *ptr; // [sp+24h] [bp-38h]
  int v40; // [sp+28h] [bp-34h]
  int fd; // [sp+2Ch] [bp-30h] BYREF
  int v42; // [sp+30h] [bp-2Ch] BYREF
  int v43; // [sp+34h] [bp-28h]
  int buf; // [sp+38h] [bp-24h] BYREF
  int v45; // [sp+3Ch] [bp-20h]
  int v46; // [sp+40h] [bp-1Ch]
  int v47; // [sp+44h] [bp-18h]
  int v48; // [sp+48h] [bp-14h]
  int v49; // [sp+4Ch] [bp-10h]
  int v50; // [sp+50h] [bp-Ch]
  int v51; // [sp+54h] [bp-8h]

  v3 = a2[4];
  v4 = a2;
  a2[4] = -1;
  if ( v3 != -1 )
    close(v3);
  v5 = v4[5];
  v6 = v4[6];
  v37 = 0;
  v36 = (void *)1;
  v35 = 0;
  v4[5] = -1;
  v4[6] = -1;
  v40 = 0;
  ptr = (void *)1;
  v38 = 0;
  if ( v5 == -1 )
  {
    if ( v6 != -1 )
    {
      v34 = v4;
      v33 = a1;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v11 = v7 - v8;
          if ( v7 == v8 && v11 < 0x20 )
          {
            sub_77EE0(&v38, v7, 32);
            v7 = v38;
            v8 = v40;
            v11 = v38 - v40;
          }
          if ( v11 < v9 )
            core::slice::index::slice_start_index_len_fail();
          v12 = (char *)ptr + v8;
          memset((char *)ptr + v8 + v9, 0, v11 - v9);
          v13 = v11;
          if ( v11 >= 0x7FFFFFFF )
            v13 = 0x7FFFFFFF;
          v14 = read(v6, v12, v13);
          if ( v14 != -1 )
            break;
          v10 = *_errno_location();
          if ( (unsigned __int8)std::sys::unix::decode_error_kind(v10) != 35 )
          {
LABEL_47:
            v45 = v10;
            buf = 0;
            core::result::unwrap_failed((int)&unk_290C2A, 43, (int)&buf, (int)&off_2CA308, (int)&off_2CB094);
          }
        }
        v15 = v14;
        if ( v11 > v14 )
          v15 = v11;
        if ( !v14 )
          break;
        if ( v11 < v14 )
          goto LABEL_49;
        v8 += v14;
        v9 = v15 - v14;
        v40 = v8;
        if ( !(v8 | v7) )
        {
          v51 = 0;
          v50 = 0;
          v49 = 0;
          v48 = 0;
          v47 = 0;
          v46 = 0;
          v45 = 0;
          buf = 0;
          v16 = read(v6, &buf, 0x20u);
          if ( v16 == -1 )
          {
            do
            {
              v10 = *_errno_location();
              if ( (unsigned __int8)std::sys::unix::decode_error_kind(v10) != 35 )
                goto LABEL_47;
              v17 = read(v6, &buf, 0x20u);
            }
            while ( v17 == -1 );
            v16 = v17;
          }
          if ( !v16 )
            break;
          if ( v16 >= 0x21 )
LABEL_49:
            core::slice::index::slice_end_index_len_fail();
          sub_77EE0(&v38, 0, v16);
          v18 = v40;
          v7 = v38;
          memcpy((char *)ptr + v40, &buf, v16);
          v8 = v18 + v16;
          v40 = v18 + v16;
        }
      }
      close(v6);
      v4 = v34;
      a1 = v33;
    }
  }
  else if ( v6 == -1 )
  {
    fd = v5;
    std::sys::unix::fd::FileDesc::read_to_end(&v42, &fd, &v35);
    if ( (unsigned __int8)v42 != 4 )
    {
      buf = v42;
      v45 = v43;
      core::result::unwrap_failed((int)&unk_290C2A, 43, (int)&buf, (int)&off_2CA308, (int)&off_2CB084);
    }
    close(fd);
  }
  else
  {
    sub_1DE898((int)&v42, v5, (int)&v35, v6, (int)&v38);
    if ( (unsigned __int8)v42 != 4 )
    {
      buf = v42;
      v45 = v43;
      core::result::unwrap_failed((int)&unk_290C2A, 43, (int)&buf, (int)&off_2CA308, (int)&off_2CB074);
    }
  }
  std::process::Child::wait((int)&buf, v4);
  v19 = buf;
  if ( (unsigned __int8)buf == 4 )
  {
    v20 = v38;
    v21 = ptr;
    v22 = v40;
    v23 = v37;
    v24 = v35;
    v25 = v36;
    *(_DWORD *)a1 = v45;
    *(_DWORD *)(a1 + 4) = v24;
    *(_DWORD *)(a1 + 8) = v25;
    *(_DWORD *)(a1 + 12) = v23;
    *(_DWORD *)(a1 + 16) = v20;
    *(_DWORD *)(a1 + 20) = v21;
    *(_DWORD *)(a1 + 24) = v22;
  }
  else
  {
    v26 = HIBYTE(buf);
    v27 = v38 == 0;
    v28 = v45;
    LOWORD(v42) = *(_WORD *)((char *)&buf + 1);
    *(_WORD *)(a1 + 1) = *(_WORD *)((char *)&buf + 1);
    BYTE2(v42) = v26;
    *(_BYTE *)(a1 + 3) = v26;
    *(_DWORD *)(a1 + 4) = v28;
    *(_DWORD *)(a1 + 8) = 0;
    *(_BYTE *)a1 = v19;
    if ( !v27 )
      _rust_dealloc(ptr);
    if ( v35 )
      _rust_dealloc(v36);
  }
  v29 = v4[3];
  if ( v29 != -1 )
    close(v29);
  v30 = v4[4];
  if ( v30 != -1 )
    close(v30);
  v31 = v4[5];
  if ( v31 != -1 )
    close(v31);
  result = v4[6];
  if ( result != -1 )
    return close(result);
  return result;
}
