int __fastcall <std::backtrace_rs::print::BacktraceFrameFmt as core::ops::drop::Drop>::drop(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  ++*(_DWORD *)(result + 8);
  return result;
}
