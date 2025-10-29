int __fastcall alloc::ffi::c_str::CString::from_vec_with_nul(int a1, _DWORD *a2)
{
  _BYTE *v2; // r2
  unsigned int v3; // r6
  __int64 v6; // r0
  unsigned int v7; // r0
  bool v8; // zf
  int v9; // r1
  int v10; // r2
  int v11; // r2
  int v12; // r3
  int v13; // r2
  int v14; // r3
  _DWORD v16[4]; // [sp+0h] [bp-10h] BYREF

  v2 = (_BYTE *)a2[1];
  v3 = a2[2];
  if ( v3 >= 8 )
  {
    LODWORD(v6) = core::slice::memchr::memchr_aligned(0, a2[1]);
    goto LABEL_27;
  }
  LODWORD(v6) = 0;
  if ( !v3 )
  {
    HIDWORD(v6) = 0;
    goto LABEL_27;
  }
  if ( !*v2 )
  {
    v6 = 1;
    goto LABEL_27;
  }
  if ( v3 == 1 )
    goto LABEL_13;
  HIDWORD(v6) = 1;
  if ( !v2[1] )
  {
LABEL_26:
    LODWORD(v6) = 1;
    goto LABEL_27;
  }
  if ( v3 == 2 )
  {
LABEL_13:
    HIDWORD(v6) = v3;
    goto LABEL_27;
  }
  if ( !v2[2] )
  {
    HIDWORD(v6) = 2;
    goto LABEL_26;
  }
  if ( v3 == 3 )
    goto LABEL_13;
  if ( !v2[3] )
  {
    HIDWORD(v6) = 3;
    goto LABEL_26;
  }
  if ( v3 == 4 )
    goto LABEL_13;
  if ( !v2[4] )
  {
    HIDWORD(v6) = 4;
    goto LABEL_26;
  }
  if ( v3 == 5 )
    goto LABEL_13;
  if ( !v2[5] )
  {
    HIDWORD(v6) = 5;
    goto LABEL_26;
  }
  HIDWORD(v6) = v3;
  if ( v3 != 6 )
  {
    v7 = (unsigned __int8)v2[6];
    v8 = v7 == 0;
    v6 = __PAIR64__(v3, __clz(v7));
    if ( v8 )
      HIDWORD(v6) = 6;
    LODWORD(v6) = (unsigned int)v6 >> 5;
  }
LABEL_27:
  if ( (_DWORD)v6 )
  {
    if ( HIDWORD(v6) + 1 == v3 )
    {
      v9 = a2[1];
      v10 = a2[2];
      v16[0] = *a2;
      v16[1] = v9;
      v16[2] = v10;
      v6 = sub_22B5F0(v16);
      *(_QWORD *)(a1 + 4) = v6;
      *(_DWORD *)a1 = 2;
    }
    else
    {
      LODWORD(v6) = *a2;
      v13 = a2[1];
      v14 = a2[2];
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 4) = HIDWORD(v6);
      *(_DWORD *)(a1 + 8) = v6;
      *(_DWORD *)(a1 + 12) = v13;
      *(_DWORD *)(a1 + 16) = v14;
    }
  }
  else
  {
    HIDWORD(v6) = *a2;
    v11 = a2[1];
    v12 = a2[2];
    *(_DWORD *)a1 = 1;
    *(_DWORD *)(a1 + 8) = HIDWORD(v6);
    *(_DWORD *)(a1 + 12) = v11;
    *(_DWORD *)(a1 + 16) = v12;
    LODWORD(v6) = 1;
  }
  return v6;
}
