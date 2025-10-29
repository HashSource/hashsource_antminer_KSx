bool __fastcall std::path::PathBuf::_set_extension(size_t *a1, const void *a2, unsigned int a3)
{
  size_t v3; // r4
  unsigned int v4; // r7
  int v8; // r0
  int v9; // r1
  int v10; // r6
  unsigned int v11; // r0
  signed int v12; // r0
  unsigned int v13; // r1
  signed int v14; // r10
  _BOOL4 v15; // r0
  unsigned int v16; // r4
  size_t v17; // r0
  _DWORD v19[2]; // [sp+0h] [bp-18h] BYREF
  unsigned int v20; // [sp+8h] [bp-10h]
  _DWORD v21[3]; // [sp+Ch] [bp-Ch] BYREF

  v3 = a1[1];
  v4 = a1[2];
  v8 = std::path::Path::file_stem(v3, v4);
  v10 = v8;
  if ( v8 )
  {
    v11 = v8 + v9 - v3;
    if ( v4 >= v11 )
    {
      a1[2] = v11;
      v4 = v10 + v9 - v3;
    }
    if ( a3 )
    {
      v12 = *a1;
      v13 = a3 + 1;
      if ( *a1 - v4 < a3 + 1 )
      {
        v14 = v4 + v13;
        if ( !__CFADD__(v4, v13) )
        {
          if ( v12 )
          {
            v21[1] = *a1;
            v21[0] = v3;
            v15 = v12 >= 0;
          }
          else
          {
            v15 = 0;
          }
          v21[2] = v15;
          sub_1B61C0(v19, v14, v14 >= 0, (int)v21);
          v12 = v19[0];
          if ( !v19[0] )
          {
            v3 = v19[1];
            *a1 = v14;
            a1[1] = v3;
            if ( v4 != v14 )
              goto LABEL_11;
            goto LABEL_10;
          }
          v13 = v20;
          if ( v20 )
            alloc::alloc::handle_alloc_error();
        }
        alloc::raw_vec::capacity_overflow(v12, v13);
      }
      if ( v4 != v12 )
      {
LABEL_11:
        *(_BYTE *)(v3 + v4) = 46;
        v16 = v4 + 1;
        v17 = *a1;
        a1[2] = v4 + 1;
        if ( v17 - (v4 + 1) < a3 )
        {
          sub_797F8(a1, v4 + 1, a3);
          v16 = a1[2];
        }
        memcpy((void *)(a1[1] + v16), a2, a3);
        a1[2] = v16 + a3;
        return v10 != 0;
      }
LABEL_10:
      sub_1B69C4(a1, v4);
      v3 = a1[1];
      v4 = a1[2];
      goto LABEL_11;
    }
  }
  return v10 != 0;
}
