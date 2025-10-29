int __fastcall sub_1FB14C(int *a1, const void *a2, size_t n)
{
  int v5; // r5
  int v6; // r6
  size_t v8; // r6
  int v9; // r7
  void *v10; // r0
  int v11; // [sp+Ch] [bp-1ACh] BYREF
  _DWORD v12[3]; // [sp+10h] [bp-1A8h] BYREF
  __int16 v13; // [sp+1Ch] [bp-19Ch]
  int v14; // [sp+20h] [bp-198h] BYREF
  _UNKNOWN **v15; // [sp+24h] [bp-194h]
  __int64 dest; // [sp+28h] [bp-190h] BYREF
  char v17; // [sp+30h] [bp-188h]
  int v18; // [sp+34h] [bp-184h]
  size_t len; // [sp+A8h] [bp-110h]
  int v20; // [sp+ACh] [bp-10Ch]
  _DWORD v21[3]; // [sp+1ACh] [bp-Ch] BYREF

  v12[1] = 438;
  v12[2] = 1;
  v13 = 0;
  v12[0] = 0;
  if ( n >> 7 > 2 )
  {
    sub_7B738(&v14, (int)a2, n, (int)v12);
    if ( (unsigned __int8)v14 != 4 )
      goto LABEL_8;
  }
  else
  {
    memcpy(&dest, a2, n);
    *((_BYTE *)&dest + n) = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(v21, &dest, n + 1);
    if ( v21[0] )
    {
      v14 = dword_2E1158;
      v15 = &off_2E114C;
      if ( (unsigned __int8)dword_2E1158 != 4 )
      {
LABEL_8:
        v5 = (int)v15;
        if ( (unsigned __int8)v14 == 4 )
        {
          if ( v15 != (_UNKNOWN **)-1 )
            goto LABEL_10;
        }
        else if ( (unsigned __int8)v14 == 3 )
        {
          (*(void (__fastcall **)(_DWORD))v15[1])(*v15);
          if ( *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4) )
            _rust_dealloc(*(void **)v5);
          _rust_dealloc((void *)v5);
        }
        *a1 = 0;
        return 0;
      }
    }
    else
    {
      sub_1ED79C((int)&v14, v21[1], v21[2], (int)v12);
      if ( (unsigned __int8)v14 != 4 )
        goto LABEL_8;
    }
  }
  v5 = (int)v15;
LABEL_10:
  v11 = v5;
  std::fs::File::metadata(&dest, &v11);
  if ( dest == 2 )
  {
    if ( v17 == 3 )
    {
      v6 = v18;
      (**(void (__fastcall ***)(_DWORD))(v18 + 4))(*(_DWORD *)v18);
      if ( *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4) )
        _rust_dealloc(*(void **)v6);
      _rust_dealloc((void *)v6);
    }
    goto LABEL_16;
  }
  if ( v20 )
  {
LABEL_16:
    *a1 = 0;
    return close(v5);
  }
  v8 = len;
  v9 = 0;
  v10 = mmap(0, len, 1, 2, v5, 0);
  if ( v10 != (void *)-1 )
  {
    v9 = 1;
    a1[1] = (int)v10;
    a1[2] = v8;
  }
  *a1 = v9;
  return close(v5);
}
