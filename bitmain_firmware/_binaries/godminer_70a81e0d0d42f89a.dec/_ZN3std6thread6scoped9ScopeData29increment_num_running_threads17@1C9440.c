unsigned int *__fastcall std::thread::scoped::ScopeData::increment_num_running_threads(unsigned int *result)
{
  int v1; // r1
  _DWORD v2[6]; // [sp+0h] [bp-18h] BYREF

  do
    v1 = __ldrex(result);
  while ( __strex(v1 + 1, result) );
  if ( v1 < 0 )
  {
    std::thread::scoped::ScopeData::decrement_num_running_threads();
    v2[4] = aRustc9eb3afe9e;
    v2[3] = 1;
    v2[2] = &off_2E0730;
    v2[5] = 0;
    v2[0] = 0;
    core::panicking::panic_fmt((int)v2, (int)&off_2E0738);
  }
  return result;
}
