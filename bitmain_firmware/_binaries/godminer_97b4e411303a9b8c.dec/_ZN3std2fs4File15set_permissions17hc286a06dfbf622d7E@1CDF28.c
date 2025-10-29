int __fastcall std::fs::File::set_permissions(int a1, int *a2, __mode_t mode)
{
  int v3; // r6
  int v6; // r7

  v3 = *a2;
  if ( fchmod(*a2, mode) == -1 )
  {
    while ( 1 )
    {
      v6 = *_errno_location();
      if ( (unsigned __int8)std::sys::unix::decode_error_kind(v6) != 35 )
        break;
      if ( fchmod(v3, mode) != -1 )
        goto LABEL_4;
    }
    *(_DWORD *)(a1 + 4) = v6;
    *(_BYTE *)(a1 + 3) = 0;
    *(_WORD *)(a1 + 1) = 0;
    *(_BYTE *)a1 = 0;
    return 0;
  }
  else
  {
LABEL_4:
    *(_BYTE *)a1 = 4;
    return 4;
  }
}
