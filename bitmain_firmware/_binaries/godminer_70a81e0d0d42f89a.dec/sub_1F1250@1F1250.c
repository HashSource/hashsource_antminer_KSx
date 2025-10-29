size_t __fastcall sub_1F1250(int *a1)
{
  const char *libc_version; // r5
  size_t v3; // r0
  size_t result; // r0
  size_t v5; // r0
  int v6; // r1
  int v7; // r6
  int v8; // r7
  int v9; // r1
  int v10; // r1
  bool v11; // zf
  _DWORD v12[2]; // [sp+4h] [bp-3Ch] BYREF
  size_t v13; // [sp+Ch] [bp-34h]
  size_t v14[8]; // [sp+10h] [bp-30h] BYREF
  int v15; // [sp+30h] [bp-10h]
  __int16 v16; // [sp+34h] [bp-Ch]
  _BYTE v17[4]; // [sp+38h] [bp-8h] BYREF
  const char *v18; // [sp+3Ch] [bp-4h]

  libc_version = gnu_get_libc_version();
  v3 = core::ffi::c_str::CStr::from_ptr::strlen_rt(libc_version);
  core::ffi::c_str::CStr::to_str(v12, libc_version, v3 + 1);
  if ( v12[0] )
  {
    *a1 = 0;
    return 0;
  }
  v15 = 46;
  v14[5] = v13;
  v14[6] = 1;
  v14[7] = 46;
  v16 = 1;
  v14[2] = v12[1];
  v14[3] = v13;
  v14[4] = 0;
  v14[1] = v13;
  v14[0] = 0;
  v5 = sub_1B1C3C(v14);
  v7 = 2;
  if ( v5 )
  {
    core::num::<impl core::str::traits::FromStr for usize>::from_str(v17, v5, v6);
    libc_version = v18;
    v8 = v17[0];
    result = v15;
    if ( v15 == 1114112 )
      goto LABEL_10;
  }
  else
  {
    v8 = 2;
    result = v15;
    if ( v15 == 1114112 )
      goto LABEL_10;
  }
  result = sub_1B1C3C(v14);
  if ( result )
  {
    core::num::<impl core::str::traits::FromStr for usize>::from_str(v17, result, v9);
    result = (size_t)v18;
    v7 = v17[0];
    v10 = 0;
    if ( (v8 & 1) == 0 )
      goto LABEL_11;
LABEL_15:
    *a1 = 0;
    return result;
  }
LABEL_10:
  v10 = 0;
  if ( (v8 & 1) != 0 )
    goto LABEL_15;
LABEL_11:
  v11 = v8 == 2;
  if ( v8 != 2 )
    v11 = v7 == 2;
  if ( v11 )
    goto LABEL_15;
  if ( (v7 & 1) == 0 )
  {
    v10 = 1;
    a1[1] = (int)libc_version;
    a1[2] = result;
  }
  *a1 = v10;
  return result;
}
