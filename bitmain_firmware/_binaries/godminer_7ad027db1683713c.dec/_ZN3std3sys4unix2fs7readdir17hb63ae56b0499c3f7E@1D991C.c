int __fastcall std::sys::unix::fs::readdir(int a1, _BYTE *src, size_t n)
{
  char v6; // r0
  DIR *v7; // r6
  int v8; // r7
  int result; // r0
  int v10; // r3
  DIR *v11; // r4
  size_t v12; // r5
  int v13; // r6
  size_t v14; // r7
  __int16 v15; // r1
  char v16; // r2
  DIR *v17; // r3
  int v18; // [sp+8h] [bp-194h] BYREF
  DIR *v19; // [sp+Ch] [bp-190h]
  int dest; // [sp+10h] [bp-18Ch] BYREF
  int v21; // [sp+14h] [bp-188h]
  DIR *v22; // [sp+18h] [bp-184h]
  size_t v23; // [sp+1Ch] [bp-180h]
  int v24; // [sp+20h] [bp-17Ch]
  size_t v25; // [sp+24h] [bp-178h]
  _DWORD v26[3]; // [sp+190h] [bp-Ch] BYREF

  if ( n >> 7 > 2 )
  {
    sub_79C24(&v18, src, n);
    v6 = v18;
    if ( (unsigned __int8)v18 != 4 )
    {
LABEL_15:
      v15 = *(_WORD *)((char *)&v18 + 1);
      v16 = HIBYTE(v18);
      v17 = v19;
      *(_BYTE *)(a1 + 4) = v6;
      *(_BYTE *)(a1 + 7) = v16;
      *(_WORD *)(a1 + 5) = v15;
      *(_DWORD *)(a1 + 8) = v17;
      *(_DWORD *)a1 = 1;
      return 1;
    }
  }
  else
  {
    memcpy(&dest, src, n);
    *((_BYTE *)&dest + n) = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(v26, &dest, n + 1);
    if ( v26[0] )
    {
      v19 = (DIR *)&off_2CA14C;
      v6 = dword_2CA158;
      v18 = dword_2CA158;
      if ( (unsigned __int8)dword_2CA158 != 4 )
        goto LABEL_15;
    }
    else
    {
      v19 = opendir((const char *)v26[1]);
    }
  }
  v7 = v19;
  if ( v19 )
  {
    v8 = 1;
    if ( n )
    {
      if ( (int)n <= -1 )
        alloc::raw_vec::capacity_overflow();
      v8 = _rust_alloc(n);
      if ( !v8 )
        alloc::alloc::handle_alloc_error();
    }
    memcpy((void *)v8, src, n);
    v25 = n;
    v24 = v8;
    v23 = n;
    v22 = v7;
    v21 = 1;
    dest = 1;
    result = _rust_alloc(0x18u);
    if ( !result )
      alloc::alloc::handle_alloc_error();
    v10 = v21;
    v11 = v22;
    v12 = v23;
    v13 = v24;
    v14 = v25;
    *(_DWORD *)result = dest;
    *(_DWORD *)(result + 4) = v10;
    *(_DWORD *)(result + 8) = v11;
    *(_DWORD *)(result + 12) = v12;
    *(_DWORD *)(result + 16) = v13;
    *(_DWORD *)(result + 20) = v14;
    *(_BYTE *)(a1 + 8) = 0;
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = result;
  }
  else
  {
    result = *_errno_location();
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)a1 = 1;
    *(_DWORD *)(a1 + 8) = result;
  }
  return result;
}
