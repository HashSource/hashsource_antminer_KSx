int __fastcall std::sys::unix::fs::readdir(int a1, _BYTE *src, size_t n)
{
  int v6; // r1
  int v7; // r0
  DIR *v8; // r6
  int v9; // r7
  int result; // r0
  int v11; // r3
  DIR *v12; // r4
  size_t v13; // r5
  int v14; // r6
  size_t v15; // r7
  __int16 v16; // r1
  char v17; // r2
  DIR *v18; // r3
  int v19; // [sp+8h] [bp-194h] BYREF
  DIR *v20; // [sp+Ch] [bp-190h]
  int dest; // [sp+10h] [bp-18Ch] BYREF
  int v22; // [sp+14h] [bp-188h]
  DIR *v23; // [sp+18h] [bp-184h]
  size_t v24; // [sp+1Ch] [bp-180h]
  int v25; // [sp+20h] [bp-17Ch]
  size_t v26; // [sp+24h] [bp-178h]
  _DWORD v27[3]; // [sp+190h] [bp-Ch] BYREF

  if ( n >> 7 > 2 )
  {
    sub_7B3DC(&v19, src, n);
    v7 = (unsigned __int8)v19;
    if ( (unsigned __int8)v19 != 4 )
    {
LABEL_15:
      v16 = *(_WORD *)((char *)&v19 + 1);
      v17 = HIBYTE(v19);
      v18 = v20;
      *(_BYTE *)(a1 + 4) = v7;
      *(_BYTE *)(a1 + 7) = v17;
      *(_WORD *)(a1 + 5) = v16;
      *(_DWORD *)(a1 + 8) = v18;
      *(_DWORD *)a1 = 1;
      return 1;
    }
  }
  else
  {
    memcpy(&dest, src, n);
    *((_BYTE *)&dest + n) = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(v27, &dest, n + 1);
    if ( v27[0] )
    {
      v6 = dword_2EA158;
      v20 = (DIR *)&off_2EA14C;
      v7 = (unsigned __int8)dword_2EA158;
      v19 = dword_2EA158;
      if ( (unsigned __int8)dword_2EA158 != 4 )
        goto LABEL_15;
    }
    else
    {
      v20 = opendir((const char *)v27[1]);
      v7 = 4;
    }
  }
  v8 = v20;
  if ( v20 )
  {
    v9 = 1;
    if ( n )
    {
      if ( (int)n <= -1 )
        alloc::raw_vec::capacity_overflow(v7, v6);
      v9 = _rust_alloc(n);
      if ( !v9 )
        alloc::alloc::handle_alloc_error();
    }
    memcpy((void *)v9, src, n);
    v26 = n;
    v25 = v9;
    v24 = n;
    v23 = v8;
    v22 = 1;
    dest = 1;
    result = _rust_alloc(0x18u);
    if ( !result )
      alloc::alloc::handle_alloc_error();
    v11 = v22;
    v12 = v23;
    v13 = v24;
    v14 = v25;
    v15 = v26;
    *(_DWORD *)result = dest;
    *(_DWORD *)(result + 4) = v11;
    *(_DWORD *)(result + 8) = v12;
    *(_DWORD *)(result + 12) = v13;
    *(_DWORD *)(result + 16) = v14;
    *(_DWORD *)(result + 20) = v15;
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
