int __fastcall <std::backtrace_rs::Bomb as core::ops::drop::Drop>::drop(unsigned __int8 *a1)
{
  int result; // r0
  _DWORD v2[6]; // [sp+0h] [bp-18h] BYREF

  result = *a1;
  if ( result )
  {
    v2[3] = 1;
    v2[2] = &off_2E0528;
    v2[5] = 0;
    v2[0] = 0;
    v2[4] = aRustc9eb3afe9e;
    core::panicking::panic_fmt((int)v2, (int)&off_2E0530);
  }
  return result;
}
