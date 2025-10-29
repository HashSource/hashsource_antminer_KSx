__pid_t __fastcall std::process::Child::try_wait(_DWORD *a1, _DWORD *a2)
{
  int v4; // r1
  __pid_t result; // r0
  __pid_t v6; // r0
  int stat_loc; // [sp+4h] [bp-4h] BYREF

  if ( *a2 == 1 )
  {
    v4 = a2[1];
    result = 1;
  }
  else
  {
    v6 = a2[2];
    stat_loc = 0;
    result = waitpid(v6, &stat_loc, 1);
    if ( result == -1 )
    {
      result = *_errno_location();
      a1[1] = 0;
      a1[2] = result;
      *a1 = 1;
      return result;
    }
    if ( result )
    {
      v4 = stat_loc;
      result = 1;
      *a2 = 1;
      a2[1] = v4;
    }
  }
  a1[1] = result;
  a1[2] = v4;
  *a1 = 0;
  return result;
}
