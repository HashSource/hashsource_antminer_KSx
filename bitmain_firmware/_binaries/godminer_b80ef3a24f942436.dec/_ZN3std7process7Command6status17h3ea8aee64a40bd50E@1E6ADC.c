int __fastcall std::process::Command::status(int *a1, int a2)
{
  int v3; // r7
  int result; // r0
  __pid_t v5; // r1
  int v6; // r6
  __pid_t v7; // r4
  int v8; // r10
  int v9; // r8
  int v10; // r9
  int v11; // r7
  int stat_loc; // [sp+4h] [bp-1Ch] BYREF
  int v13; // [sp+8h] [bp-18h]
  __pid_t pid; // [sp+Ch] [bp-14h]
  int v15; // [sp+10h] [bp-10h]
  int fd; // [sp+14h] [bp-Ch]
  int v17; // [sp+18h] [bp-8h]
  int v18; // [sp+1Ch] [bp-4h]

  sub_1F87D4(&stat_loc, a2, 0, 1);
  v3 = stat_loc;
  if ( stat_loc == 2 )
  {
    result = v13;
    v5 = pid;
    *a1 = v13;
    a1[1] = v5;
    return result;
  }
  v6 = v13;
  v7 = pid;
  v8 = v15;
  v9 = v18;
  v10 = v17;
  if ( fd != -1 )
    close(fd);
  if ( v3 != 1 )
  {
    stat_loc = 0;
    if ( waitpid(v7, &stat_loc, 0) == -1 )
    {
      while ( 1 )
      {
        v11 = *_errno_location();
        if ( (unsigned __int8)std::sys::unix::decode_error_kind(v11) != 35 )
          break;
        if ( waitpid(v7, &stat_loc, 0) != -1 )
          goto LABEL_10;
      }
      result = 0;
      *a1 = 0;
      a1[1] = v11;
      if ( v8 == -1 )
        goto LABEL_13;
      goto LABEL_12;
    }
LABEL_10:
    v6 = stat_loc;
  }
  result = 4;
  a1[1] = v6;
  *(_BYTE *)a1 = 4;
  if ( v8 != -1 )
LABEL_12:
    result = close(v8);
LABEL_13:
  if ( v10 != -1 )
    result = close(v10);
  if ( v9 != -1 )
    return close(v9);
  return result;
}
