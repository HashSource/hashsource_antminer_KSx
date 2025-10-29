// Alternative name is '_ZN96_$LT$std..os..unix..net..stream..UnixStream$u20$as$u20$std..sys..unix..kernel_copy..CopyRead$GT$10properties17h1724375e8ed439d2E'
// Alternative name is '_ZN82_$LT$std..net..tcp..TcpStream$u20$as$u20$std..sys..unix..kernel_copy..CopyRead$GT$10properties17h98e1d508c11623f3E'
// Alternative name is '_ZN97_$LT$std..os..unix..net..stream..UnixStream$u20$as$u20$std..sys..unix..kernel_copy..CopyWrite$GT$10properties17h81319ccdac503f44E'
_DWORD *__fastcall <std::net::tcp::TcpStream as std::sys::unix::kernel_copy::CopyWrite>::properties(
        _DWORD *result,
        int *a2)
{
  int v2; // r1

  v2 = *a2;
  *result = 1;
  result[1] = v2;
  result[2] = 2;
  result[3] = 0;
  return result;
}
