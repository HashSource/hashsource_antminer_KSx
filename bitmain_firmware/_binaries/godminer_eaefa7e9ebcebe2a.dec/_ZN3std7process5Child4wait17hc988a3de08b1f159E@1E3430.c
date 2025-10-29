int __fastcall std::process::Child::wait(int a1, _DWORD *a2)
{
  int v3; // r0
  int result; // r0
  __pid_t v6; // r6
  int v7; // r4
  int stat_loc; // [sp+4h] [bp-4h] BYREF

  v3 = a2[4];
  a2[4] = -1;
  if ( v3 != -1 )
    close(v3);
  if ( *a2 == 1 )
  {
    result = a2[1];
LABEL_9:
    *(_DWORD *)(a1 + 4) = result;
    *(_BYTE *)a1 = 4;
    return result;
  }
  v6 = a2[2];
  stat_loc = 0;
  if ( waitpid(v6, &stat_loc, 0) != -1 )
  {
LABEL_8:
    result = stat_loc;
    *a2 = 1;
    a2[1] = result;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v7 = *_errno_location();
    if ( (unsigned __int8)std::sys::unix::decode_error_kind(v7) != 35 )
      break;
    if ( waitpid(v6, &stat_loc, 0) != -1 )
      goto LABEL_8;
  }
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = v7;
  return 0;
}
