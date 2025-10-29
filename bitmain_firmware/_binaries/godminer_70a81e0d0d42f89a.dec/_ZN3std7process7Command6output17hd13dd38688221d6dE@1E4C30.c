int __fastcall std::process::Command::output(_DWORD *a1, int a2)
{
  int v3; // r6
  unsigned int v4; // r10
  int v5; // r7
  unsigned int v6; // r6
  __pid_t v7; // r9
  int v8; // r8
  int v9; // r1
  int v10; // r3
  bool v11; // zf
  void *v12; // r4
  int result; // r0
  int v14; // [sp+8h] [bp-20h]
  void *v15; // [sp+Ch] [bp-1Ch]
  int v16; // [sp+10h] [bp-18h]
  int v17; // [sp+28h] [bp+0h] BYREF
  void *ptr; // [sp+2Ch] [bp+4h]
  int v19; // [sp+30h] [bp+8h]
  int v20; // [sp+34h] [bp+Ch]
  int v21; // [sp+38h] [bp+10h]
  void *v22; // [sp+3Ch] [bp+14h]
  int v23; // [sp+40h] [bp+18h]
  int v24; // [sp+48h] [bp+20h]
  int v25; // [sp+4Ch] [bp+24h]
  int v26; // [sp+50h] [bp+28h]
  int v27; // [sp+58h] [bp+30h] BYREF
  void *v28; // [sp+5Ch] [bp+34h]
  __pid_t v29; // [sp+60h] [bp+38h]
  int fd; // [sp+64h] [bp+3Ch] BYREF
  int v31; // [sp+68h] [bp+40h] BYREF
  int v32; // [sp+6Ch] [bp+44h]
  int stat_loc; // [sp+70h] [bp+48h] BYREF
  int v34; // [sp+74h] [bp+4Ch]

  sub_1F6CF8(&v17, a2, 2, 0);
  v3 = v17;
  if ( v17 == 2 )
  {
    LOBYTE(v4) = (_BYTE)ptr;
    v5 = v19;
    v6 = (unsigned int)ptr >> 8;
    goto LABEL_30;
  }
  v4 = (unsigned int)ptr;
  v7 = v19;
  v8 = v20;
  v27 = v21;
  v28 = v22;
  v29 = v23;
  v26 = v23;
  v25 = (int)v22;
  v24 = -1;
  if ( v21 != -1 )
    close(v21);
  v9 = v25;
  v10 = v26;
  v11 = v25 == -1;
  v29 = 0;
  v28 = (void *)1;
  v27 = 0;
  v25 = -1;
  v26 = -1;
  v19 = 0;
  ptr = (void *)1;
  v17 = 0;
  if ( v11 )
  {
    if ( v10 == -1 )
      goto LABEL_14;
    fd = v10;
    std::sys::unix::fd::FileDesc::read_to_end(&v31, &fd, &v17);
    if ( (unsigned __int8)v31 != 4 )
    {
      stat_loc = v31;
      v34 = v32;
      core::result::unwrap_failed((int)&unk_2A68EA, 43, (int)&stat_loc, (int)&off_2E0308, (int)&off_2E11C4);
    }
    goto LABEL_13;
  }
  if ( v10 == -1 )
  {
    fd = v9;
    std::sys::unix::fd::FileDesc::read_to_end(&v31, &fd, &v27);
    if ( (unsigned __int8)v31 != 4 )
    {
      stat_loc = v31;
      v34 = v32;
      core::result::unwrap_failed((int)&unk_2A68EA, 43, (int)&stat_loc, (int)&off_2E0308, (int)&off_2E11B4);
    }
LABEL_13:
    close(fd);
    goto LABEL_14;
  }
  sub_1F1C4C((int)&v31, v9, (int)&v27, v10, (int)&v17);
  if ( (unsigned __int8)v31 != 4 )
  {
    stat_loc = v31;
    v34 = v32;
    core::result::unwrap_failed((int)&unk_2A68EA, 43, (int)&stat_loc, (int)&off_2E0308, (int)&off_2E11A4);
  }
LABEL_14:
  if ( v3 == 1 )
    goto LABEL_19;
  stat_loc = 0;
  if ( waitpid(v7, &stat_loc, 0) != -1 )
  {
LABEL_18:
    v4 = stat_loc;
LABEL_19:
    v5 = v27;
    v12 = v28;
    v6 = v4 >> 8;
    v7 = v29;
    v14 = v17;
    v15 = ptr;
    v16 = v19;
    if ( v8 == -1 )
      goto LABEL_21;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v5 = *_errno_location();
    if ( (unsigned __int8)std::sys::unix::decode_error_kind(v5) != 35 )
      break;
    if ( waitpid(v7, &stat_loc, 0) != -1 )
      goto LABEL_18;
  }
  if ( v17 )
    _rust_dealloc(ptr);
  if ( v27 )
    _rust_dealloc(v28);
  if ( v8 == -1 )
  {
    LOBYTE(v4) = 0;
    v6 = 0;
    goto LABEL_30;
  }
  v6 = 0;
  LOBYTE(v4) = 0;
  v12 = 0;
LABEL_20:
  close(v8);
LABEL_21:
  if ( v12 )
  {
    a1[2] = v12;
    *a1 = (unsigned __int8)v4 | (v6 << 8);
    a1[1] = v5;
    a1[3] = v7;
    a1[4] = v14;
    a1[5] = v15;
    a1[6] = v16;
    return v14;
  }
LABEL_30:
  result = (unsigned __int8)v4 | (v6 << 8);
  a1[2] = 0;
  *a1 = result;
  a1[1] = v5;
  return result;
}
