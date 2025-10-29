int __fastcall std::process::ExitStatusError::code_nonzero(int *a1)
{
  int v1; // r2
  int result; // r0
  _BYTE v3[4]; // [sp+4h] [bp-4h] BYREF

  v1 = *a1;
  result = 0;
  if ( (v1 & 0x7F) == 0 )
  {
    if ( !BYTE1(v1) )
      core::result::unwrap_failed((int)&unk_2A68EA, 43, (int)v3, (int)&off_2E0368, (int)&off_2E1DC8);
    return BYTE1(v1);
  }
  return result;
}
