void __fastcall sub_1F3134(_DWORD *a1, _BYTE *a2, int a3)
{
  void **v3; // r5
  int v4; // r0
  char *v5; // r6
  char *v6; // r0
  unsigned int v7; // r5
  unsigned int v8; // r4
  int v9; // r6
  int v10; // r11
  char *v11; // r6
  int v12; // r7
  ssize_t v13; // r0
  int v14; // r4
  unsigned int v15; // r0
  char *v16; // r8
  unsigned int v17; // r9
  _BYTE *v18; // r0
  _BYTE *v19; // r7
  unsigned int v20; // r0
  int v21; // r6
  char *v22; // r0
  int v23; // r6
  char *v24; // r0
  int v25; // r4
  int v26; // r2
  char *v27; // r0
  int v28; // r1
  int v29; // r1
  _BYTE *v30; // r7
  int v31; // r0
  size_t v32; // r1
  const void *v33; // r8
  size_t v34; // r0
  size_t v35; // r1
  int v36; // r4
  size_t v37; // r0
  const void *v38; // r0
  int v39; // r1
  int v40; // r2
  const void *v41; // r0
  int v42; // r1
  _BYTE *v43; // r0
  int v44; // r1
  _BYTE *v45; // r4
  int v46; // r6
  bool v48; // zf
  void *v49; // r0
  int v50; // r1
  _BYTE *v51; // r4
  int v52; // r5
  size_t v53; // r0
  size_t v54; // r1
  size_t v55; // r2
  size_t size; // [sp+18h] [bp-1FCh]
  size_t v60; // [sp+1Ch] [bp-1F8h]
  int v61; // [sp+20h] [bp-1F4h]
  int v62; // [sp+24h] [bp-1F0h]
  int fd; // [sp+28h] [bp-1ECh]
  unsigned int v64; // [sp+2Ch] [bp-1E8h]
  unsigned int v65; // [sp+30h] [bp-1E4h]
  char *buf; // [sp+34h] [bp-1E0h]
  char *v67; // [sp+38h] [bp-1DCh]
  int v68; // [sp+3Ch] [bp-1D8h]
  int v69; // [sp+40h] [bp-1D4h]
  void *v70; // [sp+44h] [bp-1D0h]
  int v71; // [sp+58h] [bp-1BCh] BYREF
  int v72; // [sp+5Ch] [bp-1B8h]
  int v73; // [sp+60h] [bp-1B4h]
  int v74; // [sp+64h] [bp-1B0h]
  int v75; // [sp+68h] [bp-1ACh]
  int v76; // [sp+6Ch] [bp-1A8h]
  int v77; // [sp+70h] [bp-1A4h]
  int v78; // [sp+74h] [bp-1A0h]
  int v79; // [sp+78h] [bp-19Ch]
  __int16 v80; // [sp+7Ch] [bp-198h]
  int v81; // [sp+80h] [bp-194h] BYREF
  void **v82; // [sp+84h] [bp-190h]
  size_t v83[9]; // [sp+88h] [bp-18Ch] BYREF
  __int16 v84; // [sp+ACh] [bp-168h]
  size_t v85; // [sp+208h] [bp-Ch] BYREF
  void *ptr; // [sp+20Ch] [bp-8h]
  int v87; // [sp+210h] [bp-4h]

  v72 = 438;
  v73 = 1;
  LOWORD(v74) = 0;
  v71 = 0;
  strcpy((char *)v83, "/proc/self/mountinfo");
  core::ffi::c_str::CStr::from_bytes_with_nul(&v85, v83, 21);
  if ( v85 )
  {
    v82 = (void **)&off_2DF14C;
    v81 = dword_2DF158;
    if ( (unsigned __int8)dword_2DF158 == 4 )
    {
LABEL_3:
      v3 = v82;
      goto LABEL_7;
    }
  }
  else
  {
    sub_1EB63C((int)&v81, (int)ptr, v87, (int)&v71);
    if ( (unsigned __int8)v81 == 4 )
      goto LABEL_3;
  }
  v3 = v82;
  if ( (unsigned __int8)v81 != 4 )
  {
    if ( (unsigned __int8)v81 == 3 )
    {
      (*(void (__fastcall **)(void *))v82[1])(*v82);
      if ( *((_DWORD *)v3[1] + 1) )
        _rust_dealloc(*v3);
      _rust_dealloc(v3);
    }
    goto LABEL_71;
  }
  if ( v82 == (void **)-1 )
  {
LABEL_71:
    *a1 = 2;
    return;
  }
LABEL_7:
  v4 = _rust_alloc(0x2000u);
  fd = (int)v3;
  if ( !v4 )
    alloc::alloc::handle_alloc_error();
  v5 = (char *)v4;
  v70 = (void *)v4;
  v69 = (int)v3;
  v6 = (char *)_rust_alloc(0x100u);
  if ( !v6 )
    alloc::alloc::handle_alloc_error();
  v67 = v6;
  v7 = 0;
  ptr = v6;
  v64 = 0;
  v65 = 0;
  buf = v5;
  v85 = 256;
  while ( 1 )
  {
LABEL_10:
    v8 = v65;
    v9 = 0;
    v10 = 0;
    v87 = 0;
    do
    {
      v68 = v9;
      if ( v7 >= v8 )
      {
        v12 = fd;
        v11 = buf;
        while ( 1 )
        {
          v13 = read(fd, buf, 0x2000u);
          if ( v13 != -1 )
            break;
          v14 = *_errno_location();
          if ( (unsigned __int8)std::sys::unix::decode_error_kind(v14) != 35 )
          {
            v72 = v14;
            v71 = 0;
            goto LABEL_36;
          }
        }
        v8 = v13;
        v15 = v64;
        v7 = 0;
        v65 = v8;
        if ( v64 <= v8 )
          v15 = v8;
        v64 = v15;
      }
      else
      {
        v11 = buf;
      }
      v16 = &v11[v7];
      v17 = v8 - v7;
      v18 = memchr(&v11[v7], 10, v8 - v7);
      v19 = v18;
      if ( v18 )
      {
        v20 = v18 - v16;
        v21 = v68;
        if ( v19 - v16 == -1 )
          core::slice::index::slice_end_index_overflow_fail((int)&off_2DECB8);
        if ( v20 >= v17 )
          core::slice::index::slice_end_index_len_fail();
        if ( v85 - v68 <= v20 )
        {
          sub_797F8(&v85, v68, v19 - v16 + 1);
          v22 = (char *)ptr;
          v21 = v87;
        }
        else
        {
          v22 = v67;
        }
        v67 = v22;
        memcpy(&v22[v21], v16, v19 - v16 + 1);
        v9 = v21 + v19 - v16 + 1;
        v17 = v19 - v16 + 1;
      }
      else
      {
        v23 = v68;
        if ( v85 - v68 >= v17 )
        {
          v24 = v67;
        }
        else
        {
          sub_797F8(&v85, v68, v8 - v7);
          v24 = (char *)ptr;
          v23 = v87;
        }
        v67 = v24;
        memcpy(&v24[v23], v16, v8 - v7);
        v9 = v23 + v17;
      }
      v7 += v17;
      v10 += v17;
      v87 = v9;
      if ( v7 >= v8 )
        v7 = v8;
    }
    while ( !v19 && v17 );
    v68 = v9;
    v72 = v10;
    LOBYTE(v71) = 4;
    v12 = fd;
    v11 = buf;
LABEL_36:
    core::str::converts::from_utf8(v83, v67);
    v25 = v72;
    if ( v83[0] )
    {
      v26 = (unsigned __int8)v71;
      if ( (unsigned __int8)v71 == 4 )
      {
        v87 = 0;
      }
      else
      {
        v87 = 0;
LABEL_78:
        if ( v26 == 3 )
        {
          (**(void (__fastcall ***)(_DWORD))(v72 + 4))(*(_DWORD *)v72);
          if ( *(_DWORD *)(*(_DWORD *)(v25 + 4) + 4) )
            _rust_dealloc(*(void **)v25);
          _rust_dealloc((void *)v25);
        }
      }
      goto LABEL_82;
    }
    v26 = (unsigned __int8)v71;
    v87 = v68;
    if ( (unsigned __int8)v71 != 4 )
      goto LABEL_78;
    if ( !v72 )
      break;
    v67 = (char *)ptr;
    v27 = sub_1AF80C((char *)ptr, v68);
    v80 = 1;
    v76 = v28;
    v77 = 1;
    v78 = 32;
    v79 = 32;
    v73 = (int)v27;
    v74 = v28;
    v75 = 0;
    v72 = v28;
    v71 = 0;
    if ( !sub_1AFADC((size_t *)&v71) || !sub_1AFADC((size_t *)&v71) || !sub_1AFADC((size_t *)&v71) )
      goto LABEL_82;
    v30 = (_BYTE *)sub_1AFADC((size_t *)&v71);
    v31 = v61;
    if ( v30 )
      v31 = v29;
    v61 = v31;
    if ( !v30 )
      goto LABEL_82;
    v33 = (const void *)sub_1AFADC((size_t *)&v71);
    v34 = size;
    if ( v33 )
      v34 = v32;
    size = v34;
    if ( !v33 )
      goto LABEL_82;
    v36 = sub_1AFE28(&v71);
    v37 = v60;
    if ( v36 )
      v37 = v35;
    v60 = v37;
    if ( !v36 || !sub_1AFE28(&v71) )
      goto LABEL_82;
    v38 = (const void *)sub_1AFE28(&v71);
    v40 = v62;
    if ( v38 )
      v40 = v39;
    v62 = v40;
    if ( !v38 )
      goto LABEL_82;
    if ( v40 == 6 && !bcmp(v38, aCgroup, 6u) )
    {
      v84 = 1;
      v83[6] = 1;
      v83[8] = 44;
      v83[7] = 44;
      v83[5] = v60;
      v83[4] = 0;
      v83[3] = v60;
      v83[2] = v36;
      v83[1] = v60;
      v83[0] = 0;
      v41 = (const void *)sub_1AFADC(v83);
      if ( v41 )
      {
        while ( v42 != 3 || bcmp(v41, aCpu, 3u) )
        {
          v41 = (const void *)sub_1AFADC(v83);
          if ( !v41 )
            goto LABEL_10;
        }
        v43 = std::path::Path::_strip_prefix(v30, v61, asc_2A5257, 1);
        v45 = v43;
        if ( !v43 )
          goto LABEL_82;
        v46 = v44;
        if ( std::path::Path::_starts_with(a2, a3, v43, v44) )
        {
          v51 = std::path::Path::_strip_prefix(a2, a3, v45, v46);
          if ( v51 )
          {
            v52 = v50;
            sub_1B614C((signed int *)v83, v33, size);
            v53 = v83[0];
            v54 = v83[1];
            v55 = v83[2];
            *a1 = 1;
            a1[1] = v53;
            a1[2] = v54;
            a1[3] = v55;
            a1[4] = v51;
            a1[5] = v52;
            if ( !v85 )
              goto LABEL_84;
LABEL_83:
            _rust_dealloc(ptr);
LABEL_84:
            close(v69);
            v49 = v70;
            goto LABEL_85;
          }
LABEL_82:
          *a1 = 2;
          if ( v85 )
            goto LABEL_83;
          goto LABEL_84;
        }
      }
    }
  }
  v48 = v85 == 0;
  *a1 = 2;
  if ( !v48 )
    _rust_dealloc(ptr);
  close(v12);
  v49 = v11;
LABEL_85:
  _rust_dealloc(v49);
}
