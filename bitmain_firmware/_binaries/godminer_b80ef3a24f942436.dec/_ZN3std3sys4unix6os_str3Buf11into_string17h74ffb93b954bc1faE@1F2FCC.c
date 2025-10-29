__int64 __fastcall std::sys::unix::os_str::Buf::into_string(int a1, __int64 *a2)
{
  unsigned int v4; // r2
  int v5; // r12
  int v6; // r0
  int v7; // r2
  int v8; // r3
  int v9; // r3
  __int64 result; // r0
  unsigned int v11; // r2
  __int64 v12; // [sp+0h] [bp-38h]
  unsigned int v13; // [sp+8h] [bp-30h]
  __int64 v14; // [sp+10h] [bp-28h] BYREF
  unsigned int v15; // [sp+18h] [bp-20h]
  int v16; // [sp+20h] [bp-18h] BYREF
  int v17; // [sp+24h] [bp-14h]
  int v18; // [sp+28h] [bp-10h]
  int v19; // [sp+2Ch] [bp-Ch]
  int v20; // [sp+30h] [bp-8h]

  v4 = *((_DWORD *)a2 + 2);
  v14 = *a2;
  v15 = v4;
  core::str::converts::from_utf8((int)&v16, SHIDWORD(v14), v4);
  if ( !v16 )
  {
    v12 = *a2;
    v13 = *((_DWORD *)a2 + 2);
    goto LABEL_5;
  }
  v5 = v17;
  v13 = *((_DWORD *)a2 + 2);
  v12 = *a2;
  if ( (unsigned __int8)v18 == 2 )
  {
LABEL_5:
    result = v12;
    v11 = v13;
    v9 = 0;
    goto LABEL_6;
  }
  v6 = *(_DWORD *)a2;
  v7 = *((_DWORD *)a2 + 1);
  v8 = *((_DWORD *)a2 + 2);
  v17 = v18;
  v18 = v6;
  v19 = v7;
  v20 = v8;
  v16 = v5;
  alloc::ffi::c_str::FromVecWithNulError::into_bytes(&v14, &v16);
  v9 = 1;
  result = v14;
  v11 = v15;
LABEL_6:
  *(_QWORD *)(a1 + 4) = result;
  *(_DWORD *)a1 = v9;
  *(_DWORD *)(a1 + 12) = v11;
  return result;
}
