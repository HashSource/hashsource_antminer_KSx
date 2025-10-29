// Alternative name is '_ZN75_$LT$std..os..linux..process..PidFd$u20$as$u20$std..os..fd..owned..AsFd$GT$5as_fd17hf33022a1c83405c9E'
// Alternative name is '_ZN75_$LT$std..sys..unix..pipe..AnonPipe$u20$as$u20$std..os..fd..owned..AsFd$GT$5as_fd17h807eac581294b94dE'
// Alternative name is '_ZN72_$LT$std..sys..unix..net..Socket$u20$as$u20$std..os..fd..owned..AsFd$GT$5as_fd17h5d4c95cfec87915cE'
int __fastcall <std::sys::unix::fs::File as std::os::fd::owned::AsFd>::as_fd(int *a1)
{
  int result; // r0

  result = *a1;
  if ( result == -1 )
    core::panicking::panic((int)aAssertionFaile_13, 41, (int)&off_2DDE9C);
  return result;
}
