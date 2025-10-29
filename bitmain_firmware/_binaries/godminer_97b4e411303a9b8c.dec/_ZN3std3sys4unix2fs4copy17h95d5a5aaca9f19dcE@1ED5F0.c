int __fastcall std::sys::unix::fs::copy(int a1, const void *a2, size_t n, const void *a4, size_t a5)
{
  int *v8; // r8
  int v9; // r10
  int v10; // r5
  void *v11; // r4
  __mode_t v12; // r9
  int v13; // r6
  int v15; // r4
  int v16; // r5
  int v17; // r3
  char v18; // r1
  int v19; // r3
  int v20; // r0
  int v21; // r5
  unsigned int v22; // r6
  unsigned int v23; // r7
  int v24; // r4
  ssize_t v25; // r0
  __int64 *p_dest; // r6
  int v27; // r4
  size_t v28; // r2
  unsigned int v29; // r0
  char v30; // r2
  unsigned int v31; // r0
  unsigned int v32; // r1
  int v33; // r1
  bool v34; // cf
  __int64 v35; // r0
  int v36; // [sp+10h] [bp-2044h]
  int v37; // [sp+14h] [bp-2040h]
  unsigned __int64 v38; // [sp+1Ch] [bp-2038h]
  int v39; // [sp+24h] [bp-2030h] BYREF
  __int64 v40; // [sp+28h] [bp-202Ch] BYREF
  int v41; // [sp+30h] [bp-2024h]
  int v42; // [sp+34h] [bp-2020h]
  int v43; // [sp+38h] [bp-201Ch] BYREF
  _UNKNOWN **v44; // [sp+3Ch] [bp-2018h]
  __int64 v45; // [sp+40h] [bp-2014h] BYREF
  int v46; // [sp+48h] [bp-200Ch]
  __int64 dest; // [sp+50h] [bp-2004h] BYREF
  int v48; // [sp+58h] [bp-1FFCh]
  void *v49; // [sp+5Ch] [bp-1FF8h]
  __mode_t v50; // [sp+B0h] [bp-1FA4h]

  v41 = 1;
  LOWORD(v42) = 0;
  v40 = 0x1B600000000LL;
  if ( n >> 7 > 2 )
  {
    sub_7B538(&v43, (int)a2, n, (int)&v40);
    v8 = (int *)(a1 + 4);
    if ( (unsigned __int8)v43 == 4 )
      goto LABEL_6;
  }
  else
  {
    memcpy(&dest, a2, n);
    *((_BYTE *)&dest + n) = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(&v45, &dest, n + 1);
    if ( (_DWORD)v45 )
    {
      v43 = dword_2E0158;
      v44 = &off_2E014C;
      v8 = (int *)(a1 + 4);
      if ( (unsigned __int8)dword_2E0158 != 4 )
        goto LABEL_8;
LABEL_6:
      v9 = (int)v44;
      goto LABEL_10;
    }
    sub_1EC04C((int)&v43, SHIDWORD(v45), v46, (int)&v40);
    v8 = (int *)(a1 + 4);
    if ( (unsigned __int8)v43 == 4 )
      goto LABEL_6;
  }
LABEL_8:
  v10 = v43;
  v11 = v44;
  if ( (unsigned __int8)v43 != 4 )
  {
LABEL_19:
    *v8 = v10;
    v8[1] = (int)v11;
    *(_DWORD *)a1 = 1;
    return 1;
  }
  v9 = (int)v44;
LABEL_10:
  v39 = v9;
  std::fs::File::metadata(&dest, &v39);
  if ( dest == 2 )
  {
    v10 = v48;
    v11 = v49;
LABEL_18:
    close(v9);
    goto LABEL_19;
  }
  v12 = v50;
  if ( (v50 & 0xF000) != 0x8000 )
  {
    v11 = &unk_2E0818;
    v10 = dword_2E0828;
    goto LABEL_18;
  }
  v41 = 16777472;
  LOWORD(v42) = 1;
  HIDWORD(v40) = v50;
  LODWORD(v40) = 0;
  if ( a5 >> 7 <= 2 )
  {
    memcpy(&dest, a4, a5);
    *((_BYTE *)&dest + a5) = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(&v45, &dest, a5 + 1);
    if ( (_DWORD)v45 )
    {
      v43 = dword_2E0158;
      v44 = &off_2E014C;
      if ( (unsigned __int8)dword_2E0158 == 4 )
        goto LABEL_16;
      goto LABEL_22;
    }
    sub_1EC04C((int)&v43, SHIDWORD(v45), v46, (int)&v40);
  }
  else
  {
    sub_7B538(&v43, (int)a4, a5, (int)&v40);
  }
  if ( (unsigned __int8)v43 == 4 )
  {
LABEL_16:
    v13 = (int)v44;
    goto LABEL_24;
  }
LABEL_22:
  v15 = v43;
  v16 = (int)v44;
  if ( (unsigned __int8)v43 == 4 )
  {
    v13 = (int)v44;
LABEL_24:
    v39 = v13;
    std::fs::File::metadata(&dest, &v39);
    if ( dest == 2 )
    {
      v15 = v48;
      v16 = (int)v49;
LABEL_26:
      close(v13);
      goto LABEL_27;
    }
    if ( (v50 & 0xF000) == 0x8000 )
    {
      while ( fchmod(v13, v12) == -1 )
      {
        v16 = *_errno_location();
        if ( (unsigned __int8)std::sys::unix::decode_error_kind(v16) != 35 )
        {
          v15 = 0;
          goto LABEL_26;
        }
      }
    }
    std::sys::unix::kernel_copy::copy_regular_files(&v40, v9, v13, v17, -1, -1);
    v18 = 1;
    if ( (unsigned __int8)v41 > 3u )
      v18 = v41 - 4;
    if ( v18 )
    {
      if ( v18 == 1 )
      {
        *(_DWORD *)a1 = 1;
        v19 = v42;
        *v8 = v41;
        v8[1] = v19;
LABEL_61:
        close(v13);
        return close(v9);
      }
      v37 = v40;
      v21 = v13;
      v22 = 0;
      v36 = HIDWORD(v40);
      HIDWORD(v38) = 0;
LABEL_40:
      v23 = read(v9, &dest, 0x2000u);
      if ( v23 == -1 )
      {
        while ( 1 )
        {
          v24 = *_errno_location();
          if ( (unsigned __int8)std::sys::unix::decode_error_kind(v24) != 35 )
            break;
          v25 = read(v9, &dest, 0x2000u);
          if ( v25 != -1 )
          {
            v23 = v25;
            goto LABEL_44;
          }
        }
        v33 = 0;
      }
      else
      {
LABEL_44:
        if ( v23 > 0x2000 )
          core::slice::index::slice_end_index_len_fail();
        if ( !v23 )
        {
          v34 = __CFADD__(v22, v37);
          LODWORD(v35) = v22 + v37;
          v13 = v21;
          HIDWORD(v35) = v36 + v34 + HIDWORD(v38);
          *(_QWORD *)(a1 + 8) = v35;
          v20 = 0;
          goto LABEL_60;
        }
        v38 = __PAIR64__(HIDWORD(v38), v22) + v23;
        p_dest = &dest;
        do
        {
          while ( 1 )
          {
            v28 = v23;
            if ( v23 >= 0x7FFFFFFF )
              v28 = 0x7FFFFFFF;
            v29 = write(v21, p_dest, v28);
            if ( v29 == -1 )
              break;
            if ( !v29 )
            {
              v30 = 2;
              v31 = (unsigned int)&off_2DFC28 >> 8;
              v32 = (_DWORD)&off_2DFC28 << 24;
              goto LABEL_57;
            }
            if ( v23 < v29 )
              core::slice::index::slice_start_index_len_fail();
            v23 -= v29;
            p_dest = (__int64 *)((char *)p_dest + v29);
            if ( !v23 )
            {
              v22 = v38;
              goto LABEL_40;
            }
          }
          v27 = *_errno_location();
        }
        while ( (unsigned __int8)std::sys::unix::decode_error_kind(v27) == 35 );
        __SET_PAIR__(v31, v32, (unsigned __int64)(unsigned int)v27 << 24);
        v30 = 0;
LABEL_57:
        *(_WORD *)((char *)&v45 + 5) = v31;
        *(_DWORD *)((char *)&v45 + 1) = v32;
        LOBYTE(v45) = v30;
        v33 = v45;
        HIBYTE(v45) = BYTE2(v31);
        v24 = HIDWORD(v45);
      }
      v13 = v21;
      *v8 = v33;
      v8[1] = v24;
      v20 = 1;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = v40;
      v20 = 0;
    }
LABEL_60:
    *(_DWORD *)a1 = v20;
    goto LABEL_61;
  }
LABEL_27:
  *v8 = v15;
  v8[1] = v16;
  *(_DWORD *)a1 = 1;
  return close(v9);
}
