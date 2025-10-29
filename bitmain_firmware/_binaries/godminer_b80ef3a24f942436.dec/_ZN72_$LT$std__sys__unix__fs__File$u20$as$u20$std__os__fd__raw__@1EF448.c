// Alternative name is '_ZN78_$LT$std..os..linux..process..PidFd$u20$as$u20$std..os..fd..raw..FromRawFd$GT$11from_raw_fd17he0dbc8342fb11f32E'
// Alternative name is '_ZN78_$LT$std..sys..unix..pipe..AnonPipe$u20$as$u20$std..os..fd..raw..FromRawFd$GT$11from_raw_fd17h6cb1dc54c2514f18E'
// Alternative name is '_ZN76_$LT$std..sys..unix..fd..FileDesc$u20$as$u20$std..os..fd..raw..FromRawFd$GT$11from_raw_fd17h0af5bf783605d37aE'
// Alternative name is '_ZN75_$LT$std..sys..unix..net..Socket$u20$as$u20$std..os..fd..raw..FromRawFd$GT$11from_raw_fd17h8ade2ed755da3b75E'
int __fastcall <std::sys::unix::fs::File as std::os::fd::raw::FromRawFd>::from_raw_fd(int result)
{
  int v1; // [sp+4h] [bp-1Ch] BYREF
  _DWORD v2[6]; // [sp+8h] [bp-18h] BYREF

  v1 = result;
  if ( result == -1 )
  {
    v2[2] = 0;
    sub_79544(1, (int)&v1, (int)&unk_2B025C, v2, (int)&off_2E9EAC);
  }
  return result;
}
