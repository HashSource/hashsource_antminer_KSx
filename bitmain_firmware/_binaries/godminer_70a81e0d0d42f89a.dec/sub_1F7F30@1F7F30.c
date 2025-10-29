int __fastcall sub_1F7F30(int a1, _DWORD *a2)
{
  int v5; // r1
  __pid_t v6; // r6
  int v7; // r7
  int v8; // r0
  int stat_loc; // [sp+4h] [bp-4h] BYREF

  if ( *a2 == 1 )
  {
    v5 = a2[1];
    *(_BYTE *)a1 = 4;
    *(_DWORD *)(a1 + 4) = v5;
    return 4;
  }
  else
  {
    v6 = a2[2];
    stat_loc = 0;
    if ( waitpid(v6, &stat_loc, 0) == -1 )
    {
      while ( 1 )
      {
        v7 = *_errno_location();
        if ( (unsigned __int8)std::sys::unix::decode_error_kind(v7) != 35 )
          break;
        if ( waitpid(v6, &stat_loc, 0) != -1 )
          goto LABEL_6;
      }
      *(_DWORD *)(a1 + 4) = v7;
      *(_BYTE *)(a1 + 3) = 0;
      *(_WORD *)(a1 + 1) = 0;
      *(_BYTE *)a1 = 0;
      return 0;
    }
    else
    {
LABEL_6:
      v8 = stat_loc;
      *a2 = 1;
      a2[1] = v8;
      *(_DWORD *)(a1 + 4) = v8;
      *(_BYTE *)a1 = 4;
      return 4;
    }
  }
}
