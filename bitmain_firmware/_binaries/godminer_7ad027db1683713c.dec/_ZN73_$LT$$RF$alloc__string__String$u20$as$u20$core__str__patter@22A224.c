int __fastcall <&alloc::string::String as core::str::pattern::Pattern>::into_searcher(int a1, int a2, int a3, int a4)
{
  return core::str::pattern::StrSearcher::new(a1, a3, a4, *(_BYTE **)(a2 + 4), *(_DWORD *)(a2 + 8));
}
