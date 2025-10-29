int __fastcall <std::backtrace_rs::symbolize::gimli::mmap::Mmap as core::ops::drop::Drop>::drop(int a1)
{
  return munmap(*(void **)a1, *(_DWORD *)(a1 + 4));
}
