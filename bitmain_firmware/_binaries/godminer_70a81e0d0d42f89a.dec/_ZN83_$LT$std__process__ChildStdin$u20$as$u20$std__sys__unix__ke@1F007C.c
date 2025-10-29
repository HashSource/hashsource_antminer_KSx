// Alternative name is '_ZN83_$LT$std..process..ChildStderr$u20$as$u20$std..sys..unix..kernel_copy..CopyRead$GT$10properties17h8a834faaa9a22071E'
// Alternative name is '_ZN83_$LT$std..process..ChildStdout$u20$as$u20$std..sys..unix..kernel_copy..CopyRead$GT$10properties17hc4bae7de360dd0b6E'
_DWORD *__fastcall <std::process::ChildStdin as std::sys::unix::kernel_copy::CopyWrite>::properties(
        _DWORD *result,
        int *a2)
{
  int v2; // r1

  v2 = *a2;
  *result = 1;
  result[1] = v2;
  result[2] = 3;
  result[3] = 0;
  return result;
}
