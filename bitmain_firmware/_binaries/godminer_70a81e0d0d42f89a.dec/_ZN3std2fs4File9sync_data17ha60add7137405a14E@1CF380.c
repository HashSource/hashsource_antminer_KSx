int __fastcall std::fs::File::sync_data(int a1, int *a2)
{
  int v2; // r5
  int v4; // r6

  v2 = *a2;
  while ( fdatasync(v2) == -1 )
  {
    v4 = *_errno_location();
    if ( (unsigned __int8)std::sys::unix::decode_error_kind(v4) != 35 )
    {
      *(_DWORD *)(a1 + 4) = v4;
      *(_BYTE *)(a1 + 3) = 0;
      *(_WORD *)(a1 + 1) = 0;
      *(_BYTE *)a1 = 0;
      return 0;
    }
  }
  *(_BYTE *)a1 = 4;
  return 4;
}
