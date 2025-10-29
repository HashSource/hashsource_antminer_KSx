bool __fastcall std::path::PathBuf::_set_extension(unsigned int *a1, const void *a2, size_t a3)
{
  _BYTE *v3; // r4
  unsigned int v4; // r7
  int v8; // r0
  int v9; // r1
  int v10; // r6
  unsigned int v11; // r0
  signed int v12; // r0
  size_t v13; // r1
  signed int v14; // r10
  _BOOL4 v15; // r0
  unsigned int v16; // r4
  signed int v17; // r0
  _DWORD v19[3]; // [sp+0h] [bp-18h] BYREF
  _DWORD v20[3]; // [sp+Ch] [bp-Ch] BYREF

  v3 = (_BYTE *)a1[1];
  v4 = a1[2];
  v8 = std::path::Path::file_stem(v3, v4);
  v10 = v8;
  if ( v8 )
  {
    v11 = v8 + v9 - (_DWORD)v3;
    if ( v4 >= v11 )
    {
      a1[2] = v11;
      v4 = v10 + v9 - (_DWORD)v3;
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
            v20[1] = *a1;
            v20[0] = v3;
            v15 = v12 >= 0;
          }
          else
          {
            v15 = 0;
          }
          v20[2] = v15;
          sub_1A3DFC(v19, v14, v14 >= 0, (int)v20);
          if ( !v19[0] )
          {
            v3 = (_BYTE *)v19[1];
            *a1 = v14;
            a1[1] = (unsigned int)v3;
            if ( v4 != v14 )
              goto LABEL_11;
            goto LABEL_10;
          }
          if ( v19[2] )
            alloc::alloc::handle_alloc_error();
        }
        alloc::raw_vec::capacity_overflow();
      }
      if ( v4 != v12 )
      {
LABEL_11:
        v3[v4] = 46;
        v16 = v4 + 1;
        v17 = *a1;
        a1[2] = v4 + 1;
        if ( v17 - (v4 + 1) < a3 )
        {
          sub_77DD8(a1, v4 + 1, a3);
          v16 = a1[2];
        }
        memcpy((void *)(a1[1] + v16), a2, a3);
        a1[2] = v16 + a3;
        return v10 != 0;
      }
LABEL_10:
      sub_1A4600(a1, v4);
      v3 = (_BYTE *)a1[1];
      v4 = a1[2];
      goto LABEL_11;
    }
  }
  return v10 != 0;
}
