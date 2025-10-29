// Alternative name is '_ZN101_$LT$$RF$std..os..unix..net..stream..UnixStream$u20$as$u20$std..sys..unix..kernel_copy..CopyWrite$GT$10properties17h2f29d9333e1127e1E'
// Alternative name is '_ZN87_$LT$$RF$std..net..tcp..TcpStream$u20$as$u20$std..sys..unix..kernel_copy..CopyWrite$GT$10properties17h5958928512094688E'
// Alternative name is '_ZN100_$LT$$RF$std..os..unix..net..stream..UnixStream$u20$as$u20$std..sys..unix..kernel_copy..CopyRead$GT$10properties17hffe61e4903f4dad5E'
_DWORD *__fastcall <&std::net::tcp::TcpStream as std::sys::unix::kernel_copy::CopyRead>::properties(
        _DWORD *result,
        _DWORD **a2)
{
  _DWORD *v2; // r1

  v2 = *a2;
  *result = 1;
  result[1] = *v2;
  result[2] = 2;
  result[3] = 0;
  return result;
}
