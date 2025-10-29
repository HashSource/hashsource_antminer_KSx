int __fastcall std::process::ExitStatusError::code(_DWORD *a1)
{
  int v1; // r1
  bool v2; // zf
  int v3; // r0
  int result; // r0
  char v5[4]; // [sp+4h] [bp-4h] BYREF

  v1 = 0;
  v2 = (*a1 & 0x7F) == 0;
  v3 = (unsigned __int8)BYTE1(*a1);
  if ( v2 )
  {
    if ( !v3 )
      core::result::unwrap_failed((int)&unk_2A502A, 43, (int)v5, (int)&off_2DF368, (int)&off_2E0DC8);
    v1 = v3;
  }
  result = v1;
  if ( v1 )
    return 1;
  return result;
}
