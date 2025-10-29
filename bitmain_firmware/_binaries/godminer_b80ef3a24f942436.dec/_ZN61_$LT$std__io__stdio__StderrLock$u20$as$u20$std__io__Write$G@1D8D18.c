_DWORD *__fastcall <std::io::stdio::StderrLock as std::io::Write>::flush(_DWORD *result, int *a2)
{
  int v2; // r1
  _BYTE v3[4]; // [sp+4h] [bp-4h] BYREF

  v2 = *a2;
  if ( *(_DWORD *)(v2 + 12) )
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)v3, (int)&off_2E92E8, (int)&off_2E9B64);
  *(_DWORD *)(v2 + 12) = 0;
  *result = 4;
  return result;
}
