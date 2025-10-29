__int64 std::sys::unix::rand::hashmap_random_keys()
{
  unsigned int v0; // r11
  int v1; // r0
  int v2; // r0
  int v3; // r4
  __int64 *p_buf; // r6
  unsigned int v5; // r5
  char **v6; // r8
  int v7; // r7
  size_t v8; // r2
  unsigned int v9; // r0
  int v11; // r1
  __int64 buf; // [sp+8h] [bp-1B4h] BYREF
  int v13; // [sp+10h] [bp-1ACh]
  int v14; // [sp+14h] [bp-1A8h]
  _DWORD *v15; // [sp+18h] [bp-1A4h] BYREF
  int v16; // [sp+1Ch] [bp-1A0h]
  int v17; // [sp+20h] [bp-19Ch]
  __int16 v18; // [sp+24h] [bp-198h]
  int v19; // [sp+28h] [bp-194h] BYREF
  int fd; // [sp+2Ch] [bp-190h]
  _DWORD v21[96]; // [sp+30h] [bp-18Ch] BYREF
  _DWORD v22[3]; // [sp+1B0h] [bp-Ch] BYREF

  v14 = 0;
  v13 = 0;
  buf = 0;
  if ( byte_30CCA9 )
    goto LABEL_23;
  v0 = 0;
  do
  {
    while ( 1 )
    {
      if ( byte_2E8F59 )
      {
        if ( &getrandom )
        {
          v1 = getrandom((char *)&buf + v0, 16 - v0, 4);
          if ( v1 != -1 )
            goto LABEL_17;
        }
        else
        {
          v1 = syscall(384, (char *)&buf + v0, 16 - v0, 4);
          if ( v1 != -1 )
            goto LABEL_17;
        }
        if ( *_errno_location() != 22 )
          goto LABEL_15;
        byte_2E8F59 = 0;
      }
      if ( !&getrandom )
        break;
      v1 = getrandom((char *)&buf + v0, 16 - v0, 1);
      if ( v1 == -1 )
        goto LABEL_15;
LABEL_17:
      v0 += v1;
      if ( v0 > 0xF )
        return buf;
    }
    v1 = syscall(384, (char *)&buf + v0, 16 - v0, 1);
    if ( v1 != -1 )
      goto LABEL_17;
LABEL_15:
    v2 = *_errno_location();
    v22[0] = v2;
  }
  while ( v2 == 4 );
  if ( v2 == 1 )
    goto LABEL_22;
  if ( v2 != 11 )
  {
    if ( v2 != 38 )
    {
      v21[3] = 1;
      v21[5] = 1;
      v21[4] = &v15;
      v21[0] = 0;
      v21[2] = &off_2E0A48;
      v16 = (int)core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
      v15 = v22;
      core::panicking::panic_fmt((int)v21, (int)&off_2E0A50);
    }
LABEL_22:
    byte_30CCA9 = 1;
  }
LABEL_23:
  v17 = 1;
  v16 = 438;
  v18 = 0;
  strcpy((char *)v21, "/dev/urandom");
  v15 = 0;
  core::ffi::c_str::CStr::from_bytes_with_nul(v22, v21, 13);
  if ( v22[0] )
  {
    fd = (int)&off_2E014C;
    v19 = dword_2E0158;
    if ( (unsigned __int8)dword_2E0158 == 4 )
      goto LABEL_25;
LABEL_27:
    v3 = fd;
    if ( (unsigned __int8)v19 != 4 )
    {
      v21[0] = v19;
      v21[1] = fd;
      core::result::unwrap_failed((int)aFailedToOpenDe, 27, (int)v21, (int)&off_2DF308, (int)&off_2E0A60);
    }
  }
  else
  {
    sub_1EC04C((int)&v19, v22[1], v22[2], (int)&v15);
    if ( (unsigned __int8)v19 != 4 )
      goto LABEL_27;
LABEL_25:
    v3 = fd;
  }
  p_buf = &buf;
  v5 = 16;
  v6 = &off_2DFBE4;
  while ( 2 )
  {
    while ( 2 )
    {
      v8 = v5;
      if ( v5 >= 0x7FFFFFFF )
        v8 = 0x7FFFFFFF;
      v9 = read(v3, p_buf, v8);
      if ( v9 == -1 )
      {
        v7 = *_errno_location();
        if ( (unsigned __int8)std::sys::unix::decode_error_kind(v7) == 35 )
          continue;
        v11 = 0;
        v6 = (char **)v7;
LABEL_41:
        v21[1] = v6;
        v21[0] = v11;
        core::result::unwrap_failed((int)&unk_2A75E7, 27, (int)v21, (int)&off_2DF308, (int)&off_2E0A70);
      }
      break;
    }
    if ( !v9 )
    {
      v11 = 2;
      goto LABEL_41;
    }
    if ( v5 < v9 )
      core::slice::index::slice_start_index_len_fail();
    v5 -= v9;
    p_buf = (__int64 *)((char *)p_buf + v9);
    if ( v5 )
      continue;
    break;
  }
  close(v3);
  return buf;
}
