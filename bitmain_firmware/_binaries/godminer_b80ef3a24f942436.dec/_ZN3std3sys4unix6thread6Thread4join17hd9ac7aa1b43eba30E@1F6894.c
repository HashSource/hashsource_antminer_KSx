int __fastcall std::sys::unix::thread::Thread::join(pthread_t a1)
{
  int result; // r0
  _DWORD v2[6]; // [sp+0h] [bp-28h] BYREF
  _DWORD v3[2]; // [sp+18h] [bp-10h] BYREF
  _DWORD v4[2]; // [sp+20h] [bp-8h] BYREF

  result = pthread_join(a1, 0);
  if ( result )
  {
    v2[3] = 1;
    v2[5] = 1;
    v2[4] = v3;
    v2[0] = 0;
    v3[1] = <std::io::error::Error as core::fmt::Display>::fmt;
    v3[0] = v4;
    v2[2] = &off_2EAB18;
    v4[1] = result;
    v4[0] = 0;
    core::panicking::panic_fmt((int)v2, (int)&off_2EAB20);
  }
  return result;
}
